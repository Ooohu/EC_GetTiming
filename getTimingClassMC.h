#ifndef getTimingClassMC_h
#define getTimingClassMC_h

#include "getTimingClass.h"
#include "Consts.h"
#include "MonteCarloEVNTChunkExt.h"
#include "MonteCarloBEAMChunkExt.h"
#include "MsgLog.h"

class getTimingClassMC : public getTimingClass {

public: // mydeclaration

   // MC
   MonteCarloEVNTChunkExt *MCEVNT;
   MonteCarloBEAMChunkExt *MCBEAM;

   bool m_cutdirt; 

   // variable from CombinedFit
   Int_t ibkgd;
   Int_t nuchan;
   Int_t inno;
   Float_t enugen;   
   Float_t energy;
   Float_t nuleng;
   Int_t parid;   
   Float_t wgt;
   Int_t ispi0;                 // v reflect what's inside the fitter's input file
   Int_t isdirt;                // 
   Int_t npi0;                  // number of pi0. If npi0>0, ispi0 = true
   Int_t backgroundType;             // background from the Consts.h file. We use this to plot the histograms


public: // methods
   getTimingClassMC(TTree * T=0) : getTimingClass(T) { m_cutdirt=false;}
   virtual ~getTimingClassMC() ;
   virtual Bool_t  Process(Long64_t entry);

   virtual void setOutputTree();
   virtual void ResetVariables();
   virtual void Print();
   virtual void SetCutDirt(bool cutdirt){m_cutdirt = cutdirt; MsgInfo(MsgLog::Form("dirtCut is set %d", cutdirt));};

   // copy
   int CopyMonteCarloEVNTChunkExt( MonteCarloEVNTChunkExt* event);
   int CopyMonteCarloBEAMChunkExt( MonteCarloBEAMChunkExt* event);

   // make sure I have the same variables
   int GetNpi0();
   Consts::Background::Type WhichBackground();
   bool IsBackground( Consts::Background::Type b);



};

#endif