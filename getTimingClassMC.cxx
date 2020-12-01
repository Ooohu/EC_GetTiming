//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 19 18:05:40 2017 by ROOT version 5.32/00
// from TTree MiniBooNE/Created in /scratch/condor-local/boone_0036700_20161215_222927_1_g13982/boone_0036700.root.onese
// found on file: data_161219_abs0/stream/onese/boone_0036700.root.onese
//////////////////////////////////////////////////////////

#include "getTimingClassMC.h"
#include "Consts.h"
#include "MsgLog.h"
#include "TRandom.h"
#define BASELINE 0.541

void getTimingClassMC::setOutputTree(){
   MsgDebug(2, "getTimingClassMC::setOutputTree starts");
   getTimingClass::setOutputTree();

   Tout->Branch("ibkgd"    , &ibkgd    ,"ibkgd/I");
   Tout->Branch("nuchan"   , &nuchan   ,"nuchan/I");
   Tout->Branch("inno"     , &inno     ,"inno/I");
   Tout->Branch("enugen"   , &enugen   ,"enugen/F");
   Tout->Branch("energy"   , &energy   ,"energy/F");
   Tout->Branch("nuleng"   , &nuleng   ,"nuleng/F");
   Tout->Branch("parid"    , &parid    ,"parid/I");
   Tout->Branch("wgt"      , &wgt      ,"wgt/F");
   Tout->Branch("ispi0"    , &ispi0    ,"ispi0/I");
   Tout->Branch("isdirt"   , &isdirt   ,"isdirt/I");
   Tout->Branch("npi0"     , &npi0     ,"npi0/I");
   Tout->Branch("backgroundType", &backgroundType, "backgroundType/I");

   MCEVNT = new MonteCarloEVNTChunkExt();
   MCBEAM = new MonteCarloBEAMChunkExt();



   Tout->Branch("MCEVNT.", &MCEVNT, 16000, 99);
   Tout->Branch("MCBEAM.", &MCBEAM, 16000, 99);
   MsgDebug(2, "getTimingClassMC::setOutputTree ends");
}

getTimingClassMC::~getTimingClassMC(){
   MsgDebug(2, "getTimingClassMC destructor is called");
   if(MCBEAM) delete MCBEAM;
   if(MCEVNT) delete MCEVNT;
   MsgDebug(2, "getTimingClassMC destructor is completed");

}
void getTimingClassMC::ResetVariables(){
   getTimingClass::ResetVariables();
   ibkgd    = -9999;
   nuchan   = -9999;
   inno     = -9999;
   enugen   = -9999;
   energy   = -9999;
   nuleng   = BASELINE;
   parid    = -9999;
   wgt      = -9999;
   ispi0    = 0;
   isdirt   = 0;
   npi0     = -9999;
   backgroundType = Consts::Background::kUnknown;
   MCEVNT->Reset();
   MCBEAM->Reset();
}

