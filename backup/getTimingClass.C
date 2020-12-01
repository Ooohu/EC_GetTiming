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
#include <TH2.h>
#include <TStyle.h>
#include "TF1.h"
#include <iostream>

#include <TStyle.h>
#include <TCanvas.h>
#include "TRandom.h"
#include "math.h"




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
   dtRWMRawTime  =     0.;
   GMST          = -9999.;
   GMSTDays      = -9999.;
   GMST24        = -9999.;

   MC_T=-9999; 
   MC_X=-9999; 
   MC_Y=-9999; 
   MC_Z=-9999;
   dtRF=-9999;
   dtInstr = -9999;
}

void getTimingClass::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).
   cout << "Beginning of getTimingClass::Begin" << endl;
   //TString option = GetOption();
   TString option;
   eindex           = 0; // everything other than muon
   mindex           = 1; // everything other than muon
   if(option.Contains("muon"))
   {
      particleMode     = Muon;
      particleName     = "mu";
   }
   else if(option.Contains("electron"))
   {
      particleMode     = Electron;
      particleName     = "el";
   }
   else if(option.Contains("pion"))
   {
      particleMode     = Pion;
      particleName     = "pi";

   }
   else{
      cout << "Warning: No particle type is marked. Will be treated as electron." << endl;
      particleMode = Electron;
      particleName = "NA";
   }

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
   fout = new TFile(Form("getTimingOutput%s.root",particleName.c_str()), "recreate");
   EventCount = 0;
   cout << "End of getTimingClass::Begin" << endl;

}




bool getTimingClass::GetIndex(){
   //----------------------------------------------
   // Get electron and muon index in ChunkObj->TOneTrackChunk and check whether the output is right
   //----------------------------------------------
   if(particleMode == Electron || particleMode == Pion){ //for e and pi, chunk0 is e hypothesis, chunk 1 is mu hypothesis
      eindex = 0;
      mindex = 1;
   }
   else if(particleMode == Muon){ // for twose muon events, chunk0 is e hypothesis, chunk 2 is mu hypothesis
      eindex = 0;
      mindex = 2;
   }
   else{
      cout << "Error: Unknown particleMode " << particleMode << endl;
      return kFALSE;
   }
   // examine:
   if(ChunkObj->TOneTrackChunk_data__trackType[eindex] != 1 ||  ChunkObj->TOneTrackChunk_data__trackType[mindex] != 2)
   {
      cout << "Error:" << endl;
      cout << "eindex trackType is " << ChunkObj->TOneTrackChunk_data__trackType[eindex] << endl;
      cout << "mindex trackType is " << ChunkObj->TOneTrackChunk_data__trackType[mindex] << endl;
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
   double EventTime= ChunkObj->TGlobalHeaderChunk_data__SECS[0]; 

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
   double Hour= (JDEvent - JDEvent0)/24.0;

   double DD= JDEvent - 2451545.0;
   double DD0= JDEvent0 - 2451545.0;

   //calcualte Greenwhich mean sidereal time (in hours)
   GMST= 18.697374558 + 24.06570982441908 * DD;  //accurate to 0.1 second/century

   GMST24= 24.0*modf(GMST/24.0, &GMSTDays);
   //
   // Get Fiber Time : dtRWMRawTime
   //
   // set RWMTime to either fiber1 (DAQ Ch 1544) or 2 (DAQ Ch 1546)
   // for old data, use Ch 1545 instead (fiber 3 here)
   float TFiber1[10];
   float TFiber2[10];
   float TFiber3[10];   
   for (int ia= 0; ia<10; ia++){
      TFiber1[ia]= -999;
      TFiber2[ia]= -999;
      TFiber3[ia]= -999;
   }
   int GotNFiber1= 0;
   int GotNFiber2= 0;
   int GotNFiber3= 0;
   int NHits= ChunkObj->TCalibratedDataChunk_data__Hits[0];  //assume only one instance
   for (int ic= 0; ic <= NHits; ic++)
   {
      if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1544){
         GotNFiber1++;
         TFiber1[GotNFiber1-1]= ChunkObj->TCalibratedDataChunk_data__T[0][ic];   //first instance
      }
      if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1546){
         GotNFiber2++;
         TFiber2[GotNFiber2-1]= ChunkObj->TCalibratedDataChunk_data__T[0][ic];   //first instance
      }
      if(ChunkObj->TCalibratedDataChunk_data__PMT[0][ic] == 1545){ // old data use this one
         GotNFiber3++;
         TFiber3[GotNFiber3-1]= ChunkObj->TCalibratedDataChunk_data__T[0][ic];   
      }
   }

   //set RWM time to either fiber1 or 2, 1st, 2nd....instance, average, etc
   if(GotNFiber1 > 0 && GotNFiber2 > 0){ 
      dtRWMRawTime= TFiber1[0];  //Raw uncorrected RWM time
      //dtRWMRawTime= (TFiber1[0] + TFiber2[0])/2.0;  //Average of two RWM times
   }

   // old timing without optical fiber
   if(GotNFiber3>0 && nofiber==true){
      dtRWMRawTime = TFiber3[0];
   }

   //
   // Get dtBunchOffset
   //
   //select dtBunchOffset based on run
   dtBunchOffset                = 1040.0;    //new bunch time offset to make time plot positive: default
   Float_t dtBunchOffsetRunCut1 = 1035.68;  //bunch time offset to make time plot positive (with new fiber RWM): 34840 <= Run <= 34880
   Float_t dtBunchOffsetRunCut2 = 1039.82;  //bunch time offset to make time plot positive (with new fiber RWM): Run >= 34881

   if(runno >= 34840 && runno <= 34880)  dtBunchOffset = dtBunchOffsetRunCut1;
   else if(runno >= 34881)               dtBunchOffset = dtBunchOffsetRunCut2;
   return true;
}


