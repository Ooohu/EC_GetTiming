//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 19 18:05:40 2017 by ROOT version 5.32/00
// from TTree MiniBooNE/Created in /scratch/condor-local/boone_0036700_20161215_222927_1_g13982/boone_0036700.root.onese
// found on file: data_161219_abs0/stream/onese/boone_0036700.root.onese
//////////////////////////////////////////////////////////

#ifndef getTimingClass_h
#define getTimingClass_h


#define FATAL 0
#define ERROR 1
#define WARN  2
#define DEBUG 3
#define INFO  4
#define TRACE 5

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTree.h>
#include <TChain.h>

// Header file for the classes stored in the TTree if any.
#include <TClonesArray.h>
#include <TObject.h>
#include "TH1.h"
#include "TH1F.h"
#include "TH2F.h"


#include "OneTrackChunkExt.h"
#include "TwoTrackChunkExt.h"
#include "MonteCarloEVNTChunkExt.h"
#include "MonteCarloBEAMChunkExt.h"

#include "MsgLog.h"
#include "commonChunk.h"

#define Electron 1
#define Muon 2
#define Pion 3
#define OneTrack_TRACKTYPE_ELECTRON 1 
#define OneTrack_TRACKTYPE_MUON     2 
#define OneTrack_TRACKTYPE_PROTON   3 
#define OneTrack_TRACKTYPE_PIONPLUS 4 


#define kMaxCut 50
#define LITE 0 // whether to drop a lot of events for MCEVNT and MCBEAMChunk
//#define CALCULATE_XYPROJ 0

class getTimingClass {
//class getTimingClass{
public: // mydeclaration
   commonChunk      *ChunkObj;
   TTree            *Tout;

   // data output chunks
   OneTrackChunkExt *el;
   OneTrackChunkExt *mu;
   TwoTrackChunkExt *piFix;
   TwoTrackChunkExt *piNoFix;

   // MC
   //MonteCarloEVNTChunkExt *MCEVNT;
   //MonteCarloBEAMChunkExt *MCBEAM;

   Float_t xbins[13];
   Float_t MW875H, MW875V, MW876H, MW876V; // 875 876 values
   Float_t dHorG, dVerG, HorAngle, VerAngle;
   Float_t XProj, YProj;
   Float_t XBeam, YBeam;
   Float_t dtBunchOffset;
   Float_t dtRWMRawTime, tRWM1544, tRWM1545, tRWM1546, tRWM1549, tRWM1552; // channels


   Int_t GoodEventNumber, NBadRWM, NBadMean, NPassAll;
   Int_t EventCount, runno, subrunno, eventno,tankhits,vetohits;
   Int_t particleMode, eindex, mindex;
   string particleName;
   Float_t GMST, GMSTDays, GMST24;
   Int_t SECS, MSECS;

   bool MCMode;
   Float_t MC_T, MC_X, MC_Y, MC_Z;
   Float_t dtRF, dtInstr, dtCorr, dtCorrFix;

   bool quiet;
   bool usefiber; // the timing is not from optical fiber(old)
   int  m_majorFiber;

   string timingCorrectionFileName;
   string outputFileName;

   vector<double> vec_dtCorrGMST;   // dt correction from outside and its GMST
   vector<double> vec_dtCorr;       // dt correction at the GMST
   bool passed[kMaxCut];             // whether it's passed or not
   vector<string> filters;          // name of filters
   vector<int>    nEventsPassed;    // number of events passed , each cut
   vector<int>    nEventsPassedAcc; // number of events passed , accumulated cuts
   vector<float> vec_RWM;

public: //richard's declaration
   TH1F** mwr875;
   TH1F** mwr876;
   TFile* fout;

public : // TSelector declaration
   TTree   *fChain;   //!pointer to the analyzed TTree or TChain
   Long64_t jentry;


public: // methods
   getTimingClass(TTree * /*tree*/ =0) ;
   virtual ~getTimingClass();
   virtual void    Begin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Process(Long64_t entry);
   virtual void    Loop();
   virtual Int_t   GetEntry(Long64_t entry);
   virtual void    Terminate();

   virtual int GetXYProjection();
   virtual void setOutputTree();
   virtual void ResetVariables();
   virtual void Print();
   virtual bool GetIndex();
   virtual bool GetBeamTiming();
   virtual void AddFilter(string filter);

   // copy
   int CopyOneTrackChunkExt(int index, OneTrackChunkExt* event);
   int CopyTwoTrackChunkExt(int index, TwoTrackChunkExt* event);

   void SetParticleMode(string pName);
   void SetTimingCorrection(string inputFileName);
   void SetQuiet(bool isquiet=true){quiet = isquiet;};
   void SetUseFiber(bool isusefiber=true){usefiber = isusefiber; MsgInfo(MsgLog::Form("usefiber = %d", usefiber));};
   void SetMajorFiber(int majorFiber){m_majorFiber = majorFiber; MsgInfo(MsgLog::Form("Major Fiber = %d", usefiber));};
   void SetOutputFileName(string filename=""){outputFileName = filename;};
   void applyFilters(int indexFix, int indexNoFix);
   double GetDtCorrection();        // get dt correction value from TimingCorrection input

   //ClassDef(getTimingClass,0);
};