Bool_t getTimingClassMC::Process(Long64_t entry)
{
	bool print_msg = true;
   if(print_msg){
   MsgDebug(2, "getTimingClassMC::Process starts\n");
   MsgInfo( MsgLog::Form( "== EventCount %d ==", EventCount));
   MsgInfo( MsgLog::Form( "entry number = %d", entry));
   }
//   std::cout<<"CHECK "<<__FILE__<<" line "<<__LINE__<<std::endl;
   Int_t ientry = this->GetEntry(entry);
//   std::cout<<"CHECK "<<__FILE__<<" line "<<__LINE__<<std::endl;
   if(print_msg) MsgInfo( MsgLog::Form( "== ientry %d ==", ientry));
   if (ientry < 0) return kFALSE;


   this->ResetVariables();
   EventCount++;
   if(EventCount%100 == 0) MsgInfo(MsgLog::Form("Total Event Count= %10d", EventCount));
   runno    = ChunkObj->TGlobalTankHeaderChunk_data__RUN_NUM[0];
   subrunno = ChunkObj->TGlobalTankHeaderChunk_data__SUB_RUN_NUM[0];
   eventno  = ChunkObj->TGlobalTankHeaderChunk_data__EVENT_NUM[0];
   tankhits = ChunkObj->TStancuVarsChunk_data__thits[0];
   vetohits = ChunkObj->TStancuVarsChunk_data__vhits[0];

   // get eindex, mindex
   // For e/pi, eindex, mindex = 0,1; for mu, eindex, mindex = 0,2
   bool isIndexRight = GetIndex();

   if (isIndexRight==false) {
   if(print_msg)MsgError("Error: index is wrong!"); 
   return kFALSE;}

   //----------------------------------------------
   // Copy OneTrackChunk and TwoTrackChunk.
   // Calculate geometry info
   //----------------------------------------------
   this->CopyOneTrackChunkExt(eindex, el);
   this->CopyOneTrackChunkExt(mindex, mu);
   int indexFix, indexNoFix = 0;
   std::cout<<"CHECK "<<ChunkObj->TTwoTrackChunk_ <<std::endl;
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
		 if(print_msg)      MsgWarning("Warning: Why is there only one TwoTrackChunk?");
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

   GetEntry(entry);
   this->CopyMonteCarloEVNTChunkExt(MCEVNT);
   this->CopyMonteCarloBEAMChunkExt(MCBEAM);
   MCEVNT->CalculateGeometryAndEnergy();
   //get event weight for horn-off, and pot weight
   //float potwt= 0.1358;     //2,996 files and 1.371E18 POT per file => 41.08E20 POT / 5.579E20 = (1/0.1358)
   //newdata normalization for 6.462E20 POT (41.08E20/6.462E20) 
   MCEVNT->wt = ChunkObj->TReweightToCVChunk_data__xsecweight[0] * ChunkObj->TReweightToCVChunk_data__fluxweight[0];

   el->MCMode      = true;
   mu->MCMode      = true;
   piFix->MCMode   = true;
   piNoFix->MCMode = true;
   MCMode          = true;
   GetBeamTiming();   // // Get dtRWMRawTime, dtBunchOffset
   GetXYProjection(); // Get XProj, YProj from mwr875, mwr876
   //CAL1: use calculated beam position from multiwire data, new offsets due to beam calibration: CAL1

   // MC setting
   XBeam =   35;
   YBeam = -165;

   MCBEAM->calculateBEAMTiming();
   MC_T = ChunkObj->TMCRawEventChunk_data__time[0][0];
   MC_X = ChunkObj->TMCRawEventChunk_data__vrtx[0][0][0];
   MC_Y = ChunkObj->TMCRawEventChunk_data__vrtx[0][0][1];
   MC_Z = ChunkObj->TMCRawEventChunk_data__vrtx[0][0][2];

   dtRF     = gRandom->Gaus(0.0, 1.15);
   dtInstr  = gRandom->Gaus(0.0, 0.59); 
   dtCorr  = GetDtCorrection();
 if(print_msg)  MsgDebug(1, "Timing for electron : ");
   el->CalculateTimingMC(MC_T, MC_Z, MCBEAM->dtDcySum, dtRF, dtInstr, dtCorr);
 if(print_msg)  MsgDebug(1, "Timing for muon : ");
   mu->CalculateTimingMC(MC_T, MC_Z, MCBEAM->dtDcySum, dtRF, dtInstr, dtCorr);
   if(particleMode == Electron || particleMode == Pion)
   {
 if(print_msg)     MsgDebug(1, "Timing for piFix : ");
      piFix->CalculateTimingMC(MC_T, MC_Z, MCBEAM->dtDcySum, dtRF, dtInstr, dtCorr);
 if(print_msg)     MsgDebug(1, "Timing for piNoFix : ");
      piNoFix->CalculateTimingMC(MC_T, MC_Z, MCBEAM->dtDcySum, dtRF, dtInstr, dtCorr);
   }
   MCEVNT->GetBkgdType();

      // get items for CombinedFit output
   double del_x = 0;
   double del_y = 189.614;
   double del_z = 54173.1;

   ibkgd    = MCEVNT->IBKGD;
   nuchan   = MCEVNT->EVWT;
   inno     = MCEVNT->INNO;
   enugen   = MCEVNT->PNEUE;
   if(particleMode==Electron)  energy = el->EnuQE * 1e-3;
   else if(particleMode==Muon) energy = mu->EnuQE * 1e-3;
   //nuleng
   nuleng=sqrt( pow( MCEVNT->VRTX.at(0)+del_x -MCBEAM->ini_posX.at(0) ,2) +
                pow( MCEVNT->VRTY.at(0)+del_y -MCBEAM->ini_posY.at(0) ,2) +
                pow( MCEVNT->VRTZ.at(0)+del_z -MCBEAM->ini_posZ.at(0) ,2) ) *1.0E-5;
   // parid
   int parent_npart = ChunkObj->TMonteCarloBEAMChunk_data__npart[0] - 1;
   parid = ChunkObj->TMonteCarloBEAMChunk_data__id[0][parent_npart-1];
   while(parid==14 && parent_npart>=3){
      parent_npart -= 1;
      parid =  ChunkObj->TMonteCarloBEAMChunk_data__id[0][parent_npart-1];
   }

   wgt      = MCEVNT->wt;

   npi0 = this->GetNpi0();
   if(npi0>0)   ispi0 = true;
   if(MCEVNT->R>610.6) isdirt= true;

   if(m_cutdirt){
      if(isdirt==false) return kTRUE;
      else{
        //TEMP! Hard coded dirt contribution
        //MCEVNT->wt = 0.5955;
        //wgt = 0.5955;
		  printf("%10.3f %10.3f %10.3f %10.3f %10.3f\n", wgt, enugen, energy, ChunkObj->TReweightToCVChunk_data__xsecweight[0], ChunkObj->TReweightToCVChunk_data__fluxweight[0]);
      }
   }

   backgroundType = WhichBackground();

   this->applyFilters(indexFix, indexNoFix);


if(print_msg){
   if(quiet==false)                             this->Print();
   else if(EventCount<10)                       this->Print();
   else if(EventCount<100 && EventCount%10==0)  this->Print();
   else if(EventCount<1000 && EventCount%100==0)this->Print();
   else if(EventCount%1000==0)                  this->Print();
}
   Tout->Fill();
   return kTRUE;
}



