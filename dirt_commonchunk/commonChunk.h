//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Sep 17 14:01:31 2020 by ROOT version 6.12/04
// from TTree MiniBooNE/Created in /scratch/condor-tmp/echuang/data_root_files/MC_may07_2_cocktail_allhad_dirt/MC_may07_2_cocktail_allhad_dirt_03000///MC_may07_2_cocktail_allhad_dirt_03000_0.root
// found on file: /e898-data/data60/users/echuang/data_root_files/MC_may07_2_cocktail_allhad_dirt/MC_may07_2_cocktail_allhad_dirt.root
//////////////////////////////////////////////////////////

#ifndef commonChunk_h
#define commonChunk_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

using namespace std;

class commonChunk {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxTHistory = 64;
   static constexpr Int_t kMaxTHistory_algo_name = 64;
   static constexpr Int_t kMaxTHistory_algo_inst = 64;
   static constexpr Int_t kMaxTHistory_chunk_name = 64;
   static constexpr Int_t kMaxTHistory_ext_name = 64;
   static constexpr Int_t kMaxTHistory_version = 64;
   static constexpr Int_t kMaxTHistory_node = 64;
   static constexpr Int_t kMaxTHistory_database = 64;
   static constexpr Int_t kMaxTHistory_inst_num = 64;
   static constexpr Int_t kMaxTHistory_timestamp = 64;
   static constexpr Int_t kMaxTHistory_rcpid = 64;
   static constexpr Int_t kMaxTHistory_chunkid = 64;
   static constexpr Int_t kMaxTHistory_parents = 64;
   static constexpr Int_t kMaxTHistory_tags = 64;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_name = 1;
   static constexpr Int_t kMaxTMCRawEventChunk = 1;
   static constexpr Int_t kMaxTMCRawEventChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMCRawEventChunk_name = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk_name = 1;
   static constexpr Int_t kMaxTGlobalHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_name = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_name = 2;
   static constexpr Int_t kMaxTUncalibratedDataChunk = 1;
   static constexpr Int_t kMaxTUncalibratedDataChunk_chunk_id = 1;
   static constexpr Int_t kMaxTUncalibratedDataChunk_name = 1;
   static constexpr Int_t kMaxTCalibratedDataChunk = 3;
   static constexpr Int_t kMaxTCalibratedDataChunk_chunk_id = 3;
   static constexpr Int_t kMaxTCalibratedDataChunk_name = 3;
   static constexpr Int_t kMaxTCrate13Chunk = 2;
   static constexpr Int_t kMaxTCrate13Chunk_chunk_id = 2;
   static constexpr Int_t kMaxTCrate13Chunk_name = 2;
   static constexpr Int_t kMaxTConnectTheHitsChunk = 2;
   static constexpr Int_t kMaxTConnectTheHitsChunk_chunk_id = 2;
   static constexpr Int_t kMaxTConnectTheHitsChunk_name = 2;
   static constexpr Int_t kMaxTVetoClusterChunk = 3;
   static constexpr Int_t kMaxTVetoClusterChunk_chunk_id = 3;
   static constexpr Int_t kMaxTVetoClusterChunk_name = 3;
   static constexpr Int_t kMaxTSplitEventChunk = 1;
   static constexpr Int_t kMaxTSplitEventChunk_chunk_id = 1;
   static constexpr Int_t kMaxTSplitEventChunk_name = 1;
   static constexpr Int_t kMaxTReweightToCVChunk = 1;
   static constexpr Int_t kMaxTReweightToCVChunk_chunk_id = 1;
   static constexpr Int_t kMaxTReweightToCVChunk_name = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk_chunk_id = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk_name = 1;
   static constexpr Int_t kMaxTStancuFastChunk = 1;
   static constexpr Int_t kMaxTStancuFastChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFastChunk_name = 1;
   static constexpr Int_t kMaxTStancuFullChunk = 1;
   static constexpr Int_t kMaxTStancuFullChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFullChunk_name = 1;
   static constexpr Int_t kMaxTStancuFluxChunk = 1;
   static constexpr Int_t kMaxTStancuFluxChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFluxChunk_name = 1;
   static constexpr Int_t kMaxTStancuTrakChunk = 1;
   static constexpr Int_t kMaxTStancuTrakChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuTrakChunk_name = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk_name = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk_name = 1;
   static constexpr Int_t kMaxTStancuVarsChunk = 1;
   static constexpr Int_t kMaxTStancuVarsChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuVarsChunk_name = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk_name = 1;
   static constexpr Int_t kMaxTVetoLinkingChunk = 1;
   static constexpr Int_t kMaxTVetoLinkingChunk_chunk_id = 1;
   static constexpr Int_t kMaxTVetoLinkingChunk_name = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk_chunk_id = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk_name = 1;
   static constexpr Int_t kMaxTInteractionPointChunk = 1;
   static constexpr Int_t kMaxTInteractionPointChunk_chunk_id = 1;
   static constexpr Int_t kMaxTInteractionPointChunk_name = 1;
   static constexpr Int_t kMaxTOneTrackChunk = 2;
   static constexpr Int_t kMaxTOneTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTOneTrackChunk_name = 2;
   static constexpr Int_t kMaxTRoeFullChunk = 1;
   static constexpr Int_t kMaxTRoeFullChunk_chunk_id = 1;
   static constexpr Int_t kMaxTRoeFullChunk_name = 1;
   static constexpr Int_t kMaxTFittersChunk = 1;
   static constexpr Int_t kMaxTFittersChunk_chunk_id = 1;
   static constexpr Int_t kMaxTFittersChunk_name = 1;
   static constexpr Int_t kMaxTYangVarChunk = 1;
   static constexpr Int_t kMaxTYangVarChunk_chunk_id = 1;
   static constexpr Int_t kMaxTYangVarChunk_name = 1;
   static constexpr Int_t kMaxTPFitterChunk = 1;
   static constexpr Int_t kMaxTPFitterChunk_chunk_id = 1;
   static constexpr Int_t kMaxTPFitterChunk_name = 1;
   static constexpr Int_t kMaxTRoePiChunk = 1;
   static constexpr Int_t kMaxTRoePiChunk_chunk_id = 1;
   static constexpr Int_t kMaxTRoePiChunk_name = 1;
   static constexpr Int_t kMaxTFittersPi0Chunk = 1;
   static constexpr Int_t kMaxTFittersPi0Chunk_chunk_id = 1;
   static constexpr Int_t kMaxTFittersPi0Chunk_name = 1;
   static constexpr Int_t kMaxTParticleIDChunk = 4;
   static constexpr Int_t kMaxTParticleIDChunk_chunk_id = 4;
   static constexpr Int_t kMaxTParticleIDChunk_name = 4;
   static constexpr Int_t kMaxTTwoTrackChunk = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk_name = 2;
   static constexpr Int_t kMaxTProtonChunk = 1;
   static constexpr Int_t kMaxTProtonChunk_chunk_id = 1;
   static constexpr Int_t kMaxTProtonChunk_name = 1;
   static constexpr Int_t kMaxTNeutronChunk = 1;
   static constexpr Int_t kMaxTNeutronChunk_chunk_id = 1;
   static constexpr Int_t kMaxTNeutronChunk_name = 1;