#endif

#ifdef getTimingClass_cxx

Int_t getTimingClass::GetEntry(Long64_t entry)
{
   if(!fChain)
      return 0;

   //return ChunkObj->GetEntry(entry, getall);   
   return ChunkObj->GetEntry(entry);   
}

void getTimingClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set array pointer
   if (!tree) return;
      fChain = tree;
   MsgDebug(1, "Starting ChunkObj Init");
   ChunkObj->Init(tree);
   MsgDebug(1, "Finished ChunkObj Init");

   MCMode = false;
   MsgInfo("Filters are");
   for(auto const& filter : filters){
      MsgInfo(filter);
   }
   nEventsPassed.resize(filters.size());
   nEventsPassedAcc.resize(filters.size());
   MsgDebug(1, "Setting up output tree");
   setOutputTree();
   MsgDebug(1, "Finish setting up output tree");
}




void getTimingClass::setOutputTree(){
   MsgDebug(2, "getTimingClass::setOutputTree starts");
   Tout    = new TTree("TTiming", "Timing Info");
   el      = new OneTrackChunkExt();
   mu      = new OneTrackChunkExt();
   piFix   = new TwoTrackChunkExt();
   piNoFix = new TwoTrackChunkExt();
   MsgDebug(2, "Setting up data branch");
   Tout->Branch("el.", &el, 16000, 99);
   Tout->Branch("mu.", &mu, 16000, 99);
   Tout->Branch("piFix.", &piFix, 16000, 99);
   Tout->Branch("piNoFix.", &piNoFix, 16000, 99);

   Tout->Branch("runno"             , &runno                , "runno/I");
   Tout->Branch("subrunno"          , &subrunno             , "subrunno/I");
   Tout->Branch("eventno"           , &eventno              , "eventno/I");
   Tout->Branch("tankhits"           , &tankhits              , "tankhits/I");
   Tout->Branch("vetohits"           , &vetohits              , "vetohits/I");
   Tout->Branch("particleMode"      , &particleMode         , "particleMode/I");
   Tout->Branch("particleName"      , &particleName);


   Tout->Branch("MW875H"            , &MW875H               , "MW875H/F");
   Tout->Branch("MW875V"            , &MW875V               , "MW875V/F");
   Tout->Branch("MW876H"            , &MW876H               , "MW876H/F");
   Tout->Branch("MW876V"            , &MW876V               , "MW876V/F");
   Tout->Branch("dHorG"             , &dHorG                , "dHorG/F");
   Tout->Branch("dVerG"             , &dVerG                , "dVerG/F");
   Tout->Branch("HorAngle"          , &HorAngle             , "HorAngle/F");
   Tout->Branch("VerAngle"          , &VerAngle             , "VerAngle/F");
   Tout->Branch("XProj"             , &XProj                , "XProj/F");
   Tout->Branch("YProj"             , &YProj                , "YProj/F");
   Tout->Branch("XBeam"             , &XBeam                , "XBeam/F");
   Tout->Branch("YBeam"             , &YBeam                , "YBeam/F");
   Tout->Branch("dtBunchOffset"     , &dtBunchOffset        , "dtBunchOffset/F");
   Tout->Branch("dtRWMRawTime"      , &dtRWMRawTime         , "dtRWMRawTime/F");
   Tout->Branch("tRWM1544"          , &tRWM1544             , "tRWM1544/F");
   Tout->Branch("tRWM1545"          , &tRWM1545             , "tRWM1545/F");
   Tout->Branch("tRWM1546"          , &tRWM1546             , "tRWM1546/F");
   Tout->Branch("tRWM1549"          , &tRWM1549             , "tRWM1549/F");
   Tout->Branch("tRWM1552"          , &tRWM1552             , "tRWM1552/F");
   Tout->Branch("GMST"              , &GMST                 , "GMST/F");
   Tout->Branch("GMSTDays"          , &GMSTDays             , "GMSTDays/F");
   Tout->Branch("GMST24"            , &GMST24               , "GMST24/F");
   Tout->Branch("SECS"              , &SECS                 , "SECS/I");
   Tout->Branch("MSECS"             , &MSECS                , "MSECS/I");



   Tout->Branch("MC_T"              , &MC_T                 , "MC_T/F");
   Tout->Branch("MC_X"              , &MC_X                 , "MC_X/F");
   Tout->Branch("MC_Y"              , &MC_Y                 , "MC_Y/F");
   Tout->Branch("MC_Z"              , &MC_Z                 , "MC_Z/F");
   Tout->Branch("dtRF"              , &dtRF                 , "dtRF/F");
   Tout->Branch("dtInstr"           , &dtInstr              , "dtInstr/F");
   Tout->Branch("dtCorr"            , &dtCorr               , "dtCorr/F");
   Tout->Branch("vec_RWM"           , &vec_RWM);
   for(unsigned int ifil =0 ; ifil < filters.size(); ifil++){
      Tout->Branch( filters.at(ifil).c_str(), &passed[ifil], Form("%s/O", filters.at(ifil).c_str()) );
   }
   Tout->Print();
   MsgDebug(2, "getTimingClass::setOutputTree ends");
}


#endif // #ifdef getTimingClass_cxx