void getTimingClass::Loop(){
   int nEntries = ChunkObj->fChain->GetEntriesFast();

   for(int ientry =0; ientry<nEntries; ientry++){
      Process(ientry);
   }


}

Bool_t getTimingClass::Process(Long64_t entry)
{
   if(DEBUGMODE>=INFO) cout << "== EventCount " << EventCount << " ==" << endl;
   if(DEBUGMODE>=INFO) cout << "entry number = " << entry << endl;
   Int_t ientry = this->GetEntry(entry);
   if(DEBUGMODE>=INFO) cout << "== ientry " << ientry << " ==" << endl;
   if (ientry < 0) return kFALSE;


   this->ResetVariables();
   dtFix = -7.50916;
   EventCount++;
   if(EventCount%100 == 0) cout << "Total Event Count= " << EventCount << endl;
   runno    = ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0];
   subrunno = ChunkObj->TGlobalTankHeaderChunk_data__SUB_RUN_NUM[0];
   eventno  = ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0];

   // get eindex, mindex
   // For e/pi, eindex, mindex = 0,1; for mu, eindex, mindex = 0,2
   bool isIndexRight = GetIndex();
   if (isIndexRight==false) {cout << "Error: index is wrong! \n"; return kFALSE;}

   //----------------------------------------------
   // Copy OneTrackChunk and TwoTrackChunk.
   // Calculate geometry info
   //----------------------------------------------
   this->CopyOneTrackChunkExt(eindex, el);
   this->CopyOneTrackChunkExt(mindex, mu);
   int indexFix, indexNoFix = 0;
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
         cout << "Warning: Why is there only one TwoTrackChunk?" << endl;
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

 
   GetBeamTiming();   // Get dtRWMRawTime, dtBunchOffset
   GetXYProjection(); // Get XProj, YProj from mwr875, mwr876
   //CAL1: use calculated beam position from multiwire data, new offsets due to beam calibration: CAL1
   XBeam=  XProj + 100.0;
   YBeam=  YProj;

   
   el->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset);
   mu->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset);
   if(particleMode == Electron || particleMode == Pion)
   {
      piFix->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset);
      piNoFix->CalculateTiming(XBeam, YBeam, dtRWMRawTime, dtBunchOffset);
   }
   

   if(quiet==false)                             this->Print();
   else if(EventCount<10)                       this->Print();
   else if(EventCount<100 && EventCount%10==0)  this->Print();
   else if(EventCount<1000 && EventCount%100==0)this->Print();
   else if(EventCount%1000==0)                  this->Print();

   Tout->Fill();
   return kTRUE;
}




