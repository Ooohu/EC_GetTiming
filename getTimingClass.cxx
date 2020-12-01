#define getTimingClass_cxx
// The class definition in getTiming.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("getTiming.C")
// Root > T->Process("getTiming.C","some options")
// Root > T->Process("getTiming.C+")
//

#include "getTimingClass.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <locale>

#include <TH2.h>
#include <TStyle.h>
#include "TF1.h"

#include <TStyle.h>
#include <TCanvas.h>
#include "TRandom.h"
#include "math.h"
#include "MsgLog.h"


getTimingClass::getTimingClass(TTree* T): fChain(0) { 
   MsgDebug(1, "Initializing getTimingClass");
   if(T) fChain = T;
   ChunkObj       = new commonChunk(); 
   mwr875         = 0;
   mwr876         = 0; 
   fout           = 0; 
   fChain         = 0; 
   dtCorrFix      = 0.;
   outputFileName = "";
   usefiber       = true;    
   m_majorFiber     = -1;    
}
getTimingClass::~getTimingClass(){
   MsgDebug(1, "getTimingClass destructor is called" );
   if(ChunkObj) delete ChunkObj;
   if(fout) {
      fout->Close();
      fout   = 0;
      fChain = 0;
   }
   if(el)      delete el;
   if(mu)      delete mu;
   if(piFix)   delete piFix;
   if(piNoFix) delete piNoFix;

   if(mwr875) delete [] mwr875;
   if(mwr876) delete [] mwr876;
   MsgDebug(1, "getTimingClass destructor is complete");
}

void getTimingClass::AddFilter(string filter){
   if( count(filters.begin(), filters.end(), filter)>0 ){
      MsgWarning(MsgLog::Form("Warning: filter %s has already been added", filter.c_str()));
      return;
   }
   else{
      MsgInfo("Adding filter" + filter);
      filters.push_back(filter);
   }
}



void getTimingClass::ResetVariables(){
   el->Reset();
   mu->Reset();
   piFix->Reset();
   piNoFix->Reset();


   MW875H        = -9999.;
   MW875V        = -9999.;
   MW876H        = -9999.;
   MW876V        = -9999.; // 875 876 values
   dHorG         = -9999.;
   dVerG         = -9999.;
   HorAngle      = -9999.;
   VerAngle      = -9999.;
   XProj         = -9999.;
   YProj         = -9999.;
   XBeam         = -9999.;
   YBeam         = -9999.;
   dtBunchOffset = -9999.;
   dtRWMRawTime  = -9999.;
   tRWM1544      = -9999.;
   tRWM1545      = -9999.;
   tRWM1546      = -9999.;
   tRWM1549      = -9999.;
   tRWM1552      = -9999.;
   GMST          = -9999.;
   GMSTDays      = -9999.;
   GMST24        = -9999.;

   MC_T=-9999; 
   MC_X=-9999; 
   MC_Y=-9999; 
   MC_Z=-9999;
   dtRF=-9999;
   dtInstr = -9999;
   vec_RWM.clear();
   for(unsigned int ifil=0; ifil<filters.size();ifil++){
      passed[ifil] = false;
   }
}

void getTimingClass::SetTimingCorrection(string inputFileName){
   try{ // try whether it's a standard dtFix
      dtCorrFix = std::stod(inputFileName); 
      MsgInfo(MsgLog::Form("dtCorr is set at %f", dtCorrFix));
      return;
   }
   catch(std::invalid_argument const & e) // get file for correction
   {
      dtCorrFix = 0;
      ifstream inputFile(inputFileName);
      string line;
      double tempGMST, tempDt;
      while(getline(inputFile, line)){
         if (!line.length() || (line[0] == string("#") ) ){
            continue;
         }
         std::istringstream iss(line);
         iss>>tempGMST>>tempDt;
         vec_dtCorrGMST.push_back(tempGMST);
         vec_dtCorr.push_back(tempDt);
      }

      MsgInfo("Import timing correction info from " + inputFileName);
      MsgInfo(MsgLog::Form("Total number of entries is %d", vec_dtCorr.size()));

   }
}

double getTimingClass::GetDtCorrection(){
   static int iDtCorr =0;                     // which bin I am moving to
   static int NDtCorr = vec_dtCorr.size();                     // size of vec_dtCorrGMST

   if(NDtCorr==0) 
      return dtCorrFix;


   int maxTolDt = 60;   // maximum toleration for time difference

   // Loop until the second last one
   while( (iDtCorr>=0) && (iDtCorr < NDtCorr-1) ){
      // larger than next one in line. Go to next
      if(GMST > vec_dtCorrGMST.at(iDtCorr+1)){
         iDtCorr++;
         continue;
      }

      else if(iDtCorr!=0 && GMST<vec_dtCorrGMST.at(iDtCorr) ){
         iDtCorr--;
         continue;
      }
      // take the central chunk first
      if(iDtCorr!=0){
         double diffL = fabs(GMST - vec_dtCorrGMST.at(iDtCorr));
         double diffR = fabs(vec_dtCorrGMST.at(iDtCorr+1) - GMST);
         if(diffL<diffR) 
            return vec_dtCorr.at(iDtCorr);
         else
            return vec_dtCorr.at(iDtCorr);
      }
      else{ // first one: if not too far away, then return first one
         if(fabs(GMST - vec_dtCorrGMST.at(0))>maxTolDt){
            MsgWarning(MsgLog::Form("Warning: Time is much earlier than 1st correction time:%5.2f<<%5.2f. Return 0.", GMST, vec_dtCorrGMST.at(0)));
            return 0;
         }
         else
            return vec_dtCorr.at(0);
      }
   }

   // If I get here, that means it's the second last one
   if(fabs(GMST - vec_dtCorrGMST.at(iDtCorr))>maxTolDt){
      MsgWarning(MsgLog::Form("Warning: time is much later than last correction time:%5.2f>>%5.2f. Return 0.", GMST, vec_dtCorrGMST.at(iDtCorr)));
      iDtCorr -= 10; // let next time got examined again.
      return 0;
   }
   else{
      iDtCorr -= 10;
      return vec_dtCorr.at(iDtCorr);
   }
}

