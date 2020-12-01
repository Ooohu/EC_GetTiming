//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 19 18:05:40 2017 by ROOT version 5.32/00
// from TTree MiniBooNE/Created in /scratch/condor-local/boone_0036700_20161215_222927_1_g13982/boone_0036700.root.onese
// found on file: data_161219_abs0/stream/onese/boone_0036700.root.onese
//////////////////////////////////////////////////////////

#ifndef getTimingClass_h
#define getTimingClass_h


#define DEBUGMODE 5
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

//#include "src/MC_MiniBooNE.h"
//#include "src/MiniBooNETree.h"
#include "tempChunk.h"

#define Electron 1
#define Muon 2
#define Pion 3


#define LITE 1 // whether to drop a lot of events for MCEVNT and MCBEAMChunk
//#define CALCULATE_XYPROJ 0

class getTimingClass {
//class getTimingClass{
public: // mydeclaration
   tempChunk        *ChunkObj;
   TTree            *Tout;

   // data output chunks
   OneTrackChunkExt *el;
   OneTrackChunkExt *mu;
   TwoTrackChunkExt *piFix;
   TwoTrackChunkExt *piNoFix;

   // MC
   MonteCarloEVNTChunkExt *MCEVNT;
   MonteCarloBEAMChunkExt *MCBEAM;

   Float_t xbins[13];
   Float_t MW875H, MW875V, MW876H, MW876V; // 875 876 values
   Float_t dHorG, dVerG, HorAngle, VerAngle;
   Float_t XProj, YProj;
   Float_t XBeam, YBeam;
   Float_t dtBunchOffset;
   Float_t dtRWMRawTime;

   Int_t GoodEventNumber, NBadRWM, NBadMean, NPassAll;
   Int_t EventCount, runno, subrunno, eventno;
   Int_t particleMode, eindex, mindex;
   string particleName;
   Float_t GMST, GMSTDays, GMST24;

   bool MCMode;
   Float_t MC_T, MC_X, MC_Y, MC_Z;
   Float_t dtRF, dtInstr, dtFix;

   bool quiet;
   bool nofiber; // the timing is not from optical fiber(old)



public: //richard's declaration
   TH1F** mwr875;
   TH1F** mwr876;
   TFile* fout;

public : // TSelector declaration
   TTree   *fChain;   //!pointer to the analyzed TTree or TChain
   Long64_t jentry;


public: // methods
   getTimingClass(TTree * /*tree*/ =0) : fChain(0) { ChunkObj = new tempChunk(); mwr875=0;mwr876=0; fout=0; fChain=0;}
   virtual ~getTimingClass() { }
   virtual void    Begin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Process(Long64_t entry);
   virtual void    Loop();
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0);
   virtual void    Terminate();

   virtual int GetXYProjection();
   virtual void setOutputTree();
   virtual void ResetVariables();
   virtual void Print();
   virtual bool GetIndex();
   virtual bool GetBeamTiming();

   // copy
   int CopyOneTrackChunkExt(int index, OneTrackChunkExt* event);
   int CopyTwoTrackChunkExt(int index, TwoTrackChunkExt* event);

   ClassDef(getTimingClass,0);
};

#endif

#ifdef getTimingClass_cxx

Int_t getTimingClass::GetEntry(Long64_t entry, Int_t getall)
{
   if(DEBUGMODE>=TRACE) cout << "getTimingClass::GetEntry: entry = "<< entry << ", getall =" << getall << endl;
   if(DEBUGMODE>=DEBUG) cout << "getTimingClass::GetEntry fChain = " << fChain << endl;
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
   if(DEBUGMODE>=TRACE) cout << "setting up ChunkObj" << endl;
   ChunkObj->Init(tree);
   if(DEBUGMODE>=TRACE) cout << "after setup of ChunkObj" << endl;
   // see whether it's MC
   TString option;// = GetOption();

   if(option.Contains("quiet"))
      quiet = true;
   else
      quiet = false;

   if(option.Contains("nofiber"))
      nofiber = true;
   else
      nofiber = false;


   MCMode = false;
   cout << "Setting up output tree" << endl;
   setOutputTree();
   cout << "Finish setting up output tree" << endl;
   cout << "ChunkObj = " << ChunkObj << endl;
}




void getTimingClass::setOutputTree(){
   if(DEBUGMODE>=TRACE) cout << "getTimingClass::setOutputTree starts\n";
   Tout    = new TTree("TTiming", "Timing Info");
   el      = new OneTrackChunkExt();
   mu      = new OneTrackChunkExt();
   piFix   = new TwoTrackChunkExt();
   piNoFix = new TwoTrackChunkExt();
   cout << "Setting up data branch" << endl;
   Tout->Branch("el.", &el, 16000, 99);
   Tout->Branch("mu.", &mu, 16000, 99);
   Tout->Branch("piFix.", &piFix, 16000, 99);
   Tout->Branch("piNoFix.", &piNoFix, 16000, 99);

   Tout->Branch("runno"             , &runno                , "runno/I");
   Tout->Branch("subrunno"          , &subrunno             , "subrunno/I");
   Tout->Branch("eventno"           , &eventno              , "eventno/I");
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
   Tout->Branch("GMST"              , &GMST                 , "GMST/F");
   Tout->Branch("GMSTDays"          , &GMSTDays             , "GMSTDays/F");
   Tout->Branch("GMST24"            , &GMST24               , "GMST24/F");

   Tout->Branch("MC_T"              , &MC_T                 , "MC_T/F");
   Tout->Branch("MC_X"              , &MC_X                 , "MC_X/F");
   Tout->Branch("MC_Y"              , &MC_Y                 , "MC_Y/F");
   Tout->Branch("MC_Z"              , &MC_Z                 , "MC_Z/F");
   Tout->Branch("dtRF"              , &dtRF                 , "dtRF/F");
   Tout->Branch("dtInstr"           , &dtInstr              , "dtInstr/F");
   Tout->Branch("dtFix"             , &dtFix                , "dtFix/F");

   if(DEBUGMODE>=TRACE) cout << "getTimingClass::setOutputTree ends\n";
}


#endif // #ifdef getTimingClass_cxx