void getTimingClassMC::Print(){
   getTimingClass::Print();
   MCBEAM->PrintValues();
}

int getTimingClassMC::GetNpi0(){
   // modified from Framework Utilities/PhysicsFunctions Pi0Details
   int  npi0=0, nnpi0=0;
   int  mg=0, ngammas=0;
   float mtemp, Pgamma[127][4] ;
   float mpi0 = 0.1349766;
   float me   = 0.511e-3;
   for(int i =0; i<ChunkObj->TMonteCarloEVNTChunk_data__NFSP[0]; i++){
      int ipfs = ChunkObj->TMonteCarloEVNTChunk_data__IPFS[0][i];
      if(ipfs==7) {
         npi0 += 1;
      }
     else if(ipfs == 1.){
       ngammas += 1;
       Pgamma[ngammas-1][3] = ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][3];
       for(int k=0; k<3; k++) Pgamma[ngammas-1][k] = Pgamma[ngammas-1][3] *ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][k];
       if(Pgamma[ngammas-1][3]>0.025) mg = mg + 1;
     }
      if(ipfs == 2 || ipfs==3) {
         for(int j = i+1; j<ChunkObj->TMonteCarloEVNTChunk_data__NFSP[0]; j++){
            int ipfs2 = ChunkObj->TMonteCarloEVNTChunk_data__IPFS[0][j];
            if( (ipfs2==2 || ipfs2==3) && (ipfs!=ipfs2)){
               ngammas += 1;
               Pgamma[ngammas-1][3] = sqrt( pow(ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][3],2)+me*me) +
                                      sqrt( pow(ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][j][3],2)+me*me);
               for(int k=0; k<3; k++){
                  Pgamma[ngammas-1][k] = 
                    ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][3] * ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][k] +
                    ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][j][3] * ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][j][k];
               }
               if(Pgamma[ngammas-1][3]>0.025) mg = mg + 1;
            } // if(ipfs2)
         } // for(j)
      } // if(ipfs==2 || ipfs==3)
   }
   nnpi0 = 0;
   for(int i = 0; i<ngammas-1; i++){
      for(int j =0; j<ngammas;j++){
         mtemp = sqrt(pow(Pgamma[i][3]+Pgamma[j][3],2) - pow(Pgamma[i][0]+Pgamma[j][0],2) -
                      pow(Pgamma[i][1]+Pgamma[j][1],2) - pow(Pgamma[i][2]+Pgamma[j][2],2));
         if(abs(mtemp-mpi0) < 0.000001) {
            nnpi0 += 1;
         } // if(abs(mtemp-mpi0))
      } // for(j)
   } // for(i)
   npi0 = max(npi0,nnpi0);
   return npi0;
}

Consts::Background::Type getTimingClassMC::WhichBackground()
{
  for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<=Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
    if ( IsBackground(Consts::BackgroundIterToEnum(i)) ) return Consts::BackgroundIterToEnum(i);
  }
  MsgError("No background is found!");
  return Consts::Background::kLast;

}