void getTimingClass::SetParticleMode(string pName){
   MsgDebug(1, "");
   string temp;
   locale loc;
   for(auto elem:pName) temp += tolower(elem, loc);
   pName = temp;

  if(pName.find("muon") != string::npos )
   {
      particleMode     = Muon;
      particleName     = "mu";
   }
   else if(pName.find("electron") != string::npos )
   {
      particleMode     = Electron;
      particleName     = "el";
   }
   else if(pName.find("pion") != string::npos )
   {
      particleMode     = Pion;
      particleName     = "pi";

   }
   else{
      MsgWarning("Warning: No particle type is marked. Will be treated as electron.");
      particleMode = Electron;
      particleName = "NA";
   }
 
   MsgDebug(1, "leaving SetParticleMode");
}

void getTimingClass::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).
   MsgDebug(1, "Beginning of getTimingClass::Begin");
   //TString option = GetOption();
   eindex           = 0; // everything other than muon
   mindex           = 1; // everything other than muon
 

   xbins[1]  = 200.;
   xbins[2]  = 300.;
   xbins[3]  = 375.;
   xbins[4]  = 475.;
   xbins[5]  = 550.;
   xbins[6]  = 675.;
   xbins[7]  = 800.;
   xbins[8]  = 950.;
   xbins[9]  = 1100.;
   xbins[10] = 1300.;
   xbins[11] = 1500.;
   xbins[12] = 3000.;


   //multiwire fit arrays
   mwr875 = new TH1F*[2];
   mwr876 = new TH1F*[2];
   mwr875[0]=new TH1F("mwr875_axis_0","",48,-12,12);
   mwr875[1]=new TH1F("mwr875_axis_1","",48,-12,12);
   mwr876[0]=new TH1F("mwr876_axis_0","",48,-12,12);
   mwr876[1]=new TH1F("mwr876_axis_1","",48,-12,12);


   //set weighted errors for HEOneTrackEnueQEPublishedBinsNorm
   //HEOneTrackEnueQEPublishedBinsNorm->Sumw2();
   //HEOneTrackEnueQEPublishedBinsNormLowE->Sumw2();
   if(outputFileName==""){
      fout = new TFile(Form("getTimingOutput%s.root",particleName.c_str()), "recreate");
   }
   else{
      fout = new TFile(outputFileName.c_str(), "recreate");
   }
   EventCount = 0;
   MsgDebug(1, "End of getTimingClass::Begin");

}




bool getTimingClass::GetIndex(){
   //----------------------------------------------
   // Get electron and muon index in ChunkObj->TOneTrackChunk and check whether the output is right
   //----------------------------------------------
   bool print_msg = true;
   if(particleMode == Electron || particleMode == Pion){ //for e and pi, chunk0 is e hypothesis, chunk 1 is mu hypothesis
      eindex = 0;
      mindex = 1;
   }
   else if(particleMode == Muon){ // for twose muon events, chunk0 is e hypothesis, chunk 2 is mu hypothesis
      eindex = 0;
      mindex = 2;
   }
   else{
      MsgFatal( MsgLog::Form("Error: Unknown particleMode %d", particleMode ) );
      return kFALSE;
   }
   // examine:
   if(ChunkObj->TOneTrackChunk_data__trackType[eindex] != OneTrack_TRACKTYPE_ELECTRON ||  ChunkObj->TOneTrackChunk_data__trackType[mindex] != OneTrack_TRACKTYPE_MUON)//.._ELECTRON - 1; .._MUON - 2
   {
if(print_msg)      MsgError(MsgLog::Form("Error:\neindex trackType is %d\nmindex trackType is %d, which should match to %d and %d, particleMode is %d\n", 
                            ChunkObj->TOneTrackChunk_data__trackType[eindex],
                            ChunkObj->TOneTrackChunk_data__trackType[mindex],
							OneTrack_TRACKTYPE_ELECTRON,
							OneTrack_TRACKTYPE_MUON,
							particleMode));

      MsgError(MsgLog::Form("Electron %d, Muon %d\n", Electron, Muon));
      return kFALSE;
   }
   return true;
}