   // Declaration of leaf types
   Int_t           THistory_;
   UInt_t          THistory_fUniqueID[kMaxTHistory];   //[THistory_]
   UInt_t          THistory_fBits[kMaxTHistory];   //[THistory_]
   string          THistory_algo_name_[kMaxTHistory];
   string          THistory_algo_inst_[kMaxTHistory];
   string          THistory_chunk_name_[kMaxTHistory];
   string          THistory_ext_name_[kMaxTHistory];
   string          THistory_version_[kMaxTHistory];
   string          THistory_node_[kMaxTHistory];
   Char_t          THistory_database_[kMaxTHistory];   //[THistory_]
   Int_t           THistory_inst_num_[kMaxTHistory];   //[THistory_]
   Long_t          THistory_timestamp_[kMaxTHistory];   //[THistory_]
   ULong_t         THistory_rcpid_[kMaxTHistory];   //[THistory_]
   Int_t           THistory_chunkid_[kMaxTHistory];   //[THistory_]
   vector<int>     THistory_parents_[kMaxTHistory];
   vector<string>  THistory_tags_[kMaxTHistory];
   Int_t           TMonteCarloEVNTChunk_;
   Int_t           TMonteCarloEVNTChunk_chunk_id_[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   UInt_t          TMonteCarloEVNTChunk_data__fUniqueID[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   UInt_t          TMonteCarloEVNTChunk_data__fBits[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__VERSION[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__VAR_FLAGS[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__IEVNT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__EVWT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__INNO[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__PNEU[kMaxTMonteCarloEVNTChunk][4];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__NDCY[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__NFSP[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__VRTX[kMaxTMonteCarloEVNTChunk][127][3];   //[TMonteCarloEVNTChunk_]
   Float_t        *TMonteCarloEVNTChunk_data__TIME[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t          *TMonteCarloEVNTChunk_data__IPFS[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Float_t         TMonteCarloEVNTChunk_data__PFSP[kMaxTMonteCarloEVNTChunk][127][4];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__NHTTCER[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t          *TMonteCarloEVNTChunk_data__NHTTSCI[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t           TMonteCarloEVNTChunk_data__NPROCTAG[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__IPROCTAG[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NPROCTAG]
   Int_t           TMonteCarloEVNTChunk_data__NHTT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__NOTPMT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NHTT]
   Float_t        *TMonteCarloEVNTChunk_data__TITPMT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NHTT]
   Int_t           TMonteCarloEVNTChunk_data__RNDM1[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__RNDM2[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   string          TMonteCarloEVNTChunk_name_[kMaxTMonteCarloEVNTChunk];
   Int_t           TMonteCarloVETOChunk_;
   Int_t           TMonteCarloVETOChunk_chunk_id_[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   UInt_t          TMonteCarloVETOChunk_data__fUniqueID[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   UInt_t          TMonteCarloVETOChunk_data__fBits[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__VERSION[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__VAR_FLAGS[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__IEVNV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__NFSPV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t          *TMonteCarloVETOChunk_data__NHTVCER[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NFSPV]
   Int_t          *TMonteCarloVETOChunk_data__NHTVSCI[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NFSPV]
   Int_t           TMonteCarloVETOChunk_data__NHTV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t          *TMonteCarloVETOChunk_data__NOVPMT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__TIVPMT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__XVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__YVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__ZVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__EVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   string          TMonteCarloVETOChunk_name_[kMaxTMonteCarloVETOChunk];
   Int_t           TMonteCarloMUTRChunk_;
   Int_t           TMonteCarloMUTRChunk_chunk_id_[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   UInt_t          TMonteCarloMUTRChunk_data__fUniqueID[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   UInt_t          TMonteCarloMUTRChunk_data__fBits[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__VERSION[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__VAR_FLAGS[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__IEVNM[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__NHTMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t        *TMonteCarloMUTRChunk_data__XMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__YMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__ZMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__SMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__ELMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__TIMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Int_t          *TMonteCarloMUTRChunk_data__IPMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Int_t           TMonteCarloMUTRChunk_data__NHTCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t        *TMonteCarloMUTRChunk_data__XCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__YCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__ZCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__ELCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__TICUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Int_t          *TMonteCarloMUTRChunk_data__PTCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Int_t           TMonteCarloMUTRChunk_data__INVT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRV[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__INTK[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRI[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__LVTK[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRO[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__MUSTP[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRS[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__MUDCY[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRE[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   string          TMonteCarloMUTRChunk_name_[kMaxTMonteCarloMUTRChunk];
   Int_t           TMonteCarloINVIChunk_;
   Int_t           TMonteCarloINVIChunk_chunk_id_[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   UInt_t          TMonteCarloINVIChunk_data__fUniqueID[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   UInt_t          TMonteCarloINVIChunk_data__fBits[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__VERSION[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__VAR_FLAGS[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__IEVNT[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__NFSPI[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t          *TMonteCarloINVIChunk_data__gotPE[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__distToSource[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceX[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceY[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceZ[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   string          TMonteCarloINVIChunk_name_[kMaxTMonteCarloINVIChunk];
   Int_t           TMonteCarloNUANChunk_;
   Int_t           TMonteCarloNUANChunk_chunk_id_[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   UInt_t          TMonteCarloNUANChunk_data__fUniqueID[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   UInt_t          TMonteCarloNUANChunk_data__fBits[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__VERSION[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__VAR_FLAGS[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__rateid[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__e_neutrino[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__e_lepton[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__k_target[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__qsq[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__w[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__x[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__y[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__phi_cm[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__cos_fermi[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   string          TMonteCarloNUANChunk_name_[kMaxTMonteCarloNUANChunk];
   Int_t           TMonteCarloBEAMChunk_;
   Int_t           TMonteCarloBEAMChunk_chunk_id_[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   UInt_t          TMonteCarloBEAMChunk_data__fUniqueID[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   UInt_t          TMonteCarloBEAMChunk_data__fBits[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__VERSION[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__VAR_FLAGS[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__beamwgt[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__ntp[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__npart[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t          *TMonteCarloBEAMChunk_data__id[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__ini_pos[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__ini_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t        *TMonteCarloBEAMChunk_data__ini_eng[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t        *TMonteCarloBEAMChunk_data__ini_t[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__fin_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__fin_pol[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   string          TMonteCarloBEAMChunk_name_[kMaxTMonteCarloBEAMChunk];
   Int_t           TMCRawEventChunk_;
   Int_t           TMCRawEventChunk_chunk_id_[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   UInt_t          TMCRawEventChunk_data__fUniqueID[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   UInt_t          TMCRawEventChunk_data__fBits[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__numhits[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__MCVersion[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__varflags[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nutype[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nfsp[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__ndcy[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__evwt[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__pneu[kMaxTMCRawEventChunk][4];   //[TMCRawEventChunk_]
   Int_t          *TMCRawEventChunk_data__ipfs[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttcer[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttVcer[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttsci[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttVsci[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Float_t        *TMCRawEventChunk_data__time[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Float_t         TMCRawEventChunk_data__pfsp[kMaxTMCRawEventChunk][127][4];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__vrtx[kMaxTMCRawEventChunk][127][3];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__svrtx[kMaxTMCRawEventChunk][3];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__ievnt[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nproctag[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t          *TMCRawEventChunk_data__iproctag[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nproctag]
   string          TMCRawEventChunk_name_[kMaxTMCRawEventChunk];
   Int_t           TMCHitMatchChunk_;
   Int_t           TMCHitMatchChunk_chunk_id_[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   UInt_t          TMCHitMatchChunk_data__fUniqueID[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   UInt_t          TMCHitMatchChunk_data__fBits[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Nhit[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Hit2FSP[kMaxTMCHitMatchChunk][17406];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__NumFSP[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__PEs[kMaxTMCHitMatchChunk][127];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Hits[kMaxTMCHitMatchChunk][127];   //[TMCHitMatchChunk_]
   string          TMCHitMatchChunk_name_[kMaxTMCHitMatchChunk];
   Int_t           TGlobalHeaderChunk_;
   Int_t           TGlobalHeaderChunk_chunk_id_[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   UInt_t          TGlobalHeaderChunk_data__fUniqueID[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   UInt_t          TGlobalHeaderChunk_data__fBits[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RECORD_TYPE[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RECORD_ORIGIN[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__NUM_BYTES[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RUN_NUM[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__SECS[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__MSECS[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   string          TGlobalHeaderChunk_name_[kMaxTGlobalHeaderChunk];
   Int_t           TGlobalTankHeaderChunk_;
   Int_t           TGlobalTankHeaderChunk_chunk_id_[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   UInt_t          TGlobalTankHeaderChunk_data__fUniqueID[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   UInt_t          TGlobalTankHeaderChunk_data__fBits[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__RUN_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__EVENT_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__SUB_RUN_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__EVENT_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_EV_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_FIFO[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NTSAS_FIFO[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__GPS_LOWER[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__GPS_UPPER[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_EV_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_NTSAS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_NBCASTS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_CMD[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_DIAG[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_LAT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t           TGlobalTankHeaderChunk_data__ACT_TIMER[kMaxTGlobalTankHeaderChunk][23];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__FIFO_HIST[kMaxTGlobalTankHeaderChunk][100];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__FIFO_HIST_POINT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__ACTIVITY_HIST[kMaxTGlobalTankHeaderChunk][30];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NTSAS[kMaxTGlobalTankHeaderChunk][30];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_RCVR[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_BUFSIZE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_NUM_HITS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_DATA_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__RATE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   string          TGlobalTankHeaderChunk_name_[kMaxTGlobalTankHeaderChunk];
   Int_t           TUncalibratedDataChunk_;
   Int_t           TUncalibratedDataChunk_chunk_id_[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   UInt_t          TUncalibratedDataChunk_data__fUniqueID[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   UInt_t          TUncalibratedDataChunk_data__fBits[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   Int_t           TUncalibratedDataChunk_data__NUM_HITS[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   Int_t          *TUncalibratedDataChunk_data__CHANNEL[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__OFFSET[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC0[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC1[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC2[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC3[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC0[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC1[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC2[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC3[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   string          TUncalibratedDataChunk_name_[kMaxTUncalibratedDataChunk];
   Int_t           TCalibratedDataChunk_;
   Int_t           TCalibratedDataChunk_chunk_id_[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   UInt_t          TCalibratedDataChunk_data__fUniqueID[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   UInt_t          TCalibratedDataChunk_data__fBits[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   Int_t           TCalibratedDataChunk_data__Hits[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   Int_t          *TCalibratedDataChunk_data__PMT[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t        *TCalibratedDataChunk_data__Q[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t        *TCalibratedDataChunk_data__notruncQ[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t        *TCalibratedDataChunk_data__T[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t         TCalibratedDataChunk_data__Tmin[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   Float_t         TCalibratedDataChunk_data__Tmax[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   string          TCalibratedDataChunk_name_[kMaxTCalibratedDataChunk];
   Int_t           TCrate13Chunk_;
   Int_t           TCrate13Chunk_chunk_id_[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   UInt_t          TCrate13Chunk_data__fUniqueID[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   UInt_t          TCrate13Chunk_data__fBits[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__Laser_flask[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_laser[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_cubes[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_RWM[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_d90[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_MUTR[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e1[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e2[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e3[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e4[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__RWM_quality[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_refined_time[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_bounce_time[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__laser_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__laser_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_chan[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__d90_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__d90_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__MUTR_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__MUTR_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e1_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e1_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e2_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e2_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e3_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e3_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e4_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e4_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   string          TCrate13Chunk_name_[kMaxTCrate13Chunk];
   Int_t           TConnectTheHitsChunk_;
   Int_t           TConnectTheHitsChunk_chunk_id_[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_]
   UInt_t          TConnectTheHitsChunk_data__fUniqueID[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_]
   UInt_t          TConnectTheHitsChunk_data__fBits[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_]
   Int_t           TConnectTheHitsChunk_data__Hits[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_]
   Int_t          *TConnectTheHitsChunk_data__Index[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_data__Hits]
   Int_t          *TConnectTheHitsChunk_data__Flag[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_data__Hits]
   Int_t          *TConnectTheHitsChunk_data__Offset[kMaxTConnectTheHitsChunk];   //[TConnectTheHitsChunk_data__Hits]
   string          TConnectTheHitsChunk_name_[kMaxTConnectTheHitsChunk];
   Int_t           TVetoClusterChunk_;
   Int_t           TVetoClusterChunk_chunk_id_[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   UInt_t          TVetoClusterChunk_data__fUniqueID[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   UInt_t          TVetoClusterChunk_data__fBits[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Charge[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Time[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__X[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Y[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Z[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__XSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__YSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__ZSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__SigMax[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__SepMean[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__TSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Left[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__NC[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Hit_Indx[kMaxTVetoClusterChunk][240][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Hits[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Subevent[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   string          TVetoClusterChunk_name_[kMaxTVetoClusterChunk];
   Int_t           TSplitEventChunk_;
   Int_t           TSplitEventChunk_chunk_id_[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   UInt_t          TSplitEventChunk_data__fUniqueID[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   UInt_t          TSplitEventChunk_data__fBits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__Subevent[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__THits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__VHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__TposHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__VposHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t          *TSplitEventChunk_data__TPMT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Int_t          *TSplitEventChunk_data__VPMT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t        *TSplitEventChunk_data__TQ[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Float_t        *TSplitEventChunk_data__VQ[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t         TSplitEventChunk_data__Qtot[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__TQpos[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__VQpos[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t        *TSplitEventChunk_data__TT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Float_t        *TSplitEventChunk_data__VT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t         TSplitEventChunk_data__Tmin[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__Tmax[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__AvgTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__PeakTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__rmsTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__AvgVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__PeakVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__rmsVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   string          TSplitEventChunk_name_[kMaxTSplitEventChunk];
   Int_t           TReweightToCVChunk_;
   Int_t           TReweightToCVChunk_chunk_id_[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   UInt_t          TReweightToCVChunk_data__fUniqueID[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   UInt_t          TReweightToCVChunk_data__fBits[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__radius[kMaxTReweightToCVChunk][3];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__ppi0[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__nuanceChannel[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__nuType[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__enu[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__parentId[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__pParent[kMaxTReweightToCVChunk][3];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__xsecweight[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__fluxweight[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   string          TReweightToCVChunk_name_[kMaxTReweightToCVChunk];
   Int_t           TWeightDetailsChunk_;
   Int_t           TWeightDetailsChunk_chunk_id_[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   UInt_t          TWeightDetailsChunk_data__fUniqueID[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   UInt_t          TWeightDetailsChunk_data__fBits[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__resangle_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__dirt_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0mom_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__deltamom_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__raddelta_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0coh_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0res_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__nuance_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__multpi0_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__multdelta_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pipflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pimflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__kpflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__kmflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__k0flux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__histo_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__npip_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__npim_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__absorber_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__totalweight[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   string          TWeightDetailsChunk_name_[kMaxTWeightDetailsChunk];
   Int_t           TStancuFastChunk_;
   Int_t           TStancuFastChunk_chunk_id_[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   UInt_t          TStancuFastChunk_data__fUniqueID[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   UInt_t          TStancuFastChunk_data__fBits[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Int_t           TStancuFastChunk_data__IT[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__X[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__Y[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__Z[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UX[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UY[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UZ[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__T[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__D[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__E[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__F[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   string          TStancuFastChunk_name_[kMaxTStancuFastChunk];
   Int_t           TStancuFullChunk_;
   Int_t           TStancuFullChunk_chunk_id_[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   UInt_t          TStancuFullChunk_data__fUniqueID[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   UInt_t          TStancuFullChunk_data__fBits[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Int_t           TStancuFullChunk_data__IT[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__X[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Y[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Z[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UX[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UY[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UZ[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__T[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__D[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__E[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__F[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__E_mu[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__S_tkint[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__RdR[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Fqlt05[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Fqlt10[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Xvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Yvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Zvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Rvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Tvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   string          TStancuFullChunk_name_[kMaxTStancuFullChunk];
   Int_t           TStancuFluxChunk_;
   Int_t           TStancuFluxChunk_chunk_id_[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   UInt_t          TStancuFluxChunk_data__fUniqueID[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   UInt_t          TStancuFluxChunk_data__fBits[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Int_t           TStancuFluxChunk_data__IT[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__CER[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__SCI[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__F[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__EcerEl[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__EcerMu[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   string          TStancuFluxChunk_name_[kMaxTStancuFluxChunk];
   Int_t           TStancuTrakChunk_;
   Int_t           TStancuTrakChunk_chunk_id_[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   UInt_t          TStancuTrakChunk_data__fUniqueID[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   UInt_t          TStancuTrakChunk_data__fBits[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Int_t           TStancuTrakChunk_data__IT[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Float_t         TStancuTrakChunk_data__TRAK[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Float_t         TStancuTrakChunk_data__F[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   string          TStancuTrakChunk_name_[kMaxTStancuTrakChunk];
   Int_t           TStancuMuvdChunk_;
   Int_t           TStancuMuvdChunk_chunk_id_[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   UInt_t          TStancuMuvdChunk_data__fUniqueID[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   UInt_t          TStancuMuvdChunk_data__fBits[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Int_t           TStancuMuvdChunk_data__IT[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__X[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__Y[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__Z[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UX[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UY[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UZ[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__T[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__F[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__L[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   string          TStancuMuvdChunk_name_[kMaxTStancuMuvdChunk];
   Int_t           TStancuPi0Chunk_;
   Int_t           TStancuPi0Chunk_chunk_id_[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   UInt_t          TStancuPi0Chunk_data__fUniqueID[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   UInt_t          TStancuPi0Chunk_data__fBits[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Int_t           TStancuPi0Chunk_data__iter[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__x[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__y[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__z[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__t[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__llike[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__mass[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__darec[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__fcer[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__phi1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__teta1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__phi2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__teta2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__cer1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__sci1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__cer2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__sci2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__srec1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__dist1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__srec2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__dist2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   string          TStancuPi0Chunk_name_[kMaxTStancuPi0Chunk];
   Int_t           TStancuVarsChunk_;
   Int_t           TStancuVarsChunk_chunk_id_[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   UInt_t          TStancuVarsChunk_data__fUniqueID[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   UInt_t          TStancuVarsChunk_data__fBits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__nchunks[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__chunknr[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__energy[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__thits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__vhits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__d[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rdr[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__stint[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rawtsig[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rawtavg[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_trak[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlb45[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlb24[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlm22[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlsci[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qtmr4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qtmr3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_fthvp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_fthvl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rslvl53[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rslvl64[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_mass[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_angle[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_trak[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlcer[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_rslvl53[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_rslvl64[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_scratio[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qqover[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_fmdiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qldiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tldiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_fcer[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qtmr0[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_dcbeam[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qtmr56[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlb245[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_dist1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh11p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh9p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh1t5p1518[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh1p18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh13p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh11t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrpp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrmm[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr0p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr4p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr6p7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrc2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr17p18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr18p19[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p9[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit3p6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph13p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph14p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph11p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph15p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph15p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph16p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlt05[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlt10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthjp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthjl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthvp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk014p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk08p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk012p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk010p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk011p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk012p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk013p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk016p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec6t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t20[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec1t10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec6t10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn018m14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn014p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn010p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn013[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn011[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn010p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn010p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn011p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl9m1ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl3p9ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl7m4ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl1p8ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl8p9ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlph16m12[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlph16m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02ql3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01tl2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02tl4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fnh1t5p1518[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fnh11t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftq4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsq14p20[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqlk02p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__trakove[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fcertflx[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__srec1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqovovthit[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qcer2ovqtot[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqqov[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnqcer1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__cerfrdiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs7m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit9m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frchia10m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos4m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__chirsqrec[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ffast[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ffulmffas[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fflux[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frcer1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frcer2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnqcer1m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqqcer1m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcer1mov[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02ql4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02fthl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__srec2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__dist2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__chiqrec[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlfwd[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos5m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos10m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos10m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos10m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlkcos3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlkcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlphcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos5m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos6m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos10m9[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrsnb7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhnb8m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhrsnb5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs8m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit3m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02tl3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01tl3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr9m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr4m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qcer1ovqtot[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fscitflx[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__abscerasy[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos9m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   string          TStancuVarsChunk_name_[kMaxTStancuVarsChunk];
   Int_t           TStancuVarsTwoChunk_;
   Int_t           TStancuVarsTwoChunk_chunk_id_[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   UInt_t          TStancuVarsTwoChunk_data__fUniqueID[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   UInt_t          TStancuVarsTwoChunk_data__fBits[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__cth_n000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__cth_nhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_mu[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qrec[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_chia[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qllk000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qllkhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_tllk[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__rs_n000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__rs_nhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__rs_qrec[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__rs_mu[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__tim_nhit[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__tim_qrec[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__tim_mu[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   string          TStancuVarsTwoChunk_name_[kMaxTStancuVarsTwoChunk];
   Int_t           TVetoLinkingChunk_;
   Int_t           TVetoLinkingChunk_chunk_id_[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   UInt_t          TVetoLinkingChunk_data__fUniqueID[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   UInt_t          TVetoLinkingChunk_data__fBits[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnDl[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExDl[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnSigma[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExSigma[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnDt[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExDt[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__NC[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__Enter[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__Exit[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   string          TVetoLinkingChunk_name_[kMaxTVetoLinkingChunk];
   Int_t           TCalibrateEnergyChunk_;
   Int_t           TCalibrateEnergyChunk_chunk_id_[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   UInt_t          TCalibrateEnergyChunk_data__fUniqueID[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   UInt_t          TCalibrateEnergyChunk_data__fBits[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Tlep_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Tlep_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Qsq_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Qsq_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__EnuQE_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__EnuQE_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   string          TCalibrateEnergyChunk_name_[kMaxTCalibrateEnergyChunk];
   Int_t           TInteractionPointChunk_;
   Int_t           TInteractionPointChunk_chunk_id_[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   UInt_t          TInteractionPointChunk_data__fUniqueID[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   UInt_t          TInteractionPointChunk_data__fBits[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__X_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Y_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Z_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__T_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__drive_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__tdrive_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__X_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Y_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Z_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__T_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__drive_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__tdrive_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   string          TInteractionPointChunk_name_[kMaxTInteractionPointChunk];
   Int_t           TOneTrackChunk_;
   Int_t           TOneTrackChunk_chunk_id_[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   UInt_t          TOneTrackChunk_data__fUniqueID[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   UInt_t          TOneTrackChunk_data__fBits[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Int_t           TOneTrackChunk_data__iterations[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Int_t           TOneTrackChunk_data__trackType[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__X[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__Y[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__Z[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UX[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UY[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UZ[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__T[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__E[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__distToMeanCer[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__fluxScale[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__relativeSci[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__F[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   string          TOneTrackChunk_name_[kMaxTOneTrackChunk];
   Int_t           TRoeFullChunk_;
   Int_t           TRoeFullChunk_chunk_id_[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   UInt_t          TRoeFullChunk_data__fUniqueID[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   UInt_t          TRoeFullChunk_data__fBits[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__rvec[kMaxTRoeFullChunk][3];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__time[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__dircos[kMaxTRoeFullChunk][3];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__length[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__rvec_v[kMaxTRoeFullChunk][3];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__time_v[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__charge_infit[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__charge_wgt_infit[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__chisq_a_infit[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__chisq_r_infit[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__weight_total[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__chisq_avg[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__rtowall[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__Energy[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Int_t           TRoeFullChunk_data__numhits_infit[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__errors[kMaxTRoeFullChunk][7][7];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__EnergyMU[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__lengthMU[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__chg_length_nue[kMaxTRoeFullChunk];   //[TRoeFullChunk_]
   Float_t         TRoeFullChunk_data__numlowt_nue[kMaxTRoeFullChunk][10];   //[TRoeFullChunk_]
   string          TRoeFullChunk_name_[kMaxTRoeFullChunk];
   Int_t           TFittersChunk_;
   Int_t           TFittersChunk_chunk_id_[kMaxTFittersChunk];   //[TFittersChunk_]
   UInt_t          TFittersChunk_data__fUniqueID[kMaxTFittersChunk];   //[TFittersChunk_]
   UInt_t          TFittersChunk_data__fBits[kMaxTFittersChunk];   //[TFittersChunk_]
   Char_t          TFittersChunk_data__id[kMaxTFittersChunk][20];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__x[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__y[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__z[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__t[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__ux[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__uy[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__uz[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__r3[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__e[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__trklen[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__emu[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__trklenmu[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__goodfit[kMaxTFittersChunk];   //[TFittersChunk_]
   Float_t         TFittersChunk_data__errors[kMaxTFittersChunk][10][10];   //[TFittersChunk_]
   string          TFittersChunk_name_[kMaxTFittersChunk];
   Int_t           TYangVarChunk_;
   Int_t           TYangVarChunk_chunk_id_[kMaxTYangVarChunk];   //[TYangVarChunk_]
   UInt_t          TYangVarChunk_data__fUniqueID[kMaxTYangVarChunk];   //[TYangVarChunk_]
   UInt_t          TYangVarChunk_data__fBits[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__cx[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__cy[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__cz[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__ux[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__uy[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__uz[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__time[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Int_t           TYangVarChunk_data__tot_hit[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__tot_q[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__length[kMaxTYangVarChunk];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_hit[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_charge[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtime[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_tchi[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_qtchi[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_hitrs[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_qrs[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtimers[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_tchirs[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtime_hit[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtime_charge[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtime_tchi[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_dtime_qtchi[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   Float_t         TYangVarChunk_data__pid_chi2[kMaxTYangVarChunk][100];   //[TYangVarChunk_]
   string          TYangVarChunk_name_[kMaxTYangVarChunk];
   Int_t           TPFitterChunk_;
   Int_t           TPFitterChunk_chunk_id_[kMaxTPFitterChunk];   //[TPFitterChunk_]
   UInt_t          TPFitterChunk_data__fUniqueID[kMaxTPFitterChunk];   //[TPFitterChunk_]
   UInt_t          TPFitterChunk_data__fBits[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_x[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_y[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_z[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_ux[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_uy[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_uz[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_T[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_E[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_distToMeanCer[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__mu_F[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_x[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_y[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_z[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_ux[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_uy[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_uz[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_T[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_E[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_distToMeanCer[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__e_F[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_T[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_M[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_Cos0p[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_E1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_E2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_distToMeanCer1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_distToMeanCer2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_S1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_S2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_Fqqq[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_Fttt[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pi_F[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_T[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_M[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_Cos0p[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_E1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_E2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_distToMeanCer1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_distToMeanCer2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_S1[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_S2[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_Fqqq[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_Fttt[kMaxTPFitterChunk];   //[TPFitterChunk_]
   Float_t         TPFitterChunk_data__pifix_F[kMaxTPFitterChunk];   //[TPFitterChunk_]
   string          TPFitterChunk_name_[kMaxTPFitterChunk];
   Int_t           TRoePiChunk_;
   Int_t           TRoePiChunk_chunk_id_[kMaxTRoePiChunk];   //[TRoePiChunk_]
   UInt_t          TRoePiChunk_data__fUniqueID[kMaxTRoePiChunk];   //[TRoePiChunk_]
   UInt_t          TRoePiChunk_data__fBits[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__rvec_v[kMaxTRoePiChunk][3];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__time_v[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__shiftg1[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__shiftg2[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__dircosg1[kMaxTRoePiChunk][3];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__dircosg2[kMaxTRoePiChunk][3];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__chge_g1[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__chge_g2[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__chgew_g1[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__chgew_g2[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__Eg1[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__Eg2[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__pi0mass[kMaxTRoePiChunk];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__errors[kMaxTRoePiChunk][12][12];   //[TRoePiChunk_]
   Float_t         TRoePiChunk_data__cosang1[kMaxTRoePiChunk];   //[TRoePiChunk_]
   string          TRoePiChunk_name_[kMaxTRoePiChunk];
   Int_t           TFittersPi0Chunk_;
   Int_t           TFittersPi0Chunk_chunk_id_[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   UInt_t          TFittersPi0Chunk_data__fUniqueID[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   UInt_t          TFittersPi0Chunk_data__fBits[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Char_t          TFittersPi0Chunk_data__id[kMaxTFittersPi0Chunk][20];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__x[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__y[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__z[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__t[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__mass[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__angle[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__eg1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__eg2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__shift1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__shift2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__ux1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__uy1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__uz1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__ux2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__uy2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__uz2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__qgamma1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__qgamma2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__errors[kMaxTFittersPi0Chunk][20][20];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__cosang1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__Newpi[kMaxTFittersPi0Chunk][50];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__chg_length_g1[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__chg_length_g2[kMaxTFittersPi0Chunk];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__numlowt_g1[kMaxTFittersPi0Chunk][10];   //[TFittersPi0Chunk_]
   Float_t         TFittersPi0Chunk_data__numlowt_g2[kMaxTFittersPi0Chunk][10];   //[TFittersPi0Chunk_]
   string          TFittersPi0Chunk_name_[kMaxTFittersPi0Chunk];
   Int_t           TParticleIDChunk_;
   Int_t           TParticleIDChunk_chunk_id_[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   UInt_t          TParticleIDChunk_data__fUniqueID[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   UInt_t          TParticleIDChunk_data__fBits[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Int_t           TParticleIDChunk_data__NUM_PAR[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Float_t        *TParticleIDChunk_data__PARAM[kMaxTParticleIDChunk];   //[TParticleIDChunk_data__NUM_PAR]
   Int_t           TParticleIDChunk_data__NUM_OUT[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Float_t        *TParticleIDChunk_data__OUTPUT[kMaxTParticleIDChunk];   //[TParticleIDChunk_data__NUM_OUT]
   string          TParticleIDChunk_name_[kMaxTParticleIDChunk];
   Int_t           TTwoTrackChunk_;
   Int_t           TTwoTrackChunk_chunk_id_[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   UInt_t          TTwoTrackChunk_data__fUniqueID[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   UInt_t          TTwoTrackChunk_data__fBits[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__trackType1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__trackType2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__X[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Y[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Z[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__T[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__M[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__CosOp[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UX1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UY1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UZ1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__E1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__distToMeanCer1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__S1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UX2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UY2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UZ2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__E2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__distToMeanCer2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__S2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__fluxScale[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__relativeSci[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Fqqq[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Fttt[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__F[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__fixedMass[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   string          TTwoTrackChunk_name_[kMaxTTwoTrackChunk];
   Int_t           TTwoTrackEndConditionsChunk_;
   Int_t           TTwoTrackEndConditionsChunk_chunk_id_[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   UInt_t          TTwoTrackEndConditionsChunk_data__fUniqueID[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   UInt_t          TTwoTrackEndConditionsChunk_data__fBits[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__OneTrack_E[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__OneTrack_F[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__end_F[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__cut_DeltaF[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__end_DeltaF[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__fitWasAborted[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__enteredMainFit[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__finalStartPointer[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__finalStartOrder[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__fixedMass[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   string          TTwoTrackEndConditionsChunk_name_[kMaxTTwoTrackEndConditionsChunk];
   Int_t           TTwoTrackInternalsChunk_;
   Int_t           TTwoTrackInternalsChunk_chunk_id_[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   UInt_t          TTwoTrackInternalsChunk_data__fUniqueID[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   UInt_t          TTwoTrackInternalsChunk_data__fBits[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t           TTwoTrackInternalsChunk_data__numStarts[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t          *TTwoTrackInternalsChunk_data__startPointer[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startXpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startYpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startZpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startTime[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startE1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startE2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startS1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startPhi1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startThet1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startS2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startPhi2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startThet2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startF[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endXpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endYpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endZpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endTime[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endE1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endE2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endS1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endPhi1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endThet1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endS2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endPhi2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endThet2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endF[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Int_t          *TTwoTrackInternalsChunk_data__skipped[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Int_t           TTwoTrackInternalsChunk_data__fixedMass[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t           TTwoTrackInternalsChunk_data__fitWasAborted[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   string          TTwoTrackInternalsChunk_name_[kMaxTTwoTrackInternalsChunk];
   Int_t           TProtonChunk_;
   Int_t           TProtonChunk_chunk_id_[kMaxTProtonChunk];   //[TProtonChunk_]
   UInt_t          TProtonChunk_data__fUniqueID[kMaxTProtonChunk];   //[TProtonChunk_]
   UInt_t          TProtonChunk_data__fBits[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__E[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__X[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__Y[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__Z[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__T[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UX[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UY[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UZ[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__TLLK[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__QLLK[kMaxTProtonChunk];   //[TProtonChunk_]
   string          TProtonChunk_name_[kMaxTProtonChunk];
   Int_t           TNeutronChunk_;
   Int_t           TNeutronChunk_chunk_id_[kMaxTNeutronChunk];   //[TNeutronChunk_]
   UInt_t          TNeutronChunk_data__fUniqueID[kMaxTNeutronChunk];   //[TNeutronChunk_]
   UInt_t          TNeutronChunk_data__fBits[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__E[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__X[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__Y[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__Z[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__T[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__TLLK[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__QLLK[kMaxTNeutronChunk];   //[TNeutronChunk_]
   string          TNeutronChunk_name_[kMaxTNeutronChunk];

   // List of branches
   TBranch        *b_THistory_;   //!
   TBranch        *b_THistory_fUniqueID;   //!
   TBranch        *b_THistory_fBits;   //!
   TBranch        *b_THistory_algo_name_;   //!
   TBranch        *b_THistory_algo_inst_;   //!
   TBranch        *b_THistory_chunk_name_;   //!
   TBranch        *b_THistory_ext_name_;   //!
   TBranch        *b_THistory_version_;   //!
   TBranch        *b_THistory_node_;   //!
   TBranch        *b_THistory_database_;   //!
   TBranch        *b_THistory_inst_num_;   //!
   TBranch        *b_THistory_timestamp_;   //!
   TBranch        *b_THistory_rcpid_;   //!
   TBranch        *b_THistory_chunkid_;   //!
   TBranch        *b_THistory_parents_;   //!
   TBranch        *b_THistory_tags_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IEVNT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__EVWT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__INNO;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__PNEU;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NDCY;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NFSP;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VRTX;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__TIME;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IPFS;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__PFSP;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTTCER;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTTSCI;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NPROCTAG;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IPROCTAG;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NOTPMT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__TITPMT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__RNDM1;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__RNDM2;   //!
   TBranch        *b_TMonteCarloEVNTChunk_name_;   //!
   TBranch        *b_TMonteCarloVETOChunk_;   //!
   TBranch        *b_TMonteCarloVETOChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__IEVNV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NFSPV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTVCER;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTVSCI;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NOVPMT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__TIVPMT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__XVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__YVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__ZVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__EVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_name_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__IEVNM;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__NHTMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__XMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__YMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ZMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__SMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ELMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TIMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__IPMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__NHTCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__XCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__YCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ZCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ELCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TICUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__PTCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__INVT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRV;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__INTK;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRI;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__LVTK;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRO;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__MUSTP;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRS;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__MUDCY;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRE;   //!
   TBranch        *b_TMonteCarloMUTRChunk_name_;   //!
   TBranch        *b_TMonteCarloINVIChunk_;   //!
   TBranch        *b_TMonteCarloINVIChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__IEVNT;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__NFSPI;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__gotPE;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__distToSource;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceX;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceY;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceZ;   //!
   TBranch        *b_TMonteCarloINVIChunk_name_;   //!
   TBranch        *b_TMonteCarloNUANChunk_;   //!
   TBranch        *b_TMonteCarloNUANChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__rateid;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__e_neutrino;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__e_lepton;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__k_target;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__qsq;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__w;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__x;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__y;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__phi_cm;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__cos_fermi;   //!
   TBranch        *b_TMonteCarloNUANChunk_name_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__beamwgt;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ntp;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__npart;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__id;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_pos;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_eng;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_t;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_pol;   //!
   TBranch        *b_TMonteCarloBEAMChunk_name_;   //!
   TBranch        *b_TMCRawEventChunk_;   //!
   TBranch        *b_TMCRawEventChunk_chunk_id_;   //!
   TBranch        *b_TMCRawEventChunk_data__fUniqueID;   //!
   TBranch        *b_TMCRawEventChunk_data__fBits;   //!
   TBranch        *b_TMCRawEventChunk_data__numhits;   //!
   TBranch        *b_TMCRawEventChunk_data__MCVersion;   //!
   TBranch        *b_TMCRawEventChunk_data__varflags;   //!
   TBranch        *b_TMCRawEventChunk_data__nutype;   //!
   TBranch        *b_TMCRawEventChunk_data__nfsp;   //!
   TBranch        *b_TMCRawEventChunk_data__ndcy;   //!
   TBranch        *b_TMCRawEventChunk_data__evwt;   //!
   TBranch        *b_TMCRawEventChunk_data__pneu;   //!
   TBranch        *b_TMCRawEventChunk_data__ipfs;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttcer;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttVcer;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttsci;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttVsci;   //!
   TBranch        *b_TMCRawEventChunk_data__time;   //!
   TBranch        *b_TMCRawEventChunk_data__pfsp;   //!
   TBranch        *b_TMCRawEventChunk_data__vrtx;   //!
   TBranch        *b_TMCRawEventChunk_data__svrtx;   //!
   TBranch        *b_TMCRawEventChunk_data__ievnt;   //!
   TBranch        *b_TMCRawEventChunk_data__nproctag;   //!
   TBranch        *b_TMCRawEventChunk_data__iproctag;   //!
   TBranch        *b_TMCRawEventChunk_name_;   //!
   TBranch        *b_TMCHitMatchChunk_;   //!
   TBranch        *b_TMCHitMatchChunk_chunk_id_;   //!
   TBranch        *b_TMCHitMatchChunk_data__fUniqueID;   //!
   TBranch        *b_TMCHitMatchChunk_data__fBits;   //!
   TBranch        *b_TMCHitMatchChunk_data__Nhit;   //!
   TBranch        *b_TMCHitMatchChunk_data__Hit2FSP;   //!
   TBranch        *b_TMCHitMatchChunk_data__NumFSP;   //!
   TBranch        *b_TMCHitMatchChunk_data__PEs;   //!
   TBranch        *b_TMCHitMatchChunk_data__Hits;   //!
   TBranch        *b_TMCHitMatchChunk_name_;   //!
   TBranch        *b_TGlobalHeaderChunk_;   //!
   TBranch        *b_TGlobalHeaderChunk_chunk_id_;   //!
   TBranch        *b_TGlobalHeaderChunk_data__fUniqueID;   //!
   TBranch        *b_TGlobalHeaderChunk_data__fBits;   //!
   TBranch        *b_TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RECORD_TYPE;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RECORD_ORIGIN;   //!
   TBranch        *b_TGlobalHeaderChunk_data__NUM_BYTES;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RUN_NUM;   //!
   TBranch        *b_TGlobalHeaderChunk_data__SECS;   //!
   TBranch        *b_TGlobalHeaderChunk_data__MSECS;   //!
   TBranch        *b_TGlobalHeaderChunk_name_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_chunk_id_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__fUniqueID;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__fBits;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__RUN_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__EVENT_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__SUB_RUN_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__EVENT_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_EV_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_FIFO;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NTSAS_FIFO;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__GPS_LOWER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__GPS_UPPER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_EV_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_NTSAS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_NBCASTS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_CMD;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_DIAG;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_LAT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACT_TIMER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__FIFO_HIST;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__FIFO_HIST_POINT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NTSAS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_RCVR;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_BUFSIZE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_NUM_HITS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_DATA_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__RATE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_name_;   //!
   TBranch        *b_TUncalibratedDataChunk_;   //!
   TBranch        *b_TUncalibratedDataChunk_chunk_id_;   //!
   TBranch        *b_TUncalibratedDataChunk_data__fUniqueID;   //!
   TBranch        *b_TUncalibratedDataChunk_data__fBits;   //!
   TBranch        *b_TUncalibratedDataChunk_data__NUM_HITS;   //!
   TBranch        *b_TUncalibratedDataChunk_data__CHANNEL;   //!
   TBranch        *b_TUncalibratedDataChunk_data__OFFSET;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC0;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC1;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC2;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC3;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC0;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC1;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC2;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC3;   //!
   TBranch        *b_TUncalibratedDataChunk_name_;   //!
   TBranch        *b_TCalibratedDataChunk_;   //!
   TBranch        *b_TCalibratedDataChunk_chunk_id_;   //!
   TBranch        *b_TCalibratedDataChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedDataChunk_data__fBits;   //!
   TBranch        *b_TCalibratedDataChunk_data__Hits;   //!
   TBranch        *b_TCalibratedDataChunk_data__PMT;   //!
   TBranch        *b_TCalibratedDataChunk_data__Q;   //!
   TBranch        *b_TCalibratedDataChunk_data__notruncQ;   //!
   TBranch        *b_TCalibratedDataChunk_data__T;   //!
   TBranch        *b_TCalibratedDataChunk_data__Tmin;   //!
   TBranch        *b_TCalibratedDataChunk_data__Tmax;   //!
   TBranch        *b_TCalibratedDataChunk_name_;   //!
   TBranch        *b_TCrate13Chunk_;   //!
   TBranch        *b_TCrate13Chunk_chunk_id_;   //!
   TBranch        *b_TCrate13Chunk_data__fUniqueID;   //!
   TBranch        *b_TCrate13Chunk_data__fBits;   //!
   TBranch        *b_TCrate13Chunk_data__Laser_flask;   //!
   TBranch        *b_TCrate13Chunk_data__N_laser;   //!
   TBranch        *b_TCrate13Chunk_data__N_cubes;   //!
   TBranch        *b_TCrate13Chunk_data__N_RWM;   //!
   TBranch        *b_TCrate13Chunk_data__N_d90;   //!
   TBranch        *b_TCrate13Chunk_data__N_MUTR;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e1;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e2;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e3;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e4;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_quality;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_refined_time;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_bounce_time;   //!
   TBranch        *b_TCrate13Chunk_data__laser_t;   //!
   TBranch        *b_TCrate13Chunk_data__laser_q;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_chan;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_t;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_q;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_t;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_q;   //!
   TBranch        *b_TCrate13Chunk_data__d90_t;   //!
   TBranch        *b_TCrate13Chunk_data__d90_q;   //!
   TBranch        *b_TCrate13Chunk_data__MUTR_t;   //!
   TBranch        *b_TCrate13Chunk_data__MUTR_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e1_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e1_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e2_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e2_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e3_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e3_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e4_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e4_q;   //!
   TBranch        *b_TCrate13Chunk_name_;   //!
   TBranch        *b_TConnectTheHitsChunk_;   //!
   TBranch        *b_TConnectTheHitsChunk_chunk_id_;   //!
   TBranch        *b_TConnectTheHitsChunk_data__fUniqueID;   //!
   TBranch        *b_TConnectTheHitsChunk_data__fBits;   //!
   TBranch        *b_TConnectTheHitsChunk_data__Hits;   //!
   TBranch        *b_TConnectTheHitsChunk_data__Index;   //!
   TBranch        *b_TConnectTheHitsChunk_data__Flag;   //!
   TBranch        *b_TConnectTheHitsChunk_data__Offset;   //!
   TBranch        *b_TConnectTheHitsChunk_name_;   //!
   TBranch        *b_TVetoClusterChunk_;   //!
   TBranch        *b_TVetoClusterChunk_chunk_id_;   //!
   TBranch        *b_TVetoClusterChunk_data__fUniqueID;   //!
   TBranch        *b_TVetoClusterChunk_data__fBits;   //!
   TBranch        *b_TVetoClusterChunk_data__Charge;   //!
   TBranch        *b_TVetoClusterChunk_data__Time;   //!
   TBranch        *b_TVetoClusterChunk_data__X;   //!
   TBranch        *b_TVetoClusterChunk_data__Y;   //!
   TBranch        *b_TVetoClusterChunk_data__Z;   //!
   TBranch        *b_TVetoClusterChunk_data__XSig;   //!
   TBranch        *b_TVetoClusterChunk_data__YSig;   //!
   TBranch        *b_TVetoClusterChunk_data__ZSig;   //!
   TBranch        *b_TVetoClusterChunk_data__SigMax;   //!
   TBranch        *b_TVetoClusterChunk_data__SepMean;   //!
   TBranch        *b_TVetoClusterChunk_data__TSig;   //!
   TBranch        *b_TVetoClusterChunk_data__Left;   //!
   TBranch        *b_TVetoClusterChunk_data__NC;   //!
   TBranch        *b_TVetoClusterChunk_data__Hit_Indx;   //!
   TBranch        *b_TVetoClusterChunk_data__Hits;   //!
   TBranch        *b_TVetoClusterChunk_data__Subevent;   //!
   TBranch        *b_TVetoClusterChunk_name_;   //!
   TBranch        *b_TSplitEventChunk_;   //!
   TBranch        *b_TSplitEventChunk_chunk_id_;   //!
   TBranch        *b_TSplitEventChunk_data__fUniqueID;   //!
   TBranch        *b_TSplitEventChunk_data__fBits;   //!
   TBranch        *b_TSplitEventChunk_data__Subevent;   //!
   TBranch        *b_TSplitEventChunk_data__THits;   //!
   TBranch        *b_TSplitEventChunk_data__VHits;   //!
   TBranch        *b_TSplitEventChunk_data__TposHits;   //!
   TBranch        *b_TSplitEventChunk_data__VposHits;   //!
   TBranch        *b_TSplitEventChunk_data__TPMT;   //!
   TBranch        *b_TSplitEventChunk_data__VPMT;   //!
   TBranch        *b_TSplitEventChunk_data__TQ;   //!
   TBranch        *b_TSplitEventChunk_data__VQ;   //!
   TBranch        *b_TSplitEventChunk_data__Qtot;   //!
   TBranch        *b_TSplitEventChunk_data__TQpos;   //!
   TBranch        *b_TSplitEventChunk_data__VQpos;   //!
   TBranch        *b_TSplitEventChunk_data__TT;   //!
   TBranch        *b_TSplitEventChunk_data__VT;   //!
   TBranch        *b_TSplitEventChunk_data__Tmin;   //!
   TBranch        *b_TSplitEventChunk_data__Tmax;   //!
   TBranch        *b_TSplitEventChunk_data__AvgTTim;   //!
   TBranch        *b_TSplitEventChunk_data__PeakTTim;   //!
   TBranch        *b_TSplitEventChunk_data__rmsTTim;   //!
   TBranch        *b_TSplitEventChunk_data__AvgVTim;   //!
   TBranch        *b_TSplitEventChunk_data__PeakVTim;   //!
   TBranch        *b_TSplitEventChunk_data__rmsVTim;   //!
   TBranch        *b_TSplitEventChunk_name_;   //!
   TBranch        *b_TReweightToCVChunk_;   //!
   TBranch        *b_TReweightToCVChunk_chunk_id_;   //!
   TBranch        *b_TReweightToCVChunk_data__fUniqueID;   //!
   TBranch        *b_TReweightToCVChunk_data__fBits;   //!
   TBranch        *b_TReweightToCVChunk_data__radius;   //!
   TBranch        *b_TReweightToCVChunk_data__ppi0;   //!
   TBranch        *b_TReweightToCVChunk_data__nuanceChannel;   //!
   TBranch        *b_TReweightToCVChunk_data__nuType;   //!
   TBranch        *b_TReweightToCVChunk_data__enu;   //!
   TBranch        *b_TReweightToCVChunk_data__parentId;   //!
   TBranch        *b_TReweightToCVChunk_data__pParent;   //!
   TBranch        *b_TReweightToCVChunk_data__xsecweight;   //!
   TBranch        *b_TReweightToCVChunk_data__fluxweight;   //!
   TBranch        *b_TReweightToCVChunk_name_;   //!
   TBranch        *b_TWeightDetailsChunk_;   //!
   TBranch        *b_TWeightDetailsChunk_chunk_id_;   //!
   TBranch        *b_TWeightDetailsChunk_data__fUniqueID;   //!
   TBranch        *b_TWeightDetailsChunk_data__fBits;   //!
   TBranch        *b_TWeightDetailsChunk_data__resangle_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__dirt_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0mom_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__deltamom_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__raddelta_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0coh_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0res_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__nuance_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__multpi0_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__multdelta_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pipflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pimflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__kpflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__kmflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__k0flux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__histo_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__npip_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__npim_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__absorber_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__totalweight;   //!
   TBranch        *b_TWeightDetailsChunk_name_;   //!
   TBranch        *b_TStancuFastChunk_;   //!
   TBranch        *b_TStancuFastChunk_chunk_id_;   //!
   TBranch        *b_TStancuFastChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFastChunk_data__fBits;   //!
   TBranch        *b_TStancuFastChunk_data__IT;   //!
   TBranch        *b_TStancuFastChunk_data__X;   //!
   TBranch        *b_TStancuFastChunk_data__Y;   //!
   TBranch        *b_TStancuFastChunk_data__Z;   //!
   TBranch        *b_TStancuFastChunk_data__UX;   //!
   TBranch        *b_TStancuFastChunk_data__UY;   //!
   TBranch        *b_TStancuFastChunk_data__UZ;   //!
   TBranch        *b_TStancuFastChunk_data__T;   //!
   TBranch        *b_TStancuFastChunk_data__D;   //!
   TBranch        *b_TStancuFastChunk_data__E;   //!
   TBranch        *b_TStancuFastChunk_data__F;   //!
   TBranch        *b_TStancuFastChunk_name_;   //!
   TBranch        *b_TStancuFullChunk_;   //!
   TBranch        *b_TStancuFullChunk_chunk_id_;   //!
   TBranch        *b_TStancuFullChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFullChunk_data__fBits;   //!
   TBranch        *b_TStancuFullChunk_data__IT;   //!
   TBranch        *b_TStancuFullChunk_data__X;   //!
   TBranch        *b_TStancuFullChunk_data__Y;   //!
   TBranch        *b_TStancuFullChunk_data__Z;   //!
   TBranch        *b_TStancuFullChunk_data__UX;   //!
   TBranch        *b_TStancuFullChunk_data__UY;   //!
   TBranch        *b_TStancuFullChunk_data__UZ;   //!
   TBranch        *b_TStancuFullChunk_data__T;   //!
   TBranch        *b_TStancuFullChunk_data__D;   //!
   TBranch        *b_TStancuFullChunk_data__E;   //!
   TBranch        *b_TStancuFullChunk_data__F;   //!
   TBranch        *b_TStancuFullChunk_data__E_mu;   //!
   TBranch        *b_TStancuFullChunk_data__S_tkint;   //!
   TBranch        *b_TStancuFullChunk_data__RdR;   //!
   TBranch        *b_TStancuFullChunk_data__Fqlt05;   //!
   TBranch        *b_TStancuFullChunk_data__Fqlt10;   //!
   TBranch        *b_TStancuFullChunk_data__Xvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Yvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Zvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Rvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Tvtx;   //!
   TBranch        *b_TStancuFullChunk_name_;   //!
   TBranch        *b_TStancuFluxChunk_;   //!
   TBranch        *b_TStancuFluxChunk_chunk_id_;   //!
   TBranch        *b_TStancuFluxChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFluxChunk_data__fBits;   //!
   TBranch        *b_TStancuFluxChunk_data__IT;   //!
   TBranch        *b_TStancuFluxChunk_data__CER;   //!
   TBranch        *b_TStancuFluxChunk_data__SCI;   //!
   TBranch        *b_TStancuFluxChunk_data__F;   //!
   TBranch        *b_TStancuFluxChunk_data__EcerEl;   //!
   TBranch        *b_TStancuFluxChunk_data__EcerMu;   //!
   TBranch        *b_TStancuFluxChunk_name_;   //!
   TBranch        *b_TStancuTrakChunk_;   //!
   TBranch        *b_TStancuTrakChunk_chunk_id_;   //!
   TBranch        *b_TStancuTrakChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuTrakChunk_data__fBits;   //!
   TBranch        *b_TStancuTrakChunk_data__IT;   //!
   TBranch        *b_TStancuTrakChunk_data__TRAK;   //!
   TBranch        *b_TStancuTrakChunk_data__F;   //!
   TBranch        *b_TStancuTrakChunk_name_;   //!
   TBranch        *b_TStancuMuvdChunk_;   //!
   TBranch        *b_TStancuMuvdChunk_chunk_id_;   //!
   TBranch        *b_TStancuMuvdChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuMuvdChunk_data__fBits;   //!
   TBranch        *b_TStancuMuvdChunk_data__IT;   //!
   TBranch        *b_TStancuMuvdChunk_data__X;   //!
   TBranch        *b_TStancuMuvdChunk_data__Y;   //!
   TBranch        *b_TStancuMuvdChunk_data__Z;   //!
   TBranch        *b_TStancuMuvdChunk_data__UX;   //!
   TBranch        *b_TStancuMuvdChunk_data__UY;   //!
   TBranch        *b_TStancuMuvdChunk_data__UZ;   //!
   TBranch        *b_TStancuMuvdChunk_data__T;   //!
   TBranch        *b_TStancuMuvdChunk_data__F;   //!
   TBranch        *b_TStancuMuvdChunk_data__L;   //!
   TBranch        *b_TStancuMuvdChunk_name_;   //!
   TBranch        *b_TStancuPi0Chunk_;   //!
   TBranch        *b_TStancuPi0Chunk_chunk_id_;   //!
   TBranch        *b_TStancuPi0Chunk_data__fUniqueID;   //!
   TBranch        *b_TStancuPi0Chunk_data__fBits;   //!
   TBranch        *b_TStancuPi0Chunk_data__iter;   //!
   TBranch        *b_TStancuPi0Chunk_data__x;   //!
   TBranch        *b_TStancuPi0Chunk_data__y;   //!
   TBranch        *b_TStancuPi0Chunk_data__z;   //!
   TBranch        *b_TStancuPi0Chunk_data__t;   //!
   TBranch        *b_TStancuPi0Chunk_data__llike;   //!
   TBranch        *b_TStancuPi0Chunk_data__mass;   //!
   TBranch        *b_TStancuPi0Chunk_data__darec;   //!
   TBranch        *b_TStancuPi0Chunk_data__fcer;   //!
   TBranch        *b_TStancuPi0Chunk_data__phi1;   //!
   TBranch        *b_TStancuPi0Chunk_data__teta1;   //!
   TBranch        *b_TStancuPi0Chunk_data__phi2;   //!
   TBranch        *b_TStancuPi0Chunk_data__teta2;   //!
   TBranch        *b_TStancuPi0Chunk_data__cer1;   //!
   TBranch        *b_TStancuPi0Chunk_data__sci1;   //!
   TBranch        *b_TStancuPi0Chunk_data__cer2;   //!
   TBranch        *b_TStancuPi0Chunk_data__sci2;   //!
   TBranch        *b_TStancuPi0Chunk_data__srec1;   //!
   TBranch        *b_TStancuPi0Chunk_data__dist1;   //!
   TBranch        *b_TStancuPi0Chunk_data__srec2;   //!
   TBranch        *b_TStancuPi0Chunk_data__dist2;   //!
   TBranch        *b_TStancuPi0Chunk_name_;   //!
   TBranch        *b_TStancuVarsChunk_;   //!
   TBranch        *b_TStancuVarsChunk_chunk_id_;   //!
   TBranch        *b_TStancuVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuVarsChunk_data__fBits;   //!
   TBranch        *b_TStancuVarsChunk_data__nchunks;   //!
   TBranch        *b_TStancuVarsChunk_data__chunknr;   //!
   TBranch        *b_TStancuVarsChunk_data__energy;   //!
   TBranch        *b_TStancuVarsChunk_data__thits;   //!
   TBranch        *b_TStancuVarsChunk_data__vhits;   //!
   TBranch        *b_TStancuVarsChunk_data__d;   //!
   TBranch        *b_TStancuVarsChunk_data__rdr;   //!
   TBranch        *b_TStancuVarsChunk_data__stint;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rawtsig;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rawtavg;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_trak;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlb45;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlb24;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlm22;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlsci;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qtmr4;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qtmr3;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_fthvp;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_fthvl;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rslvl53;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rslvl64;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_mass;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_angle;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_trak;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlcer;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_rslvl53;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_rslvl64;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_scratio;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qqover;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_fmdiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qldiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tldiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_fcer;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qtmr0;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_dcbeam;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qtmr56;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlb245;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_dist1;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh11p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh9p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh1t5p1518;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh1p18;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh13p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh11t14;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrpp;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrmm;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr0p5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr4p5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr6p7;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrc2;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr17p18;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr18p19;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr16;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr13;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr16;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr14;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p9;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit3p6;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p5;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p8;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p10;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph13p14;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph14p15;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph16;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph11p15;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph15p17;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph15p16;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph16p17;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlt05;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlt10;   //!
   TBranch        *b_TStancuVarsChunk_data__fthjp;   //!
   TBranch        *b_TStancuVarsChunk_data__fthjl;   //!
   TBranch        *b_TStancuVarsChunk_data__fthvp;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk014p15;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk08p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk012p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk010p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk011p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk012p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk013p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk016p17;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec6t14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t20;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t16;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec1t10;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec6t10;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t18;   //!
   TBranch        *b_TStancuVarsChunk_data__fn018m14;   //!
   TBranch        *b_TStancuVarsChunk_data__fn014p16;   //!
   TBranch        *b_TStancuVarsChunk_data__fn010p16;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn013;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn011;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn010p13;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn010p14;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn011p14;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl9m1ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl3p9ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl7m4ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl1p8ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl8p9ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__qlph16m12;   //!
   TBranch        *b_TStancuVarsChunk_data__qlph16m8;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql4;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02ql3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql1;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01tl2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02tl4;   //!
   TBranch        *b_TStancuVarsChunk_data__fnh1t5p1518;   //!
   TBranch        *b_TStancuVarsChunk_data__fnh11t14;   //!
   TBranch        *b_TStancuVarsChunk_data__ftq4;   //!
   TBranch        *b_TStancuVarsChunk_data__frsq14p20;   //!
   TBranch        *b_TStancuVarsChunk_data__frqlk02p16;   //!
   TBranch        *b_TStancuVarsChunk_data__trakove;   //!
   TBranch        *b_TStancuVarsChunk_data__fcertflx;   //!
   TBranch        *b_TStancuVarsChunk_data__srec1;   //!
   TBranch        *b_TStancuVarsChunk_data__nqovovthit;   //!
   TBranch        *b_TStancuVarsChunk_data__qcer2ovqtot;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frqqov;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__frnqcer1;   //!
   TBranch        *b_TStancuVarsChunk_data__cerfrdiff;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs7m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit9m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frchia10m4;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos4m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__chirsqrec;   //!
   TBranch        *b_TStancuVarsChunk_data__ffast;   //!
   TBranch        *b_TStancuVarsChunk_data__ffulmffas;   //!
   TBranch        *b_TStancuVarsChunk_data__fflux;   //!
   TBranch        *b_TStancuVarsChunk_data__frcer1;   //!
   TBranch        *b_TStancuVarsChunk_data__frcer2;   //!
   TBranch        *b_TStancuVarsChunk_data__frnqcer1m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frqqcer1m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcer1mov;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02ql4;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02fthl;   //!
   TBranch        *b_TStancuVarsChunk_data__srec2;   //!
   TBranch        *b_TStancuVarsChunk_data__dist2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m4;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m6;   //!
   TBranch        *b_TStancuVarsChunk_data__chiqrec;   //!
   TBranch        *b_TStancuVarsChunk_data__tlfwd;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos6;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos5m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos10m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos10m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m4;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos10m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos7;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos10;   //!
   TBranch        *b_TStancuVarsChunk_data__qlkcos3;   //!
   TBranch        *b_TStancuVarsChunk_data__qlkcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__qlphcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos5;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos6;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos5;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos5m1;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos6m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m4;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m1;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos10m9;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrsnb7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhnb8m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhrsnb5;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs8m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit3m2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02tl3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01tl3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr9m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr4m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qcer1ovqtot;   //!
   TBranch        *b_TStancuVarsChunk_data__fscitflx;   //!
   TBranch        *b_TStancuVarsChunk_data__abscerasy;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos9m8;   //!
   TBranch        *b_TStancuVarsChunk_name_;   //!
   TBranch        *b_TStancuVarsTwoChunk_;   //!
   TBranch        *b_TStancuVarsTwoChunk_chunk_id_;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__fBits;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_n000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_chia;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qllk000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qllkhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_tllk;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_n000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_name_;   //!
   TBranch        *b_TVetoLinkingChunk_;   //!
   TBranch        *b_TVetoLinkingChunk_chunk_id_;   //!
   TBranch        *b_TVetoLinkingChunk_data__fUniqueID;   //!
   TBranch        *b_TVetoLinkingChunk_data__fBits;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnDl;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExDl;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnSigma;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExSigma;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnDt;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExDt;   //!
   TBranch        *b_TVetoLinkingChunk_data__NC;   //!
   TBranch        *b_TVetoLinkingChunk_data__Enter;   //!
   TBranch        *b_TVetoLinkingChunk_data__Exit;   //!
   TBranch        *b_TVetoLinkingChunk_name_;   //!
   TBranch        *b_TCalibrateEnergyChunk_;   //!
   TBranch        *b_TCalibrateEnergyChunk_chunk_id_;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__fBits;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Tlep_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Tlep_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Qsq_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Qsq_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__EnuQE_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__EnuQE_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_name_;   //!
   TBranch        *b_TInteractionPointChunk_;   //!
   TBranch        *b_TInteractionPointChunk_chunk_id_;   //!
   TBranch        *b_TInteractionPointChunk_data__fUniqueID;   //!
   TBranch        *b_TInteractionPointChunk_data__fBits;   //!
   TBranch        *b_TInteractionPointChunk_data__X_e;   //!
   TBranch        *b_TInteractionPointChunk_data__Y_e;   //!
   TBranch        *b_TInteractionPointChunk_data__Z_e;   //!
   TBranch        *b_TInteractionPointChunk_data__T_e;   //!
   TBranch        *b_TInteractionPointChunk_data__drive_e;   //!
   TBranch        *b_TInteractionPointChunk_data__tdrive_e;   //!
   TBranch        *b_TInteractionPointChunk_data__X_m;   //!
   TBranch        *b_TInteractionPointChunk_data__Y_m;   //!
   TBranch        *b_TInteractionPointChunk_data__Z_m;   //!
   TBranch        *b_TInteractionPointChunk_data__T_m;   //!
   TBranch        *b_TInteractionPointChunk_data__drive_m;   //!
   TBranch        *b_TInteractionPointChunk_data__tdrive_m;   //!
   TBranch        *b_TInteractionPointChunk_name_;   //!
   TBranch        *b_TOneTrackChunk_;   //!
   TBranch        *b_TOneTrackChunk_chunk_id_;   //!
   TBranch        *b_TOneTrackChunk_data__fUniqueID;   //!
   TBranch        *b_TOneTrackChunk_data__fBits;   //!
   TBranch        *b_TOneTrackChunk_data__iterations;   //!
   TBranch        *b_TOneTrackChunk_data__trackType;   //!
   TBranch        *b_TOneTrackChunk_data__X;   //!
   TBranch        *b_TOneTrackChunk_data__Y;   //!
   TBranch        *b_TOneTrackChunk_data__Z;   //!
   TBranch        *b_TOneTrackChunk_data__UX;   //!
   TBranch        *b_TOneTrackChunk_data__UY;   //!
   TBranch        *b_TOneTrackChunk_data__UZ;   //!
   TBranch        *b_TOneTrackChunk_data__T;   //!
   TBranch        *b_TOneTrackChunk_data__E;   //!
   TBranch        *b_TOneTrackChunk_data__distToMeanCer;   //!
   TBranch        *b_TOneTrackChunk_data__fluxScale;   //!
   TBranch        *b_TOneTrackChunk_data__relativeSci;   //!
   TBranch        *b_TOneTrackChunk_data__F;   //!
   TBranch        *b_TOneTrackChunk_name_;   //!
   TBranch        *b_TRoeFullChunk_;   //!
   TBranch        *b_TRoeFullChunk_chunk_id_;   //!
   TBranch        *b_TRoeFullChunk_data__fUniqueID;   //!
   TBranch        *b_TRoeFullChunk_data__fBits;   //!
   TBranch        *b_TRoeFullChunk_data__rvec;   //!
   TBranch        *b_TRoeFullChunk_data__time;   //!
   TBranch        *b_TRoeFullChunk_data__dircos;   //!
   TBranch        *b_TRoeFullChunk_data__length;   //!
   TBranch        *b_TRoeFullChunk_data__rvec_v;   //!
   TBranch        *b_TRoeFullChunk_data__time_v;   //!
   TBranch        *b_TRoeFullChunk_data__charge_infit;   //!
   TBranch        *b_TRoeFullChunk_data__charge_wgt_infit;   //!
   TBranch        *b_TRoeFullChunk_data__chisq_a_infit;   //!
   TBranch        *b_TRoeFullChunk_data__chisq_r_infit;   //!
   TBranch        *b_TRoeFullChunk_data__weight_total;   //!
   TBranch        *b_TRoeFullChunk_data__chisq_avg;   //!
   TBranch        *b_TRoeFullChunk_data__rtowall;   //!
   TBranch        *b_TRoeFullChunk_data__Energy;   //!
   TBranch        *b_TRoeFullChunk_data__numhits_infit;   //!
   TBranch        *b_TRoeFullChunk_data__errors;   //!
   TBranch        *b_TRoeFullChunk_data__EnergyMU;   //!
   TBranch        *b_TRoeFullChunk_data__lengthMU;   //!
   TBranch        *b_TRoeFullChunk_data__chg_length_nue;   //!
   TBranch        *b_TRoeFullChunk_data__numlowt_nue;   //!
   TBranch        *b_TRoeFullChunk_name_;   //!
   TBranch        *b_TFittersChunk_;   //!
   TBranch        *b_TFittersChunk_chunk_id_;   //!
   TBranch        *b_TFittersChunk_data__fUniqueID;   //!
   TBranch        *b_TFittersChunk_data__fBits;   //!
   TBranch        *b_TFittersChunk_data__id;   //!
   TBranch        *b_TFittersChunk_data__x;   //!
   TBranch        *b_TFittersChunk_data__y;   //!
   TBranch        *b_TFittersChunk_data__z;   //!
   TBranch        *b_TFittersChunk_data__t;   //!
   TBranch        *b_TFittersChunk_data__ux;   //!
   TBranch        *b_TFittersChunk_data__uy;   //!
   TBranch        *b_TFittersChunk_data__uz;   //!
   TBranch        *b_TFittersChunk_data__r3;   //!
   TBranch        *b_TFittersChunk_data__e;   //!
   TBranch        *b_TFittersChunk_data__trklen;   //!
   TBranch        *b_TFittersChunk_data__emu;   //!
   TBranch        *b_TFittersChunk_data__trklenmu;   //!
   TBranch        *b_TFittersChunk_data__goodfit;   //!
   TBranch        *b_TFittersChunk_data__errors;   //!
   TBranch        *b_TFittersChunk_name_;   //!
   TBranch        *b_TYangVarChunk_;   //!
   TBranch        *b_TYangVarChunk_chunk_id_;   //!
   TBranch        *b_TYangVarChunk_data__fUniqueID;   //!
   TBranch        *b_TYangVarChunk_data__fBits;   //!
   TBranch        *b_TYangVarChunk_data__cx;   //!
   TBranch        *b_TYangVarChunk_data__cy;   //!
   TBranch        *b_TYangVarChunk_data__cz;   //!
   TBranch        *b_TYangVarChunk_data__ux;   //!
   TBranch        *b_TYangVarChunk_data__uy;   //!
   TBranch        *b_TYangVarChunk_data__uz;   //!
   TBranch        *b_TYangVarChunk_data__time;   //!
   TBranch        *b_TYangVarChunk_data__tot_hit;   //!
   TBranch        *b_TYangVarChunk_data__tot_q;   //!
   TBranch        *b_TYangVarChunk_data__length;   //!
   TBranch        *b_TYangVarChunk_data__pid_hit;   //!
   TBranch        *b_TYangVarChunk_data__pid_charge;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtime;   //!
   TBranch        *b_TYangVarChunk_data__pid_tchi;   //!
   TBranch        *b_TYangVarChunk_data__pid_qtchi;   //!
   TBranch        *b_TYangVarChunk_data__pid_hitrs;   //!
   TBranch        *b_TYangVarChunk_data__pid_qrs;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtimers;   //!
   TBranch        *b_TYangVarChunk_data__pid_tchirs;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtime_hit;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtime_charge;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtime_tchi;   //!
   TBranch        *b_TYangVarChunk_data__pid_dtime_qtchi;   //!
   TBranch        *b_TYangVarChunk_data__pid_chi2;   //!
   TBranch        *b_TYangVarChunk_name_;   //!
   TBranch        *b_TPFitterChunk_;   //!
   TBranch        *b_TPFitterChunk_chunk_id_;   //!
   TBranch        *b_TPFitterChunk_data__fUniqueID;   //!
   TBranch        *b_TPFitterChunk_data__fBits;   //!
   TBranch        *b_TPFitterChunk_data__mu_x;   //!
   TBranch        *b_TPFitterChunk_data__mu_y;   //!
   TBranch        *b_TPFitterChunk_data__mu_z;   //!
   TBranch        *b_TPFitterChunk_data__mu_ux;   //!
   TBranch        *b_TPFitterChunk_data__mu_uy;   //!
   TBranch        *b_TPFitterChunk_data__mu_uz;   //!
   TBranch        *b_TPFitterChunk_data__mu_T;   //!
   TBranch        *b_TPFitterChunk_data__mu_E;   //!
   TBranch        *b_TPFitterChunk_data__mu_distToMeanCer;   //!
   TBranch        *b_TPFitterChunk_data__mu_F;   //!
   TBranch        *b_TPFitterChunk_data__e_x;   //!
   TBranch        *b_TPFitterChunk_data__e_y;   //!
   TBranch        *b_TPFitterChunk_data__e_z;   //!
   TBranch        *b_TPFitterChunk_data__e_ux;   //!
   TBranch        *b_TPFitterChunk_data__e_uy;   //!
   TBranch        *b_TPFitterChunk_data__e_uz;   //!
   TBranch        *b_TPFitterChunk_data__e_T;   //!
   TBranch        *b_TPFitterChunk_data__e_E;   //!
   TBranch        *b_TPFitterChunk_data__e_distToMeanCer;   //!
   TBranch        *b_TPFitterChunk_data__e_F;   //!
   TBranch        *b_TPFitterChunk_data__pi_T;   //!
   TBranch        *b_TPFitterChunk_data__pi_M;   //!
   TBranch        *b_TPFitterChunk_data__pi_Cos0p;   //!
   TBranch        *b_TPFitterChunk_data__pi_E1;   //!
   TBranch        *b_TPFitterChunk_data__pi_E2;   //!
   TBranch        *b_TPFitterChunk_data__pi_distToMeanCer1;   //!
   TBranch        *b_TPFitterChunk_data__pi_distToMeanCer2;   //!
   TBranch        *b_TPFitterChunk_data__pi_S1;   //!
   TBranch        *b_TPFitterChunk_data__pi_S2;   //!
   TBranch        *b_TPFitterChunk_data__pi_Fqqq;   //!
   TBranch        *b_TPFitterChunk_data__pi_Fttt;   //!
   TBranch        *b_TPFitterChunk_data__pi_F;   //!
   TBranch        *b_TPFitterChunk_data__pifix_T;   //!
   TBranch        *b_TPFitterChunk_data__pifix_M;   //!
   TBranch        *b_TPFitterChunk_data__pifix_Cos0p;   //!
   TBranch        *b_TPFitterChunk_data__pifix_E1;   //!
   TBranch        *b_TPFitterChunk_data__pifix_E2;   //!
   TBranch        *b_TPFitterChunk_data__pifix_distToMeanCer1;   //!
   TBranch        *b_TPFitterChunk_data__pifix_distToMeanCer2;   //!
   TBranch        *b_TPFitterChunk_data__pifix_S1;   //!
   TBranch        *b_TPFitterChunk_data__pifix_S2;   //!
   TBranch        *b_TPFitterChunk_data__pifix_Fqqq;   //!
   TBranch        *b_TPFitterChunk_data__pifix_Fttt;   //!
   TBranch        *b_TPFitterChunk_data__pifix_F;   //!
   TBranch        *b_TPFitterChunk_name_;   //!
   TBranch        *b_TRoePiChunk_;   //!
   TBranch        *b_TRoePiChunk_chunk_id_;   //!
   TBranch        *b_TRoePiChunk_data__fUniqueID;   //!
   TBranch        *b_TRoePiChunk_data__fBits;   //!
   TBranch        *b_TRoePiChunk_data__rvec_v;   //!
   TBranch        *b_TRoePiChunk_data__time_v;   //!
   TBranch        *b_TRoePiChunk_data__shiftg1;   //!
   TBranch        *b_TRoePiChunk_data__shiftg2;   //!
   TBranch        *b_TRoePiChunk_data__dircosg1;   //!
   TBranch        *b_TRoePiChunk_data__dircosg2;   //!
   TBranch        *b_TRoePiChunk_data__chge_g1;   //!
   TBranch        *b_TRoePiChunk_data__chge_g2;   //!
   TBranch        *b_TRoePiChunk_data__chgew_g1;   //!
   TBranch        *b_TRoePiChunk_data__chgew_g2;   //!
   TBranch        *b_TRoePiChunk_data__Eg1;   //!
   TBranch        *b_TRoePiChunk_data__Eg2;   //!
   TBranch        *b_TRoePiChunk_data__pi0mass;   //!
   TBranch        *b_TRoePiChunk_data__errors;   //!
   TBranch        *b_TRoePiChunk_data__cosang1;   //!
   TBranch        *b_TRoePiChunk_name_;   //!
   TBranch        *b_TFittersPi0Chunk_;   //!
   TBranch        *b_TFittersPi0Chunk_chunk_id_;   //!
   TBranch        *b_TFittersPi0Chunk_data__fUniqueID;   //!
   TBranch        *b_TFittersPi0Chunk_data__fBits;   //!
   TBranch        *b_TFittersPi0Chunk_data__id;   //!
   TBranch        *b_TFittersPi0Chunk_data__x;   //!
   TBranch        *b_TFittersPi0Chunk_data__y;   //!
   TBranch        *b_TFittersPi0Chunk_data__z;   //!
   TBranch        *b_TFittersPi0Chunk_data__t;   //!
   TBranch        *b_TFittersPi0Chunk_data__mass;   //!
   TBranch        *b_TFittersPi0Chunk_data__angle;   //!
   TBranch        *b_TFittersPi0Chunk_data__eg1;   //!
   TBranch        *b_TFittersPi0Chunk_data__eg2;   //!
   TBranch        *b_TFittersPi0Chunk_data__shift1;   //!
   TBranch        *b_TFittersPi0Chunk_data__shift2;   //!
   TBranch        *b_TFittersPi0Chunk_data__ux1;   //!
   TBranch        *b_TFittersPi0Chunk_data__uy1;   //!
   TBranch        *b_TFittersPi0Chunk_data__uz1;   //!
   TBranch        *b_TFittersPi0Chunk_data__ux2;   //!
   TBranch        *b_TFittersPi0Chunk_data__uy2;   //!
   TBranch        *b_TFittersPi0Chunk_data__uz2;   //!
   TBranch        *b_TFittersPi0Chunk_data__qgamma1;   //!
   TBranch        *b_TFittersPi0Chunk_data__qgamma2;   //!
   TBranch        *b_TFittersPi0Chunk_data__errors;   //!
   TBranch        *b_TFittersPi0Chunk_data__cosang1;   //!
   TBranch        *b_TFittersPi0Chunk_data__Newpi;   //!
   TBranch        *b_TFittersPi0Chunk_data__chg_length_g1;   //!
   TBranch        *b_TFittersPi0Chunk_data__chg_length_g2;   //!
   TBranch        *b_TFittersPi0Chunk_data__numlowt_g1;   //!
   TBranch        *b_TFittersPi0Chunk_data__numlowt_g2;   //!
   TBranch        *b_TFittersPi0Chunk_name_;   //!
   TBranch        *b_TParticleIDChunk_;   //!
   TBranch        *b_TParticleIDChunk_chunk_id_;   //!
   TBranch        *b_TParticleIDChunk_data__fUniqueID;   //!
   TBranch        *b_TParticleIDChunk_data__fBits;   //!
   TBranch        *b_TParticleIDChunk_data__NUM_PAR;   //!
   TBranch        *b_TParticleIDChunk_data__PARAM;   //!
   TBranch        *b_TParticleIDChunk_data__NUM_OUT;   //!
   TBranch        *b_TParticleIDChunk_data__OUTPUT;   //!
   TBranch        *b_TParticleIDChunk_name_;   //!
   TBranch        *b_TTwoTrackChunk_;   //!
   TBranch        *b_TTwoTrackChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackChunk_data__trackType1;   //!
   TBranch        *b_TTwoTrackChunk_data__trackType2;   //!
   TBranch        *b_TTwoTrackChunk_data__X;   //!
   TBranch        *b_TTwoTrackChunk_data__Y;   //!
   TBranch        *b_TTwoTrackChunk_data__Z;   //!
   TBranch        *b_TTwoTrackChunk_data__T;   //!
   TBranch        *b_TTwoTrackChunk_data__M;   //!
   TBranch        *b_TTwoTrackChunk_data__CosOp;   //!
   TBranch        *b_TTwoTrackChunk_data__UX1;   //!
   TBranch        *b_TTwoTrackChunk_data__UY1;   //!
   TBranch        *b_TTwoTrackChunk_data__UZ1;   //!
   TBranch        *b_TTwoTrackChunk_data__E1;   //!
   TBranch        *b_TTwoTrackChunk_data__distToMeanCer1;   //!
   TBranch        *b_TTwoTrackChunk_data__S1;   //!
   TBranch        *b_TTwoTrackChunk_data__UX2;   //!
   TBranch        *b_TTwoTrackChunk_data__UY2;   //!
   TBranch        *b_TTwoTrackChunk_data__UZ2;   //!
   TBranch        *b_TTwoTrackChunk_data__E2;   //!
   TBranch        *b_TTwoTrackChunk_data__distToMeanCer2;   //!
   TBranch        *b_TTwoTrackChunk_data__S2;   //!
   TBranch        *b_TTwoTrackChunk_data__fluxScale;   //!
   TBranch        *b_TTwoTrackChunk_data__relativeSci;   //!
   TBranch        *b_TTwoTrackChunk_data__Fqqq;   //!
   TBranch        *b_TTwoTrackChunk_data__Fttt;   //!
   TBranch        *b_TTwoTrackChunk_data__F;   //!
   TBranch        *b_TTwoTrackChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackChunk_name_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__OneTrack_E;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__OneTrack_F;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__end_F;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__cut_DeltaF;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__end_DeltaF;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fitWasAborted;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__enteredMainFit;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__finalStartPointer;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__finalStartOrder;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_name_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__numStarts;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPointer;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startXpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startYpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startZpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startTime;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startE1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startE2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startS1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPhi1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startThet1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startS2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPhi2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startThet2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startF;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endXpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endYpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endZpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endTime;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endE1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endE2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endS1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endPhi1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endThet1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endS2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endPhi2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endThet2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endF;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__skipped;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fitWasAborted;   //!
   TBranch        *b_TTwoTrackInternalsChunk_name_;   //!
   TBranch        *b_TProtonChunk_;   //!
   TBranch        *b_TProtonChunk_chunk_id_;   //!
   TBranch        *b_TProtonChunk_data__fUniqueID;   //!
   TBranch        *b_TProtonChunk_data__fBits;   //!
   TBranch        *b_TProtonChunk_data__E;   //!
   TBranch        *b_TProtonChunk_data__X;   //!
   TBranch        *b_TProtonChunk_data__Y;   //!
   TBranch        *b_TProtonChunk_data__Z;   //!
   TBranch        *b_TProtonChunk_data__T;   //!
   TBranch        *b_TProtonChunk_data__UX;   //!
   TBranch        *b_TProtonChunk_data__UY;   //!
   TBranch        *b_TProtonChunk_data__UZ;   //!
   TBranch        *b_TProtonChunk_data__TLLK;   //!
   TBranch        *b_TProtonChunk_data__QLLK;   //!
   TBranch        *b_TProtonChunk_name_;   //!
   TBranch        *b_TNeutronChunk_;   //!
   TBranch        *b_TNeutronChunk_chunk_id_;   //!
   TBranch        *b_TNeutronChunk_data__fUniqueID;   //!
   TBranch        *b_TNeutronChunk_data__fBits;   //!
   TBranch        *b_TNeutronChunk_data__E;   //!
   TBranch        *b_TNeutronChunk_data__X;   //!
   TBranch        *b_TNeutronChunk_data__Y;   //!
   TBranch        *b_TNeutronChunk_data__Z;   //!
   TBranch        *b_TNeutronChunk_data__T;   //!
   TBranch        *b_TNeutronChunk_data__TLLK;   //!
   TBranch        *b_TNeutronChunk_data__QLLK;   //!
   TBranch        *b_TNeutronChunk_name_;   //!

   commonChunk(TTree *tree=0);
   virtual ~commonChunk();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