void getTimingClass::Print(){
   cout << particleName << " Event " << EventCount << "************************************************"<<endl << endl;
   cout << Form("runNo = %d, subrunNo = %d, eventNo = %d\n", runno, subrunno, eventno);
   cout << Form("Likelihood : %12s%12s\n","Leu", "Lepi");
   cout << Form("           : %12.2f%12.2f\n", mu->F - el->F, piFix->F - el->F );

   #ifdef CALCULATE_XYPROJ
      cout << "Torroid860 (1e12)= " << ChunkObj->TCalibratedIRM1Chunk_data__TOR860[0] << endl;
   #else
      cout << "Torroid860 (1e12)= " << "No TCalibratedIRM1Chunk found" << endl;
   #endif
   //Track info
   cout << "Multiwire Means: 875X,Y; 876X,Y; Data X,Y=     " << EventCount
   <<"( " <<mwr875[0]->GetMean() 
   <<", "  <<mwr875[1]->GetMean()  << "); "
   <<"( " <<mwr876[0]->GetMean() 
   <<", "  <<mwr876[1]->GetMean() << "); ";
   if(particleMode==Electron) cout << "( " << el->X << ", " << el->Y << ")" << endl;
   if(particleMode==Muon)     cout << "( " << mu->X << ", " << mu->Y << ")" << endl;
   if(particleMode==Pion)     cout << "( " << piFix->X << ", " << piFix->Y << ")" << endl;
   cout << "Gauss Fit: 875X,Y: 876X,Y: Data X,Y= " << EventCount;
   if(mwr875[0]->GetFunction("gaus") != NULL)
   {  cout << "" 
      <<"\t"<<mwr875[0]->GetFunction("gaus")->GetParameter(1)
      <<"\t"<<mwr875[1]->GetFunction("gaus")->GetParameter(1)
      <<"\t"<<mwr876[0]->GetFunction("gaus")->GetParameter(1)
      <<"\t"<<mwr876[1]->GetFunction("gaus")->GetParameter(1);
   }
   else{
      cout << "NO Proper MWR values" << endl;
   }
   if(particleMode==Electron) cout << "( " << el->X     << ", " << el->Y     << ")"<< endl;
   if(particleMode==Muon)     cout << "( " << mu->X     << ", " << mu->Y     << ")"<< endl;
   if(particleMode==Pion)     cout << "( " << piFix->X  << ", " << piFix->Y  << ")"<< endl;
   cout << "Beam Position X, Y; Event XY Radius from Beam Position (cm)= (" 
        << XBeam << ", " << YBeam << ");  ";
   if(particleMode==Electron) cout << el->TrackBeamRadius;
   if(particleMode==Muon)     cout << mu->TrackBeamRadius;
   if(particleMode==Pion)     cout << piFix->TrackBeamRadius;
   cout << endl;

   if(particleMode == Electron) 
   {
      el->Print(dtRWMRawTime, dtBunchOffset);
      cout << "-------Alternative pion result-------" << endl;
      piFix->Print(dtRWMRawTime, dtBunchOffset);
   }
   if(particleMode == Muon) 
      mu->Print(dtRWMRawTime, dtBunchOffset);
   if(particleMode == Pion)
   {
      piFix->Print(dtRWMRawTime, dtBunchOffset);
      cout << "-------Alternative electron result-------" << endl;
      el->Print(dtRWMRawTime, dtBunchOffset);
   }

   cout << "GMST, GMST(24hours)= " << GMST << "  " << GMST24 << endl;


   cout << particleName << " Event " << EventCount << "************************************************"<<endl << endl;

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
   if(DEBUGMODE>=TRACE) cout << "getTimingClass::copyTwoTrackChunkExt starts with index = " << index <<endl;
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
   if(DEBUGMODE>=TRACE) cout << "getTimingClass::copyTwoTrackChunkExt ends" << endl;    
   return kTRUE;
}





int getTimingClass::GetXYProjection()
{
   //new multiwire code to determine beam position 

   float MWDist         = 1174.32;  //distance between 876 and 875 in mm
   float MWDetectorDist = 54645.4;  //distance between 875 and detector center in cm
   //float XOffsetDet   = -51.16;   //multiwire X center offsets in detector coordinates (cm)
   //float YOffsetDet   = -141.7;   //multiwire Y center offsets in detector coordinates (cm)
   float XOffsetDet     = -25.9;    //multiwire X center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
   float YOffsetDet     = -115.3;   //multiwire Y center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
   float FitTol         = 0.5;      //tolerance between mean and fit (mm)

   for (Int_t i=0;i<2;i++) 
   {
      mwr875[i]->Reset();
      mwr876[i]->Reset();
   }
   XProj = -68;
   YProj = -69;

#ifdef CALCULATE_XYPROJ

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
      cout << "///////////////////////////////////////////" << endl;
      cout << "Warning: " << runno << "_" << subrunno << " has bad mean" << endl;
      cout << mwr875[0]->GetMean() << "\t" << mwr875[1]->GetMean() << "\t" << mwr876[0]->GetMean() << "\t" << mwr876[1]->GetMean() << "\n";
      cout << "Setting XProj = -68, YProj = -69" << endl;
      cout << "///////////////////////////////////////////" << endl << endl;
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
   if(ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0] == 35072 && ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0] == 538635){
      MW875H= -0.068;   //derived from fit to 875H for entire run
      MW875V= 7.042;    //derived from fit to 875V for entire run
      cout << ">>Fix bad 875H/V multiwire, using 875H/V= " << MW875H << "  " << MW875V << endl;
   }

   dHorG= MW876H - MW875H;
   dVerG= MW876V - MW875V;
   HorAngle= dHorG/MWDist;  //Horizontal angle, in rad; +angle == +X detector
   VerAngle= dVerG/MWDist;  //Vertical angle, in rad; +angle == +Y detector

   XProj= HorAngle*MWDetectorDist + XOffsetDet;  //projected X beam position in detector coordinates (cm)
   YProj= VerAngle*MWDetectorDist + YOffsetDet;  //projected X beam position in detector coordinates (cm)



   //correct for event with missing multiwire info
   if(ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0] == 35495 && ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0] == 573247)
   {
      XProj= -68;   
      YProj= -69;   
      cout << "Temporary Fix bad 875H/V multiwire, Set beam position by hand XProj= -68, YProj= -69 cm" << endl;
   }

#endif   
   return kTRUE;

}

void getTimingClass::Terminate()
{
   Tout->Write();
   fout->Close();
}