bool getTimingClass::GetBeamTiming(){

   //----------------------------------------------
   // Calculate Timing : dtRWMRawTime, dtBunchOffset, dtZ, dtEDrive
   //----------------------------------------------
   //calculate sidereal time (from USNO.navy)
   //Event time as number of seconds since midnight 1/1/1970 (will ignore milliseconds)
   bool print_msg = true;
   double EventTime= ChunkObj->TGlobalHeaderChunk_data__SECS[0]; 
   SECS = ChunkObj->TGlobalHeaderChunk_data__SECS[0];
   MSECS = ChunkObj->TGlobalHeaderChunk_data__MSECS[0];

   //calculate Julian date of 1/1/1970 midnight (see wikapedia)  UT time 12/31/1969 17:00:00
   double JDStart= 2440587.208333;

   //Julian date of event (divide by 24*60*60 seconds)
   double JDEvent= JDStart + EventTime/86400.0;

   double JDEventInteger;
   double JDEventFraction= modf(JDEvent, &JDEventInteger);
   double JDEvent0;
   if(JDEventFraction >= 0.5){
      JDEvent0= JDEventInteger + 0.5;
   }
   else{
      JDEvent0= JDEventInteger - 0.5;
   }
   //double Hour= (JDEvent - JDEvent0)/24.0;

   double DD= JDEvent - 2451545.0;
   //double DD0= JDEvent0 - 2451545.0;

   //calcualte Greenwhich mean sidereal time (in hours)
   GMST= 18.697374558 + 24.06570982441908 * DD;  //accurate to 0.1 second/century

   GMST24= 24.0*modf(GMST/24.0, &GMSTDays);
   //
   // Get Fiber Time : dtRWMRawTime
   //
   // set RWMTime to either fiber1 (DAQ Ch 1544) or 2 (DAQ Ch 1546)
   // for old data, use Ch 1545 instead (fiber 3 here)
   vector<float> TFiber1544;  // optical fiber 1 or something
   vector<float> TFiber1545;  // old copper
   vector<float> TFiber1546;  // optical fiber 2 or something
   vector<float> TFiber1549;  // don't know what
   vector<float> TFiber1552;  // don't know what
   int NHits= ChunkObj->TCalibratedDataChunk_data__Hits[0];  //assume only one instance
   for (int ic= 0; ic <= NHits; ic++)
   {
      if     (ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1544) TFiber1544.push_back(ChunkObj->TCalibratedDataChunk_data__T[0][ic]); 
      else if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1545) TFiber1545.push_back(ChunkObj->TCalibratedDataChunk_data__T[0][ic]);   
      else if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1546) TFiber1546.push_back(ChunkObj->TCalibratedDataChunk_data__T[0][ic]); 
      else if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1549) TFiber1549.push_back(ChunkObj->TCalibratedDataChunk_data__T[0][ic]); 
      else if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1552) TFiber1552.push_back(ChunkObj->TCalibratedDataChunk_data__T[0][ic]); 

   }

   //set RWM time to either fiber1 or 2, 1st, 2nd....instance, average, etc

   // old timing without optical fiber
   if(TFiber1545.size()>0 && usefiber==false){
      dtRWMRawTime = TFiber1545.at(0);
      vec_RWM = TFiber1545;
 if(print_msg)     MsgInfo( MsgLog::Form("CH1545 for dtRWMRawTime = %.4f" ,dtRWMRawTime));
   }


   else if(TFiber1544.size() > 0 && TFiber1546.size() > 0){ 
      if(m_majorFiber==1544){
         dtRWMRawTime= TFiber1544.at(0);
         vec_RWM = TFiber1544;
if(print_msg)         MsgInfo( MsgLog::Form("CH1544 for dtRWMRawTime = %.4f",dtRWMRawTime ));
      }
      else if(m_majorFiber==1546){
         dtRWMRawTime= TFiber1546.at(0);
         vec_RWM = TFiber1546;
 if(print_msg)        MsgInfo( MsgLog::Form("CH1546 for dtRWMRawTime = %.4f", dtRWMRawTime ));
      }
      else{
         dtRWMRawTime= (TFiber1544.at(0) + TFiber1546.at(0))/2.0;  //Average of two RWM times
         vec_RWM = TFiber1544;
 if(print_msg)        MsgInfo( MsgLog::Form("CH1545+CH1546 for dtRWMRawTime = %.4f", dtRWMRawTime ));
      }
   }

   else if(TFiber1544.size() > 0 ){
      dtRWMRawTime = TFiber1544.at(0);
      vec_RWM = TFiber1544;
 if(print_msg)     MsgInfo( MsgLog::Form("CH1544 for dtRWMRawTime = %.4f",dtRWMRawTime));
   }

   else if(TFiber1546.size() > 0 ){
      dtRWMRawTime = TFiber1546.at(0);
      vec_RWM = TFiber1546;
 if(print_msg)     MsgInfo( MsgLog::Form( "CH1546 for dtRWMRawTime = %.4f", dtRWMRawTime));
   }



   if(TFiber1544.size()>0) tRWM1544 = TFiber1544.at(0);
   if(TFiber1545.size()>0) tRWM1545 = TFiber1545.at(0);
   if(TFiber1546.size()>0) tRWM1546 = TFiber1546.at(0);
   if(TFiber1549.size()>0) tRWM1549 = TFiber1549.at(0);
   if(TFiber1552.size()>0) tRWM1552 = TFiber1552.at(0);

   //
   // Get dtBunchOffset
   //
   //select dtBunchOffset based on run
   dtBunchOffset                = 1040.0;    //new bunch time offset to make time plot positive: default
   //Float_t dtBunchOffsetRunCut1 = 1035.68;  //bunch time offset to make time plot positive (with new fiber RWM): 34840 <= Run <= 34880
   //Float_t dtBunchOffsetRunCut2 = 1039.82;  //bunch time offset to make time plot positive (with new fiber RWM): Run >= 34881

   return true;
}