bool getTimingClassMC::IsBackground( Consts::Background::Type b)
{

  switch ( b ) {
    case Consts::Background::kIsPi0:
    if ( ispi0 == 1 && isdirt == 0) return true;
    break;
    case Consts::Background::kIsDirt:
    if ( isdirt == 1 ) return true;
    break;
    case Consts::Background::kIsDelta:
    if ( nuchan == 94 && isdirt == 0 ) return true;
    break;
    case Consts::Background::kPiPlus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kPiPlus)  && ispi0 == 0 && isdirt == 0 && nuchan != 94 && 
      (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kPiMinus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kPiMinus) && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kKPlus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kKPlus)   && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kKMinus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kKMinus)  && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kK0L:
    if ( parid ==  Consts::EnumToParticleID(Consts::kK0L)     && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kMuPlus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kMuPlus)  && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kMuMinus:
    if ( parid ==  Consts::EnumToParticleID(Consts::kMuMinus) && ispi0 == 0 && isdirt == 0 && nuchan != 94 &&
     (inno == 3 || inno == 4) ) return true;
      break;
    case Consts::Background::kUnknown:
    bool is_unknown=true;
    for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
      if ( Consts::BackgroundIterToEnum(i) != Consts::Background::kUnknown && 
        IsBackground( Consts::BackgroundIterToEnum(i)) ) is_unknown = false;
    }
  return is_unknown;
  break;
};

return false;  
}

int getTimingClassMC::CopyMonteCarloEVNTChunkExt( MonteCarloEVNTChunkExt* event)
{
   MsgDebug(2, "getTimingClassMC::CopyMonteCarloEVNTChunkExt starts");
   event->Reset();
   // single values  
   event->VERSION   = ChunkObj->TMonteCarloEVNTChunk_data__VERSION[0];
   event->VAR_FLAGS = ChunkObj->TMonteCarloEVNTChunk_data__VAR_FLAGS[0];
   event->IEVNT     = ChunkObj->TMonteCarloEVNTChunk_data__IEVNT[0];
   event->INNO      = ChunkObj->TMonteCarloEVNTChunk_data__INNO[0];
   event->NDCY      = ChunkObj->TMonteCarloEVNTChunk_data__NDCY[0];
   event->NFSP      = ChunkObj->TMonteCarloEVNTChunk_data__NFSP[0];
   event->NPROCTAG  = ChunkObj->TMonteCarloEVNTChunk_data__NPROCTAG[0];
   event->NHTT      = ChunkObj->TMonteCarloEVNTChunk_data__NHTT[0];
   event->RNDM1     = ChunkObj->TMonteCarloEVNTChunk_data__RNDM1[0];
   event->RNDM2     = ChunkObj->TMonteCarloEVNTChunk_data__RNDM2[0];
   event->EVWT      = ChunkObj->TMonteCarloEVNTChunk_data__EVWT[0];

   event->PNEUX = ChunkObj->TMonteCarloEVNTChunk_data__PNEU[0][0];
   event->PNEUY = ChunkObj->TMonteCarloEVNTChunk_data__PNEU[0][1];
   event->PNEUZ = ChunkObj->TMonteCarloEVNTChunk_data__PNEU[0][2];
   event->PNEUE = ChunkObj->TMonteCarloEVNTChunk_data__PNEU[0][3];

   int NFSP = event->NFSP;
   int NPROCTAG = event->NPROCTAG;
   int NHTT = event->NHTT;
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NPROCTAG = %d", NPROCTAG ));
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NFSP     = %d", NFSP ));
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NHTT     = %d", NHTT ));
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt LITE     = %d", LITE ));


   if(LITE){
      MsgDebug(2, "getTimingClassMC::CopyMonteCarloEVNTChunkExt inside LITE ");
      NFSP     = NFSP<1?      NFSP:1;
      NPROCTAG = NPROCTAG<1?  NPROCTAG:1;
      NHTT     = NHTT<1?      NHTT:1;
   }
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NPROCTAG = %d",  NPROCTAG ));
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NFSP     = %d",  NFSP ));
   MsgDebug(2, MsgLog::Form( "getTimingClassMC::CopyMonteCarloEVNTChunkExt NHTT     = %d",  NHTT ));

   event->IPFS     .assign(NFSP, 0);
   event->NHTTCER  .assign(NFSP, 0);
   event->NHTTSCI  .assign(NFSP, 0);
   event->TIME     .assign(NFSP, 0);
   event->IPROCTAG .assign(NPROCTAG, 0);
   event->NOTPMT   .assign(NHTT, 0);
   event->TITPMT   .assign(NHTT, 0);

   event->VRTX   .assign(NFSP, 0);
   event->VRTY   .assign(NFSP, 0);
   event->VRTZ   .assign(NFSP, 0);

   event->PFSPX  .assign(NFSP, 0);
   event->PFSPY  .assign(NFSP, 0);
   event->PFSPZ  .assign(NFSP, 0);
   event->PFSPP  .assign(NFSP, 0);

   MsgDebug(2, "getTimingClassMC::CopyMonteCarloEVNTChunkExt set vector size" );

   for(int i = 0 ; i < NFSP ; i++){

      event->IPFS[i]    = ChunkObj->TMonteCarloEVNTChunk_data__IPFS[0][i];
      event->NHTTCER[i] = ChunkObj->TMonteCarloEVNTChunk_data__NHTTCER[0][i];
      event->NHTTSCI[i] = ChunkObj->TMonteCarloEVNTChunk_data__NHTTSCI[0][i];
      event->TIME[i]    = ChunkObj->TMonteCarloEVNTChunk_data__TIME[0][i];

      event->VRTX[i] = ChunkObj->TMonteCarloEVNTChunk_data__VRTX[0][i][0];
      event->VRTY[i] = ChunkObj->TMonteCarloEVNTChunk_data__VRTX[0][i][1];
      event->VRTZ[i] = ChunkObj->TMonteCarloEVNTChunk_data__VRTX[0][i][2];
   
      event->PFSPX[i] = ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][0];
      event->PFSPY[i] = ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][1];
      event->PFSPZ[i] = ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][2];
      event->PFSPP[i] = ChunkObj->TMonteCarloEVNTChunk_data__PFSP[0][i][3];
   }
   for(int i = 0 ; i < NPROCTAG; i++){
      event->IPROCTAG[i] = ChunkObj->TMonteCarloEVNTChunk_data__IPROCTAG[0][i];
   }
   for(int i = 0; i< NHTT; i++){
      event->NOTPMT[i] = ChunkObj->TMonteCarloEVNTChunk_data__NOTPMT[0][i]; 
      event->TITPMT[i] = ChunkObj->TMonteCarloEVNTChunk_data__TITPMT[0][i]; 
   }

   return 1;
}