void getTimingClass::Loop(){
   MsgDebug(1, "Initializing Loop");
   int nEntries = ChunkObj->fChain->GetEntries();
   MsgInfo(MsgLog::Form("nEntries = %d", nEntries));
   //prepare # of entry to be skipped.
//   std::vector<int> skp = {3232,21126, 48663,56646,73886,74006,77638,88727, 110270, 116256,117346,119416,133870,139088,143645,143797,145836,155264,155699,157294,159473,161223, 169113,190293, 196211,203575,212766,216999,218381,218687,222253,223711,240926,242843,247298,249055,251615,259390,260803,263355,272489,289304, 289883,293956,294809};//skip_these for particleName="electron"; for 00**.root total: 311294/`/   std::vector<int> skp = {2356,39661,49207,80593,80643,102859,104031,104533,113545,117392,129240,136622,139361,143625,147263,152642,156004,159561, 162908,200908,171076,171745,173623,175450,189907,205738,213855,216942,218991,219095,221281,222959,230831,234659,243876,244244,246559,249153,253385,254852,255892,257228,257913,262139,283541,284178,287307,298314,302642,311162,314770};//skip_these for particleName="electron"; for 01**.root total:314785
//   std::vector<int> skp = {2356,39661,49207,80593,80643,102859,104031,104533,113545,117392,129240,136622,139361,143625,147263,152642,156004,159561, 162908,200908,171076,171745,173623,175450,189907,205738,213855,216942,218991,219095,221281,222959,230831,234659,243876,244244,246559,249153,253385,254852,255892,257228,257913,262139,283541,284178,287307,298314,302642,311162,314770};//skip_these for particleName="electron"; for 01**.root total:314785
//   std::vector<int> skp = {1788,4629,8241,13185,13827,16300,18642,19145,24839,26079,28206,30714,33055,41555,47181,59257,76258,77464,83911,85047,111686,113344,116082,131611,135375,137829,141899,146110,148589,148760,158023,168075,171521,184807,198447,200712,225463,240950,242723,245164,251885,254793,254950,256244,257618,258577,272687,272936,278442,279895,289993,297516,298196,307846,313418};//skip_these for particleName="electron"; for 02**.root total:313974
//  std::vector<int> skp = {32833,34152,38671,47068,51953,52621,71142,87587,93469,97987,100623,118310,120875,122499,123150,133292,142143,164255,167884,178038,183218,185734,192821,199029,209902,209983,221368,222166,228789,232717,235975,240892,244124,248319,248950,254051,255339,269549,272618,273449,280934,282061,282063,299719,301442};//skip_these for particleName="electron"; for 03**.root total:314330
//   std::vector<int> skp = {12008,12480,13968,14406,26522,36831,36851,39435,41903,52148,60357,62057,64487,65225,66108,77068,80332,82294,84102,94604,104304,104422,107308,108325,108840,117659,122621,125727,131490,134583,137063,148657,150849,171831,171850,178898,181131,183318,184795,187137,187379,192073,196577,205761,206268,226891,227108,229910,233065,236835,239581,242956,244580,251366,254169,256509,262232,280810,286988,288045,303297,306491};//skip_these for particleName="electron"; for 04**.root total:313871
//   std::vector<int> skp = {2923,16522,21899,24649,25161,40513,51657,52776,56310,61207,63401,69345,70315,87441,94316,109646,118176,125661,128538,135701,142684,143737,156046,160133,173435,178810,179764,179914,181237,193471,196596,199622,211045,212185,219701,220924,226037,236452,236982,241153,258357,284233,290501,298722,311161};//skip_these for particleName="electron"; for 05**.root total: 311162
//   std::vector<int> skp = {361,13041,18664,20117,26978,28514,34490,34849,35119,59263,76569,85396,89997,93277,102671,104430,115602,127076,134113,139690,141902,160100,175939,180280,187539,201546,213956,215861,218767,224470,237600,246236,247472,256045,264208,266401,268699,278518,281331,292164,294602,301462,308856};//skip_these for particleName="electron"; for 06**.root total:313126
//   std::vector<int> skp = {212,3964,7862,12443,16527,26464,32515,38171,51492,52161,52857,59966,62501,64683,66414,70613,71042,72448,73307,77833,86864,95099,99710,101220,128166,132694,134970,135488,143044,174861,176118,182357,182917,187435,187989,192045,196655,199060,216202,219785,219822,230793,257867,260249,262899,264279,268835,274736,283913,283935,285644,289444,300147,301420};//skip_these for particleName="electron"; for 07**.root total:313965
//  std::vector<int> skp = {332,3749,12134,19760,27341,28497,40243,42428,83721,88137,89928,95709,103589,108402,112699,115924,126496,131167,136323,160639,171302,176920,186850,193208,196536,210365,221934,226244,236036,263325,273374,294054,300841,303388,304374,309021,309788,310738,314153};//skip_these for particleName="electron"; for 08**.root total:314338
//	std::vector<int> skp = {13613,17586,28709,36518,41523,49885,55094,57695,64331,71260,79359,94127,105366,109262,117807,120749,127520,144263,146012,150514,152146,156816,161243,163336,167582,180133,180497,182957,187645,190989,192670,195024,196496,204433,217506,222942,224786,237198,240616,244269,261573,273153,278428,283780,284237,286883,267258,297258,297763,299037,310366};//skip_these for particleName="electron"; for 09**.root total: 313677
//   std::vector<int> skp = {34676,35563,39889,49784,67348,75653,77208,78752,80661,82327,89006,95408,98443,99789,99873,105513,111992,115802,125250,129966,133160,134959,144246,144637,148151,153808,166047,167074,170505,196079,208369,209789,218737,227834,231203,238684,238887,255014,260345,262371,264834,271607,274331,279993,290078,300973};//skip_these for particleName="electron"; for 10*.root total:314415
//  std::vector<int> skp = {7000,7812,11854,13630,25547,58655,63599,67220,73535,79740,87068,132548,144759,152336,160987,178270,195386,199903,201167,212340,219913,222922,247410,249139,257435,258534,261157,262784,263250,270068,288803,308977};//skip_these for particleName="electron"; for 11*.root total:313872
//   std::vector<int> skp = {1919,5989,22011,27002,27400,28865,35471,40439,43281,44789,54545,55796,61757,63482,76448,92362,109195,110706,118468,125732,131969,149323,151749,159879,160024,189776,201597,207278,211454,213371,213727,217478,220497,234604,242819,247805,263643,265008,270192,293107,301757,301772,303785};//skip_these for particleName="electron"; for 12*.root total:313888
//  std::vector<int> skp = {5506,7503,10792,15510,20968,28681,30858,34197,37089,40057,43063,44403,48090,62113,62663,66730,69514,73602,85617,87103,87186,95536,109665,110708,114608,116301,126615,128843,131620,137033,141798,142612,147122,147785,154236,159485,163547,166239,188366,201096,202345,206644,238158,238546,239087,258474,261281,266205,278081,286940,300009,303506,308516,314348};//skip_these for particleName="electron"; for 13*.root total:314437
//  std::vector<int> skp = {7279,10984,26777,30803,39996,40239,44300,70252,77929,85354,103749,105445,106932,125102,147550,166261,167965,170869,198125,201788,204790,210744,226075,229312,239684,246744,246846,251788,258076,259948,263735,266214,266734,291400,295930,301971,310365};//skip_these for particleName="electron"; for 14*.root total:313818
//  std::vector<int> skp = {1430,1878,2193,7743,22170,45912,57166,61453,68844,80703,80725,82168,92327,94029,98215,104278,104582,108073,123314,128057,137638,140266,140783,142016,151099,151595,161034,179859,191698,206000,211026,220282,220468,224799,224799,228623,229384,231131,237863,239413,246925,249743,263392,263457,274536,282772,305671};//skip_these for particleName="electron"; for 15*.root total: 314052
//  std::vector<int> skp = {4412,4574,13305,14432,16697,38489,64385,69053,73162,87368,89176};//skip_these for particleName="electron"; for 16*.root total: 
   int start_index = 0;//skp[skp.size()-1]-1;
   for(int ientry = start_index; ientry<nEntries; ientry++){
//	  if(std::find(skp.begin(),skp.end(),ientry)!=skp.end()) continue;//skip the #th entry listed in vector<int> skp;
   std::cout<<"\r entry number = "<<ientry<<"/"<<nEntries;
   std::cout<<std::flush;
   Process(ientry);

//	  mf(ientry == 100000) break;
   }
}