int getTimingClassMC::CopyMonteCarloBEAMChunkExt(MonteCarloBEAMChunkExt* event)
{
   event->Reset();
   event->VERSION   = ChunkObj->TMonteCarloBEAMChunk_data__VERSION[0];
   event->VAR_FLAGS = ChunkObj->TMonteCarloBEAMChunk_data__VAR_FLAGS[0];
   event->ntp       = ChunkObj->TMonteCarloBEAMChunk_data__ntp[0];
   event->npart     = ChunkObj->TMonteCarloBEAMChunk_data__npart[0];
   event->beamwgt   = ChunkObj->TMonteCarloBEAMChunk_data__beamwgt[0];

   (event->id).assign(event->npart, 0);
   event->ini_eng  .assign(event->npart, 0);
   event->ini_t    .assign(event->npart, 0);

   event->ini_posX .assign(event->npart, 0);
   event->ini_posY .assign(event->npart, 0);
   event->ini_posZ .assign(event->npart, 0);
   event->ini_momX .assign(event->npart, 0);
   event->ini_momY .assign(event->npart, 0);
   event->ini_momZ .assign(event->npart, 0);
   event->fin_momX .assign(event->npart, 0);
   event->fin_momY .assign(event->npart, 0);
   event->fin_momZ .assign(event->npart, 0);
   event->fin_polX .assign(event->npart, 0);
   event->fin_polY .assign(event->npart, 0);
   event->fin_polZ .assign(event->npart, 0);

   event->dtDcy    .assign(event->npart, 0);
   event->distDiff .assign(event->npart, 0);


   for(int i = 0 ; i < event->npart ; i++){
      event->id[i]      = ChunkObj->TMonteCarloBEAMChunk_data__id[0][i];
      event->ini_eng[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_eng[0][i];
      event->ini_t[i]   = ChunkObj->TMonteCarloBEAMChunk_data__ini_t[0][i];


      event->ini_posX[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_pos[0][i][0];
      event->ini_momX[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_mom[0][i][0];
      event->fin_momX[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_mom[0][i][0];
      event->fin_polX[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_pol[0][i][0];
     
      event->ini_posY[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_pos[0][i][1];
      event->ini_momY[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_mom[0][i][1];
      event->fin_momY[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_mom[0][i][1];
      event->fin_polY[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_pol[0][i][1];

      event->ini_posZ[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_pos[0][i][2];
      event->ini_momZ[i] = ChunkObj->TMonteCarloBEAMChunk_data__ini_mom[0][i][2];
      event->fin_momZ[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_mom[0][i][2];
      event->fin_polZ[i] = ChunkObj->TMonteCarloBEAMChunk_data__fin_pol[0][i][2];

      event->dtDcy[i]    = 0;
      event->distDiff[i] = 0;
   }
   return 1;
}


//#endif // #ifdef getTimingClassMC_cxx