Bool_t getTimingClass::Process(Long64_t entry)
{
   MsgDebug(2, MsgLog::Form("== EventCount %6d ==", EventCount) );
   MsgDebug(2, MsgLog::Form("entry number = %d", entry ) );
   Int_t ientry = this->GetEntry(entry);
   MsgDebug(2, MsgLog::Form("ientry number = %d", ientry ) );
   if (ientry < 0) return kFALSE;


   this->ResetVariables();
   EventCount++;
   if(EventCount%100 == 0) MsgInfo(MsgLog::Form("Total Event Count = %d", EventCount));
   runno    = ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0];
   subrunno = ChunkObj->TGlobalTankHeaderChunk_data__SUB_RUN_NUM[0];
   eventno  = ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0];
   tankhits = ChunkObj->TStancuVarsChunk_data__thits[0];
   vetohits = ChunkObj->TStancuVarsChunk_data__vhits[0];

   // get eindex, mindex
   // For e/pi, eindex, mindex = 0,1; for mu, eindex, mindex = 0,2
   bool isIndexRight = GetIndex();
   if (isIndexRight==false) {
      MsgError("Error: index is wrong!"); 
      return kFALSE;
	}

   //----------------------------------------------
   // Copy OneTrackChunk and TwoTrackChunk.
   // Calculate geometry info
   //----------------------------------------------
   this->CopyOneTrackChunkExt(eindex, el); //0
   this->CopyOneTrackChunkExt(mindex, mu);// 1 - electron , 2 - muon
   int indexFix=-1, indexNoFix = -1;
   if(particleMode == Electron || particleMode == Pion){
      if(ChunkObj->TTwoTrackChunk_ == 2){
         if(ChunkObj->TTwoTrackChunk_data__fixedMass[0] == 0){
            indexFix = 1;
            indexNoFix = 0;
         }
         else{
            indexFix = 0;
            indexNoFix = 1;
         }
      }
      else{ // if there is one trunck, let us just copy them into both fix and nofix
         indexFix = 0;
         indexNoFix = 0;
         MsgWarning( MsgLog::Form("Warning: Why is there not two TwoTrackChunk? %d", ChunkObj->TTwoTrackChunk_) );
      }
      this->CopyTwoTrackChunkExt(indexFix, piFix);
      this->CopyTwoTrackChunkExt(indexNoFix, piNoFix);
   }
   el->CalculateGeometryAndEnergy();
   mu->CalculateGeometryAndEnergy();

   if(particleMode == Electron || particleMode == Pion)
   {
      piFix->CalculateGeometryAndEnergy();
      piNoFix->CalculateGeometryAndEnergy();
   }


   this->applyFilters(indexFix, indexNoFix);

 
   GetBeamTiming();   // Get dtRWMRawTime, dtBunchOffset
   GetXYProjection(); // Get XProj, YProj from mwr875, mwr876
   //CAL1: use calculated beam position from multiwire data, new offsets due to beam calibration: CAL1
   XBeam=  XProj + 100.0;
   YBeam=  YProj;

   dtCorr  = GetDtCorrection();
   el->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset, dtCorr);
   mu->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset, dtCorr);
   if(particleMode == Electron || particleMode == Pion)
   {
      piFix->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset, dtCorr);
      piNoFix->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset, dtCorr);
   }
   

   if(quiet==false)                             this->Print();
   else if(EventCount<10)                       this->Print();
   else if(EventCount<100 && EventCount%10==0)  this->Print();
   else if(EventCount<1000 && EventCount%100==0)this->Print();
   else if(EventCount%1000==0)                  this->Print();

   Tout->Fill();
   return kTRUE;
}


void getTimingClass::applyFilters(int indexFix, int indexNoFix){
      // ------------------------------
   //           Filters
   // ------------------------------
   for(unsigned int ifil = 0; ifil<filters.size(); ifil++){
      string filter = filters[ifil];
      int nOneTrackChunk = ChunkObj->TOneTrackChunk_;
      bool foundOneTrack = (nOneTrackChunk > mindex) && (nOneTrackChunk > eindex);
      int nTwoTrackChunk = ChunkObj->TTwoTrackChunk_;
      bool foundTwoTrack = (nTwoTrackChunk > indexFix) && (nTwoTrackChunk > indexNoFix);
      if(filter=="reco_e_radius_lt_500"){
         if(el->R < 500. && el->R > -1. && foundOneTrack)  
            passed[ifil] = true;
         else                           
            passed[ifil] = false;
      }

      if(filter=="reco_mu_endpoint_lt_488"){
         if(mu->REnd<488. && foundOneTrack) passed[ifil] = true;
         else                               passed[ifil] = false;
      }

      if(filter=="deltanll_e_mu_osc"){
         double Evis       = el->E;
         double lowerBound = 0.013546 + 3.4667e-05*Evis - 8.259e-09*Evis*Evis;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F);
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="deltanll_e_mu_osc_E_p2pct"){
         double Evis       = el->E * 1.02;
         double lowerBound = 0.013546 + 3.4667e-05*Evis - 8.259e-09*Evis*Evis;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F);
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="deltanll_e_mu_osc_E_n2pct"){ // simulate what happened in aug16 & 17: lower energy by 2 percent
         double Evis       = el->E / 1.02;
         double lowerBound = 0.013546 + 3.4667e-05*Evis - 8.259e-09*Evis*Evis;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F);
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

     if(filter=="deltanll_e_mu_osc_E_n2pct_NLL_p001"){ // simulate what happened in aug16 & 17 for MC lower energy by 2 percent NLL shifted uper by 0.001
         double Evis       = el->E / 1.02;
         double lowerBound = 0.013546 + 3.4667e-05*Evis - 8.259e-09*Evis*Evis;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F) + 0.001;
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

     if(filter=="deltanll_e_mu_osc_E_p2pct_NLL_n001"){ // scale back aug16 & 17 to jul07
         double Evis       = el->E * 1.02;
         double lowerBound = 0.013546 + 3.4667e-05*Evis - 8.259e-09*Evis*Evis;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F) - 0.001;
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="reco_mass_osc"){
         double Evis       = el->E;
         double pi0Mass    = piNoFix->M;
         double lowerBound = 0.;
         double upperBound = 32.033 + 7.41657e-03 * Evis + 2.73787e-05 * (Evis) * (Evis);
         if(pi0Mass > lowerBound && pi0Mass < upperBound && foundTwoTrack && foundOneTrack)   passed[ifil] = true;
         else                                                                                 passed[ifil] = false;
      }

      if(filter=="reco_mass_osc_EM_p2pct"){
         double Evis       = el->E * 1.02;
         double pi0Mass    = piNoFix->M * 1.02;
         double lowerBound = 0.;
         double upperBound = 32.033 + 7.41657e-03 * Evis + 2.73787e-05 * (Evis) * (Evis);
         if(pi0Mass > lowerBound && pi0Mass < upperBound && foundTwoTrack && foundOneTrack)   passed[ifil] = true;
         else                                                                                 passed[ifil] = false;
      }

      if(filter=="reco_mass_osc_EM_n2pct"){
         double Evis       = el->E /1.02;
         double pi0Mass    = piNoFix->M /1.02;
         double lowerBound = 0.;
         double upperBound = 32.033 + 7.41657e-03 * Evis + 2.73787e-05 * (Evis) * (Evis);
         if(pi0Mass > lowerBound && pi0Mass < upperBound && foundTwoTrack && foundOneTrack)   passed[ifil] = true;
         else                                                                                 passed[ifil] = false;
      }

      if(filter=="deltanll_e_pi_osc"){
         double Evis       = el->E;
         double lowerBound = 2.47072e-03 + 4.11512e-06 * Evis - 2.73785e-08 * (Evis) * (Evis);
         double upperBound = 9999.;
         double Fpie       = (piFix->F) - (el->F);
         if( Fpie>lowerBound && Fpie<upperBound && foundTwoTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="deltanll_e_pi_osc_E_p2pct"){ // scale aug16 and 17 to jul07
         double Evis       = el->E * 1.02;
         double lowerBound = 2.47072e-03 + 4.11512e-06 * Evis - 2.73785e-08 * (Evis) * (Evis);
         double upperBound = 9999.;
         double Fpie       = (piFix->F) - (el->F);
         if( Fpie>lowerBound && Fpie<upperBound && foundTwoTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="deltanll_e_pi_osc_E_n2pct"){  // simulate what happened in aug16*17
         double Evis       = el->E / 1.02;
         double lowerBound = 2.47072e-03 + 4.11512e-06 * Evis - 2.73785e-08 * (Evis) * (Evis);
         double upperBound = 9999.;
         double Fpie       = (piFix->F) - (el->F);
         if( Fpie>lowerBound && Fpie<upperBound && foundTwoTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="deltanll_e_pi_osc_E_n2pct_NLL_p001"){ // simulate what happened in aug16 & 17: lower energy by 2 percent NLL shifted uper by 0.001
         double Evis       = el->E / 1.02;
         double lowerBound = 2.47072e-03 + 4.11512e-06 * Evis - 2.73785e-08 * (Evis) * (Evis);
         double upperBound = 9999.;
         double Fpie       = (piFix->F) - (el->F) + 0.001;
         if( Fpie>lowerBound && Fpie<upperBound && foundTwoTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }
      if(filter=="deltanll_e_pi_osc_E_p2pct_NLL_n001"){ // scale aug16 & 17 to jul07
         double Evis       = el->E * 1.02;
         double lowerBound = 2.47072e-03 + 4.11512e-06 * Evis - 2.73785e-08 * (Evis) * (Evis);
         double upperBound = 9999.;
         double Fpie       = (piFix->F) - (el->F) - 0.001;
         if( Fpie>lowerBound && Fpie<upperBound && foundTwoTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }


      if(filter=="reco_high_evis"){
         if(el->E > 140.  && foundOneTrack) 
            passed[ifil] = true;
         else            
            passed[ifil] = false;        

      }

      if(filter=="rtowall_lowe_cut"){
         double Evis = el->E;
         if( (el->RtoWallB > 347.3 - 0.595 * Evis ) && (el->RtoWallB < 9999.) &&
             (el->RtoWallF > 100)                    && (el->RtoWallF < 9999.) && foundOneTrack) 
            passed[ifil] = true;
         else                                                                    
            passed[ifil] = false;
      }

      if(filter=="rtowall_lowe_cut_E_p2pct"){
         double Evis = el->E * 1.02;
         if( (el->RtoWallB > 347.3 - 0.595 * Evis ) && (el->RtoWallB < 9999.) &&
             (el->RtoWallF > 100)                    && (el->RtoWallF < 9999.) && foundOneTrack) 
            passed[ifil] = true;
         else                                                                    
            passed[ifil] = false;
      }

      if(filter=="rtowall_lowe_cut_E_n2pct"){
         double Evis = el->E / 1.02;
         if( (el->RtoWallB > 347.3 - 0.595 * Evis ) && (el->RtoWallB < 9999.) &&
             (el->RtoWallF > 100)                    && (el->RtoWallF < 9999.) && foundOneTrack) 
            passed[ifil] = true;
         else                                                                    
            passed[ifil] = false;
      }


      if(filter=="dirt_evis"){
         if(el->E > 140.  && el->E < 440. && foundOneTrack) passed[ifil] = true;
         else                                               passed[ifil] = false;        
      }

      if(filter=="dirt_deltanll_e_mu_osc"){
         double lowerBound = 0.;
         double upperBound = 9999.;
         double Fmue       = (mu->F) - (el->F);
         if( Fmue>lowerBound && Fmue<upperBound && foundOneTrack) passed[ifil] = true;
         else                                                     passed[ifil] = false;
      }

      if(filter=="dirt_mass"){
         double pi0Mass    = piNoFix->M;
         double lowerBound = -1.;
         double upperBound = 50.;
         if(pi0Mass > lowerBound && pi0Mass < upperBound && foundTwoTrack && foundOneTrack)   passed[ifil] = true;
         else                                                                                 passed[ifil] = false;
      }

      // ----
      // muon
      // ----
      if(filter=="filt_thit_filt2"){

      }

      if(filter=="filt_dt_filt"){

      }

      if(filter=="filt_endpt_filt"){

      }

      if(filter=="filt_otrad_filt"){

      }

      if(filter=="filt_e_filt"){

      }

      if(filter=="filt_line_filt"){

      }

      if(passed[ifil]==true) nEventsPassed[ifil] += 1;

   }

   // count number of events after continuous cuts
   for(unsigned int ifil = 0; ifil<filters.size(); ifil++){
      if(passed[ifil]==true) nEventsPassedAcc[ifil] += 1;
      else break;
   }

}



void getTimingClass::Print(){
   MsgInfo(MsgLog::Form("%s Event %5d ****************************\n", particleName.c_str(), EventCount));
   MsgInfo(MsgLog::Form("runNo = %d, subrunNo = %d, eventNo = %d\n", runno, subrunno, eventno));
   MsgInfo(MsgLog::Form("Likelihood : %12s%12s\n","Leu", "Lepi"));
   MsgInfo(MsgLog::Form("           : %12.2f%12.2f\n", mu->F - el->F, piFix->F - el->F ));

   #ifdef CALCULATE_XYPROJ
      MsgInfo( MsgLog::Form("Torroid860 (1e12)= %.4f", ChunkObj->TCalibratedIRM1Chunk_data__TOR860[0]));
   #else
      MsgWarning("Torroid860 (1e12):  No TCalibratedIRM1Chunk found");
   #endif
   //Track info
   MsgInfo( MsgLog::Form("Multiwire Means: 875X,Y; 876X,Y; Data X,Y = (%.4f, %.4f); (%.4f, %.4f)", 
                          mwr875[0]->GetMean(),mwr875[1]->GetMean(), mwr876[0]->GetMean(), mwr876[1]->GetMean()));
   MsgInfo(MsgLog::Form("Data X,Y = (%.4f, %.4f)", el->X, el->Y));
   if(particleMode==Electron) MsgInfo(MsgLog::Form("Data X,Y = (%.4f, %.4f)", el->X, el->Y));
   if(particleMode==Muon)     MsgInfo(MsgLog::Form("Data X,Y = (%.4f, %.4f)", mu->X, mu->Y));
   if(particleMode==Pion)     MsgInfo(MsgLog::Form("Data X,Y = (%.4f, %.4f)", piFix->X, piFix->Y));
   if(mwr875[0]->GetFunction("gaus") != NULL) {
      MsgInfo(MsgLog::Form("%.2f, %.2f, %.2f, %.2f", 
                            mwr875[0]->GetFunction("gaus")->GetParameter(1),
                            mwr875[1]->GetFunction("gaus")->GetParameter(1),
                            mwr876[0]->GetFunction("gaus")->GetParameter(1),
                            mwr876[1]->GetFunction("gaus")->GetParameter(1)));
   }
   else 
      MsgInfo("NO Proper MWR values");
   if(particleMode==Electron) MsgInfo(MsgLog::Form( "(%10.4f, %10.4f)", el->X    , el->Y    ));
   if(particleMode==Muon)     MsgInfo(MsgLog::Form( "(%10.4f, %10.4f)", mu->X    , mu->Y    ));
   if(particleMode==Pion)     MsgInfo(MsgLog::Form( "(%10.4f, %10.4f)", piFix->X , piFix->Y ));
   MsgInfo(MsgLog::Form("Beam Position X, Y; Event XY Radius from Beam Position (cm)= (%10.4f, %10.4f)",XBeam, YBeam));
   if(particleMode==Electron) MsgInfo(MsgLog::Form("TrackBeamRadius = %.4f", el->TrackBeamRadius));
   if(particleMode==Muon)     MsgInfo(MsgLog::Form("TrackBeamRadius = %.4f", mu->TrackBeamRadius));
   if(particleMode==Pion)     MsgInfo(MsgLog::Form("TrackBeamRadius = %.4f", piFix->TrackBeamRadius));

   if(particleMode == Electron) 
   {
      el->PrintValues(dtRWMRawTime, dtBunchOffset);
      MsgInfo("-------Alternative pion result-------");
      piFix->PrintValues(dtRWMRawTime, dtBunchOffset);
   }
   if(particleMode == Muon) 
      mu->PrintValues(dtRWMRawTime, dtBunchOffset);
   if(particleMode == Pion)
   {
      piFix->PrintValues(dtRWMRawTime, dtBunchOffset);
      MsgInfo("-------Alternative electron result-------");
      el->PrintValues(dtRWMRawTime, dtBunchOffset);
   }

   MsgInfo(MsgLog::Form("GMST, GMST(24hours)= %12.4f, %12.4f", GMST, GMST24));


   MsgInfo(MsgLog::Form("%s Event %10d ***************************", particleName.c_str(), EventCount));

}


int getTimingClass::CopyOneTrackChunkExt(int index, OneTrackChunkExt* event)
{
   event->iterations    = ChunkObj->TOneTrackChunk_data__iterations[index];
   event->trackType     = ChunkObj->TOneTrackChunk_data__trackType[index];
   event->X             = ChunkObj->TOneTrackChunk_data__X[index];             
   event->Y             = ChunkObj->TOneTrackChunk_data__Y[index];             
   event->Z             = ChunkObj->TOneTrackChunk_data__Z[index];             
   event->UX            = ChunkObj->TOneTrackChunk_data__UX[index];            
   event->UY            = ChunkObj->TOneTrackChunk_data__UY[index];            
   event->UZ            = ChunkObj->TOneTrackChunk_data__UZ[index];            
   event->T             = ChunkObj->TOneTrackChunk_data__T[index];             
   event->E             = ChunkObj->TOneTrackChunk_data__E[index];             
   event->distToMeanCer = ChunkObj->TOneTrackChunk_data__distToMeanCer[index]; 
   event->fluxScale     = ChunkObj->TOneTrackChunk_data__fluxScale[index];     
   event->relativeSci   = ChunkObj->TOneTrackChunk_data__relativeSci[index];   
   event->F             = ChunkObj->TOneTrackChunk_data__F[index];  
   return kTRUE;
}

int getTimingClass::CopyTwoTrackChunkExt(int index, TwoTrackChunkExt* event)
{
   event->trackType1     = ChunkObj->TTwoTrackChunk_data__trackType1[index];
   event->trackType2     = ChunkObj->TTwoTrackChunk_data__trackType2[index];
   event->X              = ChunkObj->TTwoTrackChunk_data__X[index];            
   event->Y              = ChunkObj->TTwoTrackChunk_data__Y[index];            
   event->Z              = ChunkObj->TTwoTrackChunk_data__Z[index];            
   event->T              = ChunkObj->TTwoTrackChunk_data__T[index];            
   event->M              = ChunkObj->TTwoTrackChunk_data__M[index];            
   event->CosOp          = ChunkObj->TTwoTrackChunk_data__CosOp[index];        
   event->UX1            = ChunkObj->TTwoTrackChunk_data__UX1[index];          
   event->UY1            = ChunkObj->TTwoTrackChunk_data__UY1[index];          
   event->UZ1            = ChunkObj->TTwoTrackChunk_data__UZ1[index];          
   event->E1             = ChunkObj->TTwoTrackChunk_data__E1[index];           
   event->distToMeanCer1 = ChunkObj->TTwoTrackChunk_data__distToMeanCer1[index];  
   event->S1             = ChunkObj->TTwoTrackChunk_data__S1[index];           
   event->UX2            = ChunkObj->TTwoTrackChunk_data__UX2[index];          
   event->UY2            = ChunkObj->TTwoTrackChunk_data__UY2[index];          
   event->UZ2            = ChunkObj->TTwoTrackChunk_data__UZ2[index];          
   event->E2             = ChunkObj->TTwoTrackChunk_data__E2[index];           
   event->distToMeanCer2 = ChunkObj->TTwoTrackChunk_data__distToMeanCer2[index];  
   event->S2             = ChunkObj->TTwoTrackChunk_data__S2[index];           
   event->fluxScale      = ChunkObj->TTwoTrackChunk_data__fluxScale[index];    
   event->relativeSci    = ChunkObj->TTwoTrackChunk_data__relativeSci[index];     
   event->Fqqq           = ChunkObj->TTwoTrackChunk_data__Fqqq[index];         
   event->Fttt           = ChunkObj->TTwoTrackChunk_data__Fttt[index];         
   event->F              = ChunkObj->TTwoTrackChunk_data__F[index];            
   event->fixedMass      = ChunkObj->TTwoTrackChunk_data__fixedMass[index];    
   return kTRUE;
}




int getTimingClass::GetXYProjection()
{
   //new multiwire code to determine beam position 

 
   for (Int_t i=0;i<2;i++) 
   {
      mwr875[i]->Reset();
      mwr876[i]->Reset();
   }
   XProj = -68;
   YProj = -69;

#ifdef CALCULATE_XYPROJ
   float MWDist         = 1174.32;  //distance between 876 and 875 in mm
   float MWDetectorDist = 54645.4;  //distance between 875 and detector center in cm
   //float XOffsetDet   = -51.16;   //multiwire X center offsets in detector coordinates (cm)
   //float YOffsetDet   = -141.7;   //multiwire Y center offsets in detector coordinates (cm)
   float XOffsetDet     = -25.9;    //multiwire X center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
   float YOffsetDet     = -115.3;   //multiwire Y center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
   float FitTol         = 0.5;      //tolerance between mean and fit (mm)


   for (Int_t itag=0;itag<ChunkObj->TCalibratedMWRChunk_;itag++) 
   {
      if (ChunkObj->TCalibratedMWRChunk_data__devicetag[itag]==6203) 
      {
         for (Int_t ch=0;ch<ChunkObj->TCalibratedMWRChunk_data__horchannels[itag];ch++) {
            Double_t chint=ChunkObj->TCalibratedMWRChunk_data__horintensity[itag][ch];
            mwr875[0]->SetBinContent(ch+1,chint);
         }
         for (Int_t ch=0;ch<ChunkObj->TCalibratedMWRChunk_data__verchannels[itag];ch++) {
            Double_t chint=ChunkObj->TCalibratedMWRChunk_data__verintensity[itag][ch];
            mwr875[1]->SetBinContent(ch+1,chint);
         }
      } 
      else if (ChunkObj->TCalibratedMWRChunk_data__devicetag[itag]==6204) 
      {
         for (Int_t ch=0;ch<ChunkObj->TCalibratedMWRChunk_data__horchannels[itag];ch++) {
            Double_t chint=ChunkObj->TCalibratedMWRChunk_data__horintensity[itag][ch];
            mwr876[0]->SetBinContent(ch+1,chint);
         }
         for (Int_t ch=0;ch<ChunkObj->TCalibratedMWRChunk_data__verchannels[itag];ch++) {
            Double_t chint=ChunkObj->TCalibratedMWRChunk_data__verintensity[itag][ch];
            mwr876[1]->SetBinContent(ch+1,chint);
         }
      }
   }


   int BadMean= 0;
   //if(mwr875[0]->GetMean() == 0 && mwr875[1]->GetMean() == 0
   //   && mwr876[0]->GetMean() == 0 && mwr876[1]->GetMean() == 0) // Original: &&
   if(mwr875[0]->GetMean() == 0 || mwr875[1]->GetMean() == 0 || mwr876[0]->GetMean() == 0 || mwr876[1]->GetMean() == 0) // TEMP: ||
   {
      BadMean=1;
      NBadMean++;
      MsgWarning( "///////////////////////////////////////////");
      MsgWarning( MsgLog::Form("Warning: %5d-%5d has bad mean", runno, subrunno ));
      MsgWarning( MsgLog::Form("%10.4f%10.4f%10.4f%10.4f",mwr875[0]->GetMean(), mwr875[1]->GetMean(), mwr876[0]->GetMean(), mwr876[1]->GetMean()));
      MsgWarning( "Setting XProj = -68, YProj = -69" );
      MsgWarning( "///////////////////////////////////////////");
      XProj = -68.;
      YProj = -69.;
      return kFALSE;
   }




   mwr875[0]->Fit("gaus","WQ");
   mwr875[1]->Fit("gaus","WQ");
   mwr876[0]->Fit("gaus","WQ");
   mwr876[1]->Fit("gaus","WQ");

   //calculate angles, add to offsets
   //check fit and mean are close, decide whether to use mean or fit
   //875H
   if(fabs(mwr875[0]->GetMean() - mwr875[0]->GetFunction("gaus")->GetParameter(1)) <= FitTol)
      MW875H= mwr875[0]->GetFunction("gaus")->GetParameter(1);  //use gauss fit
   else
      MW875H= mwr875[0]->GetMean();  //use mean

   //875V
   if(fabs(mwr875[1]->GetMean() - mwr875[1]->GetFunction("gaus")->GetParameter(1)) <= FitTol)
      MW875V= mwr875[1]->GetFunction("gaus")->GetParameter(1);  //use gauss fit
   else
      MW875V= mwr875[1]->GetMean();  //use mean

   //876H
   if(fabs(mwr876[0]->GetMean() - mwr876[0]->GetFunction("gaus")->GetParameter(1)) <= FitTol)
      MW876H= mwr876[0]->GetFunction("gaus")->GetParameter(1);  //use gauss fit
   else
      MW876H= mwr876[0]->GetMean();  //use mean

   //876V
   if(fabs(mwr876[1]->GetMean() - mwr876[1]->GetFunction("gaus")->GetParameter(1)) <= FitTol)
      MW876V= mwr876[1]->GetFunction("gaus")->GetParameter(1);  //use gauss fit
   else
      MW876V= mwr876[1]->GetMean();  //use mean

   //correct for event with missing multiwire info
   if(ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0] == 35072 && 
      ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0] == 538635){
      MW875H= -0.068;   //derived from fit to 875H for entire run
      MW875V= 7.042;    //derived from fit to 875V for entire run
      MsgWarning(MsgLog::Form(">>Fix bad 875H/V multiwire, using 875H/V= %10.4f %10.4f", MW875H,  MW875V));
   }

   dHorG= MW876H - MW875H;
   dVerG= MW876V - MW875V;
   HorAngle= dHorG/MWDist;  //Horizontal angle, in rad; +angle == +X detector
   VerAngle= dVerG/MWDist;  //Vertical angle, in rad; +angle == +Y detector

   XProj= HorAngle*MWDetectorDist + XOffsetDet;  //projected X beam position in detector coordinates (cm)
   YProj= VerAngle*MWDetectorDist + YOffsetDet;  //projected X beam position in detector coordinates (cm)



   //correct for event with missing multiwire info
   if(ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0] == 35495 && 
      ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0] == 573247)
   {
      XProj= -68;   
      YProj= -69;   
      MsgWarning("Temporary Fix bad 875H/V multiwire, Set beam position by hand XProj= -68, YProj= -69 cm");
   }

#endif   
   return kTRUE;

}

void getTimingClass::Terminate()
{
   Tout->Write();
   fout->Close();
   fChain = 0;
   
}
