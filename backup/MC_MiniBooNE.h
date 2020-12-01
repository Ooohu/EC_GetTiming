//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Feb  9 11:37:42 2017 by ROOT version 5.32/00
// from TTree MiniBooNE/Created in MC_nue_ntuple_may07.root
// found on file: MC_nue_ntuple_may07.root
//////////////////////////////////////////////////////////

#ifndef MC_MiniBooNE_h
#define MC_MiniBooNE_h
#include <iostream>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <TClonesArray.h>
#include <TObject.h>

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxTBPMOnTargetChunk = 1 ;
const Int_t kMaxTBPMOnTargetChunk_chunk_id = 1 ;
const Int_t kMaxTBPMOnTargetChunk_name = 1 ;
const Int_t kMaxTCalibrateEnergyChunk = 1 ;
const Int_t kMaxTCalibrateEnergyChunk_chunk_id = 1 ;
const Int_t kMaxTCalibrateEnergyChunk_name = 1 ;
const Int_t kMaxTCalibratedDataChunk = 3 ;
const Int_t kMaxTCalibratedDataChunk_chunk_id = 3 ;
const Int_t kMaxTCalibratedDataChunk_name = 3 ;
const Int_t kMaxTCalibratedIRM1Chunk = 1 ;
const Int_t kMaxTCalibratedIRM1Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM1Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM2Chunk = 1 ;
const Int_t kMaxTCalibratedIRM2Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM2Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM3Chunk = 1 ;
const Int_t kMaxTCalibratedIRM3Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM3Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM4Chunk = 1 ;
const Int_t kMaxTCalibratedIRM4Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM4Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM5Chunk = 1 ;
const Int_t kMaxTCalibratedIRM5Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM5Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM6Chunk = 1 ;
const Int_t kMaxTCalibratedIRM6Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM6Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRM7Chunk = 1 ;
const Int_t kMaxTCalibratedIRM7Chunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRM7Chunk_name = 1 ;
const Int_t kMaxTCalibratedIRMAChunk = 1 ;
const Int_t kMaxTCalibratedIRMAChunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedIRMAChunk_name = 1 ;
const Int_t kMaxTCalibratedMWRChunk = 8 ;
const Int_t kMaxTCalibratedMWRChunk_chunk_id = 8 ;
const Int_t kMaxTCalibratedMWRChunk_name = 8 ;
const Int_t kMaxTCalibratedMuMonChunk = 1 ;
const Int_t kMaxTCalibratedMuMonChunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedMuMonChunk_name = 1 ;
const Int_t kMaxTCalibratedToroidsChunk = 1 ;
const Int_t kMaxTCalibratedToroidsChunk_chunk_id = 1 ;
const Int_t kMaxTCalibratedToroidsChunk_name = 1 ;
const Int_t kMaxTConnectTheHitsChunk = 2 ;
const Int_t kMaxTConnectTheHitsChunk_chunk_id = 2 ;
const Int_t kMaxTConnectTheHitsChunk_name = 2 ;
const Int_t kMaxTCrate13Chunk = 2 ;
const Int_t kMaxTCrate13Chunk_chunk_id = 2 ;
const Int_t kMaxTCrate13Chunk_name = 2 ;
const Int_t kMaxTDAQbitFieldsChunk = 1 ;
const Int_t kMaxTDAQbitFieldsChunk_chunk_id = 1 ;
const Int_t kMaxTDAQbitFieldsChunk_name = 1 ;
const Int_t kMaxTFittersChunk = 2 ;
const Int_t kMaxTFittersChunk_chunk_id = 2 ;
const Int_t kMaxTFittersChunk_name = 2 ;
const Int_t kMaxTFittersPi0Chunk = 2 ;
const Int_t kMaxTFittersPi0Chunk_chunk_id = 2 ;
const Int_t kMaxTFittersPi0Chunk_name = 2 ;
const Int_t kMaxTGlobalHeaderChunk = 4 ;
const Int_t kMaxTGlobalHeaderChunk_chunk_id = 4 ;
const Int_t kMaxTGlobalHeaderChunk_name = 4 ;
const Int_t kMaxTGlobalTankHeaderChunk = 2 ;
const Int_t kMaxTGlobalTankHeaderChunk_chunk_id = 2 ;
const Int_t kMaxTGlobalTankHeaderChunk_name = 2 ;
const Int_t kMaxTHistory = 482 ;
const Int_t kMaxTHistory_algo_inst = 482 ;
const Int_t kMaxTHistory_algo_name = 482 ;
const Int_t kMaxTHistory_chunk_name = 482 ;
const Int_t kMaxTHistory_chunkid = 482 ;
const Int_t kMaxTHistory_database = 482 ;
const Int_t kMaxTHistory_ext_name = 482 ;
const Int_t kMaxTHistory_inst_num = 482 ;
const Int_t kMaxTHistory_node = 482 ;
const Int_t kMaxTHistory_parents = 482 ;
const Int_t kMaxTHistory_rcpid = 482 ;
const Int_t kMaxTHistory_tags = 482 ;
const Int_t kMaxTHistory_timestamp = 482 ;
const Int_t kMaxTHistory_version = 482 ;
const Int_t kMaxTInstanceCountChunk = 1 ;
const Int_t kMaxTInstanceCountChunk_chunk_id = 1 ;
const Int_t kMaxTInstanceCountChunk_name = 1 ;
const Int_t kMaxTInteractionPointChunk = 1 ;
const Int_t kMaxTInteractionPointChunk_chunk_id = 1 ;
const Int_t kMaxTInteractionPointChunk_name = 1 ;
const Int_t kMaxTMCHitMatchChunk = 1 ;
const Int_t kMaxTMCHitMatchChunk_chunk_id = 1 ;
const Int_t kMaxTMCHitMatchChunk_name = 1 ;
const Int_t kMaxTMCRawEventChunk = 1 ;
const Int_t kMaxTMCRawEventChunk_chunk_id = 1 ;
const Int_t kMaxTMCRawEventChunk_name = 1 ;
const Int_t kMaxTMergePerformanceChunk = 1 ;
const Int_t kMaxTMergePerformanceChunk_chunk_id = 1 ;
const Int_t kMaxTMergePerformanceChunk_name = 1 ;
const Int_t kMaxTMonteCarloBEAMChunk = 1 ;
const Int_t kMaxTMonteCarloBEAMChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloBEAMChunk_name = 1 ;
const Int_t kMaxTMonteCarloEVNTChunk = 1 ;
const Int_t kMaxTMonteCarloEVNTChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloEVNTChunk_name = 1 ;
const Int_t kMaxTMonteCarloINVIChunk = 1 ;
const Int_t kMaxTMonteCarloINVIChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloINVIChunk_name = 1 ;
const Int_t kMaxTMonteCarloMUTRChunk = 1 ;
const Int_t kMaxTMonteCarloMUTRChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloMUTRChunk_name = 1 ;
const Int_t kMaxTMonteCarloNUANChunk = 1 ;
const Int_t kMaxTMonteCarloNUANChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloNUANChunk_name = 1 ;
const Int_t kMaxTMonteCarloVETOChunk = 1 ;
const Int_t kMaxTMonteCarloVETOChunk_chunk_id = 1 ;
const Int_t kMaxTMonteCarloVETOChunk_name = 1 ;
const Int_t kMaxTNCELCutsChunk = 1 ;
const Int_t kMaxTNCELCutsChunk_chunk_id = 1 ;
const Int_t kMaxTNCELCutsChunk_name = 1 ;
const Int_t kMaxTNeutronChunk = 1 ;
const Int_t kMaxTNeutronChunk_chunk_id = 1 ;
const Int_t kMaxTNeutronChunk_name = 1 ;
const Int_t kMaxTNewProtonChunk = 1 ;
const Int_t kMaxTNewProtonChunk_chunk_id = 1 ;
const Int_t kMaxTNewProtonChunk_name = 1 ;
const Int_t kMaxTOneTrackChunk = 3 ;
const Int_t kMaxTOneTrackChunk_chunk_id = 3 ;
const Int_t kMaxTOneTrackChunk_name = 3 ;
const Int_t kMaxTPFitterChunk = 2 ;
const Int_t kMaxTPFitterChunk_chunk_id = 2 ;
const Int_t kMaxTPFitterChunk_name = 2 ;
const Int_t kMaxTParticleIDChunk = 107 ;
const Int_t kMaxTParticleIDChunk_chunk_id = 107 ;
const Int_t kMaxTParticleIDChunk_name = 107 ;
const Int_t kMaxTProtonChunk = 1 ;
const Int_t kMaxTProtonChunk_chunk_id = 1 ;
const Int_t kMaxTProtonChunk_name = 1 ;
const Int_t kMaxTProtonsOnTargetChunk = 1 ;
const Int_t kMaxTProtonsOnTargetChunk_chunk_id = 1 ;
const Int_t kMaxTProtonsOnTargetChunk_name = 1 ;
const Int_t kMaxTRWMAnalysisChunk = 1 ;
const Int_t kMaxTRWMAnalysisChunk_chunk_id = 1 ;
const Int_t kMaxTRWMAnalysisChunk_name = 1 ;
const Int_t kMaxTReweightToCVChunk = 1 ;
const Int_t kMaxTReweightToCVChunk_chunk_id = 1 ;
const Int_t kMaxTReweightToCVChunk_name = 1 ;
const Int_t kMaxTRoeFullChunk = 2 ;
const Int_t kMaxTRoeFullChunk_chunk_id = 2 ;
const Int_t kMaxTRoeFullChunk_name = 2 ;
const Int_t kMaxTRoePiChunk = 2 ;
const Int_t kMaxTRoePiChunk_chunk_id = 2 ;
const Int_t kMaxTRoePiChunk_name = 2 ;
const Int_t kMaxTSplitEventChunk = 2 ;
const Int_t kMaxTSplitEventChunk_chunk_id = 2 ;
const Int_t kMaxTSplitEventChunk_name = 2 ;
const Int_t kMaxTStancuFastChunk = 2 ;
const Int_t kMaxTStancuFastChunk_chunk_id = 2 ;
const Int_t kMaxTStancuFastChunk_name = 2 ;
const Int_t kMaxTStancuFluxChunk = 2 ;
const Int_t kMaxTStancuFluxChunk_chunk_id = 2 ;
const Int_t kMaxTStancuFluxChunk_name = 2 ;
const Int_t kMaxTStancuFullChunk = 2 ;
const Int_t kMaxTStancuFullChunk_chunk_id = 2 ;
const Int_t kMaxTStancuFullChunk_name = 2 ;
const Int_t kMaxTStancuMuvdChunk = 2 ;
const Int_t kMaxTStancuMuvdChunk_chunk_id = 2 ;
const Int_t kMaxTStancuMuvdChunk_name = 2 ;
const Int_t kMaxTStancuPi0Chunk = 2 ;
const Int_t kMaxTStancuPi0Chunk_chunk_id = 2 ;
const Int_t kMaxTStancuPi0Chunk_name = 2 ;
const Int_t kMaxTStancuTrakChunk = 2 ;
const Int_t kMaxTStancuTrakChunk_chunk_id = 2 ;
const Int_t kMaxTStancuTrakChunk_name = 2 ;
const Int_t kMaxTStancuVarsChunk = 2 ;
const Int_t kMaxTStancuVarsChunk_chunk_id = 2 ;
const Int_t kMaxTStancuVarsChunk_name = 2 ;
const Int_t kMaxTStancuVarsTwoChunk = 2 ;
const Int_t kMaxTStancuVarsTwoChunk_chunk_id = 2 ;
const Int_t kMaxTStancuVarsTwoChunk_name = 2 ;
const Int_t kMaxTTinyChunk = 1 ;
const Int_t kMaxTTinyChunk_chunk_id = 1 ;
const Int_t kMaxTTinyChunk_name = 1 ;
const Int_t kMaxTTriggerActivityChunk = 1 ;
const Int_t kMaxTTriggerActivityChunk_chunk_id = 1 ;
const Int_t kMaxTTriggerActivityChunk_name = 1 ;
const Int_t kMaxTTwoTrackChunk = 2 ;
const Int_t kMaxTTwoTrackChunk_chunk_id = 2 ;
const Int_t kMaxTTwoTrackChunk_name = 2 ;
const Int_t kMaxTTwoTrackEndConditionsChunk = 2 ;
const Int_t kMaxTTwoTrackEndConditionsChunk_chunk_id = 2 ;
const Int_t kMaxTTwoTrackEndConditionsChunk_name = 2 ;
const Int_t kMaxTTwoTrackInternalsChunk = 2 ;
const Int_t kMaxTTwoTrackInternalsChunk_chunk_id = 2 ;
const Int_t kMaxTTwoTrackInternalsChunk_name = 2 ;
const Int_t kMaxTTwoTrackPredictionsChunk = 2 ;
const Int_t kMaxTTwoTrackPredictionsChunk_chunk_id = 2 ;
const Int_t kMaxTTwoTrackPredictionsChunk_name = 2 ;
const Int_t kMaxTUncalibratedDataChunk = 1 ;
const Int_t kMaxTUncalibratedDataChunk_chunk_id = 1 ;
const Int_t kMaxTUncalibratedDataChunk_name = 1 ;
const Int_t kMaxTUncalibratedIRMChunk = 7 ;
const Int_t kMaxTUncalibratedIRMChunk_chunk_id = 7 ;
const Int_t kMaxTUncalibratedIRMChunk_name = 7 ;
const Int_t kMaxTUncalibratedMWRChunk = 9 ;
const Int_t kMaxTUncalibratedMWRChunk_chunk_id = 9 ;
const Int_t kMaxTUncalibratedMWRChunk_name = 9 ;
const Int_t kMaxTUncalibratedRWMChunk = 1 ;
const Int_t kMaxTUncalibratedRWMChunk_chunk_id = 1 ;
const Int_t kMaxTUncalibratedRWMChunk_name = 1 ;
const Int_t kMaxTVetoClusterChunk = 3 ;
const Int_t kMaxTVetoClusterChunk_chunk_id = 3 ;
const Int_t kMaxTVetoClusterChunk_name = 3 ;
const Int_t kMaxTVetoLinkingChunk = 2 ;
const Int_t kMaxTVetoLinkingChunk_chunk_id = 2 ;
const Int_t kMaxTVetoLinkingChunk_name = 2 ;
const Int_t kMaxTWeightDetailsChunk = 1 ;
const Int_t kMaxTWeightDetailsChunk_chunk_id = 1 ;
const Int_t kMaxTWeightDetailsChunk_name = 1 ;
const Int_t kMaxTYangVarChunk = 2 ;
const Int_t kMaxTYangVarChunk_chunk_id = 2 ;
const Int_t kMaxTYangVarChunk_name = 2 ;
const Int_t kMaxTnumuCCQElikeChunk = 1 ;
const Int_t kMaxTnumuCCQElikeChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElikeChunk_name = 1 ;
const Int_t kMaxTnumuCCQElike_HitRatioVarsChunk = 1 ;
const Int_t kMaxTnumuCCQElike_HitRatioVarsChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElike_HitRatioVarsChunk_name = 1 ;
const Int_t kMaxTnumuCCQElike_TrakDiffVarsChunk = 1 ;
const Int_t kMaxTnumuCCQElike_TrakDiffVarsChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElike_TrakDiffVarsChunk_name = 1 ;
const Int_t kMaxTnumuCCQElike_angleVarsChunk = 1 ;
const Int_t kMaxTnumuCCQElike_angleVarsChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElike_angleVarsChunk_name = 1 ;
const Int_t kMaxTnumuCCQElike_effectiveEVWTChunk = 1 ;
const Int_t kMaxTnumuCCQElike_effectiveEVWTChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElike_effectiveEVWTChunk_name = 1 ;
const Int_t kMaxTnumuCCQElike_qeVarsChunk = 1 ;
const Int_t kMaxTnumuCCQElike_qeVarsChunk_chunk_id = 1 ;
const Int_t kMaxTnumuCCQElike_qeVarsChunk_name = 1 ;



class MC_Chunk : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

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
     Int_t           TInstanceCountChunk_;
   Int_t           TInstanceCountChunk_chunk_id_[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   UInt_t          TInstanceCountChunk_data__fUniqueID[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   UInt_t          TInstanceCountChunk_data__fBits[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__MonteCarlo[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__GlobalTankHeader[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__SplitEvent[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Full[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Fast[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Flux[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Trak[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Vars[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__PID[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   Int_t           TInstanceCountChunk_data__Energy[kMaxTInstanceCountChunk];   //[TInstanceCountChunk_]
   string          TInstanceCountChunk_name_[kMaxTInstanceCountChunk];
   Int_t           TnumuCCQElike_angleVarsChunk_;
   Int_t           TnumuCCQElike_angleVarsChunk_chunk_id_[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   UInt_t          TnumuCCQElike_angleVarsChunk_data__fUniqueID[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   UInt_t          TnumuCCQElike_angleVarsChunk_data__fBits[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   Int_t           TnumuCCQElike_angleVarsChunk_data__Hits[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   Float_t        *TnumuCCQElike_angleVarsChunk_data__angle[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_data__Hits]
   Float_t         TnumuCCQElike_angleVarsChunk_data__BackFrac[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   Float_t         TnumuCCQElike_angleVarsChunk_data__BackPfrac[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   Float_t         TnumuCCQElike_angleVarsChunk_data__TransFrac[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   Float_t         TnumuCCQElike_angleVarsChunk_data__TransPfrac[kMaxTnumuCCQElike_angleVarsChunk];   //[TnumuCCQElike_angleVarsChunk_]
   string          TnumuCCQElike_angleVarsChunk_name_[kMaxTnumuCCQElike_angleVarsChunk];
   Int_t           TnumuCCQElike_HitRatioVarsChunk_;
   Int_t           TnumuCCQElike_HitRatioVarsChunk_chunk_id_[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   UInt_t          TnumuCCQElike_HitRatioVarsChunk_data__fUniqueID[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   UInt_t          TnumuCCQElike_HitRatioVarsChunk_data__fBits[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__qon[kMaxTnumuCCQElike_HitRatioVarsChunk][5];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__qtot[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__s[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__e[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__qco[kMaxTnumuCCQElike_HitRatioVarsChunk][10];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__csq[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   Float_t         TnumuCCQElike_HitRatioVarsChunk_data__qcr[kMaxTnumuCCQElike_HitRatioVarsChunk];   //[TnumuCCQElike_HitRatioVarsChunk_]
   string          TnumuCCQElike_HitRatioVarsChunk_name_[kMaxTnumuCCQElike_HitRatioVarsChunk];
   Int_t           TnumuCCQElike_TrakDiffVarsChunk_;
   Int_t           TnumuCCQElike_TrakDiffVarsChunk_chunk_id_[kMaxTnumuCCQElike_TrakDiffVarsChunk];   //[TnumuCCQElike_TrakDiffVarsChunk_]
   UInt_t          TnumuCCQElike_TrakDiffVarsChunk_data__fUniqueID[kMaxTnumuCCQElike_TrakDiffVarsChunk];   //[TnumuCCQElike_TrakDiffVarsChunk_]
   UInt_t          TnumuCCQElike_TrakDiffVarsChunk_data__fBits[kMaxTnumuCCQElike_TrakDiffVarsChunk];   //[TnumuCCQElike_TrakDiffVarsChunk_]
   Float_t         TnumuCCQElike_TrakDiffVarsChunk_data__TrakDifference[kMaxTnumuCCQElike_TrakDiffVarsChunk];   //[TnumuCCQElike_TrakDiffVarsChunk_]
   string          TnumuCCQElike_TrakDiffVarsChunk_name_[kMaxTnumuCCQElike_TrakDiffVarsChunk];
   Int_t           TnumuCCQElike_effectiveEVWTChunk_;
   Int_t           TnumuCCQElike_effectiveEVWTChunk_chunk_id_[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   UInt_t          TnumuCCQElike_effectiveEVWTChunk_data__fUniqueID[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   UInt_t          TnumuCCQElike_effectiveEVWTChunk_data__fBits[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   Int_t           TnumuCCQElike_effectiveEVWTChunk_data__efftype[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   Int_t           TnumuCCQElike_effectiveEVWTChunk_data__type[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   Int_t           TnumuCCQElike_effectiveEVWTChunk_data__subcpi[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   Int_t           TnumuCCQElike_effectiveEVWTChunk_data__supcp[kMaxTnumuCCQElike_effectiveEVWTChunk];   //[TnumuCCQElike_effectiveEVWTChunk_]
   string          TnumuCCQElike_effectiveEVWTChunk_name_[kMaxTnumuCCQElike_effectiveEVWTChunk];
   Int_t           TnumuCCQElike_qeVarsChunk_;
   Int_t           TnumuCCQElike_qeVarsChunk_chunk_id_[kMaxTnumuCCQElike_qeVarsChunk];   //[TnumuCCQElike_qeVarsChunk_]
   UInt_t          TnumuCCQElike_qeVarsChunk_data__fUniqueID[kMaxTnumuCCQElike_qeVarsChunk];   //[TnumuCCQElike_qeVarsChunk_]
   UInt_t          TnumuCCQElike_qeVarsChunk_data__fBits[kMaxTnumuCCQElike_qeVarsChunk];   //[TnumuCCQElike_qeVarsChunk_]
   Float_t         TnumuCCQElike_qeVarsChunk_data__Vector[kMaxTnumuCCQElike_qeVarsChunk][13];   //[TnumuCCQElike_qeVarsChunk_]
   Int_t           TnumuCCQElike_qeVarsChunk_data__EVWT[kMaxTnumuCCQElike_qeVarsChunk];   //[TnumuCCQElike_qeVarsChunk_]
   Int_t           TnumuCCQElike_qeVarsChunk_data__effEVWT[kMaxTnumuCCQElike_qeVarsChunk];   //[TnumuCCQElike_qeVarsChunk_]
   string          TnumuCCQElike_qeVarsChunk_name_[kMaxTnumuCCQElike_qeVarsChunk];
   Int_t           TnumuCCQElikeChunk_;
   Int_t           TnumuCCQElikeChunk_chunk_id_[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   UInt_t          TnumuCCQElikeChunk_data__fUniqueID[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   UInt_t          TnumuCCQElikeChunk_data__fBits[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__RUN[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__EVWT[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__effEVWT[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__numSubev[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__MCenergy[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__pmu[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__numuCCQElike[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__QTank[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__NTank[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Int_t           TnumuCCQElikeChunk_data__NVeto[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__TTank[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__EFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__TFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__XFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__YFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__ZFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__UXFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__UYFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__UZFull[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__CER[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__EcerMu[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__BeginX[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__BeginY[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__BeginZ[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__EndX[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__EndY[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   Float_t         TnumuCCQElikeChunk_data__EndZ[kMaxTnumuCCQElikeChunk];   //[TnumuCCQElikeChunk_]
   string          TnumuCCQElikeChunk_name_[kMaxTnumuCCQElikeChunk];
      Int_t           TCalibratedIRM1Chunk_;
   Int_t           TCalibratedIRM1Chunk_chunk_id_[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   UInt_t          TCalibratedIRM1Chunk_data__fUniqueID[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   UInt_t          TCalibratedIRM1Chunk_data__fBits[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP860[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI860[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP860[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI860[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP861[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI861[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP861[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI861[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP864[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI864[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP864[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI864[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP866[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI866[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP867[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI867[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP868[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI868[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP869[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI869[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP870[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI870[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP870[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI870[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP871[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI871[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP872[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI872[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP873[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI873[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP873[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI873[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HP875[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__HI875[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VP875[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__VI875[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__TR860G[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__TR875G[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__TOR860[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   Float_t         TCalibratedIRM1Chunk_data__TOR875[kMaxTCalibratedIRM1Chunk];   //[TCalibratedIRM1Chunk_]
   string          TCalibratedIRM1Chunk_name_[kMaxTCalibratedIRM1Chunk];
   Int_t           TCalibratedIRM2Chunk_;
   Int_t           TCalibratedIRM2Chunk_chunk_id_[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   UInt_t          TCalibratedIRM2Chunk_data__fUniqueID[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   UInt_t          TCalibratedIRM2Chunk_data__fBits[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM851A[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM860[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM862[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM864[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM865A[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM865B[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM866[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM867[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM868[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM869[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM870[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM871[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM872[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM873[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM874[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM875A[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM875B[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LM875C[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__LMBPST[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TR860Z[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TR875Z[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TLI860[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TLI862[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TLI864[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TLI870[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TLI873[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TOR860[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   Float_t         TCalibratedIRM2Chunk_data__TOR875[kMaxTCalibratedIRM2Chunk];   //[TCalibratedIRM2Chunk_]
   string          TCalibratedIRM2Chunk_name_[kMaxTCalibratedIRM2Chunk];
   Int_t           TCalibratedIRM3Chunk_;
   Int_t           TCalibratedIRM3Chunk_chunk_id_[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   UInt_t          TCalibratedIRM3Chunk_data__fUniqueID[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   UInt_t          TCalibratedIRM3Chunk_data__fBits[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__HPTGTL[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__HITGTL[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__VPTGTL[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__VITGTL[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__MBT90D[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM1P[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM2P[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM3P[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM4P[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM1SA[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM1SB[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM2SA[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM2SB[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM3SA[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM3SB[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM4SA[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   Float_t         TCalibratedIRM3Chunk_data__BPM4SB[kMaxTCalibratedIRM3Chunk];   //[TCalibratedIRM3Chunk_]
   string          TCalibratedIRM3Chunk_name_[kMaxTCalibratedIRM3Chunk];
   Int_t           TCalibratedIRM4Chunk_;
   Int_t           TCalibratedIRM4Chunk_chunk_id_[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   UInt_t          TCalibratedIRM4Chunk_data__fUniqueID[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   UInt_t          TCalibratedIRM4Chunk_data__fBits[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   Float_t         TCalibratedIRM4Chunk_data__THCURR[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   Float_t         TCalibratedIRM4Chunk_data__SLINE1[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   Float_t         TCalibratedIRM4Chunk_data__SLINE2[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   Float_t         TCalibratedIRM4Chunk_data__SLINE3[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   Float_t         TCalibratedIRM4Chunk_data__SLINE4[kMaxTCalibratedIRM4Chunk];   //[TCalibratedIRM4Chunk_]
   string          TCalibratedIRM4Chunk_name_[kMaxTCalibratedIRM4Chunk];
   Int_t           TCalibratedIRM5Chunk_;
   Int_t           TCalibratedIRM5Chunk_chunk_id_[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   UInt_t          TCalibratedIRM5Chunk_data__fUniqueID[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   UInt_t          TCalibratedIRM5Chunk_data__fBits[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTBT1[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTBT2[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTJT1[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTJT2[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH1T1[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH1AV[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTBLAP[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH2T2[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH2AV[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH1T2[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH1AP[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__BTH2T1[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__HWTIN[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__HWTOUT[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__HWFLOW[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__HV865[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__Q872[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__Q873[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__Q874[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   Float_t         TCalibratedIRM5Chunk_data__Q875[kMaxTCalibratedIRM5Chunk];   //[TCalibratedIRM5Chunk_]
   string          TCalibratedIRM5Chunk_name_[kMaxTCalibratedIRM5Chunk];
   Int_t           TCalibratedIRM6Chunk_;
   Int_t           TCalibratedIRM6Chunk_chunk_id_[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   UInt_t          TCalibratedIRM6Chunk_data__fUniqueID[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   UInt_t          TCalibratedIRM6Chunk_data__fBits[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBINTA[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBINTB[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__SLP860[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__INT860[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__SLP875[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__INT875[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBDIFA[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBDIFB[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBSUMA[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__EBSUMB[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__TR860G[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__TR875G[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__TOR860[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   Float_t         TCalibratedIRM6Chunk_data__TOR875[kMaxTCalibratedIRM6Chunk];   //[TCalibratedIRM6Chunk_]
   string          TCalibratedIRM6Chunk_name_[kMaxTCalibratedIRM6Chunk];
      Int_t           TCalibratedMWRChunk_;
   Int_t           TCalibratedMWRChunk_chunk_id_[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   UInt_t          TCalibratedMWRChunk_data__fUniqueID[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   UInt_t          TCalibratedMWRChunk_data__fBits[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Int_t           TCalibratedMWRChunk_data__horchannels[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Float_t        *TCalibratedMWRChunk_data__horintensity[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_data__horchannels]
   Float_t         TCalibratedMWRChunk_data__horMean[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Float_t         TCalibratedMWRChunk_data__horRMS[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Int_t           TCalibratedMWRChunk_data__verchannels[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Float_t        *TCalibratedMWRChunk_data__verintensity[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_data__verchannels]
   Float_t         TCalibratedMWRChunk_data__verMean[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Float_t         TCalibratedMWRChunk_data__verRMS[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   Int_t           TCalibratedMWRChunk_data__devicetag[kMaxTCalibratedMWRChunk];   //[TCalibratedMWRChunk_]
   string          TCalibratedMWRChunk_name_[kMaxTCalibratedMWRChunk];
   Int_t           TBPMOnTargetChunk_;
   Int_t           TBPMOnTargetChunk_chunk_id_[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   UInt_t          TBPMOnTargetChunk_data__fUniqueID[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   UInt_t          TBPMOnTargetChunk_data__fBits[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__horiz[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__vert[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__costheta[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__horpos[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__verpos[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__horang[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__verang[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__ppp[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__fom1[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__fom2[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   Float_t         TBPMOnTargetChunk_data__fom3[kMaxTBPMOnTargetChunk];   //[TBPMOnTargetChunk_]
   string          TBPMOnTargetChunk_name_[kMaxTBPMOnTargetChunk];
   Int_t           TMergePerformanceChunk_;
   Int_t           TMergePerformanceChunk_chunk_id_[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   UInt_t          TMergePerformanceChunk_data__fUniqueID[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   UInt_t          TMergePerformanceChunk_data__fBits[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Int_t           TMergePerformanceChunk_data__have_TANK[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Int_t           TMergePerformanceChunk_data__have_RWM[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Int_t           TMergePerformanceChunk_data__have_ACNET_IRM[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Int_t           TMergePerformanceChunk_data__have_ACNET_MWR[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Int_t           TMergePerformanceChunk_data__have_LMC[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Float_t         TMergePerformanceChunk_data__RWM_tdiff[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Float_t         TMergePerformanceChunk_data__ACNET_IRM_tdiff[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Float_t         TMergePerformanceChunk_data__ACNET_MWR_tdiff[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   Float_t         TMergePerformanceChunk_data__LMC_tdiff[kMaxTMergePerformanceChunk];   //[TMergePerformanceChunk_]
   string          TMergePerformanceChunk_name_[kMaxTMergePerformanceChunk];
   Int_t           TProtonsOnTargetChunk_;
   Int_t           TProtonsOnTargetChunk_chunk_id_[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   UInt_t          TProtonsOnTargetChunk_data__fUniqueID[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   UInt_t          TProtonsOnTargetChunk_data__fBits[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__pot860[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__pot875[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__cal_pot860[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__cal_pot875[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__pot860_err[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Float_t         TProtonsOnTargetChunk_data__pot875_err[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__good_for_analysis[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_multiwire_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_toroid_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_horn_current_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_90degree_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_bpm_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_bpm_radius_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_bpm_angle_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_bpm_fom2_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   Int_t           TProtonsOnTargetChunk_data__passed_latency_test[kMaxTProtonsOnTargetChunk];   //[TProtonsOnTargetChunk_]
   string          TProtonsOnTargetChunk_name_[kMaxTProtonsOnTargetChunk];
   Int_t           TDAQbitFieldsChunk_;
   Int_t           TDAQbitFieldsChunk_chunk_id_[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   UInt_t          TDAQbitFieldsChunk_data__fUniqueID[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   UInt_t          TDAQbitFieldsChunk_data__fBits[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Time_Origin[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_days_ones[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_days_tens[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_days_hundreds[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_days[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_bclock[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_milli_ones[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_milli_tens[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_milli_hundreds[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_milli[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_sec_ones[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_sec_tens[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_sec[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_min_ones[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_min_tens[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_min[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_hour_ones[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_hour_tens[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__GPS_hour[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Bcast_tsa[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Bcast_winsize[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Bcast_evtype[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Bcast_seqid[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__BcastDiag_bclock[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_ones[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_tens[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__BcastDiag_GPS_milli[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__BcastDiag_seqid[kMaxTDAQbitFieldsChunk][6];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_bclock[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_calib[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_strobe[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_beam[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_det5[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_det4[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_det3[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_det2[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_veto2[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_Eor[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_det1[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__FIFO_veto1[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_tsa[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_seqid[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_evtype[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_qt_ff[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_qt_hf[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_qt_ef[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_rcvr_ff[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_rcvr_hf[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_rcvr_ef[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   Int_t           TDAQbitFieldsChunk_data__Rcvr_eof[kMaxTDAQbitFieldsChunk];   //[TDAQbitFieldsChunk_]
   string          TDAQbitFieldsChunk_name_[kMaxTDAQbitFieldsChunk];
   Int_t           TTriggerActivityChunk_;
   Int_t           TTriggerActivityChunk_chunk_id_[kMaxTTriggerActivityChunk];   //[TTriggerActivityChunk_]
   UInt_t          TTriggerActivityChunk_data__fUniqueID[kMaxTTriggerActivityChunk];   //[TTriggerActivityChunk_]
   UInt_t          TTriggerActivityChunk_data__fBits[kMaxTTriggerActivityChunk];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__ntsas[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__bclock[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__calib[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__strobe[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__beam[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__det5[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__det4[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__det3[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__det2[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__veto2[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__Eor[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__det1[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__veto1[kMaxTTriggerActivityChunk][4];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_bclock[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_calib[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_strobe[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_beam[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_det5[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_det4[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_det3[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_det2[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_veto2[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_Eor[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_det1[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__FIFO_veto1[kMaxTTriggerActivityChunk][90];   //[TTriggerActivityChunk_]
   Int_t           TTriggerActivityChunk_data__timer[kMaxTTriggerActivityChunk][23];   //[TTriggerActivityChunk_]
   string          TTriggerActivityChunk_name_[kMaxTTriggerActivityChunk];
   Int_t           TTwoTrackPredictionsChunk_;
   Int_t           TTwoTrackPredictionsChunk_chunk_id_[kMaxTTwoTrackPredictionsChunk];   //[TTwoTrackPredictionsChunk_]
   UInt_t          TTwoTrackPredictionsChunk_data__fUniqueID[kMaxTTwoTrackPredictionsChunk];   //[TTwoTrackPredictionsChunk_]
   UInt_t          TTwoTrackPredictionsChunk_data__fBits[kMaxTTwoTrackPredictionsChunk];   //[TTwoTrackPredictionsChunk_]
   Int_t           TTwoTrackPredictionsChunk_data__pmt[kMaxTTwoTrackPredictionsChunk][1280];   //[TTwoTrackPredictionsChunk_]
   Int_t           TTwoTrackPredictionsChunk_data__goodTube[kMaxTTwoTrackPredictionsChunk][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__mu_cer[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__mu_sci[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__mu_cerEx[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__mu_sciEx[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__q[kMaxTTwoTrackPredictionsChunk][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__tcor[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__cos_pmt[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__nll_q[kMaxTTwoTrackPredictionsChunk][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__nll_t[kMaxTTwoTrackPredictionsChunk][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__dr[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   Float_t         TTwoTrackPredictionsChunk_data__cos_dir[kMaxTTwoTrackPredictionsChunk][2][1280];   //[TTwoTrackPredictionsChunk_]
   string          TTwoTrackPredictionsChunk_name_[kMaxTTwoTrackPredictionsChunk];
   Int_t           TCalibratedIRM7Chunk_;
   Int_t           TCalibratedIRM7Chunk_chunk_id_[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   UInt_t          TCalibratedIRM7Chunk_data__fUniqueID[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   UInt_t          TCalibratedIRM7Chunk_data__fBits[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HV860X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q860X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q861X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q862X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q864X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q865X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__Q866X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT873X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT860X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT860X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT862X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT862X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT865X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT865X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT866X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT867X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT868X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT869X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT870X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT871X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__HT872X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   Float_t         TCalibratedIRM7Chunk_data__VT873X[kMaxTCalibratedIRM7Chunk];   //[TCalibratedIRM7Chunk_]
   string          TCalibratedIRM7Chunk_name_[kMaxTCalibratedIRM7Chunk];
   Float_t        *TCalibratedMuMonChunk_data__horintensity[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_data__horchannels]
   Float_t        *TCalibratedMuMonChunk_data__verintensity[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_data__verchannels]
   Float_t        *TRWMAnalysisChunk_data__BunchIntensity[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_data__NumBunches]
   Float_t        *TRWMAnalysisChunk_data__BunchPos[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_data__NumBunches]
   Float_t        *TRWMAnalysisChunk_data__BunchRMS[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_data__NumBunches]
   Int_t          *TUncalibratedIRMChunk_data__Data[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_data__NumData]
   Int_t          *TUncalibratedMWRChunk_data__Data[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_data__NumData]
   Int_t          *TUncalibratedRWMChunk_data__Data[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_data__NumWaveformData]
   Int_t           TCalibratedIRMAChunk_;
   Int_t           TCalibratedIRMAChunk_chunk_id_[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM1P[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM1SA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM1SB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM2P[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM2SA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM2SB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM3P[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM3SA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM3SB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM4P[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM4SA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BPM4SB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTBLAP[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTBT1[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTBT2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH1AP[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH1AV[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH1T1[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH1T2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH2AV[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH2T1[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTH2T2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTJT1[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__BTJT2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBDIFA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBDIFB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBINTA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBINTB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBSUMA[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__EBSUMB[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__H866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI861[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI868[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI872[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HI875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HITGTL[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP861[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP868[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP872[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HP875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HPTGTL[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT862[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT865[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT868[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT872[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HT873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HV860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HV865[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HWFLOW[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HWTIN[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__HWTOUT[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__INT860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__INT875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM851A[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM862[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM865A[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM865B[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM867[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM868[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM869[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM871[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM872[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM874[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM875A[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM875B[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LM875C[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__LMBPST[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__MBT90D[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q861[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q862[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q865[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q866[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q872[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q874[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__Q875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLINE1[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLINE2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLINE3[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLINE4[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLP860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__SLP875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__THCURR[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TLI860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TLI862[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TLI864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TLI870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TLI873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR8602[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR8603[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR8752[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR8753[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TOR875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR860G2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR860G[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR860Z[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR875G2[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR875G[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__TR875Z[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI861[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI867[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI869[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI871[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VI875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VITGTL[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP861[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP864[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP867[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP869[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP870[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP871[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VP875[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VPTGTL[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT860[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT862[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT865[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT867[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT869[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT871[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   Float_t         TCalibratedIRMAChunk_data__VT873[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   UInt_t          TCalibratedIRMAChunk_data__fBits[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   UInt_t          TCalibratedIRMAChunk_data__fUniqueID[kMaxTCalibratedIRMAChunk];   //[TCalibratedIRMAChunk_]
   string          TCalibratedIRMAChunk_name_[kMaxTCalibratedIRMAChunk];
   Int_t           TCalibratedMuMonChunk_;
   Int_t           TCalibratedMuMonChunk_chunk_id_[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   UInt_t          TCalibratedMuMonChunk_data__fBits[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   UInt_t          TCalibratedMuMonChunk_data__fUniqueID[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   Float_t         TCalibratedMuMonChunk_data__horMean[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   Int_t           TCalibratedMuMonChunk_data__horchannels[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   Float_t         TCalibratedMuMonChunk_data__verMean[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   Int_t           TCalibratedMuMonChunk_data__verchannels[kMaxTCalibratedMuMonChunk];   //[TCalibratedMuMonChunk_]
   string          TCalibratedMuMonChunk_name_[kMaxTCalibratedMuMonChunk];
   Int_t           TCalibratedToroidsChunk_;
   Int_t           TCalibratedToroidsChunk_chunk_id_[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__AcnetCalAvg860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__AcnetCalAvg875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__AcnetCalAvgPed860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__AcnetCalAvgPed875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__DelayEBermCalAvg860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__DelayEBermCalAvg875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermCalAvg860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermCalAvg875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermGain860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermGain875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermPedestal860[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   Float_t         TCalibratedToroidsChunk_data__EBermPedestal875[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   UInt_t          TCalibratedToroidsChunk_data__fBits[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   UInt_t          TCalibratedToroidsChunk_data__fUniqueID[kMaxTCalibratedToroidsChunk];   //[TCalibratedToroidsChunk_]
   string          TCalibratedToroidsChunk_name_[kMaxTCalibratedToroidsChunk];
   Int_t           TRWMAnalysisChunk_;
   Int_t           TRWMAnalysisChunk_chunk_id_[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   Float_t         TRWMAnalysisChunk_data__BunchSpacingRMS[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   Int_t           TRWMAnalysisChunk_data__NumBunches[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   Float_t         TRWMAnalysisChunk_data__SpillIntensity[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   UInt_t          TRWMAnalysisChunk_data__fBits[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   UInt_t          TRWMAnalysisChunk_data__fUniqueID[kMaxTRWMAnalysisChunk];   //[TRWMAnalysisChunk_]
   string          TRWMAnalysisChunk_name_[kMaxTRWMAnalysisChunk];
   Int_t           TUncalibratedIRMChunk_;
   Int_t           TUncalibratedIRMChunk_chunk_id_[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__BoosterEvent[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__DataSize[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__Delta1F[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__GPSTime1[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__GPSTime2[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__Hz15MICnt[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__MIEvent[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__NumData[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__PulseMI[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__PulseSc[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__TimeNSec[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   Int_t           TUncalibratedIRMChunk_data__TimeSec[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   UInt_t          TUncalibratedIRMChunk_data__fBits[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   UInt_t          TUncalibratedIRMChunk_data__fUniqueID[kMaxTUncalibratedIRMChunk];   //[TUncalibratedIRMChunk_]
   string          TUncalibratedIRMChunk_name_[kMaxTUncalibratedIRMChunk];
   Int_t           TUncalibratedMWRChunk_;
   Int_t           TUncalibratedMWRChunk_chunk_id_[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__BoosterEvent[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__DataSize[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__Delta1F[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__GPSTime1[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__GPSTime2[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__Hz15MICnt[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__MIEvent[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__NumData[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__PulseMI[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__PulseSc[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__TimeNSec[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   Int_t           TUncalibratedMWRChunk_data__TimeSec[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   UInt_t          TUncalibratedMWRChunk_data__fBits[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   UInt_t          TUncalibratedMWRChunk_data__fUniqueID[kMaxTUncalibratedMWRChunk];   //[TUncalibratedMWRChunk_]
   string          TUncalibratedMWRChunk_name_[kMaxTUncalibratedMWRChunk];
   Int_t           TUncalibratedRWMChunk_;
   Int_t           TUncalibratedRWMChunk_chunk_id_[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   Int_t           TUncalibratedRWMChunk_data__NumWaveformData[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   Int_t           TUncalibratedRWMChunk_data__TZeroRecord[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   Float_t         TUncalibratedRWMChunk_data__XScale[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   Float_t         TUncalibratedRWMChunk_data__YOffset[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   Float_t         TUncalibratedRWMChunk_data__YScale[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   UInt_t          TUncalibratedRWMChunk_data__fBits[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   UInt_t          TUncalibratedRWMChunk_data__fUniqueID[kMaxTUncalibratedRWMChunk];   //[TUncalibratedRWMChunk_]
   string          TUncalibratedRWMChunk_name_[kMaxTUncalibratedRWMChunk];


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
      TBranch        *b_TInstanceCountChunk_;   //!
   TBranch        *b_TInstanceCountChunk_chunk_id_;   //!
   TBranch        *b_TInstanceCountChunk_data__fUniqueID;   //!
   TBranch        *b_TInstanceCountChunk_data__fBits;   //!
   TBranch        *b_TInstanceCountChunk_data__MonteCarlo;   //!
   TBranch        *b_TInstanceCountChunk_data__GlobalTankHeader;   //!
   TBranch        *b_TInstanceCountChunk_data__SplitEvent;   //!
   TBranch        *b_TInstanceCountChunk_data__Full;   //!
   TBranch        *b_TInstanceCountChunk_data__Fast;   //!
   TBranch        *b_TInstanceCountChunk_data__Flux;   //!
   TBranch        *b_TInstanceCountChunk_data__Trak;   //!
   TBranch        *b_TInstanceCountChunk_data__Vars;   //!
   TBranch        *b_TInstanceCountChunk_data__PID;   //!
   TBranch        *b_TInstanceCountChunk_data__Energy;   //!
   TBranch        *b_TInstanceCountChunk_name_;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__Hits;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__angle;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__BackFrac;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__BackPfrac;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__TransFrac;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_data__TransPfrac;   //!
   TBranch        *b_TnumuCCQElike_angleVarsChunk_name_;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__qon;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__qtot;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__s;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__e;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__qco;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__csq;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_data__qcr;   //!
   TBranch        *b_TnumuCCQElike_HitRatioVarsChunk_name_;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_data__TrakDifference;   //!
   TBranch        *b_TnumuCCQElike_TrakDiffVarsChunk_name_;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__efftype;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__type;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__subcpi;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_data__supcp;   //!
   TBranch        *b_TnumuCCQElike_effectiveEVWTChunk_name_;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_data__Vector;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_data__EVWT;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_data__effEVWT;   //!
   TBranch        *b_TnumuCCQElike_qeVarsChunk_name_;   //!
   TBranch        *b_TnumuCCQElikeChunk_;   //!
   TBranch        *b_TnumuCCQElikeChunk_chunk_id_;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__fUniqueID;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__fBits;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__RUN;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EVWT;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__effEVWT;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__numSubev;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__MCenergy;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__pmu;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__numuCCQElike;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__QTank;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__NTank;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__NVeto;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__TTank;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__TFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__XFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__YFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__ZFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__UXFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__UYFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__UZFull;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__CER;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EcerMu;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__BeginX;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__BeginY;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__BeginZ;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EndX;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EndY;   //!
   TBranch        *b_TnumuCCQElikeChunk_data__EndZ;   //!
   TBranch        *b_TnumuCCQElikeChunk_name_;   //!
   TBranch        *b_TCalibratedIRM1Chunk_;   //!
   TBranch        *b_TCalibratedIRM1Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP860;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI860;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP860;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI860;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP861;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI861;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP861;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI861;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP864;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI864;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP864;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI864;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP866;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI866;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP867;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI867;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP868;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI868;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP869;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI869;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP870;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI870;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP870;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI870;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP871;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI871;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP872;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI872;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP873;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI873;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP873;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI873;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HP875;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__HI875;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VP875;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__VI875;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__TR860G;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__TR875G;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__TOR860;   //!
   TBranch        *b_TCalibratedIRM1Chunk_data__TOR875;   //!
   TBranch        *b_TCalibratedIRM1Chunk_name_;   //!
   TBranch        *b_TCalibratedIRM2Chunk_;   //!
   TBranch        *b_TCalibratedIRM2Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM851A;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM860;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM862;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM864;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM865A;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM865B;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM866;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM867;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM868;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM869;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM870;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM871;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM872;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM873;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM874;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM875A;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM875B;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LM875C;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__LMBPST;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TR860Z;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TR875Z;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TLI860;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TLI862;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TLI864;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TLI870;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TLI873;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TOR860;   //!
   TBranch        *b_TCalibratedIRM2Chunk_data__TOR875;   //!
   TBranch        *b_TCalibratedIRM2Chunk_name_;   //!
   TBranch        *b_TCalibratedIRM3Chunk_;   //!
   TBranch        *b_TCalibratedIRM3Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__HPTGTL;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__HITGTL;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__VPTGTL;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__VITGTL;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__MBT90D;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM1P;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM2P;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM3P;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM4P;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM1SA;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM1SB;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM2SA;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM2SB;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM3SA;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM3SB;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM4SA;   //!
   TBranch        *b_TCalibratedIRM3Chunk_data__BPM4SB;   //!
   TBranch        *b_TCalibratedIRM3Chunk_name_;   //!
   TBranch        *b_TCalibratedIRM4Chunk_;   //!
   TBranch        *b_TCalibratedIRM4Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__THCURR;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__SLINE1;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__SLINE2;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__SLINE3;   //!
   TBranch        *b_TCalibratedIRM4Chunk_data__SLINE4;   //!
   TBranch        *b_TCalibratedIRM4Chunk_name_;   //!
   TBranch        *b_TCalibratedIRM5Chunk_;   //!
   TBranch        *b_TCalibratedIRM5Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTBT1;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTBT2;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTJT1;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTJT2;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH1T1;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH1AV;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTBLAP;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH2T2;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH2AV;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH1T2;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH1AP;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__BTH2T1;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__HWTIN;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__HWTOUT;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__HWFLOW;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__HV865;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__Q872;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__Q873;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__Q874;   //!
   TBranch        *b_TCalibratedIRM5Chunk_data__Q875;   //!
   TBranch        *b_TCalibratedIRM5Chunk_name_;   //!
   TBranch        *b_TCalibratedIRM6Chunk_;   //!
   TBranch        *b_TCalibratedIRM6Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBINTA;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBINTB;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__SLP860;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__INT860;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__SLP875;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__INT875;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBDIFA;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBDIFB;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBSUMA;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__EBSUMB;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__TR860G;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__TR875G;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__TOR860;   //!
   TBranch        *b_TCalibratedIRM6Chunk_data__TOR875;   //!
   TBranch        *b_TCalibratedIRM6Chunk_name_;   //!
   TBranch        *b_TCalibratedMWRChunk_;   //!
   TBranch        *b_TCalibratedMWRChunk_chunk_id_;   //!
   TBranch        *b_TCalibratedMWRChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedMWRChunk_data__fBits;   //!
   TBranch        *b_TCalibratedMWRChunk_data__horchannels;   //!
   TBranch        *b_TCalibratedMWRChunk_data__horintensity;   //!
   TBranch        *b_TCalibratedMWRChunk_data__horMean;   //!
   TBranch        *b_TCalibratedMWRChunk_data__horRMS;   //!
   TBranch        *b_TCalibratedMWRChunk_data__verchannels;   //!
   TBranch        *b_TCalibratedMWRChunk_data__verintensity;   //!
   TBranch        *b_TCalibratedMWRChunk_data__verMean;   //!
   TBranch        *b_TCalibratedMWRChunk_data__verRMS;   //!
   TBranch        *b_TCalibratedMWRChunk_data__devicetag;   //!
   TBranch        *b_TCalibratedMWRChunk_name_;   //!
   TBranch        *b_TBPMOnTargetChunk_;   //!
   TBranch        *b_TBPMOnTargetChunk_chunk_id_;   //!
   TBranch        *b_TBPMOnTargetChunk_data__fUniqueID;   //!
   TBranch        *b_TBPMOnTargetChunk_data__fBits;   //!
   TBranch        *b_TBPMOnTargetChunk_data__horiz;   //!
   TBranch        *b_TBPMOnTargetChunk_data__vert;   //!
   TBranch        *b_TBPMOnTargetChunk_data__costheta;   //!
   TBranch        *b_TBPMOnTargetChunk_data__horpos;   //!
   TBranch        *b_TBPMOnTargetChunk_data__verpos;   //!
   TBranch        *b_TBPMOnTargetChunk_data__horang;   //!
   TBranch        *b_TBPMOnTargetChunk_data__verang;   //!
   TBranch        *b_TBPMOnTargetChunk_data__ppp;   //!
   TBranch        *b_TBPMOnTargetChunk_data__fom1;   //!
   TBranch        *b_TBPMOnTargetChunk_data__fom2;   //!
   TBranch        *b_TBPMOnTargetChunk_data__fom3;   //!
   TBranch        *b_TBPMOnTargetChunk_name_;   //!
   TBranch        *b_TMergePerformanceChunk_;   //!
   TBranch        *b_TMergePerformanceChunk_chunk_id_;   //!
   TBranch        *b_TMergePerformanceChunk_data__fUniqueID;   //!
   TBranch        *b_TMergePerformanceChunk_data__fBits;   //!
   TBranch        *b_TMergePerformanceChunk_data__have_TANK;   //!
   TBranch        *b_TMergePerformanceChunk_data__have_RWM;   //!
   TBranch        *b_TMergePerformanceChunk_data__have_ACNET_IRM;   //!
   TBranch        *b_TMergePerformanceChunk_data__have_ACNET_MWR;   //!
   TBranch        *b_TMergePerformanceChunk_data__have_LMC;   //!
   TBranch        *b_TMergePerformanceChunk_data__RWM_tdiff;   //!
   TBranch        *b_TMergePerformanceChunk_data__ACNET_IRM_tdiff;   //!
   TBranch        *b_TMergePerformanceChunk_data__ACNET_MWR_tdiff;   //!
   TBranch        *b_TMergePerformanceChunk_data__LMC_tdiff;   //!
   TBranch        *b_TMergePerformanceChunk_name_;   //!
   TBranch        *b_TProtonsOnTargetChunk_;   //!
   TBranch        *b_TProtonsOnTargetChunk_chunk_id_;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__fUniqueID;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__fBits;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__pot860;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__pot875;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__cal_pot860;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__cal_pot875;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__pot860_err;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__pot875_err;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__good_for_analysis;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_multiwire_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_toroid_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_horn_current_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_90degree_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_bpm_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_bpm_radius_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_bpm_angle_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_bpm_fom2_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_data__passed_latency_test;   //!
   TBranch        *b_TProtonsOnTargetChunk_name_;   //!
   TBranch        *b_TDAQbitFieldsChunk_;   //!
   TBranch        *b_TDAQbitFieldsChunk_chunk_id_;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__fUniqueID;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__fBits;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Time_Origin;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_days_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_days_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_days_hundreds;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_days;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_bclock;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_milli_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_milli_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_milli_hundreds;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_milli;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_sec_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_sec_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_sec;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_min_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_min_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_min;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_hour_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_hour_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__GPS_hour;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Bcast_tsa;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Bcast_winsize;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Bcast_evtype;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Bcast_seqid;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__BcastDiag_bclock;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_ones;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_tens;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__BcastDiag_seqid;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_bclock;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_calib;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_strobe;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_beam;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_det5;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_det4;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_det3;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_det2;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_veto2;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_Eor;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_det1;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__FIFO_veto1;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_tsa;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_seqid;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_evtype;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_qt_ff;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_qt_hf;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_qt_ef;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_rcvr_ff;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_rcvr_hf;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_rcvr_ef;   //!
   TBranch        *b_TDAQbitFieldsChunk_data__Rcvr_eof;   //!
   TBranch        *b_TDAQbitFieldsChunk_name_;   //!
   TBranch        *b_TTriggerActivityChunk_;   //!
   TBranch        *b_TTriggerActivityChunk_chunk_id_;   //!
   TBranch        *b_TTriggerActivityChunk_data__fUniqueID;   //!
   TBranch        *b_TTriggerActivityChunk_data__fBits;   //!
   TBranch        *b_TTriggerActivityChunk_data__ntsas;   //!
   TBranch        *b_TTriggerActivityChunk_data__bclock;   //!
   TBranch        *b_TTriggerActivityChunk_data__calib;   //!
   TBranch        *b_TTriggerActivityChunk_data__strobe;   //!
   TBranch        *b_TTriggerActivityChunk_data__beam;   //!
   TBranch        *b_TTriggerActivityChunk_data__det5;   //!
   TBranch        *b_TTriggerActivityChunk_data__det4;   //!
   TBranch        *b_TTriggerActivityChunk_data__det3;   //!
   TBranch        *b_TTriggerActivityChunk_data__det2;   //!
   TBranch        *b_TTriggerActivityChunk_data__veto2;   //!
   TBranch        *b_TTriggerActivityChunk_data__Eor;   //!
   TBranch        *b_TTriggerActivityChunk_data__det1;   //!
   TBranch        *b_TTriggerActivityChunk_data__veto1;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_bclock;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_calib;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_strobe;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_beam;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_det5;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_det4;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_det3;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_det2;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_veto2;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_Eor;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_det1;   //!
   TBranch        *b_TTriggerActivityChunk_data__FIFO_veto1;   //!
   TBranch        *b_TTriggerActivityChunk_data__timer;   //!
   TBranch        *b_TTriggerActivityChunk_name_;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__pmt;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__goodTube;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__mu_cer;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__mu_sci;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__mu_cerEx;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__mu_sciEx;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__q;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__tcor;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__cos_pmt;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__nll_q;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__nll_t;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__dr;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_data__cos_dir;   //!
   TBranch        *b_TTwoTrackPredictionsChunk_name_;   //!
   TBranch        *b_TCalibratedIRM7Chunk_;   //!
   TBranch        *b_TCalibratedIRM7Chunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HV860X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q860X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q861X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q862X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q864X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q865X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__Q866X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT873X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT860X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT860X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT862X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT862X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT865X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT865X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT866X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT867X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT868X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT869X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT870X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT871X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__HT872X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_data__VT873X;   //!
   TBranch        *b_TCalibratedIRM7Chunk_name_;   //!
   TBranch        *b_TCalibratedIRMAChunk_;   //!
   TBranch        *b_TCalibratedIRMAChunk_chunk_id_;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM1P;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM1SA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM1SB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM2P;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM2SA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM2SB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM3P;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM3SA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM3SB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM4P;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM4SA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BPM4SB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTBLAP;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTBT1;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTBT2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH1AP;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH1AV;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH1T1;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH1T2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH2AV;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH2T1;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTH2T2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTJT1;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__BTJT2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBDIFA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBDIFB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBINTA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBINTB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBSUMA;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__EBSUMB;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__H866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI861;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI868;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI872;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HI875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HITGTL;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP861;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP868;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP872;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HP875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HPTGTL;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT862;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT865;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT868;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT872;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HT873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HV860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HV865;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HWFLOW;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HWTIN;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__HWTOUT;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__INT860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__INT875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM851A;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM862;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM865A;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM865B;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM867;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM868;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM869;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM871;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM872;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM874;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM875A;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM875B;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LM875C;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__LMBPST;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__MBT90D;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q861;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q862;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q865;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q866;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q872;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q874;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__Q875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLINE1;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLINE2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLINE3;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLINE4;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLP860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__SLP875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__THCURR;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TLI860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TLI862;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TLI864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TLI870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TLI873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR8602;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR8603;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR8752;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR8753;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TOR875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR860G2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR860G;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR860Z;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR875G2;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR875G;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__TR875Z;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI861;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI867;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI869;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI871;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VI875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VITGTL;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP861;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP864;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP867;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP869;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP870;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP871;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VP875;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VPTGTL;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT860;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT862;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT865;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT867;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT869;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT871;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__VT873;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__fBits;   //!
   TBranch        *b_TCalibratedIRMAChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedIRMAChunk_name_;   //!
   TBranch        *b_TCalibratedMuMonChunk_;   //!
   TBranch        *b_TCalibratedMuMonChunk_chunk_id_;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__fBits;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__horMean;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__horchannels;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__horintensity;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__verMean;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__verchannels;   //!
   TBranch        *b_TCalibratedMuMonChunk_data__verintensity;   //!
   TBranch        *b_TCalibratedMuMonChunk_name_;   //!
   TBranch        *b_TCalibratedToroidsChunk_;   //!
   TBranch        *b_TCalibratedToroidsChunk_chunk_id_;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__AcnetCalAvg860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__AcnetCalAvg875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__AcnetCalAvgPed860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__AcnetCalAvgPed875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__DelayEBermCalAvg860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__DelayEBermCalAvg875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermCalAvg860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermCalAvg875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermGain860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermGain875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermPedestal860;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__EBermPedestal875;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__fBits;   //!
   TBranch        *b_TCalibratedToroidsChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibratedToroidsChunk_name_;   //!
   TBranch        *b_TRWMAnalysisChunk_;   //!
   TBranch        *b_TRWMAnalysisChunk_chunk_id_;   //!
   TBranch        *b_TRWMAnalysisChunk_data__BunchIntensity;   //!
   TBranch        *b_TRWMAnalysisChunk_data__BunchPos;   //!
   TBranch        *b_TRWMAnalysisChunk_data__BunchRMS;   //!
   TBranch        *b_TRWMAnalysisChunk_data__BunchSpacingRMS;   //!
   TBranch        *b_TRWMAnalysisChunk_data__NumBunches;   //!
   TBranch        *b_TRWMAnalysisChunk_data__SpillIntensity;   //!
   TBranch        *b_TRWMAnalysisChunk_data__fBits;   //!
   TBranch        *b_TRWMAnalysisChunk_data__fUniqueID;   //!
   TBranch        *b_TRWMAnalysisChunk_name_;   //!
   TBranch        *b_TUncalibratedIRMChunk_;   //!
   TBranch        *b_TUncalibratedIRMChunk_chunk_id_;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__BoosterEvent;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__Data;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__DataSize;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__Delta1F;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__GPSTime1;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__GPSTime2;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__Hz15MICnt;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__MIEvent;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__NumData;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__PulseMI;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__PulseSc;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__TimeNSec;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__TimeSec;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__fBits;   //!
   TBranch        *b_TUncalibratedIRMChunk_data__fUniqueID;   //!
   TBranch        *b_TUncalibratedIRMChunk_name_;   //!
   TBranch        *b_TUncalibratedMWRChunk_;   //!
   TBranch        *b_TUncalibratedMWRChunk_chunk_id_;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__BoosterEvent;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__Data;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__DataSize;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__Delta1F;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__GPSTime1;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__GPSTime2;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__Hz15MICnt;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__MIEvent;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__NumData;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__PulseMI;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__PulseSc;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__TimeNSec;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__TimeSec;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__fBits;   //!
   TBranch        *b_TUncalibratedMWRChunk_data__fUniqueID;   //!
   TBranch        *b_TUncalibratedMWRChunk_name_;   //!
   TBranch        *b_TUncalibratedRWMChunk_;   //!
   TBranch        *b_TUncalibratedRWMChunk_chunk_id_;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__Data;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__NumWaveformData;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__TZeroRecord;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__XScale;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__YOffset;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__YScale;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__fBits;   //!
   TBranch        *b_TUncalibratedRWMChunk_data__fUniqueID;   //!
   TBranch        *b_TUncalibratedRWMChunk_name_;   //!

public:
   MC_Chunk(TTree * /*tree*/ =0) : fChain(0) {; }
   virtual ~MC_Chunk() { fChain=0; }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { 
      cout << entry<<":"<<getall<<endl;
      cout << fChain->GetTree()->GetDirectory()->GetName() << endl;
      return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; 

   }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(MC_Chunk,0);
};


void MC_Chunk::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
cout << "tree = " << tree << endl;
   // Set array pointer
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TIME[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPFS[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTCER[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTSCI[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPROCTAG[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NOTPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TITPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NHTVCER[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NHTVSCI[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NOVPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__TIVPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__XVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__YVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__ZVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__EVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__XMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__YMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ZMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__SMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ELMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__TIMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__IPMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__XCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__YCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ZCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ELCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__TICUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__PTCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__gotPE[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__distToSource[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceX[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceY[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceZ[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__id[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_eng[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_t[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_NUM[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_CMD[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_DIAG[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_LAT[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__PMT[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__Q[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__notruncQ[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__T[i] = 0;
   for(int i=0; i<kMaxTConnectTheHitsChunk; ++i) TConnectTheHitsChunk_data__Index[i] = 0;
   for(int i=0; i<kMaxTConnectTheHitsChunk; ++i) TConnectTheHitsChunk_data__Flag[i] = 0;
   for(int i=0; i<kMaxTConnectTheHitsChunk; ++i) TConnectTheHitsChunk_data__Offset[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__ipfs[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttcer[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttVcer[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttsci[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttVsci[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__time[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__iproctag[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__CHANNEL[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__OFFSET[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC0[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC1[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC2[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC3[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC0[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC1[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC2[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC3[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VT[i] = 0;
   for(int i=0; i<kMaxTParticleIDChunk; ++i) TParticleIDChunk_data__PARAM[i] = 0;
   for(int i=0; i<kMaxTParticleIDChunk; ++i) TParticleIDChunk_data__OUTPUT[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPointer[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startXpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startYpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startZpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startTime[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startE1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startE2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startS1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPhi1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startThet1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startS2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPhi2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startThet2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startF[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endXpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endYpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endZpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endTime[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endE1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endE2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endS1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endPhi1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endThet1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endS2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endPhi2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endThet2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endF[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__skipped[i] = 0;
   for(int i=0; i<kMaxTnumuCCQElike_angleVarsChunk; ++i) TnumuCCQElike_angleVarsChunk_data__angle[i] = 0;
   for(int i=0; i<kMaxTCalibratedMWRChunk; ++i) TCalibratedMWRChunk_data__horintensity[i] = 0;
   for(int i=0; i<kMaxTCalibratedMWRChunk; ++i) TCalibratedMWRChunk_data__verintensity[i] = 0;
   for(int i=0; i<kMaxTCalibratedMuMonChunk; ++i) TCalibratedMuMonChunk_data__horintensity[i] = 0;
   for(int i=0; i<kMaxTCalibratedMuMonChunk; ++i) TCalibratedMuMonChunk_data__verintensity[i] = 0;
   for(int i=0; i<kMaxTRWMAnalysisChunk; ++i) TRWMAnalysisChunk_data__BunchIntensity[i] = 0;
   for(int i=0; i<kMaxTRWMAnalysisChunk; ++i) TRWMAnalysisChunk_data__BunchPos[i] = 0;
   for(int i=0; i<kMaxTRWMAnalysisChunk; ++i) TRWMAnalysisChunk_data__BunchRMS[i] = 0;
   for(int i=0; i<kMaxTUncalibratedIRMChunk; ++i) TUncalibratedIRMChunk_data__Data[i] = 0;
   for(int i=0; i<kMaxTUncalibratedMWRChunk; ++i) TUncalibratedMWRChunk_data__Data[i] = 0;
   for(int i=0; i<kMaxTUncalibratedRWMChunk; ++i) TUncalibratedRWMChunk_data__Data[i] = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
cout << fChain << " fChain" << endl;
   fChain->SetMakeClass(1);
   
   fChain->SetBranchAddress("THistory", &THistory_, &b_THistory_);
   fChain->SetBranchAddress("THistory.fUniqueID", THistory_fUniqueID, &b_THistory_fUniqueID);
   fChain->SetBranchAddress("THistory.fBits", THistory_fBits, &b_THistory_fBits);
   fChain->SetBranchAddress("THistory.algo_name_", THistory_algo_name_, &b_THistory_algo_name_);
   fChain->SetBranchAddress("THistory.algo_inst_", THistory_algo_inst_, &b_THistory_algo_inst_);
   fChain->SetBranchAddress("THistory.chunk_name_", THistory_chunk_name_, &b_THistory_chunk_name_);
   fChain->SetBranchAddress("THistory.ext_name_", THistory_ext_name_, &b_THistory_ext_name_);
   fChain->SetBranchAddress("THistory.version_", THistory_version_, &b_THistory_version_);
   fChain->SetBranchAddress("THistory.node_", THistory_node_, &b_THistory_node_);
   fChain->SetBranchAddress("THistory.database_", THistory_database_, &b_THistory_database_);
   fChain->SetBranchAddress("THistory.inst_num_", THistory_inst_num_, &b_THistory_inst_num_);
   fChain->SetBranchAddress("THistory.timestamp_", THistory_timestamp_, &b_THistory_timestamp_);
   fChain->SetBranchAddress("THistory.rcpid_", THistory_rcpid_, &b_THistory_rcpid_);
   fChain->SetBranchAddress("THistory.chunkid_", THistory_chunkid_, &b_THistory_chunkid_);
   fChain->SetBranchAddress("THistory.parents_", THistory_parents_, &b_THistory_parents_);
   fChain->SetBranchAddress("THistory.tags_", THistory_tags_, &b_THistory_tags_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk", &TMonteCarloEVNTChunk_, &b_TMonteCarloEVNTChunk_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.chunk_id_", TMonteCarloEVNTChunk_chunk_id_, &b_TMonteCarloEVNTChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.fUniqueID", TMonteCarloEVNTChunk_data__fUniqueID, &b_TMonteCarloEVNTChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.fBits", TMonteCarloEVNTChunk_data__fBits, &b_TMonteCarloEVNTChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VERSION", TMonteCarloEVNTChunk_data__VERSION, &b_TMonteCarloEVNTChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VAR_FLAGS", TMonteCarloEVNTChunk_data__VAR_FLAGS, &b_TMonteCarloEVNTChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IEVNT", TMonteCarloEVNTChunk_data__IEVNT, &b_TMonteCarloEVNTChunk_data__IEVNT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.EVWT", TMonteCarloEVNTChunk_data__EVWT, &b_TMonteCarloEVNTChunk_data__EVWT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.INNO", TMonteCarloEVNTChunk_data__INNO, &b_TMonteCarloEVNTChunk_data__INNO);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.PNEU[4]", TMonteCarloEVNTChunk_data__PNEU, &b_TMonteCarloEVNTChunk_data__PNEU);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NDCY", TMonteCarloEVNTChunk_data__NDCY, &b_TMonteCarloEVNTChunk_data__NDCY);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NFSP", TMonteCarloEVNTChunk_data__NFSP, &b_TMonteCarloEVNTChunk_data__NFSP);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VRTX[127][3]", TMonteCarloEVNTChunk_data__VRTX, &b_TMonteCarloEVNTChunk_data__VRTX);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.TIME", TMonteCarloEVNTChunk_data__TIME, &b_TMonteCarloEVNTChunk_data__TIME);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IPFS", TMonteCarloEVNTChunk_data__IPFS, &b_TMonteCarloEVNTChunk_data__IPFS);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.PFSP[127][4]", TMonteCarloEVNTChunk_data__PFSP, &b_TMonteCarloEVNTChunk_data__PFSP);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTTCER", TMonteCarloEVNTChunk_data__NHTTCER, &b_TMonteCarloEVNTChunk_data__NHTTCER);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTTSCI", TMonteCarloEVNTChunk_data__NHTTSCI, &b_TMonteCarloEVNTChunk_data__NHTTSCI);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NPROCTAG", TMonteCarloEVNTChunk_data__NPROCTAG, &b_TMonteCarloEVNTChunk_data__NPROCTAG);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IPROCTAG", TMonteCarloEVNTChunk_data__IPROCTAG, &b_TMonteCarloEVNTChunk_data__IPROCTAG);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTT", TMonteCarloEVNTChunk_data__NHTT, &b_TMonteCarloEVNTChunk_data__NHTT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NOTPMT", TMonteCarloEVNTChunk_data__NOTPMT, &b_TMonteCarloEVNTChunk_data__NOTPMT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.TITPMT", TMonteCarloEVNTChunk_data__TITPMT, &b_TMonteCarloEVNTChunk_data__TITPMT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.RNDM1", TMonteCarloEVNTChunk_data__RNDM1, &b_TMonteCarloEVNTChunk_data__RNDM1);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.RNDM2", TMonteCarloEVNTChunk_data__RNDM2, &b_TMonteCarloEVNTChunk_data__RNDM2);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.name_", TMonteCarloEVNTChunk_name_, &b_TMonteCarloEVNTChunk_name_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk", &TMonteCarloVETOChunk_, &b_TMonteCarloVETOChunk_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.chunk_id_", TMonteCarloVETOChunk_chunk_id_, &b_TMonteCarloVETOChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.fUniqueID", TMonteCarloVETOChunk_data__fUniqueID, &b_TMonteCarloVETOChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.fBits", TMonteCarloVETOChunk_data__fBits, &b_TMonteCarloVETOChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.VERSION", TMonteCarloVETOChunk_data__VERSION, &b_TMonteCarloVETOChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.VAR_FLAGS", TMonteCarloVETOChunk_data__VAR_FLAGS, &b_TMonteCarloVETOChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.IEVNV", TMonteCarloVETOChunk_data__IEVNV, &b_TMonteCarloVETOChunk_data__IEVNV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NFSPV", TMonteCarloVETOChunk_data__NFSPV, &b_TMonteCarloVETOChunk_data__NFSPV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTVCER", TMonteCarloVETOChunk_data__NHTVCER, &b_TMonteCarloVETOChunk_data__NHTVCER);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTVSCI", TMonteCarloVETOChunk_data__NHTVSCI, &b_TMonteCarloVETOChunk_data__NHTVSCI);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTV", TMonteCarloVETOChunk_data__NHTV, &b_TMonteCarloVETOChunk_data__NHTV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NOVPMT", TMonteCarloVETOChunk_data__NOVPMT, &b_TMonteCarloVETOChunk_data__NOVPMT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.TIVPMT", TMonteCarloVETOChunk_data__TIVPMT, &b_TMonteCarloVETOChunk_data__TIVPMT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.XVHT", TMonteCarloVETOChunk_data__XVHT, &b_TMonteCarloVETOChunk_data__XVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.YVHT", TMonteCarloVETOChunk_data__YVHT, &b_TMonteCarloVETOChunk_data__YVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.ZVHT", TMonteCarloVETOChunk_data__ZVHT, &b_TMonteCarloVETOChunk_data__ZVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.EVHT", TMonteCarloVETOChunk_data__EVHT, &b_TMonteCarloVETOChunk_data__EVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.name_", TMonteCarloVETOChunk_name_, &b_TMonteCarloVETOChunk_name_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk", &TMonteCarloMUTRChunk_, &b_TMonteCarloMUTRChunk_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.chunk_id_", TMonteCarloMUTRChunk_chunk_id_, &b_TMonteCarloMUTRChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.fUniqueID", TMonteCarloMUTRChunk_data__fUniqueID, &b_TMonteCarloMUTRChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.fBits", TMonteCarloMUTRChunk_data__fBits, &b_TMonteCarloMUTRChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.VERSION", TMonteCarloMUTRChunk_data__VERSION, &b_TMonteCarloMUTRChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.VAR_FLAGS", TMonteCarloMUTRChunk_data__VAR_FLAGS, &b_TMonteCarloMUTRChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.IEVNM", TMonteCarloMUTRChunk_data__IEVNM, &b_TMonteCarloMUTRChunk_data__IEVNM);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.NHTMUT", TMonteCarloMUTRChunk_data__NHTMUT, &b_TMonteCarloMUTRChunk_data__NHTMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.XMUT", TMonteCarloMUTRChunk_data__XMUT, &b_TMonteCarloMUTRChunk_data__XMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.YMUT", TMonteCarloMUTRChunk_data__YMUT, &b_TMonteCarloMUTRChunk_data__YMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ZMUT", TMonteCarloMUTRChunk_data__ZMUT, &b_TMonteCarloMUTRChunk_data__ZMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.SMUT", TMonteCarloMUTRChunk_data__SMUT, &b_TMonteCarloMUTRChunk_data__SMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ELMUT", TMonteCarloMUTRChunk_data__ELMUT, &b_TMonteCarloMUTRChunk_data__ELMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TIMUT", TMonteCarloMUTRChunk_data__TIMUT, &b_TMonteCarloMUTRChunk_data__TIMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.IPMUT", TMonteCarloMUTRChunk_data__IPMUT, &b_TMonteCarloMUTRChunk_data__IPMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.NHTCUB", TMonteCarloMUTRChunk_data__NHTCUB, &b_TMonteCarloMUTRChunk_data__NHTCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.XCUB", TMonteCarloMUTRChunk_data__XCUB, &b_TMonteCarloMUTRChunk_data__XCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.YCUB", TMonteCarloMUTRChunk_data__YCUB, &b_TMonteCarloMUTRChunk_data__YCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ZCUB", TMonteCarloMUTRChunk_data__ZCUB, &b_TMonteCarloMUTRChunk_data__ZCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ELCUB", TMonteCarloMUTRChunk_data__ELCUB, &b_TMonteCarloMUTRChunk_data__ELCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TICUB", TMonteCarloMUTRChunk_data__TICUB, &b_TMonteCarloMUTRChunk_data__TICUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.PTCUB", TMonteCarloMUTRChunk_data__PTCUB, &b_TMonteCarloMUTRChunk_data__PTCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.INVT", TMonteCarloMUTRChunk_data__INVT, &b_TMonteCarloMUTRChunk_data__INVT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRV[8]", TMonteCarloMUTRChunk_data__TRV, &b_TMonteCarloMUTRChunk_data__TRV);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.INTK", TMonteCarloMUTRChunk_data__INTK, &b_TMonteCarloMUTRChunk_data__INTK);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRI[8]", TMonteCarloMUTRChunk_data__TRI, &b_TMonteCarloMUTRChunk_data__TRI);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.LVTK", TMonteCarloMUTRChunk_data__LVTK, &b_TMonteCarloMUTRChunk_data__LVTK);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRO[8]", TMonteCarloMUTRChunk_data__TRO, &b_TMonteCarloMUTRChunk_data__TRO);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.MUSTP", TMonteCarloMUTRChunk_data__MUSTP, &b_TMonteCarloMUTRChunk_data__MUSTP);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRS[8]", TMonteCarloMUTRChunk_data__TRS, &b_TMonteCarloMUTRChunk_data__TRS);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.MUDCY", TMonteCarloMUTRChunk_data__MUDCY, &b_TMonteCarloMUTRChunk_data__MUDCY);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRE[8]", TMonteCarloMUTRChunk_data__TRE, &b_TMonteCarloMUTRChunk_data__TRE);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.name_", TMonteCarloMUTRChunk_name_, &b_TMonteCarloMUTRChunk_name_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk", &TMonteCarloINVIChunk_, &b_TMonteCarloINVIChunk_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.chunk_id_", TMonteCarloINVIChunk_chunk_id_, &b_TMonteCarloINVIChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.fUniqueID", TMonteCarloINVIChunk_data__fUniqueID, &b_TMonteCarloINVIChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.fBits", TMonteCarloINVIChunk_data__fBits, &b_TMonteCarloINVIChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.VERSION", TMonteCarloINVIChunk_data__VERSION, &b_TMonteCarloINVIChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.VAR_FLAGS", TMonteCarloINVIChunk_data__VAR_FLAGS, &b_TMonteCarloINVIChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.IEVNT", TMonteCarloINVIChunk_data__IEVNT, &b_TMonteCarloINVIChunk_data__IEVNT);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.NFSPI", TMonteCarloINVIChunk_data__NFSPI, &b_TMonteCarloINVIChunk_data__NFSPI);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.gotPE", TMonteCarloINVIChunk_data__gotPE, &b_TMonteCarloINVIChunk_data__gotPE);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.distToSource", TMonteCarloINVIChunk_data__distToSource, &b_TMonteCarloINVIChunk_data__distToSource);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceX", TMonteCarloINVIChunk_data__sourceX, &b_TMonteCarloINVIChunk_data__sourceX);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceY", TMonteCarloINVIChunk_data__sourceY, &b_TMonteCarloINVIChunk_data__sourceY);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceZ", TMonteCarloINVIChunk_data__sourceZ, &b_TMonteCarloINVIChunk_data__sourceZ);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.name_", TMonteCarloINVIChunk_name_, &b_TMonteCarloINVIChunk_name_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk", &TMonteCarloNUANChunk_, &b_TMonteCarloNUANChunk_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.chunk_id_", TMonteCarloNUANChunk_chunk_id_, &b_TMonteCarloNUANChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.fUniqueID", TMonteCarloNUANChunk_data__fUniqueID, &b_TMonteCarloNUANChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.fBits", TMonteCarloNUANChunk_data__fBits, &b_TMonteCarloNUANChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.VERSION", TMonteCarloNUANChunk_data__VERSION, &b_TMonteCarloNUANChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.VAR_FLAGS", TMonteCarloNUANChunk_data__VAR_FLAGS, &b_TMonteCarloNUANChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.rateid", TMonteCarloNUANChunk_data__rateid, &b_TMonteCarloNUANChunk_data__rateid);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.e_neutrino", TMonteCarloNUANChunk_data__e_neutrino, &b_TMonteCarloNUANChunk_data__e_neutrino);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.e_lepton", TMonteCarloNUANChunk_data__e_lepton, &b_TMonteCarloNUANChunk_data__e_lepton);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.k_target", TMonteCarloNUANChunk_data__k_target, &b_TMonteCarloNUANChunk_data__k_target);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.qsq", TMonteCarloNUANChunk_data__qsq, &b_TMonteCarloNUANChunk_data__qsq);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.w", TMonteCarloNUANChunk_data__w, &b_TMonteCarloNUANChunk_data__w);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.x", TMonteCarloNUANChunk_data__x, &b_TMonteCarloNUANChunk_data__x);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.y", TMonteCarloNUANChunk_data__y, &b_TMonteCarloNUANChunk_data__y);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.phi_cm", TMonteCarloNUANChunk_data__phi_cm, &b_TMonteCarloNUANChunk_data__phi_cm);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.cos_fermi", TMonteCarloNUANChunk_data__cos_fermi, &b_TMonteCarloNUANChunk_data__cos_fermi);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.name_", TMonteCarloNUANChunk_name_, &b_TMonteCarloNUANChunk_name_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk", &TMonteCarloBEAMChunk_, &b_TMonteCarloBEAMChunk_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.chunk_id_", TMonteCarloBEAMChunk_chunk_id_, &b_TMonteCarloBEAMChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fUniqueID", TMonteCarloBEAMChunk_data__fUniqueID, &b_TMonteCarloBEAMChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fBits", TMonteCarloBEAMChunk_data__fBits, &b_TMonteCarloBEAMChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VERSION", TMonteCarloBEAMChunk_data__VERSION, &b_TMonteCarloBEAMChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VAR_FLAGS", TMonteCarloBEAMChunk_data__VAR_FLAGS, &b_TMonteCarloBEAMChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.beamwgt", TMonteCarloBEAMChunk_data__beamwgt, &b_TMonteCarloBEAMChunk_data__beamwgt);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ntp", TMonteCarloBEAMChunk_data__ntp, &b_TMonteCarloBEAMChunk_data__ntp);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.npart", TMonteCarloBEAMChunk_data__npart, &b_TMonteCarloBEAMChunk_data__npart);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.id", TMonteCarloBEAMChunk_data__id, &b_TMonteCarloBEAMChunk_data__id);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_pos[20][3]", TMonteCarloBEAMChunk_data__ini_pos, &b_TMonteCarloBEAMChunk_data__ini_pos);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_mom[20][3]", TMonteCarloBEAMChunk_data__ini_mom, &b_TMonteCarloBEAMChunk_data__ini_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_eng", TMonteCarloBEAMChunk_data__ini_eng, &b_TMonteCarloBEAMChunk_data__ini_eng);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_t", TMonteCarloBEAMChunk_data__ini_t, &b_TMonteCarloBEAMChunk_data__ini_t);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_mom[20][3]", TMonteCarloBEAMChunk_data__fin_mom, &b_TMonteCarloBEAMChunk_data__fin_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_pol[20][3]", TMonteCarloBEAMChunk_data__fin_pol, &b_TMonteCarloBEAMChunk_data__fin_pol);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.name_", TMonteCarloBEAMChunk_name_, &b_TMonteCarloBEAMChunk_name_);
   fChain->SetBranchAddress("TGlobalHeaderChunk", &TGlobalHeaderChunk_, &b_TGlobalHeaderChunk_);
   fChain->SetBranchAddress("TGlobalHeaderChunk.chunk_id_", TGlobalHeaderChunk_chunk_id_, &b_TGlobalHeaderChunk_chunk_id_);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.fUniqueID", TGlobalHeaderChunk_data__fUniqueID, &b_TGlobalHeaderChunk_data__fUniqueID);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.fBits", TGlobalHeaderChunk_data__fBits, &b_TGlobalHeaderChunk_data__fBits);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.DAQ_VERSION_NUMBER", TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER, &b_TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RECORD_TYPE", TGlobalHeaderChunk_data__RECORD_TYPE, &b_TGlobalHeaderChunk_data__RECORD_TYPE);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RECORD_ORIGIN", TGlobalHeaderChunk_data__RECORD_ORIGIN, &b_TGlobalHeaderChunk_data__RECORD_ORIGIN);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.NUM_BYTES", TGlobalHeaderChunk_data__NUM_BYTES, &b_TGlobalHeaderChunk_data__NUM_BYTES);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RUN_NUM", TGlobalHeaderChunk_data__RUN_NUM, &b_TGlobalHeaderChunk_data__RUN_NUM);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.SECS", TGlobalHeaderChunk_data__SECS, &b_TGlobalHeaderChunk_data__SECS);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.MSECS", TGlobalHeaderChunk_data__MSECS, &b_TGlobalHeaderChunk_data__MSECS);
   fChain->SetBranchAddress("TGlobalHeaderChunk.name_", TGlobalHeaderChunk_name_, &b_TGlobalHeaderChunk_name_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk", &TGlobalTankHeaderChunk_, &b_TGlobalTankHeaderChunk_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.chunk_id_", TGlobalTankHeaderChunk_chunk_id_, &b_TGlobalTankHeaderChunk_chunk_id_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.fUniqueID", TGlobalTankHeaderChunk_data__fUniqueID, &b_TGlobalTankHeaderChunk_data__fUniqueID);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.fBits", TGlobalTankHeaderChunk_data__fBits, &b_TGlobalTankHeaderChunk_data__fBits);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.RUN_NUM", TGlobalTankHeaderChunk_data__RUN_NUM, &b_TGlobalTankHeaderChunk_data__RUN_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.EVENT_NUM", TGlobalTankHeaderChunk_data__EVENT_NUM, &b_TGlobalTankHeaderChunk_data__EVENT_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.SUB_RUN_NUM", TGlobalTankHeaderChunk_data__SUB_RUN_NUM, &b_TGlobalTankHeaderChunk_data__SUB_RUN_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.EVENT_TYPE", TGlobalTankHeaderChunk_data__EVENT_TYPE, &b_TGlobalTankHeaderChunk_data__EVENT_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_EV_NUM", TGlobalTankHeaderChunk_data__TRIG_EV_NUM, &b_TGlobalTankHeaderChunk_data__TRIG_EV_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_FIFO", TGlobalTankHeaderChunk_data__TRIG_FIFO, &b_TGlobalTankHeaderChunk_data__TRIG_FIFO);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NTSAS_FIFO", TGlobalTankHeaderChunk_data__NTSAS_FIFO, &b_TGlobalTankHeaderChunk_data__NTSAS_FIFO);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.GPS_LOWER", TGlobalTankHeaderChunk_data__GPS_LOWER, &b_TGlobalTankHeaderChunk_data__GPS_LOWER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.GPS_UPPER", TGlobalTankHeaderChunk_data__GPS_UPPER, &b_TGlobalTankHeaderChunk_data__GPS_UPPER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_EV_TYPE", TGlobalTankHeaderChunk_data__TRIG_EV_TYPE, &b_TGlobalTankHeaderChunk_data__TRIG_EV_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_NTSAS", TGlobalTankHeaderChunk_data__TRIG_NTSAS, &b_TGlobalTankHeaderChunk_data__TRIG_NTSAS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_NBCASTS", TGlobalTankHeaderChunk_data__TRIG_NBCASTS, &b_TGlobalTankHeaderChunk_data__TRIG_NBCASTS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_NUM", TGlobalTankHeaderChunk_data__BCAST_NUM, &b_TGlobalTankHeaderChunk_data__BCAST_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_CMD", TGlobalTankHeaderChunk_data__BCAST_CMD, &b_TGlobalTankHeaderChunk_data__BCAST_CMD);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_DIAG", TGlobalTankHeaderChunk_data__BCAST_DIAG, &b_TGlobalTankHeaderChunk_data__BCAST_DIAG);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_LAT", TGlobalTankHeaderChunk_data__BCAST_LAT, &b_TGlobalTankHeaderChunk_data__BCAST_LAT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACT_TIMER[23]", TGlobalTankHeaderChunk_data__ACT_TIMER, &b_TGlobalTankHeaderChunk_data__ACT_TIMER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.FIFO_HIST[100]", TGlobalTankHeaderChunk_data__FIFO_HIST, &b_TGlobalTankHeaderChunk_data__FIFO_HIST);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.FIFO_HIST_POINT", TGlobalTankHeaderChunk_data__FIFO_HIST_POINT, &b_TGlobalTankHeaderChunk_data__FIFO_HIST_POINT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACTIVITY_HIST[30]", TGlobalTankHeaderChunk_data__ACTIVITY_HIST, &b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NTSAS[30]", TGlobalTankHeaderChunk_data__NTSAS, &b_TGlobalTankHeaderChunk_data__NTSAS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACTIVITY_HIST_POINT", TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT, &b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_RCVR", TGlobalTankHeaderChunk_data__QTH_RCVR, &b_TGlobalTankHeaderChunk_data__QTH_RCVR);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_BUFSIZE", TGlobalTankHeaderChunk_data__QTH_BUFSIZE, &b_TGlobalTankHeaderChunk_data__QTH_BUFSIZE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_NUM_HITS", TGlobalTankHeaderChunk_data__QTH_NUM_HITS, &b_TGlobalTankHeaderChunk_data__QTH_NUM_HITS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_DATA_TYPE", TGlobalTankHeaderChunk_data__QTH_DATA_TYPE, &b_TGlobalTankHeaderChunk_data__QTH_DATA_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NUM_UNCAL_HITS", TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS, &b_TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.RATE", TGlobalTankHeaderChunk_data__RATE, &b_TGlobalTankHeaderChunk_data__RATE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.name_", TGlobalTankHeaderChunk_name_, &b_TGlobalTankHeaderChunk_name_);
   fChain->SetBranchAddress("TCalibratedDataChunk", &TCalibratedDataChunk_, &b_TCalibratedDataChunk_);
   fChain->SetBranchAddress("TCalibratedDataChunk.chunk_id_", TCalibratedDataChunk_chunk_id_, &b_TCalibratedDataChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.fUniqueID", TCalibratedDataChunk_data__fUniqueID, &b_TCalibratedDataChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.fBits", TCalibratedDataChunk_data__fBits, &b_TCalibratedDataChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Hits", TCalibratedDataChunk_data__Hits, &b_TCalibratedDataChunk_data__Hits);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.PMT", TCalibratedDataChunk_data__PMT, &b_TCalibratedDataChunk_data__PMT);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Q", TCalibratedDataChunk_data__Q, &b_TCalibratedDataChunk_data__Q);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.notruncQ", TCalibratedDataChunk_data__notruncQ, &b_TCalibratedDataChunk_data__notruncQ);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.T", TCalibratedDataChunk_data__T, &b_TCalibratedDataChunk_data__T);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Tmin", TCalibratedDataChunk_data__Tmin, &b_TCalibratedDataChunk_data__Tmin);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Tmax", TCalibratedDataChunk_data__Tmax, &b_TCalibratedDataChunk_data__Tmax);
   fChain->SetBranchAddress("TCalibratedDataChunk.name_", TCalibratedDataChunk_name_, &b_TCalibratedDataChunk_name_);
   fChain->SetBranchAddress("TCrate13Chunk", &TCrate13Chunk_, &b_TCrate13Chunk_);
   fChain->SetBranchAddress("TCrate13Chunk.chunk_id_", TCrate13Chunk_chunk_id_, &b_TCrate13Chunk_chunk_id_);
   fChain->SetBranchAddress("TCrate13Chunk.data_.fUniqueID", TCrate13Chunk_data__fUniqueID, &b_TCrate13Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCrate13Chunk.data_.fBits", TCrate13Chunk_data__fBits, &b_TCrate13Chunk_data__fBits);
   fChain->SetBranchAddress("TCrate13Chunk.data_.Laser_flask", TCrate13Chunk_data__Laser_flask, &b_TCrate13Chunk_data__Laser_flask);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_laser", TCrate13Chunk_data__N_laser, &b_TCrate13Chunk_data__N_laser);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_cubes", TCrate13Chunk_data__N_cubes, &b_TCrate13Chunk_data__N_cubes);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_RWM", TCrate13Chunk_data__N_RWM, &b_TCrate13Chunk_data__N_RWM);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_d90", TCrate13Chunk_data__N_d90, &b_TCrate13Chunk_data__N_d90);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_MUTR", TCrate13Chunk_data__N_MUTR, &b_TCrate13Chunk_data__N_MUTR);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e1", TCrate13Chunk_data__N_trig_e1, &b_TCrate13Chunk_data__N_trig_e1);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e2", TCrate13Chunk_data__N_trig_e2, &b_TCrate13Chunk_data__N_trig_e2);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e3", TCrate13Chunk_data__N_trig_e3, &b_TCrate13Chunk_data__N_trig_e3);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e4", TCrate13Chunk_data__N_trig_e4, &b_TCrate13Chunk_data__N_trig_e4);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_quality", TCrate13Chunk_data__RWM_quality, &b_TCrate13Chunk_data__RWM_quality);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_refined_time", TCrate13Chunk_data__RWM_refined_time, &b_TCrate13Chunk_data__RWM_refined_time);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_bounce_time", TCrate13Chunk_data__RWM_bounce_time, &b_TCrate13Chunk_data__RWM_bounce_time);
   fChain->SetBranchAddress("TCrate13Chunk.data_.laser_t[20]", TCrate13Chunk_data__laser_t, &b_TCrate13Chunk_data__laser_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.laser_q[20]", TCrate13Chunk_data__laser_q, &b_TCrate13Chunk_data__laser_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_chan[20]", TCrate13Chunk_data__cubes_chan, &b_TCrate13Chunk_data__cubes_chan);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_t[20]", TCrate13Chunk_data__cubes_t, &b_TCrate13Chunk_data__cubes_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_q[20]", TCrate13Chunk_data__cubes_q, &b_TCrate13Chunk_data__cubes_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_t[20]", TCrate13Chunk_data__RWM_t, &b_TCrate13Chunk_data__RWM_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_q[20]", TCrate13Chunk_data__RWM_q, &b_TCrate13Chunk_data__RWM_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.d90_t[20]", TCrate13Chunk_data__d90_t, &b_TCrate13Chunk_data__d90_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.d90_q[20]", TCrate13Chunk_data__d90_q, &b_TCrate13Chunk_data__d90_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.MUTR_t[20]", TCrate13Chunk_data__MUTR_t, &b_TCrate13Chunk_data__MUTR_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.MUTR_q[20]", TCrate13Chunk_data__MUTR_q, &b_TCrate13Chunk_data__MUTR_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e1_t[20]", TCrate13Chunk_data__trig_e1_t, &b_TCrate13Chunk_data__trig_e1_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e1_q[20]", TCrate13Chunk_data__trig_e1_q, &b_TCrate13Chunk_data__trig_e1_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e2_t[20]", TCrate13Chunk_data__trig_e2_t, &b_TCrate13Chunk_data__trig_e2_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e2_q[20]", TCrate13Chunk_data__trig_e2_q, &b_TCrate13Chunk_data__trig_e2_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e3_t[20]", TCrate13Chunk_data__trig_e3_t, &b_TCrate13Chunk_data__trig_e3_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e3_q[20]", TCrate13Chunk_data__trig_e3_q, &b_TCrate13Chunk_data__trig_e3_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e4_t[20]", TCrate13Chunk_data__trig_e4_t, &b_TCrate13Chunk_data__trig_e4_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e4_q[20]", TCrate13Chunk_data__trig_e4_q, &b_TCrate13Chunk_data__trig_e4_q);
   fChain->SetBranchAddress("TCrate13Chunk.name_", TCrate13Chunk_name_, &b_TCrate13Chunk_name_);
   fChain->SetBranchAddress("TConnectTheHitsChunk", &TConnectTheHitsChunk_, &b_TConnectTheHitsChunk_);
   fChain->SetBranchAddress("TConnectTheHitsChunk.chunk_id_", TConnectTheHitsChunk_chunk_id_, &b_TConnectTheHitsChunk_chunk_id_);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.fUniqueID", TConnectTheHitsChunk_data__fUniqueID, &b_TConnectTheHitsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.fBits", TConnectTheHitsChunk_data__fBits, &b_TConnectTheHitsChunk_data__fBits);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.Hits", TConnectTheHitsChunk_data__Hits, &b_TConnectTheHitsChunk_data__Hits);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.Index", TConnectTheHitsChunk_data__Index, &b_TConnectTheHitsChunk_data__Index);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.Flag", TConnectTheHitsChunk_data__Flag, &b_TConnectTheHitsChunk_data__Flag);
   fChain->SetBranchAddress("TConnectTheHitsChunk.data_.Offset", TConnectTheHitsChunk_data__Offset, &b_TConnectTheHitsChunk_data__Offset);
   fChain->SetBranchAddress("TConnectTheHitsChunk.name_", TConnectTheHitsChunk_name_, &b_TConnectTheHitsChunk_name_);
   fChain->SetBranchAddress("TMCRawEventChunk", &TMCRawEventChunk_, &b_TMCRawEventChunk_);
   fChain->SetBranchAddress("TMCRawEventChunk.chunk_id_", TMCRawEventChunk_chunk_id_, &b_TMCRawEventChunk_chunk_id_);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.fUniqueID", TMCRawEventChunk_data__fUniqueID, &b_TMCRawEventChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.fBits", TMCRawEventChunk_data__fBits, &b_TMCRawEventChunk_data__fBits);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.numhits", TMCRawEventChunk_data__numhits, &b_TMCRawEventChunk_data__numhits);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.MCVersion", TMCRawEventChunk_data__MCVersion, &b_TMCRawEventChunk_data__MCVersion);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.varflags", TMCRawEventChunk_data__varflags, &b_TMCRawEventChunk_data__varflags);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nutype", TMCRawEventChunk_data__nutype, &b_TMCRawEventChunk_data__nutype);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nfsp", TMCRawEventChunk_data__nfsp, &b_TMCRawEventChunk_data__nfsp);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ndcy", TMCRawEventChunk_data__ndcy, &b_TMCRawEventChunk_data__ndcy);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.evwt", TMCRawEventChunk_data__evwt, &b_TMCRawEventChunk_data__evwt);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.pneu[4]", TMCRawEventChunk_data__pneu, &b_TMCRawEventChunk_data__pneu);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ipfs", TMCRawEventChunk_data__ipfs, &b_TMCRawEventChunk_data__ipfs);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttcer", TMCRawEventChunk_data__nhttcer, &b_TMCRawEventChunk_data__nhttcer);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttVcer", TMCRawEventChunk_data__nhttVcer, &b_TMCRawEventChunk_data__nhttVcer);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttsci", TMCRawEventChunk_data__nhttsci, &b_TMCRawEventChunk_data__nhttsci);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttVsci", TMCRawEventChunk_data__nhttVsci, &b_TMCRawEventChunk_data__nhttVsci);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.time", TMCRawEventChunk_data__time, &b_TMCRawEventChunk_data__time);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.pfsp[127][4]", TMCRawEventChunk_data__pfsp, &b_TMCRawEventChunk_data__pfsp);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.vrtx[127][3]", TMCRawEventChunk_data__vrtx, &b_TMCRawEventChunk_data__vrtx);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.svrtx[3]", TMCRawEventChunk_data__svrtx, &b_TMCRawEventChunk_data__svrtx);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ievnt", TMCRawEventChunk_data__ievnt, &b_TMCRawEventChunk_data__ievnt);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nproctag", TMCRawEventChunk_data__nproctag, &b_TMCRawEventChunk_data__nproctag);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.iproctag", TMCRawEventChunk_data__iproctag, &b_TMCRawEventChunk_data__iproctag);
   fChain->SetBranchAddress("TMCRawEventChunk.name_", TMCRawEventChunk_name_, &b_TMCRawEventChunk_name_);
   fChain->SetBranchAddress("TMCHitMatchChunk", &TMCHitMatchChunk_, &b_TMCHitMatchChunk_);
   fChain->SetBranchAddress("TMCHitMatchChunk.chunk_id_", TMCHitMatchChunk_chunk_id_, &b_TMCHitMatchChunk_chunk_id_);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.fUniqueID", TMCHitMatchChunk_data__fUniqueID, &b_TMCHitMatchChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.fBits", TMCHitMatchChunk_data__fBits, &b_TMCHitMatchChunk_data__fBits);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Nhit", TMCHitMatchChunk_data__Nhit, &b_TMCHitMatchChunk_data__Nhit);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Hit2FSP[17406]", TMCHitMatchChunk_data__Hit2FSP, &b_TMCHitMatchChunk_data__Hit2FSP);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.NumFSP", TMCHitMatchChunk_data__NumFSP, &b_TMCHitMatchChunk_data__NumFSP);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.PEs[127]", TMCHitMatchChunk_data__PEs, &b_TMCHitMatchChunk_data__PEs);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Hits[127]", TMCHitMatchChunk_data__Hits, &b_TMCHitMatchChunk_data__Hits);
   fChain->SetBranchAddress("TMCHitMatchChunk.name_", TMCHitMatchChunk_name_, &b_TMCHitMatchChunk_name_);
   fChain->SetBranchAddress("TUncalibratedDataChunk", &TUncalibratedDataChunk_, &b_TUncalibratedDataChunk_);
   fChain->SetBranchAddress("TUncalibratedDataChunk.chunk_id_", TUncalibratedDataChunk_chunk_id_, &b_TUncalibratedDataChunk_chunk_id_);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.fUniqueID", TUncalibratedDataChunk_data__fUniqueID, &b_TUncalibratedDataChunk_data__fUniqueID);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.fBits", TUncalibratedDataChunk_data__fBits, &b_TUncalibratedDataChunk_data__fBits);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.NUM_HITS", TUncalibratedDataChunk_data__NUM_HITS, &b_TUncalibratedDataChunk_data__NUM_HITS);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.CHANNEL", TUncalibratedDataChunk_data__CHANNEL, &b_TUncalibratedDataChunk_data__CHANNEL);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.OFFSET", TUncalibratedDataChunk_data__OFFSET, &b_TUncalibratedDataChunk_data__OFFSET);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC0", TUncalibratedDataChunk_data__Q_ADC0, &b_TUncalibratedDataChunk_data__Q_ADC0);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC1", TUncalibratedDataChunk_data__Q_ADC1, &b_TUncalibratedDataChunk_data__Q_ADC1);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC2", TUncalibratedDataChunk_data__Q_ADC2, &b_TUncalibratedDataChunk_data__Q_ADC2);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC3", TUncalibratedDataChunk_data__Q_ADC3, &b_TUncalibratedDataChunk_data__Q_ADC3);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC0", TUncalibratedDataChunk_data__T_ADC0, &b_TUncalibratedDataChunk_data__T_ADC0);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC1", TUncalibratedDataChunk_data__T_ADC1, &b_TUncalibratedDataChunk_data__T_ADC1);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC2", TUncalibratedDataChunk_data__T_ADC2, &b_TUncalibratedDataChunk_data__T_ADC2);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC3", TUncalibratedDataChunk_data__T_ADC3, &b_TUncalibratedDataChunk_data__T_ADC3);
   fChain->SetBranchAddress("TUncalibratedDataChunk.name_", TUncalibratedDataChunk_name_, &b_TUncalibratedDataChunk_name_);
   fChain->SetBranchAddress("TVetoClusterChunk", &TVetoClusterChunk_, &b_TVetoClusterChunk_);
   fChain->SetBranchAddress("TVetoClusterChunk.chunk_id_", TVetoClusterChunk_chunk_id_, &b_TVetoClusterChunk_chunk_id_);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.fUniqueID", TVetoClusterChunk_data__fUniqueID, &b_TVetoClusterChunk_data__fUniqueID);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.fBits", TVetoClusterChunk_data__fBits, &b_TVetoClusterChunk_data__fBits);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Charge[10]", TVetoClusterChunk_data__Charge, &b_TVetoClusterChunk_data__Charge);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Time[10]", TVetoClusterChunk_data__Time, &b_TVetoClusterChunk_data__Time);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.X[10]", TVetoClusterChunk_data__X, &b_TVetoClusterChunk_data__X);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Y[10]", TVetoClusterChunk_data__Y, &b_TVetoClusterChunk_data__Y);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Z[10]", TVetoClusterChunk_data__Z, &b_TVetoClusterChunk_data__Z);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.XSig[10]", TVetoClusterChunk_data__XSig, &b_TVetoClusterChunk_data__XSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.YSig[10]", TVetoClusterChunk_data__YSig, &b_TVetoClusterChunk_data__YSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.ZSig[10]", TVetoClusterChunk_data__ZSig, &b_TVetoClusterChunk_data__ZSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.SigMax[10]", TVetoClusterChunk_data__SigMax, &b_TVetoClusterChunk_data__SigMax);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.SepMean[10]", TVetoClusterChunk_data__SepMean, &b_TVetoClusterChunk_data__SepMean);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.TSig[10]", TVetoClusterChunk_data__TSig, &b_TVetoClusterChunk_data__TSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Left", TVetoClusterChunk_data__Left, &b_TVetoClusterChunk_data__Left);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.NC", TVetoClusterChunk_data__NC, &b_TVetoClusterChunk_data__NC);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Hit_Indx[240][10]", TVetoClusterChunk_data__Hit_Indx, &b_TVetoClusterChunk_data__Hit_Indx);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Hits[10]", TVetoClusterChunk_data__Hits, &b_TVetoClusterChunk_data__Hits);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Subevent", TVetoClusterChunk_data__Subevent, &b_TVetoClusterChunk_data__Subevent);
   fChain->SetBranchAddress("TVetoClusterChunk.name_", TVetoClusterChunk_name_, &b_TVetoClusterChunk_name_);
   fChain->SetBranchAddress("TSplitEventChunk", &TSplitEventChunk_, &b_TSplitEventChunk_);
   fChain->SetBranchAddress("TSplitEventChunk.chunk_id_", TSplitEventChunk_chunk_id_, &b_TSplitEventChunk_chunk_id_);
   fChain->SetBranchAddress("TSplitEventChunk.data_.fUniqueID", TSplitEventChunk_data__fUniqueID, &b_TSplitEventChunk_data__fUniqueID);
   fChain->SetBranchAddress("TSplitEventChunk.data_.fBits", TSplitEventChunk_data__fBits, &b_TSplitEventChunk_data__fBits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Subevent", TSplitEventChunk_data__Subevent, &b_TSplitEventChunk_data__Subevent);
   fChain->SetBranchAddress("TSplitEventChunk.data_.THits", TSplitEventChunk_data__THits, &b_TSplitEventChunk_data__THits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VHits", TSplitEventChunk_data__VHits, &b_TSplitEventChunk_data__VHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TposHits", TSplitEventChunk_data__TposHits, &b_TSplitEventChunk_data__TposHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VposHits", TSplitEventChunk_data__VposHits, &b_TSplitEventChunk_data__VposHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TPMT", TSplitEventChunk_data__TPMT, &b_TSplitEventChunk_data__TPMT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VPMT", TSplitEventChunk_data__VPMT, &b_TSplitEventChunk_data__VPMT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TQ", TSplitEventChunk_data__TQ, &b_TSplitEventChunk_data__TQ);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VQ", TSplitEventChunk_data__VQ, &b_TSplitEventChunk_data__VQ);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Qtot", TSplitEventChunk_data__Qtot, &b_TSplitEventChunk_data__Qtot);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TQpos", TSplitEventChunk_data__TQpos, &b_TSplitEventChunk_data__TQpos);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VQpos", TSplitEventChunk_data__VQpos, &b_TSplitEventChunk_data__VQpos);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TT", TSplitEventChunk_data__TT, &b_TSplitEventChunk_data__TT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VT", TSplitEventChunk_data__VT, &b_TSplitEventChunk_data__VT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Tmin", TSplitEventChunk_data__Tmin, &b_TSplitEventChunk_data__Tmin);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Tmax", TSplitEventChunk_data__Tmax, &b_TSplitEventChunk_data__Tmax);
   fChain->SetBranchAddress("TSplitEventChunk.data_.AvgTTim", TSplitEventChunk_data__AvgTTim, &b_TSplitEventChunk_data__AvgTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.PeakTTim", TSplitEventChunk_data__PeakTTim, &b_TSplitEventChunk_data__PeakTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.rmsTTim", TSplitEventChunk_data__rmsTTim, &b_TSplitEventChunk_data__rmsTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.AvgVTim", TSplitEventChunk_data__AvgVTim, &b_TSplitEventChunk_data__AvgVTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.PeakVTim", TSplitEventChunk_data__PeakVTim, &b_TSplitEventChunk_data__PeakVTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.rmsVTim", TSplitEventChunk_data__rmsVTim, &b_TSplitEventChunk_data__rmsVTim);
   fChain->SetBranchAddress("TSplitEventChunk.name_", TSplitEventChunk_name_, &b_TSplitEventChunk_name_);
   fChain->SetBranchAddress("TReweightToCVChunk", &TReweightToCVChunk_, &b_TReweightToCVChunk_);
   fChain->SetBranchAddress("TReweightToCVChunk.chunk_id_", TReweightToCVChunk_chunk_id_, &b_TReweightToCVChunk_chunk_id_);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fUniqueID", TReweightToCVChunk_data__fUniqueID, &b_TReweightToCVChunk_data__fUniqueID);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fBits", TReweightToCVChunk_data__fBits, &b_TReweightToCVChunk_data__fBits);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.radius[3]", TReweightToCVChunk_data__radius, &b_TReweightToCVChunk_data__radius);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.ppi0", TReweightToCVChunk_data__ppi0, &b_TReweightToCVChunk_data__ppi0);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.nuanceChannel", TReweightToCVChunk_data__nuanceChannel, &b_TReweightToCVChunk_data__nuanceChannel);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.nuType", TReweightToCVChunk_data__nuType, &b_TReweightToCVChunk_data__nuType);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.enu", TReweightToCVChunk_data__enu, &b_TReweightToCVChunk_data__enu);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.parentId", TReweightToCVChunk_data__parentId, &b_TReweightToCVChunk_data__parentId);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.pParent[3]", TReweightToCVChunk_data__pParent, &b_TReweightToCVChunk_data__pParent);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.xsecweight", TReweightToCVChunk_data__xsecweight, &b_TReweightToCVChunk_data__xsecweight);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fluxweight", TReweightToCVChunk_data__fluxweight, &b_TReweightToCVChunk_data__fluxweight);
   fChain->SetBranchAddress("TReweightToCVChunk.name_", TReweightToCVChunk_name_, &b_TReweightToCVChunk_name_);
   fChain->SetBranchAddress("TWeightDetailsChunk", &TWeightDetailsChunk_, &b_TWeightDetailsChunk_);
   fChain->SetBranchAddress("TWeightDetailsChunk.chunk_id_", TWeightDetailsChunk_chunk_id_, &b_TWeightDetailsChunk_chunk_id_);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.fUniqueID", TWeightDetailsChunk_data__fUniqueID, &b_TWeightDetailsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.fBits", TWeightDetailsChunk_data__fBits, &b_TWeightDetailsChunk_data__fBits);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.resangle_wgt", TWeightDetailsChunk_data__resangle_wgt, &b_TWeightDetailsChunk_data__resangle_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.dirt_wgt", TWeightDetailsChunk_data__dirt_wgt, &b_TWeightDetailsChunk_data__dirt_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0mom_wgt", TWeightDetailsChunk_data__pi0mom_wgt, &b_TWeightDetailsChunk_data__pi0mom_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.deltamom_wgt", TWeightDetailsChunk_data__deltamom_wgt, &b_TWeightDetailsChunk_data__deltamom_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.raddelta_wgt", TWeightDetailsChunk_data__raddelta_wgt, &b_TWeightDetailsChunk_data__raddelta_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0coh_wgt", TWeightDetailsChunk_data__pi0coh_wgt, &b_TWeightDetailsChunk_data__pi0coh_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0res_wgt", TWeightDetailsChunk_data__pi0res_wgt, &b_TWeightDetailsChunk_data__pi0res_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.nuance_wgt", TWeightDetailsChunk_data__nuance_wgt, &b_TWeightDetailsChunk_data__nuance_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.multpi0_wgt", TWeightDetailsChunk_data__multpi0_wgt, &b_TWeightDetailsChunk_data__multpi0_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.multdelta_wgt", TWeightDetailsChunk_data__multdelta_wgt, &b_TWeightDetailsChunk_data__multdelta_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pipflux_wgt", TWeightDetailsChunk_data__pipflux_wgt, &b_TWeightDetailsChunk_data__pipflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pimflux_wgt", TWeightDetailsChunk_data__pimflux_wgt, &b_TWeightDetailsChunk_data__pimflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.kpflux_wgt", TWeightDetailsChunk_data__kpflux_wgt, &b_TWeightDetailsChunk_data__kpflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.kmflux_wgt", TWeightDetailsChunk_data__kmflux_wgt, &b_TWeightDetailsChunk_data__kmflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.k0flux_wgt", TWeightDetailsChunk_data__k0flux_wgt, &b_TWeightDetailsChunk_data__k0flux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.histo_wgt", TWeightDetailsChunk_data__histo_wgt, &b_TWeightDetailsChunk_data__histo_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.npip_wgt", TWeightDetailsChunk_data__npip_wgt, &b_TWeightDetailsChunk_data__npip_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.npim_wgt", TWeightDetailsChunk_data__npim_wgt, &b_TWeightDetailsChunk_data__npim_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.absorber_wgt", TWeightDetailsChunk_data__absorber_wgt, &b_TWeightDetailsChunk_data__absorber_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.totalweight", TWeightDetailsChunk_data__totalweight, &b_TWeightDetailsChunk_data__totalweight);
   fChain->SetBranchAddress("TWeightDetailsChunk.name_", TWeightDetailsChunk_name_, &b_TWeightDetailsChunk_name_);
   fChain->SetBranchAddress("TStancuFastChunk", &TStancuFastChunk_, &b_TStancuFastChunk_);
   fChain->SetBranchAddress("TStancuFastChunk.chunk_id_", TStancuFastChunk_chunk_id_, &b_TStancuFastChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFastChunk.data_.fUniqueID", TStancuFastChunk_data__fUniqueID, &b_TStancuFastChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFastChunk.data_.fBits", TStancuFastChunk_data__fBits, &b_TStancuFastChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFastChunk.data_.IT", TStancuFastChunk_data__IT, &b_TStancuFastChunk_data__IT);
   fChain->SetBranchAddress("TStancuFastChunk.data_.X", TStancuFastChunk_data__X, &b_TStancuFastChunk_data__X);
   fChain->SetBranchAddress("TStancuFastChunk.data_.Y", TStancuFastChunk_data__Y, &b_TStancuFastChunk_data__Y);
   fChain->SetBranchAddress("TStancuFastChunk.data_.Z", TStancuFastChunk_data__Z, &b_TStancuFastChunk_data__Z);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UX", TStancuFastChunk_data__UX, &b_TStancuFastChunk_data__UX);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UY", TStancuFastChunk_data__UY, &b_TStancuFastChunk_data__UY);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UZ", TStancuFastChunk_data__UZ, &b_TStancuFastChunk_data__UZ);
   fChain->SetBranchAddress("TStancuFastChunk.data_.T", TStancuFastChunk_data__T, &b_TStancuFastChunk_data__T);
   fChain->SetBranchAddress("TStancuFastChunk.data_.D", TStancuFastChunk_data__D, &b_TStancuFastChunk_data__D);
   fChain->SetBranchAddress("TStancuFastChunk.data_.E", TStancuFastChunk_data__E, &b_TStancuFastChunk_data__E);
   fChain->SetBranchAddress("TStancuFastChunk.data_.F", TStancuFastChunk_data__F, &b_TStancuFastChunk_data__F);
   fChain->SetBranchAddress("TStancuFastChunk.name_", TStancuFastChunk_name_, &b_TStancuFastChunk_name_);
   fChain->SetBranchAddress("TStancuFullChunk", &TStancuFullChunk_, &b_TStancuFullChunk_);
   fChain->SetBranchAddress("TStancuFullChunk.chunk_id_", TStancuFullChunk_chunk_id_, &b_TStancuFullChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFullChunk.data_.fUniqueID", TStancuFullChunk_data__fUniqueID, &b_TStancuFullChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFullChunk.data_.fBits", TStancuFullChunk_data__fBits, &b_TStancuFullChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFullChunk.data_.IT", TStancuFullChunk_data__IT, &b_TStancuFullChunk_data__IT);
   fChain->SetBranchAddress("TStancuFullChunk.data_.X", TStancuFullChunk_data__X, &b_TStancuFullChunk_data__X);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Y", TStancuFullChunk_data__Y, &b_TStancuFullChunk_data__Y);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Z", TStancuFullChunk_data__Z, &b_TStancuFullChunk_data__Z);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UX", TStancuFullChunk_data__UX, &b_TStancuFullChunk_data__UX);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UY", TStancuFullChunk_data__UY, &b_TStancuFullChunk_data__UY);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UZ", TStancuFullChunk_data__UZ, &b_TStancuFullChunk_data__UZ);
   fChain->SetBranchAddress("TStancuFullChunk.data_.T", TStancuFullChunk_data__T, &b_TStancuFullChunk_data__T);
   fChain->SetBranchAddress("TStancuFullChunk.data_.D", TStancuFullChunk_data__D, &b_TStancuFullChunk_data__D);
   fChain->SetBranchAddress("TStancuFullChunk.data_.E", TStancuFullChunk_data__E, &b_TStancuFullChunk_data__E);
   fChain->SetBranchAddress("TStancuFullChunk.data_.F", TStancuFullChunk_data__F, &b_TStancuFullChunk_data__F);
   fChain->SetBranchAddress("TStancuFullChunk.data_.E_mu", TStancuFullChunk_data__E_mu, &b_TStancuFullChunk_data__E_mu);
   fChain->SetBranchAddress("TStancuFullChunk.data_.S_tkint", TStancuFullChunk_data__S_tkint, &b_TStancuFullChunk_data__S_tkint);
   fChain->SetBranchAddress("TStancuFullChunk.data_.RdR", TStancuFullChunk_data__RdR, &b_TStancuFullChunk_data__RdR);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Fqlt05", TStancuFullChunk_data__Fqlt05, &b_TStancuFullChunk_data__Fqlt05);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Fqlt10", TStancuFullChunk_data__Fqlt10, &b_TStancuFullChunk_data__Fqlt10);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Xvtx", TStancuFullChunk_data__Xvtx, &b_TStancuFullChunk_data__Xvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Yvtx", TStancuFullChunk_data__Yvtx, &b_TStancuFullChunk_data__Yvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Zvtx", TStancuFullChunk_data__Zvtx, &b_TStancuFullChunk_data__Zvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Rvtx", TStancuFullChunk_data__Rvtx, &b_TStancuFullChunk_data__Rvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Tvtx", TStancuFullChunk_data__Tvtx, &b_TStancuFullChunk_data__Tvtx);
   fChain->SetBranchAddress("TStancuFullChunk.name_", TStancuFullChunk_name_, &b_TStancuFullChunk_name_);
   fChain->SetBranchAddress("TStancuFluxChunk", &TStancuFluxChunk_, &b_TStancuFluxChunk_);
   fChain->SetBranchAddress("TStancuFluxChunk.chunk_id_", TStancuFluxChunk_chunk_id_, &b_TStancuFluxChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.fUniqueID", TStancuFluxChunk_data__fUniqueID, &b_TStancuFluxChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.fBits", TStancuFluxChunk_data__fBits, &b_TStancuFluxChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.IT", TStancuFluxChunk_data__IT, &b_TStancuFluxChunk_data__IT);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.CER", TStancuFluxChunk_data__CER, &b_TStancuFluxChunk_data__CER);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.SCI", TStancuFluxChunk_data__SCI, &b_TStancuFluxChunk_data__SCI);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.F", TStancuFluxChunk_data__F, &b_TStancuFluxChunk_data__F);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.EcerEl", TStancuFluxChunk_data__EcerEl, &b_TStancuFluxChunk_data__EcerEl);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.EcerMu", TStancuFluxChunk_data__EcerMu, &b_TStancuFluxChunk_data__EcerMu);
   fChain->SetBranchAddress("TStancuFluxChunk.name_", TStancuFluxChunk_name_, &b_TStancuFluxChunk_name_);
   fChain->SetBranchAddress("TStancuTrakChunk", &TStancuTrakChunk_, &b_TStancuTrakChunk_);
   fChain->SetBranchAddress("TStancuTrakChunk.chunk_id_", TStancuTrakChunk_chunk_id_, &b_TStancuTrakChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.fUniqueID", TStancuTrakChunk_data__fUniqueID, &b_TStancuTrakChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.fBits", TStancuTrakChunk_data__fBits, &b_TStancuTrakChunk_data__fBits);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.IT", TStancuTrakChunk_data__IT, &b_TStancuTrakChunk_data__IT);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.TRAK", TStancuTrakChunk_data__TRAK, &b_TStancuTrakChunk_data__TRAK);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.F", TStancuTrakChunk_data__F, &b_TStancuTrakChunk_data__F);
   fChain->SetBranchAddress("TStancuTrakChunk.name_", TStancuTrakChunk_name_, &b_TStancuTrakChunk_name_);
   fChain->SetBranchAddress("TStancuMuvdChunk", &TStancuMuvdChunk_, &b_TStancuMuvdChunk_);
   fChain->SetBranchAddress("TStancuMuvdChunk.chunk_id_", TStancuMuvdChunk_chunk_id_, &b_TStancuMuvdChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.fUniqueID", TStancuMuvdChunk_data__fUniqueID, &b_TStancuMuvdChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.fBits", TStancuMuvdChunk_data__fBits, &b_TStancuMuvdChunk_data__fBits);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.IT", TStancuMuvdChunk_data__IT, &b_TStancuMuvdChunk_data__IT);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.X", TStancuMuvdChunk_data__X, &b_TStancuMuvdChunk_data__X);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.Y", TStancuMuvdChunk_data__Y, &b_TStancuMuvdChunk_data__Y);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.Z", TStancuMuvdChunk_data__Z, &b_TStancuMuvdChunk_data__Z);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UX", TStancuMuvdChunk_data__UX, &b_TStancuMuvdChunk_data__UX);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UY", TStancuMuvdChunk_data__UY, &b_TStancuMuvdChunk_data__UY);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UZ", TStancuMuvdChunk_data__UZ, &b_TStancuMuvdChunk_data__UZ);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.T", TStancuMuvdChunk_data__T, &b_TStancuMuvdChunk_data__T);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.F", TStancuMuvdChunk_data__F, &b_TStancuMuvdChunk_data__F);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.L", TStancuMuvdChunk_data__L, &b_TStancuMuvdChunk_data__L);
   fChain->SetBranchAddress("TStancuMuvdChunk.name_", TStancuMuvdChunk_name_, &b_TStancuMuvdChunk_name_);
   fChain->SetBranchAddress("TStancuPi0Chunk", &TStancuPi0Chunk_, &b_TStancuPi0Chunk_);
   fChain->SetBranchAddress("TStancuPi0Chunk.chunk_id_", TStancuPi0Chunk_chunk_id_, &b_TStancuPi0Chunk_chunk_id_);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fUniqueID", TStancuPi0Chunk_data__fUniqueID, &b_TStancuPi0Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fBits", TStancuPi0Chunk_data__fBits, &b_TStancuPi0Chunk_data__fBits);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.iter", TStancuPi0Chunk_data__iter, &b_TStancuPi0Chunk_data__iter);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.x", TStancuPi0Chunk_data__x, &b_TStancuPi0Chunk_data__x);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.y", TStancuPi0Chunk_data__y, &b_TStancuPi0Chunk_data__y);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.z", TStancuPi0Chunk_data__z, &b_TStancuPi0Chunk_data__z);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.t", TStancuPi0Chunk_data__t, &b_TStancuPi0Chunk_data__t);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.llike", TStancuPi0Chunk_data__llike, &b_TStancuPi0Chunk_data__llike);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.mass", TStancuPi0Chunk_data__mass, &b_TStancuPi0Chunk_data__mass);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.darec", TStancuPi0Chunk_data__darec, &b_TStancuPi0Chunk_data__darec);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fcer", TStancuPi0Chunk_data__fcer, &b_TStancuPi0Chunk_data__fcer);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.phi1", TStancuPi0Chunk_data__phi1, &b_TStancuPi0Chunk_data__phi1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.teta1", TStancuPi0Chunk_data__teta1, &b_TStancuPi0Chunk_data__teta1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.phi2", TStancuPi0Chunk_data__phi2, &b_TStancuPi0Chunk_data__phi2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.teta2", TStancuPi0Chunk_data__teta2, &b_TStancuPi0Chunk_data__teta2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.cer1", TStancuPi0Chunk_data__cer1, &b_TStancuPi0Chunk_data__cer1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.sci1", TStancuPi0Chunk_data__sci1, &b_TStancuPi0Chunk_data__sci1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.cer2", TStancuPi0Chunk_data__cer2, &b_TStancuPi0Chunk_data__cer2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.sci2", TStancuPi0Chunk_data__sci2, &b_TStancuPi0Chunk_data__sci2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.srec1", TStancuPi0Chunk_data__srec1, &b_TStancuPi0Chunk_data__srec1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.dist1", TStancuPi0Chunk_data__dist1, &b_TStancuPi0Chunk_data__dist1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.srec2", TStancuPi0Chunk_data__srec2, &b_TStancuPi0Chunk_data__srec2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.dist2", TStancuPi0Chunk_data__dist2, &b_TStancuPi0Chunk_data__dist2);
   fChain->SetBranchAddress("TStancuPi0Chunk.name_", TStancuPi0Chunk_name_, &b_TStancuPi0Chunk_name_);
   fChain->SetBranchAddress("TStancuVarsChunk", &TStancuVarsChunk_, &b_TStancuVarsChunk_);
   fChain->SetBranchAddress("TStancuVarsChunk.chunk_id_", TStancuVarsChunk_chunk_id_, &b_TStancuVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fUniqueID", TStancuVarsChunk_data__fUniqueID, &b_TStancuVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fBits", TStancuVarsChunk_data__fBits, &b_TStancuVarsChunk_data__fBits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nchunks", TStancuVarsChunk_data__nchunks, &b_TStancuVarsChunk_data__nchunks);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chunknr", TStancuVarsChunk_data__chunknr, &b_TStancuVarsChunk_data__chunknr);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.energy", TStancuVarsChunk_data__energy, &b_TStancuVarsChunk_data__energy);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.thits", TStancuVarsChunk_data__thits, &b_TStancuVarsChunk_data__thits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.vhits", TStancuVarsChunk_data__vhits, &b_TStancuVarsChunk_data__vhits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.d", TStancuVarsChunk_data__d, &b_TStancuVarsChunk_data__d);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rdr", TStancuVarsChunk_data__rdr, &b_TStancuVarsChunk_data__rdr);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.stint", TStancuVarsChunk_data__stint, &b_TStancuVarsChunk_data__stint);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rawtsig", TStancuVarsChunk_data__EMu_rawtsig, &b_TStancuVarsChunk_data__EMu_rawtsig);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rawtavg", TStancuVarsChunk_data__EMu_rawtavg, &b_TStancuVarsChunk_data__EMu_rawtavg);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_trak", TStancuVarsChunk_data__EMu_trak, &b_TStancuVarsChunk_data__EMu_trak);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qlful", TStancuVarsChunk_data__EMu_qlful, &b_TStancuVarsChunk_data__EMu_qlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlful", TStancuVarsChunk_data__EMu_tlful, &b_TStancuVarsChunk_data__EMu_tlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlb45", TStancuVarsChunk_data__EMu_tlb45, &b_TStancuVarsChunk_data__EMu_tlb45);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlb24", TStancuVarsChunk_data__EMu_tlb24, &b_TStancuVarsChunk_data__EMu_tlb24);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlm22", TStancuVarsChunk_data__EMu_tlm22, &b_TStancuVarsChunk_data__EMu_tlm22);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlsci", TStancuVarsChunk_data__EMu_tlsci, &b_TStancuVarsChunk_data__EMu_tlsci);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qtmr4", TStancuVarsChunk_data__EMu_qtmr4, &b_TStancuVarsChunk_data__EMu_qtmr4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qtmr3", TStancuVarsChunk_data__EMu_qtmr3, &b_TStancuVarsChunk_data__EMu_qtmr3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_fthvp", TStancuVarsChunk_data__EMu_fthvp, &b_TStancuVarsChunk_data__EMu_fthvp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_fthvl", TStancuVarsChunk_data__EMu_fthvl, &b_TStancuVarsChunk_data__EMu_fthvl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rslvl53", TStancuVarsChunk_data__EMu_rslvl53, &b_TStancuVarsChunk_data__EMu_rslvl53);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rslvl64", TStancuVarsChunk_data__EMu_rslvl64, &b_TStancuVarsChunk_data__EMu_rslvl64);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_mass", TStancuVarsChunk_data__EPi_mass, &b_TStancuVarsChunk_data__EPi_mass);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_angle", TStancuVarsChunk_data__EPi_angle, &b_TStancuVarsChunk_data__EPi_angle);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_trak", TStancuVarsChunk_data__EPi_trak, &b_TStancuVarsChunk_data__EPi_trak);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qlful", TStancuVarsChunk_data__EPi_qlful, &b_TStancuVarsChunk_data__EPi_qlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlful", TStancuVarsChunk_data__EPi_tlful, &b_TStancuVarsChunk_data__EPi_tlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlcer", TStancuVarsChunk_data__EPi_tlcer, &b_TStancuVarsChunk_data__EPi_tlcer);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_rslvl53", TStancuVarsChunk_data__EPi_rslvl53, &b_TStancuVarsChunk_data__EPi_rslvl53);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_rslvl64", TStancuVarsChunk_data__EPi_rslvl64, &b_TStancuVarsChunk_data__EPi_rslvl64);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_scratio", TStancuVarsChunk_data__EPi_scratio, &b_TStancuVarsChunk_data__EPi_scratio);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qqover", TStancuVarsChunk_data__EPi_qqover, &b_TStancuVarsChunk_data__EPi_qqover);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_fmdiff", TStancuVarsChunk_data__EPi_fmdiff, &b_TStancuVarsChunk_data__EPi_fmdiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qldiff", TStancuVarsChunk_data__EPi_qldiff, &b_TStancuVarsChunk_data__EPi_qldiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tldiff", TStancuVarsChunk_data__EPi_tldiff, &b_TStancuVarsChunk_data__EPi_tldiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_fcer", TStancuVarsChunk_data__EPi_fcer, &b_TStancuVarsChunk_data__EPi_fcer);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qtmr0", TStancuVarsChunk_data__EPi_qtmr0, &b_TStancuVarsChunk_data__EPi_qtmr0);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_dcbeam", TStancuVarsChunk_data__EPi_dcbeam, &b_TStancuVarsChunk_data__EPi_dcbeam);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qtmr56", TStancuVarsChunk_data__EPi_qtmr56, &b_TStancuVarsChunk_data__EPi_qtmr56);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlb245", TStancuVarsChunk_data__EPi_tlb245, &b_TStancuVarsChunk_data__EPi_tlb245);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_dist1", TStancuVarsChunk_data__EPi_dist1, &b_TStancuVarsChunk_data__EPi_dist1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh11p13", TStancuVarsChunk_data__fqlkh11p13, &b_TStancuVarsChunk_data__fqlkh11p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh9p14", TStancuVarsChunk_data__fqlkh9p14, &b_TStancuVarsChunk_data__fqlkh9p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh1t5p1518", TStancuVarsChunk_data__fqlkh1t5p1518, &b_TStancuVarsChunk_data__fqlkh1t5p1518);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh1p18", TStancuVarsChunk_data__fqlkh1p18, &b_TStancuVarsChunk_data__fqlkh1p18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh13p14", TStancuVarsChunk_data__fqlkh13p14, &b_TStancuVarsChunk_data__fqlkh13p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh11t14", TStancuVarsChunk_data__fqlkh11t14, &b_TStancuVarsChunk_data__fqlkh11t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrpp", TStancuVarsChunk_data__qtmrpp, &b_TStancuVarsChunk_data__qtmrpp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrmm", TStancuVarsChunk_data__qtmrmm, &b_TStancuVarsChunk_data__qtmrmm);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m2", TStancuVarsChunk_data__qtmr7m2, &b_TStancuVarsChunk_data__qtmr7m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr8m5", TStancuVarsChunk_data__qtmr8m5, &b_TStancuVarsChunk_data__qtmr8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m2", TStancuVarsChunk_data__qtmr5m2, &b_TStancuVarsChunk_data__qtmr5m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m3", TStancuVarsChunk_data__qtmr5m3, &b_TStancuVarsChunk_data__qtmr5m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr0p5", TStancuVarsChunk_data__qtmr0p5, &b_TStancuVarsChunk_data__qtmr0p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr4p5", TStancuVarsChunk_data__qtmr4p5, &b_TStancuVarsChunk_data__qtmr4p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr6p7", TStancuVarsChunk_data__qtmr6p7, &b_TStancuVarsChunk_data__qtmr6p7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrc2", TStancuVarsChunk_data__qtmrc2, &b_TStancuVarsChunk_data__qtmrc2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr17p18", TStancuVarsChunk_data__nqtmr17p18, &b_TStancuVarsChunk_data__nqtmr17p18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr18p19", TStancuVarsChunk_data__nqtmr18p19, &b_TStancuVarsChunk_data__nqtmr18p19);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr16", TStancuVarsChunk_data__nqtmr16, &b_TStancuVarsChunk_data__nqtmr16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr13", TStancuVarsChunk_data__rsqtmr13, &b_TStancuVarsChunk_data__rsqtmr13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr16", TStancuVarsChunk_data__rsqtmr16, &b_TStancuVarsChunk_data__rsqtmr16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr14", TStancuVarsChunk_data__rsqtmr14, &b_TStancuVarsChunk_data__rsqtmr14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p9", TStancuVarsChunk_data__ftnhit4p9, &b_TStancuVarsChunk_data__ftnhit4p9);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4", TStancuVarsChunk_data__ftnhit4, &b_TStancuVarsChunk_data__ftnhit4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit3p6", TStancuVarsChunk_data__ftnhit3p6, &b_TStancuVarsChunk_data__ftnhit3p6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p5", TStancuVarsChunk_data__ftnhit4p5, &b_TStancuVarsChunk_data__ftnhit4p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p8", TStancuVarsChunk_data__ftnhit4p8, &b_TStancuVarsChunk_data__ftnhit4p8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p10", TStancuVarsChunk_data__ftnhit4p10, &b_TStancuVarsChunk_data__ftnhit4p10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph13p14", TStancuVarsChunk_data__tlph13p14, &b_TStancuVarsChunk_data__tlph13p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph14p15", TStancuVarsChunk_data__tlph14p15, &b_TStancuVarsChunk_data__tlph14p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph16", TStancuVarsChunk_data__tlph16, &b_TStancuVarsChunk_data__tlph16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph11p15", TStancuVarsChunk_data__tlph11p15, &b_TStancuVarsChunk_data__tlph11p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph15p17", TStancuVarsChunk_data__tlph15p17, &b_TStancuVarsChunk_data__tlph15p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph15p16", TStancuVarsChunk_data__tlph15p16, &b_TStancuVarsChunk_data__tlph15p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph16p17", TStancuVarsChunk_data__tlph16p17, &b_TStancuVarsChunk_data__tlph16p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlt05", TStancuVarsChunk_data__fqlt05, &b_TStancuVarsChunk_data__fqlt05);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlt10", TStancuVarsChunk_data__fqlt10, &b_TStancuVarsChunk_data__fqlt10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthjp", TStancuVarsChunk_data__fthjp, &b_TStancuVarsChunk_data__fthjp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthjl", TStancuVarsChunk_data__fthjl, &b_TStancuVarsChunk_data__fthjl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthvp", TStancuVarsChunk_data__fthvp, &b_TStancuVarsChunk_data__fthvp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk014p15", TStancuVarsChunk_data__fqlk014p15, &b_TStancuVarsChunk_data__fqlk014p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk08p13", TStancuVarsChunk_data__fqlk08p13, &b_TStancuVarsChunk_data__fqlk08p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk012p14", TStancuVarsChunk_data__fqlk012p14, &b_TStancuVarsChunk_data__fqlk012p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk010p13", TStancuVarsChunk_data__fqlk010p13, &b_TStancuVarsChunk_data__fqlk010p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk011p13", TStancuVarsChunk_data__fqlk011p13, &b_TStancuVarsChunk_data__fqlk011p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk012p13", TStancuVarsChunk_data__fqlk012p13, &b_TStancuVarsChunk_data__fqlk012p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk013p14", TStancuVarsChunk_data__fqlk013p14, &b_TStancuVarsChunk_data__fqlk013p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk016p17", TStancuVarsChunk_data__fqlk016p17, &b_TStancuVarsChunk_data__fqlk016p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec6t14", TStancuVarsChunk_data__fqrec6t14, &b_TStancuVarsChunk_data__fqrec6t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t20", TStancuVarsChunk_data__fqrec15t20, &b_TStancuVarsChunk_data__fqrec15t20);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t16", TStancuVarsChunk_data__fqrec15t16, &b_TStancuVarsChunk_data__fqrec15t16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec1t10", TStancuVarsChunk_data__fqrec1t10, &b_TStancuVarsChunk_data__fqrec1t10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec6t10", TStancuVarsChunk_data__fqrec6t10, &b_TStancuVarsChunk_data__fqrec6t10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t18", TStancuVarsChunk_data__fqrec15t18, &b_TStancuVarsChunk_data__fqrec15t18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn018m14", TStancuVarsChunk_data__fn018m14, &b_TStancuVarsChunk_data__fn018m14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn014p16", TStancuVarsChunk_data__fn014p16, &b_TStancuVarsChunk_data__fn014p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn010p16", TStancuVarsChunk_data__fn010p16, &b_TStancuVarsChunk_data__fn010p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn013", TStancuVarsChunk_data__frsn013, &b_TStancuVarsChunk_data__frsn013);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn011", TStancuVarsChunk_data__frsn011, &b_TStancuVarsChunk_data__frsn011);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn010p13", TStancuVarsChunk_data__frsn010p13, &b_TStancuVarsChunk_data__frsn010p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn010p14", TStancuVarsChunk_data__frsn010p14, &b_TStancuVarsChunk_data__frsn010p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn011p14", TStancuVarsChunk_data__frsn011p14, &b_TStancuVarsChunk_data__frsn011p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl9m1ovq", TStancuVarsChunk_data__rslvl9m1ovq, &b_TStancuVarsChunk_data__rslvl9m1ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl3p9ovq", TStancuVarsChunk_data__rslvl3p9ovq, &b_TStancuVarsChunk_data__rslvl3p9ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl7m4ovq", TStancuVarsChunk_data__rslvl7m4ovq, &b_TStancuVarsChunk_data__rslvl7m4ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl1p8ovq", TStancuVarsChunk_data__rslvl1p8ovq, &b_TStancuVarsChunk_data__rslvl1p8ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl8p9ovq", TStancuVarsChunk_data__rslvl8p9ovq, &b_TStancuVarsChunk_data__rslvl8p9ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlph16m12", TStancuVarsChunk_data__qlph16m12, &b_TStancuVarsChunk_data__qlph16m12);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlph16m8", TStancuVarsChunk_data__qlph16m8, &b_TStancuVarsChunk_data__qlph16m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql2", TStancuVarsChunk_data__pi01ql2, &b_TStancuVarsChunk_data__pi01ql2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql4", TStancuVarsChunk_data__pi01ql4, &b_TStancuVarsChunk_data__pi01ql4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02ql3", TStancuVarsChunk_data__pi02ql3, &b_TStancuVarsChunk_data__pi02ql3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql1", TStancuVarsChunk_data__pi01ql1, &b_TStancuVarsChunk_data__pi01ql1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01tl2", TStancuVarsChunk_data__pi01tl2, &b_TStancuVarsChunk_data__pi01tl2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02tl4", TStancuVarsChunk_data__pi02tl4, &b_TStancuVarsChunk_data__pi02tl4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fnh1t5p1518", TStancuVarsChunk_data__fnh1t5p1518, &b_TStancuVarsChunk_data__fnh1t5p1518);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fnh11t14", TStancuVarsChunk_data__fnh11t14, &b_TStancuVarsChunk_data__fnh11t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftq4", TStancuVarsChunk_data__ftq4, &b_TStancuVarsChunk_data__ftq4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsq14p20", TStancuVarsChunk_data__frsq14p20, &b_TStancuVarsChunk_data__frsq14p20);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqlk02p16", TStancuVarsChunk_data__frqlk02p16, &b_TStancuVarsChunk_data__frqlk02p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.trakove", TStancuVarsChunk_data__trakove, &b_TStancuVarsChunk_data__trakove);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fcertflx", TStancuVarsChunk_data__fcertflx, &b_TStancuVarsChunk_data__fcertflx);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.srec1", TStancuVarsChunk_data__srec1, &b_TStancuVarsChunk_data__srec1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqovovthit", TStancuVarsChunk_data__nqovovthit, &b_TStancuVarsChunk_data__nqovovthit);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qcer2ovqtot", TStancuVarsChunk_data__qcer2ovqtot, &b_TStancuVarsChunk_data__qcer2ovqtot);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8", TStancuVarsChunk_data__qtmrcos8, &b_TStancuVarsChunk_data__qtmrcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqqov", TStancuVarsChunk_data__frqqov, &b_TStancuVarsChunk_data__frqqov);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs6m1", TStancuVarsChunk_data__frrs6m1, &b_TStancuVarsChunk_data__frrs6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnqcer1", TStancuVarsChunk_data__frnqcer1, &b_TStancuVarsChunk_data__frnqcer1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.cerfrdiff", TStancuVarsChunk_data__cerfrdiff, &b_TStancuVarsChunk_data__cerfrdiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m1", TStancuVarsChunk_data__tlphcos8m1, &b_TStancuVarsChunk_data__tlphcos8m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos6", TStancuVarsChunk_data__ql0cos6, &b_TStancuVarsChunk_data__ql0cos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m5", TStancuVarsChunk_data__tlphcos8m5, &b_TStancuVarsChunk_data__tlphcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs7m1", TStancuVarsChunk_data__frrs7m1, &b_TStancuVarsChunk_data__frrs7m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit9m3", TStancuVarsChunk_data__ftnhit9m3, &b_TStancuVarsChunk_data__ftnhit9m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frchia10m4", TStancuVarsChunk_data__frchia10m4, &b_TStancuVarsChunk_data__frchia10m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m5", TStancuVarsChunk_data__qtmrcos8m5, &b_TStancuVarsChunk_data__qtmrcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos4m1", TStancuVarsChunk_data__tlphcos4m1, &b_TStancuVarsChunk_data__tlphcos4m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7", TStancuVarsChunk_data__qtmrcos7, &b_TStancuVarsChunk_data__qtmrcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chirsqrec", TStancuVarsChunk_data__chirsqrec, &b_TStancuVarsChunk_data__chirsqrec);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ffast", TStancuVarsChunk_data__ffast, &b_TStancuVarsChunk_data__ffast);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ffulmffas", TStancuVarsChunk_data__ffulmffas, &b_TStancuVarsChunk_data__ffulmffas);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fflux", TStancuVarsChunk_data__fflux, &b_TStancuVarsChunk_data__fflux);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frcer1", TStancuVarsChunk_data__frcer1, &b_TStancuVarsChunk_data__frcer1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frcer2", TStancuVarsChunk_data__frcer2, &b_TStancuVarsChunk_data__frcer2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnqcer1m2", TStancuVarsChunk_data__frnqcer1m2, &b_TStancuVarsChunk_data__frnqcer1m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqqcer1m2", TStancuVarsChunk_data__frqqcer1m2, &b_TStancuVarsChunk_data__frqqcer1m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcer1mov", TStancuVarsChunk_data__frqcer1mov, &b_TStancuVarsChunk_data__frqcer1mov);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql3", TStancuVarsChunk_data__pi01ql3, &b_TStancuVarsChunk_data__pi01ql3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02ql4", TStancuVarsChunk_data__pi02ql4, &b_TStancuVarsChunk_data__pi02ql4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02fthl", TStancuVarsChunk_data__pi02fthl, &b_TStancuVarsChunk_data__pi02fthl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.srec2", TStancuVarsChunk_data__srec2, &b_TStancuVarsChunk_data__srec2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.dist2", TStancuVarsChunk_data__dist2, &b_TStancuVarsChunk_data__dist2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5", TStancuVarsChunk_data__qtmr5, &b_TStancuVarsChunk_data__qtmr5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m4", TStancuVarsChunk_data__qtmr5m4, &b_TStancuVarsChunk_data__qtmr5m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m6", TStancuVarsChunk_data__qtmr7m6, &b_TStancuVarsChunk_data__qtmr7m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chiqrec", TStancuVarsChunk_data__chiqrec, &b_TStancuVarsChunk_data__chiqrec);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlfwd", TStancuVarsChunk_data__tlfwd, &b_TStancuVarsChunk_data__tlfwd);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos6", TStancuVarsChunk_data__qtmrcos6, &b_TStancuVarsChunk_data__qtmrcos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos5m1", TStancuVarsChunk_data__qtmrcos5m1, &b_TStancuVarsChunk_data__qtmrcos5m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos6m1", TStancuVarsChunk_data__qtmrcos6m1, &b_TStancuVarsChunk_data__qtmrcos6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7m2", TStancuVarsChunk_data__qtmrcos7m2, &b_TStancuVarsChunk_data__qtmrcos7m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7m5", TStancuVarsChunk_data__qtmrcos7m5, &b_TStancuVarsChunk_data__qtmrcos7m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m3", TStancuVarsChunk_data__qtmrcos8m3, &b_TStancuVarsChunk_data__qtmrcos8m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m6", TStancuVarsChunk_data__qtmrcos8m6, &b_TStancuVarsChunk_data__qtmrcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos10m2", TStancuVarsChunk_data__qtmrcos10m2, &b_TStancuVarsChunk_data__qtmrcos10m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos10m5", TStancuVarsChunk_data__qtmrcos10m5, &b_TStancuVarsChunk_data__qtmrcos10m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8", TStancuVarsChunk_data__frqcos8, &b_TStancuVarsChunk_data__frqcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos6m1", TStancuVarsChunk_data__frqcos6m1, &b_TStancuVarsChunk_data__frqcos6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m3", TStancuVarsChunk_data__frqcos8m3, &b_TStancuVarsChunk_data__frqcos8m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m4", TStancuVarsChunk_data__frqcos8m4, &b_TStancuVarsChunk_data__frqcos8m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m5", TStancuVarsChunk_data__frqcos8m5, &b_TStancuVarsChunk_data__frqcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m7", TStancuVarsChunk_data__frqcos8m7, &b_TStancuVarsChunk_data__frqcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos10m3", TStancuVarsChunk_data__frqcos10m3, &b_TStancuVarsChunk_data__frqcos10m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos10m8", TStancuVarsChunk_data__frqcos10m8, &b_TStancuVarsChunk_data__frqcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos7", TStancuVarsChunk_data__ql0cos7, &b_TStancuVarsChunk_data__ql0cos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos10", TStancuVarsChunk_data__ql0cos10, &b_TStancuVarsChunk_data__ql0cos10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlkcos3", TStancuVarsChunk_data__qlkcos3, &b_TStancuVarsChunk_data__qlkcos3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlkcos8", TStancuVarsChunk_data__qlkcos8, &b_TStancuVarsChunk_data__qlkcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlphcos7", TStancuVarsChunk_data__qlphcos7, &b_TStancuVarsChunk_data__qlphcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos5", TStancuVarsChunk_data__qlppmtcos5, &b_TStancuVarsChunk_data__qlppmtcos5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos6", TStancuVarsChunk_data__qlppmtcos6, &b_TStancuVarsChunk_data__qlppmtcos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos8", TStancuVarsChunk_data__qlppmtcos8, &b_TStancuVarsChunk_data__qlppmtcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos8m6", TStancuVarsChunk_data__qlppmtcos8m6, &b_TStancuVarsChunk_data__qlppmtcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos5", TStancuVarsChunk_data__tlphcos5, &b_TStancuVarsChunk_data__tlphcos5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8", TStancuVarsChunk_data__tlphcos8, &b_TStancuVarsChunk_data__tlphcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos5m1", TStancuVarsChunk_data__tlphcos5m1, &b_TStancuVarsChunk_data__tlphcos5m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos6m2", TStancuVarsChunk_data__tlphcos6m2, &b_TStancuVarsChunk_data__tlphcos6m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m2", TStancuVarsChunk_data__tlphcos8m2, &b_TStancuVarsChunk_data__tlphcos8m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m4", TStancuVarsChunk_data__tlphcos8m4, &b_TStancuVarsChunk_data__tlphcos8m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m7", TStancuVarsChunk_data__tlphcos8m7, &b_TStancuVarsChunk_data__tlphcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m1", TStancuVarsChunk_data__tlphcos9m1, &b_TStancuVarsChunk_data__tlphcos9m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m2", TStancuVarsChunk_data__tlphcos9m2, &b_TStancuVarsChunk_data__tlphcos9m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos10m8", TStancuVarsChunk_data__tlphcos10m8, &b_TStancuVarsChunk_data__tlphcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos10m9", TStancuVarsChunk_data__tlphcos10m9, &b_TStancuVarsChunk_data__tlphcos10m9);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos8", TStancuVarsChunk_data__frnhcos8, &b_TStancuVarsChunk_data__frnhcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos10m8", TStancuVarsChunk_data__frnhcos10m8, &b_TStancuVarsChunk_data__frnhcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrsnb7", TStancuVarsChunk_data__qtmrsnb7, &b_TStancuVarsChunk_data__qtmrsnb7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhnb8m2", TStancuVarsChunk_data__frnhnb8m2, &b_TStancuVarsChunk_data__frnhnb8m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhrsnb5", TStancuVarsChunk_data__frnhrsnb5, &b_TStancuVarsChunk_data__frnhrsnb5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs8m1", TStancuVarsChunk_data__frrs8m1, &b_TStancuVarsChunk_data__frrs8m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit3m2", TStancuVarsChunk_data__ftnhit3m2, &b_TStancuVarsChunk_data__ftnhit3m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02tl3", TStancuVarsChunk_data__pi02tl3, &b_TStancuVarsChunk_data__pi02tl3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01tl3", TStancuVarsChunk_data__pi01tl3, &b_TStancuVarsChunk_data__pi01tl3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m5", TStancuVarsChunk_data__qtmr7m5, &b_TStancuVarsChunk_data__qtmr7m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr9m5", TStancuVarsChunk_data__qtmr9m5, &b_TStancuVarsChunk_data__qtmr9m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr4m2", TStancuVarsChunk_data__qtmr4m2, &b_TStancuVarsChunk_data__qtmr4m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qcer1ovqtot", TStancuVarsChunk_data__qcer1ovqtot, &b_TStancuVarsChunk_data__qcer1ovqtot);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fscitflx", TStancuVarsChunk_data__fscitflx, &b_TStancuVarsChunk_data__fscitflx);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.abscerasy", TStancuVarsChunk_data__abscerasy, &b_TStancuVarsChunk_data__abscerasy);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m7", TStancuVarsChunk_data__qtmrcos8m7, &b_TStancuVarsChunk_data__qtmrcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos7", TStancuVarsChunk_data__tlphcos7, &b_TStancuVarsChunk_data__tlphcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m6", TStancuVarsChunk_data__tlphcos8m6, &b_TStancuVarsChunk_data__tlphcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m6", TStancuVarsChunk_data__tlphcos9m6, &b_TStancuVarsChunk_data__tlphcos9m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m7", TStancuVarsChunk_data__tlphcos9m7, &b_TStancuVarsChunk_data__tlphcos9m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos8m7", TStancuVarsChunk_data__frnhcos8m7, &b_TStancuVarsChunk_data__frnhcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos9m8", TStancuVarsChunk_data__frnhcos9m8, &b_TStancuVarsChunk_data__frnhcos9m8);
   fChain->SetBranchAddress("TStancuVarsChunk.name_", TStancuVarsChunk_name_, &b_TStancuVarsChunk_name_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk", &TStancuVarsTwoChunk_, &b_TStancuVarsTwoChunk_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.chunk_id_", TStancuVarsTwoChunk_chunk_id_, &b_TStancuVarsTwoChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.fUniqueID", TStancuVarsTwoChunk_data__fUniqueID, &b_TStancuVarsTwoChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.fBits", TStancuVarsTwoChunk_data__fBits, &b_TStancuVarsTwoChunk_data__fBits);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_n000[20]", TStancuVarsTwoChunk_data__cth_n000, &b_TStancuVarsTwoChunk_data__cth_n000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_nhit[20]", TStancuVarsTwoChunk_data__cth_nhit, &b_TStancuVarsTwoChunk_data__cth_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_mu[20]", TStancuVarsTwoChunk_data__cth_mu, &b_TStancuVarsTwoChunk_data__cth_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qrec[20]", TStancuVarsTwoChunk_data__cth_qrec, &b_TStancuVarsTwoChunk_data__cth_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_chia[20]", TStancuVarsTwoChunk_data__cth_chia, &b_TStancuVarsTwoChunk_data__cth_chia);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qllk000[20]", TStancuVarsTwoChunk_data__cth_qllk000, &b_TStancuVarsTwoChunk_data__cth_qllk000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qllkhit[20]", TStancuVarsTwoChunk_data__cth_qllkhit, &b_TStancuVarsTwoChunk_data__cth_qllkhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_tllk[20]", TStancuVarsTwoChunk_data__cth_tllk, &b_TStancuVarsTwoChunk_data__cth_tllk);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_n000[20]", TStancuVarsTwoChunk_data__rs_n000, &b_TStancuVarsTwoChunk_data__rs_n000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_nhit[20]", TStancuVarsTwoChunk_data__rs_nhit, &b_TStancuVarsTwoChunk_data__rs_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_qrec[20]", TStancuVarsTwoChunk_data__rs_qrec, &b_TStancuVarsTwoChunk_data__rs_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_mu[20]", TStancuVarsTwoChunk_data__rs_mu, &b_TStancuVarsTwoChunk_data__rs_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_nhit[10]", TStancuVarsTwoChunk_data__tim_nhit, &b_TStancuVarsTwoChunk_data__tim_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_qrec[10]", TStancuVarsTwoChunk_data__tim_qrec, &b_TStancuVarsTwoChunk_data__tim_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_mu[10]", TStancuVarsTwoChunk_data__tim_mu, &b_TStancuVarsTwoChunk_data__tim_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.name_", TStancuVarsTwoChunk_name_, &b_TStancuVarsTwoChunk_name_);
   fChain->SetBranchAddress("TVetoLinkingChunk", &TVetoLinkingChunk_, &b_TVetoLinkingChunk_);
   fChain->SetBranchAddress("TVetoLinkingChunk.chunk_id_", TVetoLinkingChunk_chunk_id_, &b_TVetoLinkingChunk_chunk_id_);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.fUniqueID", TVetoLinkingChunk_data__fUniqueID, &b_TVetoLinkingChunk_data__fUniqueID);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.fBits", TVetoLinkingChunk_data__fBits, &b_TVetoLinkingChunk_data__fBits);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnDl", TVetoLinkingChunk_data__EnDl, &b_TVetoLinkingChunk_data__EnDl);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExDl", TVetoLinkingChunk_data__ExDl, &b_TVetoLinkingChunk_data__ExDl);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnSigma", TVetoLinkingChunk_data__EnSigma, &b_TVetoLinkingChunk_data__EnSigma);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExSigma", TVetoLinkingChunk_data__ExSigma, &b_TVetoLinkingChunk_data__ExSigma);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnDt", TVetoLinkingChunk_data__EnDt, &b_TVetoLinkingChunk_data__EnDt);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExDt", TVetoLinkingChunk_data__ExDt, &b_TVetoLinkingChunk_data__ExDt);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.NC", TVetoLinkingChunk_data__NC, &b_TVetoLinkingChunk_data__NC);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.Enter", TVetoLinkingChunk_data__Enter, &b_TVetoLinkingChunk_data__Enter);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.Exit", TVetoLinkingChunk_data__Exit, &b_TVetoLinkingChunk_data__Exit);
   fChain->SetBranchAddress("TVetoLinkingChunk.name_", TVetoLinkingChunk_name_, &b_TVetoLinkingChunk_name_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk", &TCalibrateEnergyChunk_, &b_TCalibrateEnergyChunk_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.chunk_id_", TCalibrateEnergyChunk_chunk_id_, &b_TCalibrateEnergyChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.fUniqueID", TCalibrateEnergyChunk_data__fUniqueID, &b_TCalibrateEnergyChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.fBits", TCalibrateEnergyChunk_data__fBits, &b_TCalibrateEnergyChunk_data__fBits);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Tlep_e", TCalibrateEnergyChunk_data__Tlep_e, &b_TCalibrateEnergyChunk_data__Tlep_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Tlep_m", TCalibrateEnergyChunk_data__Tlep_m, &b_TCalibrateEnergyChunk_data__Tlep_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Qsq_e", TCalibrateEnergyChunk_data__Qsq_e, &b_TCalibrateEnergyChunk_data__Qsq_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Qsq_m", TCalibrateEnergyChunk_data__Qsq_m, &b_TCalibrateEnergyChunk_data__Qsq_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.EnuQE_e", TCalibrateEnergyChunk_data__EnuQE_e, &b_TCalibrateEnergyChunk_data__EnuQE_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.EnuQE_m", TCalibrateEnergyChunk_data__EnuQE_m, &b_TCalibrateEnergyChunk_data__EnuQE_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.name_", TCalibrateEnergyChunk_name_, &b_TCalibrateEnergyChunk_name_);
   fChain->SetBranchAddress("TInteractionPointChunk", &TInteractionPointChunk_, &b_TInteractionPointChunk_);
   fChain->SetBranchAddress("TInteractionPointChunk.chunk_id_", TInteractionPointChunk_chunk_id_, &b_TInteractionPointChunk_chunk_id_);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.fUniqueID", TInteractionPointChunk_data__fUniqueID, &b_TInteractionPointChunk_data__fUniqueID);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.fBits", TInteractionPointChunk_data__fBits, &b_TInteractionPointChunk_data__fBits);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.X_e", TInteractionPointChunk_data__X_e, &b_TInteractionPointChunk_data__X_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Y_e", TInteractionPointChunk_data__Y_e, &b_TInteractionPointChunk_data__Y_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Z_e", TInteractionPointChunk_data__Z_e, &b_TInteractionPointChunk_data__Z_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.T_e", TInteractionPointChunk_data__T_e, &b_TInteractionPointChunk_data__T_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.drive_e", TInteractionPointChunk_data__drive_e, &b_TInteractionPointChunk_data__drive_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.tdrive_e", TInteractionPointChunk_data__tdrive_e, &b_TInteractionPointChunk_data__tdrive_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.X_m", TInteractionPointChunk_data__X_m, &b_TInteractionPointChunk_data__X_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Y_m", TInteractionPointChunk_data__Y_m, &b_TInteractionPointChunk_data__Y_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Z_m", TInteractionPointChunk_data__Z_m, &b_TInteractionPointChunk_data__Z_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.T_m", TInteractionPointChunk_data__T_m, &b_TInteractionPointChunk_data__T_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.drive_m", TInteractionPointChunk_data__drive_m, &b_TInteractionPointChunk_data__drive_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.tdrive_m", TInteractionPointChunk_data__tdrive_m, &b_TInteractionPointChunk_data__tdrive_m);
   fChain->SetBranchAddress("TInteractionPointChunk.name_", TInteractionPointChunk_name_, &b_TInteractionPointChunk_name_);
   fChain->SetBranchAddress("TOneTrackChunk", &TOneTrackChunk_, &b_TOneTrackChunk_);
   fChain->SetBranchAddress("TOneTrackChunk.chunk_id_", TOneTrackChunk_chunk_id_, &b_TOneTrackChunk_chunk_id_);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fUniqueID", TOneTrackChunk_data__fUniqueID, &b_TOneTrackChunk_data__fUniqueID);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fBits", TOneTrackChunk_data__fBits, &b_TOneTrackChunk_data__fBits);
   fChain->SetBranchAddress("TOneTrackChunk.data_.iterations", TOneTrackChunk_data__iterations, &b_TOneTrackChunk_data__iterations);
   fChain->SetBranchAddress("TOneTrackChunk.data_.trackType", TOneTrackChunk_data__trackType, &b_TOneTrackChunk_data__trackType);
   fChain->SetBranchAddress("TOneTrackChunk.data_.X", TOneTrackChunk_data__X, &b_TOneTrackChunk_data__X);
   fChain->SetBranchAddress("TOneTrackChunk.data_.Y", TOneTrackChunk_data__Y, &b_TOneTrackChunk_data__Y);
   fChain->SetBranchAddress("TOneTrackChunk.data_.Z", TOneTrackChunk_data__Z, &b_TOneTrackChunk_data__Z);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UX", TOneTrackChunk_data__UX, &b_TOneTrackChunk_data__UX);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UY", TOneTrackChunk_data__UY, &b_TOneTrackChunk_data__UY);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UZ", TOneTrackChunk_data__UZ, &b_TOneTrackChunk_data__UZ);
   fChain->SetBranchAddress("TOneTrackChunk.data_.T", TOneTrackChunk_data__T, &b_TOneTrackChunk_data__T);
   fChain->SetBranchAddress("TOneTrackChunk.data_.E", TOneTrackChunk_data__E, &b_TOneTrackChunk_data__E);
   fChain->SetBranchAddress("TOneTrackChunk.data_.distToMeanCer", TOneTrackChunk_data__distToMeanCer, &b_TOneTrackChunk_data__distToMeanCer);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fluxScale", TOneTrackChunk_data__fluxScale, &b_TOneTrackChunk_data__fluxScale);
   fChain->SetBranchAddress("TOneTrackChunk.data_.relativeSci", TOneTrackChunk_data__relativeSci, &b_TOneTrackChunk_data__relativeSci);
   fChain->SetBranchAddress("TOneTrackChunk.data_.F", TOneTrackChunk_data__F, &b_TOneTrackChunk_data__F);
   fChain->SetBranchAddress("TOneTrackChunk.name_", TOneTrackChunk_name_, &b_TOneTrackChunk_name_);
   fChain->SetBranchAddress("TRoeFullChunk", &TRoeFullChunk_, &b_TRoeFullChunk_);
   fChain->SetBranchAddress("TRoeFullChunk.chunk_id_", TRoeFullChunk_chunk_id_, &b_TRoeFullChunk_chunk_id_);
   fChain->SetBranchAddress("TRoeFullChunk.data_.fUniqueID", TRoeFullChunk_data__fUniqueID, &b_TRoeFullChunk_data__fUniqueID);
   fChain->SetBranchAddress("TRoeFullChunk.data_.fBits", TRoeFullChunk_data__fBits, &b_TRoeFullChunk_data__fBits);
   fChain->SetBranchAddress("TRoeFullChunk.data_.rvec[3]", TRoeFullChunk_data__rvec, &b_TRoeFullChunk_data__rvec);
   fChain->SetBranchAddress("TRoeFullChunk.data_.time", TRoeFullChunk_data__time, &b_TRoeFullChunk_data__time);
   fChain->SetBranchAddress("TRoeFullChunk.data_.dircos[3]", TRoeFullChunk_data__dircos, &b_TRoeFullChunk_data__dircos);
   fChain->SetBranchAddress("TRoeFullChunk.data_.length", TRoeFullChunk_data__length, &b_TRoeFullChunk_data__length);
   fChain->SetBranchAddress("TRoeFullChunk.data_.rvec_v[3]", TRoeFullChunk_data__rvec_v, &b_TRoeFullChunk_data__rvec_v);
   fChain->SetBranchAddress("TRoeFullChunk.data_.time_v", TRoeFullChunk_data__time_v, &b_TRoeFullChunk_data__time_v);
   fChain->SetBranchAddress("TRoeFullChunk.data_.charge_infit", TRoeFullChunk_data__charge_infit, &b_TRoeFullChunk_data__charge_infit);
   fChain->SetBranchAddress("TRoeFullChunk.data_.charge_wgt_infit", TRoeFullChunk_data__charge_wgt_infit, &b_TRoeFullChunk_data__charge_wgt_infit);
   fChain->SetBranchAddress("TRoeFullChunk.data_.chisq_a_infit", TRoeFullChunk_data__chisq_a_infit, &b_TRoeFullChunk_data__chisq_a_infit);
   fChain->SetBranchAddress("TRoeFullChunk.data_.chisq_r_infit", TRoeFullChunk_data__chisq_r_infit, &b_TRoeFullChunk_data__chisq_r_infit);
   fChain->SetBranchAddress("TRoeFullChunk.data_.weight_total", TRoeFullChunk_data__weight_total, &b_TRoeFullChunk_data__weight_total);
   fChain->SetBranchAddress("TRoeFullChunk.data_.chisq_avg", TRoeFullChunk_data__chisq_avg, &b_TRoeFullChunk_data__chisq_avg);
   fChain->SetBranchAddress("TRoeFullChunk.data_.rtowall", TRoeFullChunk_data__rtowall, &b_TRoeFullChunk_data__rtowall);
   fChain->SetBranchAddress("TRoeFullChunk.data_.Energy", TRoeFullChunk_data__Energy, &b_TRoeFullChunk_data__Energy);
   fChain->SetBranchAddress("TRoeFullChunk.data_.numhits_infit", TRoeFullChunk_data__numhits_infit, &b_TRoeFullChunk_data__numhits_infit);
   fChain->SetBranchAddress("TRoeFullChunk.data_.errors[7][7]", TRoeFullChunk_data__errors, &b_TRoeFullChunk_data__errors);
   fChain->SetBranchAddress("TRoeFullChunk.data_.EnergyMU", TRoeFullChunk_data__EnergyMU, &b_TRoeFullChunk_data__EnergyMU);
   fChain->SetBranchAddress("TRoeFullChunk.data_.lengthMU", TRoeFullChunk_data__lengthMU, &b_TRoeFullChunk_data__lengthMU);
   fChain->SetBranchAddress("TRoeFullChunk.data_.chg_length_nue", TRoeFullChunk_data__chg_length_nue, &b_TRoeFullChunk_data__chg_length_nue);
   fChain->SetBranchAddress("TRoeFullChunk.data_.numlowt_nue[10]", TRoeFullChunk_data__numlowt_nue, &b_TRoeFullChunk_data__numlowt_nue);
   fChain->SetBranchAddress("TRoeFullChunk.name_", TRoeFullChunk_name_, &b_TRoeFullChunk_name_);
   fChain->SetBranchAddress("TFittersChunk", &TFittersChunk_, &b_TFittersChunk_);
   fChain->SetBranchAddress("TFittersChunk.chunk_id_", TFittersChunk_chunk_id_, &b_TFittersChunk_chunk_id_);
   fChain->SetBranchAddress("TFittersChunk.data_.fUniqueID", TFittersChunk_data__fUniqueID, &b_TFittersChunk_data__fUniqueID);
   fChain->SetBranchAddress("TFittersChunk.data_.fBits", TFittersChunk_data__fBits, &b_TFittersChunk_data__fBits);
   fChain->SetBranchAddress("TFittersChunk.data_.id[20]", TFittersChunk_data__id, &b_TFittersChunk_data__id);
   fChain->SetBranchAddress("TFittersChunk.data_.x", TFittersChunk_data__x, &b_TFittersChunk_data__x);
   fChain->SetBranchAddress("TFittersChunk.data_.y", TFittersChunk_data__y, &b_TFittersChunk_data__y);
   fChain->SetBranchAddress("TFittersChunk.data_.z", TFittersChunk_data__z, &b_TFittersChunk_data__z);
   fChain->SetBranchAddress("TFittersChunk.data_.t", TFittersChunk_data__t, &b_TFittersChunk_data__t);
   fChain->SetBranchAddress("TFittersChunk.data_.ux", TFittersChunk_data__ux, &b_TFittersChunk_data__ux);
   fChain->SetBranchAddress("TFittersChunk.data_.uy", TFittersChunk_data__uy, &b_TFittersChunk_data__uy);
   fChain->SetBranchAddress("TFittersChunk.data_.uz", TFittersChunk_data__uz, &b_TFittersChunk_data__uz);
   fChain->SetBranchAddress("TFittersChunk.data_.r3", TFittersChunk_data__r3, &b_TFittersChunk_data__r3);
   fChain->SetBranchAddress("TFittersChunk.data_.e", TFittersChunk_data__e, &b_TFittersChunk_data__e);
   fChain->SetBranchAddress("TFittersChunk.data_.trklen", TFittersChunk_data__trklen, &b_TFittersChunk_data__trklen);
   fChain->SetBranchAddress("TFittersChunk.data_.emu", TFittersChunk_data__emu, &b_TFittersChunk_data__emu);
   fChain->SetBranchAddress("TFittersChunk.data_.trklenmu", TFittersChunk_data__trklenmu, &b_TFittersChunk_data__trklenmu);
   fChain->SetBranchAddress("TFittersChunk.data_.goodfit", TFittersChunk_data__goodfit, &b_TFittersChunk_data__goodfit);
   fChain->SetBranchAddress("TFittersChunk.data_.errors[10][10]", TFittersChunk_data__errors, &b_TFittersChunk_data__errors);
   fChain->SetBranchAddress("TFittersChunk.name_", TFittersChunk_name_, &b_TFittersChunk_name_);
   fChain->SetBranchAddress("TYangVarChunk", &TYangVarChunk_, &b_TYangVarChunk_);
   fChain->SetBranchAddress("TYangVarChunk.chunk_id_", TYangVarChunk_chunk_id_, &b_TYangVarChunk_chunk_id_);
   fChain->SetBranchAddress("TYangVarChunk.data_.fUniqueID", TYangVarChunk_data__fUniqueID, &b_TYangVarChunk_data__fUniqueID);
   fChain->SetBranchAddress("TYangVarChunk.data_.fBits", TYangVarChunk_data__fBits, &b_TYangVarChunk_data__fBits);
   fChain->SetBranchAddress("TYangVarChunk.data_.cx", TYangVarChunk_data__cx, &b_TYangVarChunk_data__cx);
   fChain->SetBranchAddress("TYangVarChunk.data_.cy", TYangVarChunk_data__cy, &b_TYangVarChunk_data__cy);
   fChain->SetBranchAddress("TYangVarChunk.data_.cz", TYangVarChunk_data__cz, &b_TYangVarChunk_data__cz);
   fChain->SetBranchAddress("TYangVarChunk.data_.ux", TYangVarChunk_data__ux, &b_TYangVarChunk_data__ux);
   fChain->SetBranchAddress("TYangVarChunk.data_.uy", TYangVarChunk_data__uy, &b_TYangVarChunk_data__uy);
   fChain->SetBranchAddress("TYangVarChunk.data_.uz", TYangVarChunk_data__uz, &b_TYangVarChunk_data__uz);
   fChain->SetBranchAddress("TYangVarChunk.data_.time", TYangVarChunk_data__time, &b_TYangVarChunk_data__time);
   fChain->SetBranchAddress("TYangVarChunk.data_.tot_hit", TYangVarChunk_data__tot_hit, &b_TYangVarChunk_data__tot_hit);
   fChain->SetBranchAddress("TYangVarChunk.data_.tot_q", TYangVarChunk_data__tot_q, &b_TYangVarChunk_data__tot_q);
   fChain->SetBranchAddress("TYangVarChunk.data_.length", TYangVarChunk_data__length, &b_TYangVarChunk_data__length);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_hit[100]", TYangVarChunk_data__pid_hit, &b_TYangVarChunk_data__pid_hit);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_charge[100]", TYangVarChunk_data__pid_charge, &b_TYangVarChunk_data__pid_charge);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtime[100]", TYangVarChunk_data__pid_dtime, &b_TYangVarChunk_data__pid_dtime);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_tchi[100]", TYangVarChunk_data__pid_tchi, &b_TYangVarChunk_data__pid_tchi);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_qtchi[100]", TYangVarChunk_data__pid_qtchi, &b_TYangVarChunk_data__pid_qtchi);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_hitrs[100]", TYangVarChunk_data__pid_hitrs, &b_TYangVarChunk_data__pid_hitrs);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_qrs[100]", TYangVarChunk_data__pid_qrs, &b_TYangVarChunk_data__pid_qrs);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtimers[100]", TYangVarChunk_data__pid_dtimers, &b_TYangVarChunk_data__pid_dtimers);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_tchirs[100]", TYangVarChunk_data__pid_tchirs, &b_TYangVarChunk_data__pid_tchirs);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtime_hit[100]", TYangVarChunk_data__pid_dtime_hit, &b_TYangVarChunk_data__pid_dtime_hit);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtime_charge[100]", TYangVarChunk_data__pid_dtime_charge, &b_TYangVarChunk_data__pid_dtime_charge);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtime_tchi[100]", TYangVarChunk_data__pid_dtime_tchi, &b_TYangVarChunk_data__pid_dtime_tchi);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_dtime_qtchi[100]", TYangVarChunk_data__pid_dtime_qtchi, &b_TYangVarChunk_data__pid_dtime_qtchi);
   fChain->SetBranchAddress("TYangVarChunk.data_.pid_chi2[100]", TYangVarChunk_data__pid_chi2, &b_TYangVarChunk_data__pid_chi2);
   fChain->SetBranchAddress("TYangVarChunk.name_", TYangVarChunk_name_, &b_TYangVarChunk_name_);
   fChain->SetBranchAddress("TPFitterChunk", &TPFitterChunk_, &b_TPFitterChunk_);
   fChain->SetBranchAddress("TPFitterChunk.chunk_id_", TPFitterChunk_chunk_id_, &b_TPFitterChunk_chunk_id_);
   fChain->SetBranchAddress("TPFitterChunk.data_.fUniqueID", TPFitterChunk_data__fUniqueID, &b_TPFitterChunk_data__fUniqueID);
   fChain->SetBranchAddress("TPFitterChunk.data_.fBits", TPFitterChunk_data__fBits, &b_TPFitterChunk_data__fBits);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_x", TPFitterChunk_data__mu_x, &b_TPFitterChunk_data__mu_x);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_y", TPFitterChunk_data__mu_y, &b_TPFitterChunk_data__mu_y);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_z", TPFitterChunk_data__mu_z, &b_TPFitterChunk_data__mu_z);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_ux", TPFitterChunk_data__mu_ux, &b_TPFitterChunk_data__mu_ux);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_uy", TPFitterChunk_data__mu_uy, &b_TPFitterChunk_data__mu_uy);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_uz", TPFitterChunk_data__mu_uz, &b_TPFitterChunk_data__mu_uz);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_T", TPFitterChunk_data__mu_T, &b_TPFitterChunk_data__mu_T);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_E", TPFitterChunk_data__mu_E, &b_TPFitterChunk_data__mu_E);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_distToMeanCer", TPFitterChunk_data__mu_distToMeanCer, &b_TPFitterChunk_data__mu_distToMeanCer);
   fChain->SetBranchAddress("TPFitterChunk.data_.mu_F", TPFitterChunk_data__mu_F, &b_TPFitterChunk_data__mu_F);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_x", TPFitterChunk_data__e_x, &b_TPFitterChunk_data__e_x);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_y", TPFitterChunk_data__e_y, &b_TPFitterChunk_data__e_y);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_z", TPFitterChunk_data__e_z, &b_TPFitterChunk_data__e_z);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_ux", TPFitterChunk_data__e_ux, &b_TPFitterChunk_data__e_ux);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_uy", TPFitterChunk_data__e_uy, &b_TPFitterChunk_data__e_uy);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_uz", TPFitterChunk_data__e_uz, &b_TPFitterChunk_data__e_uz);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_T", TPFitterChunk_data__e_T, &b_TPFitterChunk_data__e_T);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_E", TPFitterChunk_data__e_E, &b_TPFitterChunk_data__e_E);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_distToMeanCer", TPFitterChunk_data__e_distToMeanCer, &b_TPFitterChunk_data__e_distToMeanCer);
   fChain->SetBranchAddress("TPFitterChunk.data_.e_F", TPFitterChunk_data__e_F, &b_TPFitterChunk_data__e_F);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_T", TPFitterChunk_data__pi_T, &b_TPFitterChunk_data__pi_T);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_M", TPFitterChunk_data__pi_M, &b_TPFitterChunk_data__pi_M);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_Cos0p", TPFitterChunk_data__pi_Cos0p, &b_TPFitterChunk_data__pi_Cos0p);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_E1", TPFitterChunk_data__pi_E1, &b_TPFitterChunk_data__pi_E1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_E2", TPFitterChunk_data__pi_E2, &b_TPFitterChunk_data__pi_E2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_distToMeanCer1", TPFitterChunk_data__pi_distToMeanCer1, &b_TPFitterChunk_data__pi_distToMeanCer1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_distToMeanCer2", TPFitterChunk_data__pi_distToMeanCer2, &b_TPFitterChunk_data__pi_distToMeanCer2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_S1", TPFitterChunk_data__pi_S1, &b_TPFitterChunk_data__pi_S1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_S2", TPFitterChunk_data__pi_S2, &b_TPFitterChunk_data__pi_S2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_Fqqq", TPFitterChunk_data__pi_Fqqq, &b_TPFitterChunk_data__pi_Fqqq);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_Fttt", TPFitterChunk_data__pi_Fttt, &b_TPFitterChunk_data__pi_Fttt);
   fChain->SetBranchAddress("TPFitterChunk.data_.pi_F", TPFitterChunk_data__pi_F, &b_TPFitterChunk_data__pi_F);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_T", TPFitterChunk_data__pifix_T, &b_TPFitterChunk_data__pifix_T);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_M", TPFitterChunk_data__pifix_M, &b_TPFitterChunk_data__pifix_M);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_Cos0p", TPFitterChunk_data__pifix_Cos0p, &b_TPFitterChunk_data__pifix_Cos0p);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_E1", TPFitterChunk_data__pifix_E1, &b_TPFitterChunk_data__pifix_E1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_E2", TPFitterChunk_data__pifix_E2, &b_TPFitterChunk_data__pifix_E2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_distToMeanCer1", TPFitterChunk_data__pifix_distToMeanCer1, &b_TPFitterChunk_data__pifix_distToMeanCer1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_distToMeanCer2", TPFitterChunk_data__pifix_distToMeanCer2, &b_TPFitterChunk_data__pifix_distToMeanCer2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_S1", TPFitterChunk_data__pifix_S1, &b_TPFitterChunk_data__pifix_S1);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_S2", TPFitterChunk_data__pifix_S2, &b_TPFitterChunk_data__pifix_S2);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_Fqqq", TPFitterChunk_data__pifix_Fqqq, &b_TPFitterChunk_data__pifix_Fqqq);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_Fttt", TPFitterChunk_data__pifix_Fttt, &b_TPFitterChunk_data__pifix_Fttt);
   fChain->SetBranchAddress("TPFitterChunk.data_.pifix_F", TPFitterChunk_data__pifix_F, &b_TPFitterChunk_data__pifix_F);
   fChain->SetBranchAddress("TPFitterChunk.name_", TPFitterChunk_name_, &b_TPFitterChunk_name_);
   fChain->SetBranchAddress("TRoePiChunk", &TRoePiChunk_, &b_TRoePiChunk_);
   fChain->SetBranchAddress("TRoePiChunk.chunk_id_", TRoePiChunk_chunk_id_, &b_TRoePiChunk_chunk_id_);
   fChain->SetBranchAddress("TRoePiChunk.data_.fUniqueID", TRoePiChunk_data__fUniqueID, &b_TRoePiChunk_data__fUniqueID);
   fChain->SetBranchAddress("TRoePiChunk.data_.fBits", TRoePiChunk_data__fBits, &b_TRoePiChunk_data__fBits);
   fChain->SetBranchAddress("TRoePiChunk.data_.rvec_v[3]", TRoePiChunk_data__rvec_v, &b_TRoePiChunk_data__rvec_v);
   fChain->SetBranchAddress("TRoePiChunk.data_.time_v", TRoePiChunk_data__time_v, &b_TRoePiChunk_data__time_v);
   fChain->SetBranchAddress("TRoePiChunk.data_.shiftg1", TRoePiChunk_data__shiftg1, &b_TRoePiChunk_data__shiftg1);
   fChain->SetBranchAddress("TRoePiChunk.data_.shiftg2", TRoePiChunk_data__shiftg2, &b_TRoePiChunk_data__shiftg2);
   fChain->SetBranchAddress("TRoePiChunk.data_.dircosg1[3]", TRoePiChunk_data__dircosg1, &b_TRoePiChunk_data__dircosg1);
   fChain->SetBranchAddress("TRoePiChunk.data_.dircosg2[3]", TRoePiChunk_data__dircosg2, &b_TRoePiChunk_data__dircosg2);
   fChain->SetBranchAddress("TRoePiChunk.data_.chge_g1", TRoePiChunk_data__chge_g1, &b_TRoePiChunk_data__chge_g1);
   fChain->SetBranchAddress("TRoePiChunk.data_.chge_g2", TRoePiChunk_data__chge_g2, &b_TRoePiChunk_data__chge_g2);
   fChain->SetBranchAddress("TRoePiChunk.data_.chgew_g1", TRoePiChunk_data__chgew_g1, &b_TRoePiChunk_data__chgew_g1);
   fChain->SetBranchAddress("TRoePiChunk.data_.chgew_g2", TRoePiChunk_data__chgew_g2, &b_TRoePiChunk_data__chgew_g2);
   fChain->SetBranchAddress("TRoePiChunk.data_.Eg1", TRoePiChunk_data__Eg1, &b_TRoePiChunk_data__Eg1);
   fChain->SetBranchAddress("TRoePiChunk.data_.Eg2", TRoePiChunk_data__Eg2, &b_TRoePiChunk_data__Eg2);
   fChain->SetBranchAddress("TRoePiChunk.data_.pi0mass", TRoePiChunk_data__pi0mass, &b_TRoePiChunk_data__pi0mass);
   fChain->SetBranchAddress("TRoePiChunk.data_.errors[12][12]", TRoePiChunk_data__errors, &b_TRoePiChunk_data__errors);
   fChain->SetBranchAddress("TRoePiChunk.data_.cosang1", TRoePiChunk_data__cosang1, &b_TRoePiChunk_data__cosang1);
   fChain->SetBranchAddress("TRoePiChunk.name_", TRoePiChunk_name_, &b_TRoePiChunk_name_);
   fChain->SetBranchAddress("TFittersPi0Chunk", &TFittersPi0Chunk_, &b_TFittersPi0Chunk_);
   fChain->SetBranchAddress("TFittersPi0Chunk.chunk_id_", TFittersPi0Chunk_chunk_id_, &b_TFittersPi0Chunk_chunk_id_);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.fUniqueID", TFittersPi0Chunk_data__fUniqueID, &b_TFittersPi0Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.fBits", TFittersPi0Chunk_data__fBits, &b_TFittersPi0Chunk_data__fBits);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.id[20]", TFittersPi0Chunk_data__id, &b_TFittersPi0Chunk_data__id);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.x", TFittersPi0Chunk_data__x, &b_TFittersPi0Chunk_data__x);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.y", TFittersPi0Chunk_data__y, &b_TFittersPi0Chunk_data__y);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.z", TFittersPi0Chunk_data__z, &b_TFittersPi0Chunk_data__z);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.t", TFittersPi0Chunk_data__t, &b_TFittersPi0Chunk_data__t);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.mass", TFittersPi0Chunk_data__mass, &b_TFittersPi0Chunk_data__mass);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.angle", TFittersPi0Chunk_data__angle, &b_TFittersPi0Chunk_data__angle);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.eg1", TFittersPi0Chunk_data__eg1, &b_TFittersPi0Chunk_data__eg1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.eg2", TFittersPi0Chunk_data__eg2, &b_TFittersPi0Chunk_data__eg2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.shift1", TFittersPi0Chunk_data__shift1, &b_TFittersPi0Chunk_data__shift1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.shift2", TFittersPi0Chunk_data__shift2, &b_TFittersPi0Chunk_data__shift2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.ux1", TFittersPi0Chunk_data__ux1, &b_TFittersPi0Chunk_data__ux1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.uy1", TFittersPi0Chunk_data__uy1, &b_TFittersPi0Chunk_data__uy1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.uz1", TFittersPi0Chunk_data__uz1, &b_TFittersPi0Chunk_data__uz1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.ux2", TFittersPi0Chunk_data__ux2, &b_TFittersPi0Chunk_data__ux2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.uy2", TFittersPi0Chunk_data__uy2, &b_TFittersPi0Chunk_data__uy2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.uz2", TFittersPi0Chunk_data__uz2, &b_TFittersPi0Chunk_data__uz2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.qgamma1", TFittersPi0Chunk_data__qgamma1, &b_TFittersPi0Chunk_data__qgamma1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.qgamma2", TFittersPi0Chunk_data__qgamma2, &b_TFittersPi0Chunk_data__qgamma2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.errors[20][20]", TFittersPi0Chunk_data__errors, &b_TFittersPi0Chunk_data__errors);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.cosang1", TFittersPi0Chunk_data__cosang1, &b_TFittersPi0Chunk_data__cosang1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.Newpi[50]", TFittersPi0Chunk_data__Newpi, &b_TFittersPi0Chunk_data__Newpi);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.chg_length_g1", TFittersPi0Chunk_data__chg_length_g1, &b_TFittersPi0Chunk_data__chg_length_g1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.chg_length_g2", TFittersPi0Chunk_data__chg_length_g2, &b_TFittersPi0Chunk_data__chg_length_g2);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.numlowt_g1[10]", TFittersPi0Chunk_data__numlowt_g1, &b_TFittersPi0Chunk_data__numlowt_g1);
   fChain->SetBranchAddress("TFittersPi0Chunk.data_.numlowt_g2[10]", TFittersPi0Chunk_data__numlowt_g2, &b_TFittersPi0Chunk_data__numlowt_g2);
   fChain->SetBranchAddress("TFittersPi0Chunk.name_", TFittersPi0Chunk_name_, &b_TFittersPi0Chunk_name_);
   fChain->SetBranchAddress("TParticleIDChunk", &TParticleIDChunk_, &b_TParticleIDChunk_);
   fChain->SetBranchAddress("TParticleIDChunk.chunk_id_", TParticleIDChunk_chunk_id_, &b_TParticleIDChunk_chunk_id_);
   fChain->SetBranchAddress("TParticleIDChunk.data_.fUniqueID", TParticleIDChunk_data__fUniqueID, &b_TParticleIDChunk_data__fUniqueID);
   fChain->SetBranchAddress("TParticleIDChunk.data_.fBits", TParticleIDChunk_data__fBits, &b_TParticleIDChunk_data__fBits);
   fChain->SetBranchAddress("TParticleIDChunk.data_.NUM_PAR", TParticleIDChunk_data__NUM_PAR, &b_TParticleIDChunk_data__NUM_PAR);
   fChain->SetBranchAddress("TParticleIDChunk.data_.PARAM", TParticleIDChunk_data__PARAM, &b_TParticleIDChunk_data__PARAM);
   fChain->SetBranchAddress("TParticleIDChunk.data_.NUM_OUT", TParticleIDChunk_data__NUM_OUT, &b_TParticleIDChunk_data__NUM_OUT);
   fChain->SetBranchAddress("TParticleIDChunk.data_.OUTPUT", TParticleIDChunk_data__OUTPUT, &b_TParticleIDChunk_data__OUTPUT);
   fChain->SetBranchAddress("TParticleIDChunk.name_", TParticleIDChunk_name_, &b_TParticleIDChunk_name_);
   fChain->SetBranchAddress("TTwoTrackChunk", &TTwoTrackChunk_, &b_TTwoTrackChunk_);
   fChain->SetBranchAddress("TTwoTrackChunk.chunk_id_", TTwoTrackChunk_chunk_id_, &b_TTwoTrackChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fUniqueID", TTwoTrackChunk_data__fUniqueID, &b_TTwoTrackChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fBits", TTwoTrackChunk_data__fBits, &b_TTwoTrackChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.trackType1", TTwoTrackChunk_data__trackType1, &b_TTwoTrackChunk_data__trackType1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.trackType2", TTwoTrackChunk_data__trackType2, &b_TTwoTrackChunk_data__trackType2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.X", TTwoTrackChunk_data__X, &b_TTwoTrackChunk_data__X);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Y", TTwoTrackChunk_data__Y, &b_TTwoTrackChunk_data__Y);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Z", TTwoTrackChunk_data__Z, &b_TTwoTrackChunk_data__Z);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.T", TTwoTrackChunk_data__T, &b_TTwoTrackChunk_data__T);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.M", TTwoTrackChunk_data__M, &b_TTwoTrackChunk_data__M);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.CosOp", TTwoTrackChunk_data__CosOp, &b_TTwoTrackChunk_data__CosOp);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UX1", TTwoTrackChunk_data__UX1, &b_TTwoTrackChunk_data__UX1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UY1", TTwoTrackChunk_data__UY1, &b_TTwoTrackChunk_data__UY1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UZ1", TTwoTrackChunk_data__UZ1, &b_TTwoTrackChunk_data__UZ1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.E1", TTwoTrackChunk_data__E1, &b_TTwoTrackChunk_data__E1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.distToMeanCer1", TTwoTrackChunk_data__distToMeanCer1, &b_TTwoTrackChunk_data__distToMeanCer1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.S1", TTwoTrackChunk_data__S1, &b_TTwoTrackChunk_data__S1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UX2", TTwoTrackChunk_data__UX2, &b_TTwoTrackChunk_data__UX2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UY2", TTwoTrackChunk_data__UY2, &b_TTwoTrackChunk_data__UY2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UZ2", TTwoTrackChunk_data__UZ2, &b_TTwoTrackChunk_data__UZ2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.E2", TTwoTrackChunk_data__E2, &b_TTwoTrackChunk_data__E2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.distToMeanCer2", TTwoTrackChunk_data__distToMeanCer2, &b_TTwoTrackChunk_data__distToMeanCer2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.S2", TTwoTrackChunk_data__S2, &b_TTwoTrackChunk_data__S2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fluxScale", TTwoTrackChunk_data__fluxScale, &b_TTwoTrackChunk_data__fluxScale);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.relativeSci", TTwoTrackChunk_data__relativeSci, &b_TTwoTrackChunk_data__relativeSci);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Fqqq", TTwoTrackChunk_data__Fqqq, &b_TTwoTrackChunk_data__Fqqq);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Fttt", TTwoTrackChunk_data__Fttt, &b_TTwoTrackChunk_data__Fttt);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.F", TTwoTrackChunk_data__F, &b_TTwoTrackChunk_data__F);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fixedMass", TTwoTrackChunk_data__fixedMass, &b_TTwoTrackChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackChunk.name_", TTwoTrackChunk_name_, &b_TTwoTrackChunk_name_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk", &TTwoTrackEndConditionsChunk_, &b_TTwoTrackEndConditionsChunk_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.chunk_id_", TTwoTrackEndConditionsChunk_chunk_id_, &b_TTwoTrackEndConditionsChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fUniqueID", TTwoTrackEndConditionsChunk_data__fUniqueID, &b_TTwoTrackEndConditionsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fBits", TTwoTrackEndConditionsChunk_data__fBits, &b_TTwoTrackEndConditionsChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.OneTrack_E", TTwoTrackEndConditionsChunk_data__OneTrack_E, &b_TTwoTrackEndConditionsChunk_data__OneTrack_E);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.OneTrack_F", TTwoTrackEndConditionsChunk_data__OneTrack_F, &b_TTwoTrackEndConditionsChunk_data__OneTrack_F);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.end_F", TTwoTrackEndConditionsChunk_data__end_F, &b_TTwoTrackEndConditionsChunk_data__end_F);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.cut_DeltaF", TTwoTrackEndConditionsChunk_data__cut_DeltaF, &b_TTwoTrackEndConditionsChunk_data__cut_DeltaF);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.end_DeltaF", TTwoTrackEndConditionsChunk_data__end_DeltaF, &b_TTwoTrackEndConditionsChunk_data__end_DeltaF);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fitWasAborted", TTwoTrackEndConditionsChunk_data__fitWasAborted, &b_TTwoTrackEndConditionsChunk_data__fitWasAborted);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.enteredMainFit", TTwoTrackEndConditionsChunk_data__enteredMainFit, &b_TTwoTrackEndConditionsChunk_data__enteredMainFit);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.finalStartPointer", TTwoTrackEndConditionsChunk_data__finalStartPointer, &b_TTwoTrackEndConditionsChunk_data__finalStartPointer);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.finalStartOrder", TTwoTrackEndConditionsChunk_data__finalStartOrder, &b_TTwoTrackEndConditionsChunk_data__finalStartOrder);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fixedMass", TTwoTrackEndConditionsChunk_data__fixedMass, &b_TTwoTrackEndConditionsChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.name_", TTwoTrackEndConditionsChunk_name_, &b_TTwoTrackEndConditionsChunk_name_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk", &TTwoTrackInternalsChunk_, &b_TTwoTrackInternalsChunk_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.chunk_id_", TTwoTrackInternalsChunk_chunk_id_, &b_TTwoTrackInternalsChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fUniqueID", TTwoTrackInternalsChunk_data__fUniqueID, &b_TTwoTrackInternalsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fBits", TTwoTrackInternalsChunk_data__fBits, &b_TTwoTrackInternalsChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.numStarts", TTwoTrackInternalsChunk_data__numStarts, &b_TTwoTrackInternalsChunk_data__numStarts);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPointer", TTwoTrackInternalsChunk_data__startPointer, &b_TTwoTrackInternalsChunk_data__startPointer);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startXpos", TTwoTrackInternalsChunk_data__startXpos, &b_TTwoTrackInternalsChunk_data__startXpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startYpos", TTwoTrackInternalsChunk_data__startYpos, &b_TTwoTrackInternalsChunk_data__startYpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startZpos", TTwoTrackInternalsChunk_data__startZpos, &b_TTwoTrackInternalsChunk_data__startZpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startTime", TTwoTrackInternalsChunk_data__startTime, &b_TTwoTrackInternalsChunk_data__startTime);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startE1", TTwoTrackInternalsChunk_data__startE1, &b_TTwoTrackInternalsChunk_data__startE1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startE2", TTwoTrackInternalsChunk_data__startE2, &b_TTwoTrackInternalsChunk_data__startE2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startS1", TTwoTrackInternalsChunk_data__startS1, &b_TTwoTrackInternalsChunk_data__startS1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPhi1", TTwoTrackInternalsChunk_data__startPhi1, &b_TTwoTrackInternalsChunk_data__startPhi1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startThet1", TTwoTrackInternalsChunk_data__startThet1, &b_TTwoTrackInternalsChunk_data__startThet1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startS2", TTwoTrackInternalsChunk_data__startS2, &b_TTwoTrackInternalsChunk_data__startS2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPhi2", TTwoTrackInternalsChunk_data__startPhi2, &b_TTwoTrackInternalsChunk_data__startPhi2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startThet2", TTwoTrackInternalsChunk_data__startThet2, &b_TTwoTrackInternalsChunk_data__startThet2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startF", TTwoTrackInternalsChunk_data__startF, &b_TTwoTrackInternalsChunk_data__startF);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endXpos", TTwoTrackInternalsChunk_data__endXpos, &b_TTwoTrackInternalsChunk_data__endXpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endYpos", TTwoTrackInternalsChunk_data__endYpos, &b_TTwoTrackInternalsChunk_data__endYpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endZpos", TTwoTrackInternalsChunk_data__endZpos, &b_TTwoTrackInternalsChunk_data__endZpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endTime", TTwoTrackInternalsChunk_data__endTime, &b_TTwoTrackInternalsChunk_data__endTime);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endE1", TTwoTrackInternalsChunk_data__endE1, &b_TTwoTrackInternalsChunk_data__endE1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endE2", TTwoTrackInternalsChunk_data__endE2, &b_TTwoTrackInternalsChunk_data__endE2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endS1", TTwoTrackInternalsChunk_data__endS1, &b_TTwoTrackInternalsChunk_data__endS1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endPhi1", TTwoTrackInternalsChunk_data__endPhi1, &b_TTwoTrackInternalsChunk_data__endPhi1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endThet1", TTwoTrackInternalsChunk_data__endThet1, &b_TTwoTrackInternalsChunk_data__endThet1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endS2", TTwoTrackInternalsChunk_data__endS2, &b_TTwoTrackInternalsChunk_data__endS2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endPhi2", TTwoTrackInternalsChunk_data__endPhi2, &b_TTwoTrackInternalsChunk_data__endPhi2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endThet2", TTwoTrackInternalsChunk_data__endThet2, &b_TTwoTrackInternalsChunk_data__endThet2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endF", TTwoTrackInternalsChunk_data__endF, &b_TTwoTrackInternalsChunk_data__endF);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.skipped", TTwoTrackInternalsChunk_data__skipped, &b_TTwoTrackInternalsChunk_data__skipped);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fixedMass", TTwoTrackInternalsChunk_data__fixedMass, &b_TTwoTrackInternalsChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fitWasAborted", TTwoTrackInternalsChunk_data__fitWasAborted, &b_TTwoTrackInternalsChunk_data__fitWasAborted);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.name_", TTwoTrackInternalsChunk_name_, &b_TTwoTrackInternalsChunk_name_);
   fChain->SetBranchAddress("TProtonChunk", &TProtonChunk_, &b_TProtonChunk_);
   fChain->SetBranchAddress("TProtonChunk.chunk_id_", TProtonChunk_chunk_id_, &b_TProtonChunk_chunk_id_);
   fChain->SetBranchAddress("TProtonChunk.data_.fUniqueID", TProtonChunk_data__fUniqueID, &b_TProtonChunk_data__fUniqueID);
   fChain->SetBranchAddress("TProtonChunk.data_.fBits", TProtonChunk_data__fBits, &b_TProtonChunk_data__fBits);
   fChain->SetBranchAddress("TProtonChunk.data_.E", TProtonChunk_data__E, &b_TProtonChunk_data__E);
   fChain->SetBranchAddress("TProtonChunk.data_.X", TProtonChunk_data__X, &b_TProtonChunk_data__X);
   fChain->SetBranchAddress("TProtonChunk.data_.Y", TProtonChunk_data__Y, &b_TProtonChunk_data__Y);
   fChain->SetBranchAddress("TProtonChunk.data_.Z", TProtonChunk_data__Z, &b_TProtonChunk_data__Z);
   fChain->SetBranchAddress("TProtonChunk.data_.T", TProtonChunk_data__T, &b_TProtonChunk_data__T);
   fChain->SetBranchAddress("TProtonChunk.data_.UX", TProtonChunk_data__UX, &b_TProtonChunk_data__UX);
   fChain->SetBranchAddress("TProtonChunk.data_.UY", TProtonChunk_data__UY, &b_TProtonChunk_data__UY);
   fChain->SetBranchAddress("TProtonChunk.data_.UZ", TProtonChunk_data__UZ, &b_TProtonChunk_data__UZ);
   fChain->SetBranchAddress("TProtonChunk.data_.TLLK", TProtonChunk_data__TLLK, &b_TProtonChunk_data__TLLK);
   fChain->SetBranchAddress("TProtonChunk.data_.QLLK", TProtonChunk_data__QLLK, &b_TProtonChunk_data__QLLK);
   fChain->SetBranchAddress("TProtonChunk.name_", TProtonChunk_name_, &b_TProtonChunk_name_);
   fChain->SetBranchAddress("TNeutronChunk", &TNeutronChunk_, &b_TNeutronChunk_);
   fChain->SetBranchAddress("TNeutronChunk.chunk_id_", TNeutronChunk_chunk_id_, &b_TNeutronChunk_chunk_id_);
   fChain->SetBranchAddress("TNeutronChunk.data_.fUniqueID", TNeutronChunk_data__fUniqueID, &b_TNeutronChunk_data__fUniqueID);
   fChain->SetBranchAddress("TNeutronChunk.data_.fBits", TNeutronChunk_data__fBits, &b_TNeutronChunk_data__fBits);
   fChain->SetBranchAddress("TNeutronChunk.data_.E", TNeutronChunk_data__E, &b_TNeutronChunk_data__E);
   fChain->SetBranchAddress("TNeutronChunk.data_.X", TNeutronChunk_data__X, &b_TNeutronChunk_data__X);
   fChain->SetBranchAddress("TNeutronChunk.data_.Y", TNeutronChunk_data__Y, &b_TNeutronChunk_data__Y);
   fChain->SetBranchAddress("TNeutronChunk.data_.Z", TNeutronChunk_data__Z, &b_TNeutronChunk_data__Z);
   fChain->SetBranchAddress("TNeutronChunk.data_.T", TNeutronChunk_data__T, &b_TNeutronChunk_data__T);
   fChain->SetBranchAddress("TNeutronChunk.data_.TLLK", TNeutronChunk_data__TLLK, &b_TNeutronChunk_data__TLLK);
   fChain->SetBranchAddress("TNeutronChunk.data_.QLLK", TNeutronChunk_data__QLLK, &b_TNeutronChunk_data__QLLK);
   fChain->SetBranchAddress("TNeutronChunk.name_", TNeutronChunk_name_, &b_TNeutronChunk_name_);
   fChain->SetBranchAddress("TInstanceCountChunk", &TInstanceCountChunk_, &b_TInstanceCountChunk_);
   fChain->SetBranchAddress("TInstanceCountChunk.chunk_id_", TInstanceCountChunk_chunk_id_, &b_TInstanceCountChunk_chunk_id_);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.fUniqueID", TInstanceCountChunk_data__fUniqueID, &b_TInstanceCountChunk_data__fUniqueID);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.fBits", TInstanceCountChunk_data__fBits, &b_TInstanceCountChunk_data__fBits);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.MonteCarlo", TInstanceCountChunk_data__MonteCarlo, &b_TInstanceCountChunk_data__MonteCarlo);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.GlobalTankHeader", TInstanceCountChunk_data__GlobalTankHeader, &b_TInstanceCountChunk_data__GlobalTankHeader);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.SplitEvent", TInstanceCountChunk_data__SplitEvent, &b_TInstanceCountChunk_data__SplitEvent);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Full", TInstanceCountChunk_data__Full, &b_TInstanceCountChunk_data__Full);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Fast", TInstanceCountChunk_data__Fast, &b_TInstanceCountChunk_data__Fast);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Flux", TInstanceCountChunk_data__Flux, &b_TInstanceCountChunk_data__Flux);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Trak", TInstanceCountChunk_data__Trak, &b_TInstanceCountChunk_data__Trak);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Vars", TInstanceCountChunk_data__Vars, &b_TInstanceCountChunk_data__Vars);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.PID", TInstanceCountChunk_data__PID, &b_TInstanceCountChunk_data__PID);
   fChain->SetBranchAddress("TInstanceCountChunk.data_.Energy", TInstanceCountChunk_data__Energy, &b_TInstanceCountChunk_data__Energy);
   fChain->SetBranchAddress("TInstanceCountChunk.name_", TInstanceCountChunk_name_, &b_TInstanceCountChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk", &TnumuCCQElike_angleVarsChunk_, &b_TnumuCCQElike_angleVarsChunk_);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.chunk_id_", TnumuCCQElike_angleVarsChunk_chunk_id_, &b_TnumuCCQElike_angleVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.fUniqueID", TnumuCCQElike_angleVarsChunk_data__fUniqueID, &b_TnumuCCQElike_angleVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.fBits", TnumuCCQElike_angleVarsChunk_data__fBits, &b_TnumuCCQElike_angleVarsChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.Hits", TnumuCCQElike_angleVarsChunk_data__Hits, &b_TnumuCCQElike_angleVarsChunk_data__Hits);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.angle", TnumuCCQElike_angleVarsChunk_data__angle, &b_TnumuCCQElike_angleVarsChunk_data__angle);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.BackFrac", TnumuCCQElike_angleVarsChunk_data__BackFrac, &b_TnumuCCQElike_angleVarsChunk_data__BackFrac);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.BackPfrac", TnumuCCQElike_angleVarsChunk_data__BackPfrac, &b_TnumuCCQElike_angleVarsChunk_data__BackPfrac);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.TransFrac", TnumuCCQElike_angleVarsChunk_data__TransFrac, &b_TnumuCCQElike_angleVarsChunk_data__TransFrac);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.data_.TransPfrac", TnumuCCQElike_angleVarsChunk_data__TransPfrac, &b_TnumuCCQElike_angleVarsChunk_data__TransPfrac);
   fChain->SetBranchAddress("TnumuCCQElike_angleVarsChunk.name_", TnumuCCQElike_angleVarsChunk_name_, &b_TnumuCCQElike_angleVarsChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk", &TnumuCCQElike_HitRatioVarsChunk_, &b_TnumuCCQElike_HitRatioVarsChunk_);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.chunk_id_", TnumuCCQElike_HitRatioVarsChunk_chunk_id_, &b_TnumuCCQElike_HitRatioVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.fUniqueID", TnumuCCQElike_HitRatioVarsChunk_data__fUniqueID, &b_TnumuCCQElike_HitRatioVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.fBits", TnumuCCQElike_HitRatioVarsChunk_data__fBits, &b_TnumuCCQElike_HitRatioVarsChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.qon[5]", TnumuCCQElike_HitRatioVarsChunk_data__qon, &b_TnumuCCQElike_HitRatioVarsChunk_data__qon);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.qtot", TnumuCCQElike_HitRatioVarsChunk_data__qtot, &b_TnumuCCQElike_HitRatioVarsChunk_data__qtot);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.s", TnumuCCQElike_HitRatioVarsChunk_data__s, &b_TnumuCCQElike_HitRatioVarsChunk_data__s);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.e", TnumuCCQElike_HitRatioVarsChunk_data__e, &b_TnumuCCQElike_HitRatioVarsChunk_data__e);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.qco[10]", TnumuCCQElike_HitRatioVarsChunk_data__qco, &b_TnumuCCQElike_HitRatioVarsChunk_data__qco);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.csq", TnumuCCQElike_HitRatioVarsChunk_data__csq, &b_TnumuCCQElike_HitRatioVarsChunk_data__csq);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.data_.qcr", TnumuCCQElike_HitRatioVarsChunk_data__qcr, &b_TnumuCCQElike_HitRatioVarsChunk_data__qcr);
   fChain->SetBranchAddress("TnumuCCQElike_HitRatioVarsChunk.name_", TnumuCCQElike_HitRatioVarsChunk_name_, &b_TnumuCCQElike_HitRatioVarsChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk", &TnumuCCQElike_TrakDiffVarsChunk_, &b_TnumuCCQElike_TrakDiffVarsChunk_);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk.chunk_id_", TnumuCCQElike_TrakDiffVarsChunk_chunk_id_, &b_TnumuCCQElike_TrakDiffVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk.data_.fUniqueID", TnumuCCQElike_TrakDiffVarsChunk_data__fUniqueID, &b_TnumuCCQElike_TrakDiffVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk.data_.fBits", TnumuCCQElike_TrakDiffVarsChunk_data__fBits, &b_TnumuCCQElike_TrakDiffVarsChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk.data_.TrakDifference", TnumuCCQElike_TrakDiffVarsChunk_data__TrakDifference, &b_TnumuCCQElike_TrakDiffVarsChunk_data__TrakDifference);
   fChain->SetBranchAddress("TnumuCCQElike_TrakDiffVarsChunk.name_", TnumuCCQElike_TrakDiffVarsChunk_name_, &b_TnumuCCQElike_TrakDiffVarsChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk", &TnumuCCQElike_effectiveEVWTChunk_, &b_TnumuCCQElike_effectiveEVWTChunk_);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.chunk_id_", TnumuCCQElike_effectiveEVWTChunk_chunk_id_, &b_TnumuCCQElike_effectiveEVWTChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.fUniqueID", TnumuCCQElike_effectiveEVWTChunk_data__fUniqueID, &b_TnumuCCQElike_effectiveEVWTChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.fBits", TnumuCCQElike_effectiveEVWTChunk_data__fBits, &b_TnumuCCQElike_effectiveEVWTChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.efftype", TnumuCCQElike_effectiveEVWTChunk_data__efftype, &b_TnumuCCQElike_effectiveEVWTChunk_data__efftype);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.type", TnumuCCQElike_effectiveEVWTChunk_data__type, &b_TnumuCCQElike_effectiveEVWTChunk_data__type);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.subcpi", TnumuCCQElike_effectiveEVWTChunk_data__subcpi, &b_TnumuCCQElike_effectiveEVWTChunk_data__subcpi);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.data_.supcp", TnumuCCQElike_effectiveEVWTChunk_data__supcp, &b_TnumuCCQElike_effectiveEVWTChunk_data__supcp);
   fChain->SetBranchAddress("TnumuCCQElike_effectiveEVWTChunk.name_", TnumuCCQElike_effectiveEVWTChunk_name_, &b_TnumuCCQElike_effectiveEVWTChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk", &TnumuCCQElike_qeVarsChunk_, &b_TnumuCCQElike_qeVarsChunk_);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.chunk_id_", TnumuCCQElike_qeVarsChunk_chunk_id_, &b_TnumuCCQElike_qeVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.data_.fUniqueID", TnumuCCQElike_qeVarsChunk_data__fUniqueID, &b_TnumuCCQElike_qeVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.data_.fBits", TnumuCCQElike_qeVarsChunk_data__fBits, &b_TnumuCCQElike_qeVarsChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.data_.Vector[13]", TnumuCCQElike_qeVarsChunk_data__Vector, &b_TnumuCCQElike_qeVarsChunk_data__Vector);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.data_.EVWT", TnumuCCQElike_qeVarsChunk_data__EVWT, &b_TnumuCCQElike_qeVarsChunk_data__EVWT);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.data_.effEVWT", TnumuCCQElike_qeVarsChunk_data__effEVWT, &b_TnumuCCQElike_qeVarsChunk_data__effEVWT);
   fChain->SetBranchAddress("TnumuCCQElike_qeVarsChunk.name_", TnumuCCQElike_qeVarsChunk_name_, &b_TnumuCCQElike_qeVarsChunk_name_);
   fChain->SetBranchAddress("TnumuCCQElikeChunk", &TnumuCCQElikeChunk_, &b_TnumuCCQElikeChunk_);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.chunk_id_", TnumuCCQElikeChunk_chunk_id_, &b_TnumuCCQElikeChunk_chunk_id_);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.fUniqueID", TnumuCCQElikeChunk_data__fUniqueID, &b_TnumuCCQElikeChunk_data__fUniqueID);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.fBits", TnumuCCQElikeChunk_data__fBits, &b_TnumuCCQElikeChunk_data__fBits);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.RUN", TnumuCCQElikeChunk_data__RUN, &b_TnumuCCQElikeChunk_data__RUN);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EVWT", TnumuCCQElikeChunk_data__EVWT, &b_TnumuCCQElikeChunk_data__EVWT);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.effEVWT", TnumuCCQElikeChunk_data__effEVWT, &b_TnumuCCQElikeChunk_data__effEVWT);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.numSubev", TnumuCCQElikeChunk_data__numSubev, &b_TnumuCCQElikeChunk_data__numSubev);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.MCenergy", TnumuCCQElikeChunk_data__MCenergy, &b_TnumuCCQElikeChunk_data__MCenergy);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.pmu", TnumuCCQElikeChunk_data__pmu, &b_TnumuCCQElikeChunk_data__pmu);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.numuCCQElike", TnumuCCQElikeChunk_data__numuCCQElike, &b_TnumuCCQElikeChunk_data__numuCCQElike);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.QTank", TnumuCCQElikeChunk_data__QTank, &b_TnumuCCQElikeChunk_data__QTank);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.NTank", TnumuCCQElikeChunk_data__NTank, &b_TnumuCCQElikeChunk_data__NTank);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.NVeto", TnumuCCQElikeChunk_data__NVeto, &b_TnumuCCQElikeChunk_data__NVeto);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.TTank", TnumuCCQElikeChunk_data__TTank, &b_TnumuCCQElikeChunk_data__TTank);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EFull", TnumuCCQElikeChunk_data__EFull, &b_TnumuCCQElikeChunk_data__EFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.TFull", TnumuCCQElikeChunk_data__TFull, &b_TnumuCCQElikeChunk_data__TFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.XFull", TnumuCCQElikeChunk_data__XFull, &b_TnumuCCQElikeChunk_data__XFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.YFull", TnumuCCQElikeChunk_data__YFull, &b_TnumuCCQElikeChunk_data__YFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.ZFull", TnumuCCQElikeChunk_data__ZFull, &b_TnumuCCQElikeChunk_data__ZFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.UXFull", TnumuCCQElikeChunk_data__UXFull, &b_TnumuCCQElikeChunk_data__UXFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.UYFull", TnumuCCQElikeChunk_data__UYFull, &b_TnumuCCQElikeChunk_data__UYFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.UZFull", TnumuCCQElikeChunk_data__UZFull, &b_TnumuCCQElikeChunk_data__UZFull);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.CER", TnumuCCQElikeChunk_data__CER, &b_TnumuCCQElikeChunk_data__CER);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EcerMu", TnumuCCQElikeChunk_data__EcerMu, &b_TnumuCCQElikeChunk_data__EcerMu);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.BeginX", TnumuCCQElikeChunk_data__BeginX, &b_TnumuCCQElikeChunk_data__BeginX);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.BeginY", TnumuCCQElikeChunk_data__BeginY, &b_TnumuCCQElikeChunk_data__BeginY);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.BeginZ", TnumuCCQElikeChunk_data__BeginZ, &b_TnumuCCQElikeChunk_data__BeginZ);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EndX", TnumuCCQElikeChunk_data__EndX, &b_TnumuCCQElikeChunk_data__EndX);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EndY", TnumuCCQElikeChunk_data__EndY, &b_TnumuCCQElikeChunk_data__EndY);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.data_.EndZ", TnumuCCQElikeChunk_data__EndZ, &b_TnumuCCQElikeChunk_data__EndZ);
   fChain->SetBranchAddress("TnumuCCQElikeChunk.name_", TnumuCCQElikeChunk_name_, &b_TnumuCCQElikeChunk_name_);
      fChain->SetBranchAddress("TCalibratedIRM1Chunk", &TCalibratedIRM1Chunk_, &b_TCalibratedIRM1Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.chunk_id_", TCalibratedIRM1Chunk_chunk_id_, &b_TCalibratedIRM1Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.fUniqueID", TCalibratedIRM1Chunk_data__fUniqueID, &b_TCalibratedIRM1Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.fBits", TCalibratedIRM1Chunk_data__fBits, &b_TCalibratedIRM1Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP860", TCalibratedIRM1Chunk_data__HP860, &b_TCalibratedIRM1Chunk_data__HP860);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI860", TCalibratedIRM1Chunk_data__HI860, &b_TCalibratedIRM1Chunk_data__HI860);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP860", TCalibratedIRM1Chunk_data__VP860, &b_TCalibratedIRM1Chunk_data__VP860);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI860", TCalibratedIRM1Chunk_data__VI860, &b_TCalibratedIRM1Chunk_data__VI860);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP861", TCalibratedIRM1Chunk_data__HP861, &b_TCalibratedIRM1Chunk_data__HP861);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI861", TCalibratedIRM1Chunk_data__HI861, &b_TCalibratedIRM1Chunk_data__HI861);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP861", TCalibratedIRM1Chunk_data__VP861, &b_TCalibratedIRM1Chunk_data__VP861);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI861", TCalibratedIRM1Chunk_data__VI861, &b_TCalibratedIRM1Chunk_data__VI861);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP864", TCalibratedIRM1Chunk_data__HP864, &b_TCalibratedIRM1Chunk_data__HP864);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI864", TCalibratedIRM1Chunk_data__HI864, &b_TCalibratedIRM1Chunk_data__HI864);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP864", TCalibratedIRM1Chunk_data__VP864, &b_TCalibratedIRM1Chunk_data__VP864);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI864", TCalibratedIRM1Chunk_data__VI864, &b_TCalibratedIRM1Chunk_data__VI864);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP866", TCalibratedIRM1Chunk_data__HP866, &b_TCalibratedIRM1Chunk_data__HP866);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI866", TCalibratedIRM1Chunk_data__HI866, &b_TCalibratedIRM1Chunk_data__HI866);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP867", TCalibratedIRM1Chunk_data__VP867, &b_TCalibratedIRM1Chunk_data__VP867);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI867", TCalibratedIRM1Chunk_data__VI867, &b_TCalibratedIRM1Chunk_data__VI867);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP868", TCalibratedIRM1Chunk_data__HP868, &b_TCalibratedIRM1Chunk_data__HP868);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI868", TCalibratedIRM1Chunk_data__HI868, &b_TCalibratedIRM1Chunk_data__HI868);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP869", TCalibratedIRM1Chunk_data__VP869, &b_TCalibratedIRM1Chunk_data__VP869);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI869", TCalibratedIRM1Chunk_data__VI869, &b_TCalibratedIRM1Chunk_data__VI869);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP870", TCalibratedIRM1Chunk_data__HP870, &b_TCalibratedIRM1Chunk_data__HP870);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI870", TCalibratedIRM1Chunk_data__HI870, &b_TCalibratedIRM1Chunk_data__HI870);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP870", TCalibratedIRM1Chunk_data__VP870, &b_TCalibratedIRM1Chunk_data__VP870);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI870", TCalibratedIRM1Chunk_data__VI870, &b_TCalibratedIRM1Chunk_data__VI870);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP871", TCalibratedIRM1Chunk_data__VP871, &b_TCalibratedIRM1Chunk_data__VP871);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI871", TCalibratedIRM1Chunk_data__VI871, &b_TCalibratedIRM1Chunk_data__VI871);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP872", TCalibratedIRM1Chunk_data__HP872, &b_TCalibratedIRM1Chunk_data__HP872);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI872", TCalibratedIRM1Chunk_data__HI872, &b_TCalibratedIRM1Chunk_data__HI872);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP873", TCalibratedIRM1Chunk_data__HP873, &b_TCalibratedIRM1Chunk_data__HP873);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI873", TCalibratedIRM1Chunk_data__HI873, &b_TCalibratedIRM1Chunk_data__HI873);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP873", TCalibratedIRM1Chunk_data__VP873, &b_TCalibratedIRM1Chunk_data__VP873);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI873", TCalibratedIRM1Chunk_data__VI873, &b_TCalibratedIRM1Chunk_data__VI873);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HP875", TCalibratedIRM1Chunk_data__HP875, &b_TCalibratedIRM1Chunk_data__HP875);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.HI875", TCalibratedIRM1Chunk_data__HI875, &b_TCalibratedIRM1Chunk_data__HI875);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VP875", TCalibratedIRM1Chunk_data__VP875, &b_TCalibratedIRM1Chunk_data__VP875);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.VI875", TCalibratedIRM1Chunk_data__VI875, &b_TCalibratedIRM1Chunk_data__VI875);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.TR860G", TCalibratedIRM1Chunk_data__TR860G, &b_TCalibratedIRM1Chunk_data__TR860G);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.TR875G", TCalibratedIRM1Chunk_data__TR875G, &b_TCalibratedIRM1Chunk_data__TR875G);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.TOR860", TCalibratedIRM1Chunk_data__TOR860, &b_TCalibratedIRM1Chunk_data__TOR860);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.data_.TOR875", TCalibratedIRM1Chunk_data__TOR875, &b_TCalibratedIRM1Chunk_data__TOR875);
   fChain->SetBranchAddress("TCalibratedIRM1Chunk.name_", TCalibratedIRM1Chunk_name_, &b_TCalibratedIRM1Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk", &TCalibratedIRM2Chunk_, &b_TCalibratedIRM2Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.chunk_id_", TCalibratedIRM2Chunk_chunk_id_, &b_TCalibratedIRM2Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.fUniqueID", TCalibratedIRM2Chunk_data__fUniqueID, &b_TCalibratedIRM2Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.fBits", TCalibratedIRM2Chunk_data__fBits, &b_TCalibratedIRM2Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM851A", TCalibratedIRM2Chunk_data__LM851A, &b_TCalibratedIRM2Chunk_data__LM851A);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM860", TCalibratedIRM2Chunk_data__LM860, &b_TCalibratedIRM2Chunk_data__LM860);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM862", TCalibratedIRM2Chunk_data__LM862, &b_TCalibratedIRM2Chunk_data__LM862);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM864", TCalibratedIRM2Chunk_data__LM864, &b_TCalibratedIRM2Chunk_data__LM864);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM865A", TCalibratedIRM2Chunk_data__LM865A, &b_TCalibratedIRM2Chunk_data__LM865A);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM865B", TCalibratedIRM2Chunk_data__LM865B, &b_TCalibratedIRM2Chunk_data__LM865B);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM866", TCalibratedIRM2Chunk_data__LM866, &b_TCalibratedIRM2Chunk_data__LM866);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM867", TCalibratedIRM2Chunk_data__LM867, &b_TCalibratedIRM2Chunk_data__LM867);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM868", TCalibratedIRM2Chunk_data__LM868, &b_TCalibratedIRM2Chunk_data__LM868);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM869", TCalibratedIRM2Chunk_data__LM869, &b_TCalibratedIRM2Chunk_data__LM869);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM870", TCalibratedIRM2Chunk_data__LM870, &b_TCalibratedIRM2Chunk_data__LM870);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM871", TCalibratedIRM2Chunk_data__LM871, &b_TCalibratedIRM2Chunk_data__LM871);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM872", TCalibratedIRM2Chunk_data__LM872, &b_TCalibratedIRM2Chunk_data__LM872);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM873", TCalibratedIRM2Chunk_data__LM873, &b_TCalibratedIRM2Chunk_data__LM873);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM874", TCalibratedIRM2Chunk_data__LM874, &b_TCalibratedIRM2Chunk_data__LM874);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM875A", TCalibratedIRM2Chunk_data__LM875A, &b_TCalibratedIRM2Chunk_data__LM875A);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM875B", TCalibratedIRM2Chunk_data__LM875B, &b_TCalibratedIRM2Chunk_data__LM875B);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LM875C", TCalibratedIRM2Chunk_data__LM875C, &b_TCalibratedIRM2Chunk_data__LM875C);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.LMBPST", TCalibratedIRM2Chunk_data__LMBPST, &b_TCalibratedIRM2Chunk_data__LMBPST);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TR860Z", TCalibratedIRM2Chunk_data__TR860Z, &b_TCalibratedIRM2Chunk_data__TR860Z);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TR875Z", TCalibratedIRM2Chunk_data__TR875Z, &b_TCalibratedIRM2Chunk_data__TR875Z);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TLI860", TCalibratedIRM2Chunk_data__TLI860, &b_TCalibratedIRM2Chunk_data__TLI860);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TLI862", TCalibratedIRM2Chunk_data__TLI862, &b_TCalibratedIRM2Chunk_data__TLI862);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TLI864", TCalibratedIRM2Chunk_data__TLI864, &b_TCalibratedIRM2Chunk_data__TLI864);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TLI870", TCalibratedIRM2Chunk_data__TLI870, &b_TCalibratedIRM2Chunk_data__TLI870);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TLI873", TCalibratedIRM2Chunk_data__TLI873, &b_TCalibratedIRM2Chunk_data__TLI873);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TOR860", TCalibratedIRM2Chunk_data__TOR860, &b_TCalibratedIRM2Chunk_data__TOR860);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.data_.TOR875", TCalibratedIRM2Chunk_data__TOR875, &b_TCalibratedIRM2Chunk_data__TOR875);
   fChain->SetBranchAddress("TCalibratedIRM2Chunk.name_", TCalibratedIRM2Chunk_name_, &b_TCalibratedIRM2Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk", &TCalibratedIRM3Chunk_, &b_TCalibratedIRM3Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.chunk_id_", TCalibratedIRM3Chunk_chunk_id_, &b_TCalibratedIRM3Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.fUniqueID", TCalibratedIRM3Chunk_data__fUniqueID, &b_TCalibratedIRM3Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.fBits", TCalibratedIRM3Chunk_data__fBits, &b_TCalibratedIRM3Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.HPTGTL", TCalibratedIRM3Chunk_data__HPTGTL, &b_TCalibratedIRM3Chunk_data__HPTGTL);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.HITGTL", TCalibratedIRM3Chunk_data__HITGTL, &b_TCalibratedIRM3Chunk_data__HITGTL);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.VPTGTL", TCalibratedIRM3Chunk_data__VPTGTL, &b_TCalibratedIRM3Chunk_data__VPTGTL);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.VITGTL", TCalibratedIRM3Chunk_data__VITGTL, &b_TCalibratedIRM3Chunk_data__VITGTL);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.MBT90D", TCalibratedIRM3Chunk_data__MBT90D, &b_TCalibratedIRM3Chunk_data__MBT90D);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM1P", TCalibratedIRM3Chunk_data__BPM1P, &b_TCalibratedIRM3Chunk_data__BPM1P);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM2P", TCalibratedIRM3Chunk_data__BPM2P, &b_TCalibratedIRM3Chunk_data__BPM2P);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM3P", TCalibratedIRM3Chunk_data__BPM3P, &b_TCalibratedIRM3Chunk_data__BPM3P);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM4P", TCalibratedIRM3Chunk_data__BPM4P, &b_TCalibratedIRM3Chunk_data__BPM4P);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM1SA", TCalibratedIRM3Chunk_data__BPM1SA, &b_TCalibratedIRM3Chunk_data__BPM1SA);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM1SB", TCalibratedIRM3Chunk_data__BPM1SB, &b_TCalibratedIRM3Chunk_data__BPM1SB);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM2SA", TCalibratedIRM3Chunk_data__BPM2SA, &b_TCalibratedIRM3Chunk_data__BPM2SA);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM2SB", TCalibratedIRM3Chunk_data__BPM2SB, &b_TCalibratedIRM3Chunk_data__BPM2SB);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM3SA", TCalibratedIRM3Chunk_data__BPM3SA, &b_TCalibratedIRM3Chunk_data__BPM3SA);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM3SB", TCalibratedIRM3Chunk_data__BPM3SB, &b_TCalibratedIRM3Chunk_data__BPM3SB);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM4SA", TCalibratedIRM3Chunk_data__BPM4SA, &b_TCalibratedIRM3Chunk_data__BPM4SA);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.data_.BPM4SB", TCalibratedIRM3Chunk_data__BPM4SB, &b_TCalibratedIRM3Chunk_data__BPM4SB);
   fChain->SetBranchAddress("TCalibratedIRM3Chunk.name_", TCalibratedIRM3Chunk_name_, &b_TCalibratedIRM3Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk", &TCalibratedIRM4Chunk_, &b_TCalibratedIRM4Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.chunk_id_", TCalibratedIRM4Chunk_chunk_id_, &b_TCalibratedIRM4Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.fUniqueID", TCalibratedIRM4Chunk_data__fUniqueID, &b_TCalibratedIRM4Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.fBits", TCalibratedIRM4Chunk_data__fBits, &b_TCalibratedIRM4Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.THCURR", TCalibratedIRM4Chunk_data__THCURR, &b_TCalibratedIRM4Chunk_data__THCURR);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.SLINE1", TCalibratedIRM4Chunk_data__SLINE1, &b_TCalibratedIRM4Chunk_data__SLINE1);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.SLINE2", TCalibratedIRM4Chunk_data__SLINE2, &b_TCalibratedIRM4Chunk_data__SLINE2);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.SLINE3", TCalibratedIRM4Chunk_data__SLINE3, &b_TCalibratedIRM4Chunk_data__SLINE3);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.data_.SLINE4", TCalibratedIRM4Chunk_data__SLINE4, &b_TCalibratedIRM4Chunk_data__SLINE4);
   fChain->SetBranchAddress("TCalibratedIRM4Chunk.name_", TCalibratedIRM4Chunk_name_, &b_TCalibratedIRM4Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk", &TCalibratedIRM5Chunk_, &b_TCalibratedIRM5Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.chunk_id_", TCalibratedIRM5Chunk_chunk_id_, &b_TCalibratedIRM5Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.fUniqueID", TCalibratedIRM5Chunk_data__fUniqueID, &b_TCalibratedIRM5Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.fBits", TCalibratedIRM5Chunk_data__fBits, &b_TCalibratedIRM5Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTBT1", TCalibratedIRM5Chunk_data__BTBT1, &b_TCalibratedIRM5Chunk_data__BTBT1);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTBT2", TCalibratedIRM5Chunk_data__BTBT2, &b_TCalibratedIRM5Chunk_data__BTBT2);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTJT1", TCalibratedIRM5Chunk_data__BTJT1, &b_TCalibratedIRM5Chunk_data__BTJT1);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTJT2", TCalibratedIRM5Chunk_data__BTJT2, &b_TCalibratedIRM5Chunk_data__BTJT2);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH1T1", TCalibratedIRM5Chunk_data__BTH1T1, &b_TCalibratedIRM5Chunk_data__BTH1T1);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH1AV", TCalibratedIRM5Chunk_data__BTH1AV, &b_TCalibratedIRM5Chunk_data__BTH1AV);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTBLAP", TCalibratedIRM5Chunk_data__BTBLAP, &b_TCalibratedIRM5Chunk_data__BTBLAP);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH2T2", TCalibratedIRM5Chunk_data__BTH2T2, &b_TCalibratedIRM5Chunk_data__BTH2T2);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH2AV", TCalibratedIRM5Chunk_data__BTH2AV, &b_TCalibratedIRM5Chunk_data__BTH2AV);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH1T2", TCalibratedIRM5Chunk_data__BTH1T2, &b_TCalibratedIRM5Chunk_data__BTH1T2);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH1AP", TCalibratedIRM5Chunk_data__BTH1AP, &b_TCalibratedIRM5Chunk_data__BTH1AP);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.BTH2T1", TCalibratedIRM5Chunk_data__BTH2T1, &b_TCalibratedIRM5Chunk_data__BTH2T1);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.HWTIN", TCalibratedIRM5Chunk_data__HWTIN, &b_TCalibratedIRM5Chunk_data__HWTIN);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.HWTOUT", TCalibratedIRM5Chunk_data__HWTOUT, &b_TCalibratedIRM5Chunk_data__HWTOUT);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.HWFLOW", TCalibratedIRM5Chunk_data__HWFLOW, &b_TCalibratedIRM5Chunk_data__HWFLOW);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.HV865", TCalibratedIRM5Chunk_data__HV865, &b_TCalibratedIRM5Chunk_data__HV865);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.Q872", TCalibratedIRM5Chunk_data__Q872, &b_TCalibratedIRM5Chunk_data__Q872);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.Q873", TCalibratedIRM5Chunk_data__Q873, &b_TCalibratedIRM5Chunk_data__Q873);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.Q874", TCalibratedIRM5Chunk_data__Q874, &b_TCalibratedIRM5Chunk_data__Q874);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.data_.Q875", TCalibratedIRM5Chunk_data__Q875, &b_TCalibratedIRM5Chunk_data__Q875);
   fChain->SetBranchAddress("TCalibratedIRM5Chunk.name_", TCalibratedIRM5Chunk_name_, &b_TCalibratedIRM5Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk", &TCalibratedIRM6Chunk_, &b_TCalibratedIRM6Chunk_);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.chunk_id_", TCalibratedIRM6Chunk_chunk_id_, &b_TCalibratedIRM6Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.fUniqueID", TCalibratedIRM6Chunk_data__fUniqueID, &b_TCalibratedIRM6Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.fBits", TCalibratedIRM6Chunk_data__fBits, &b_TCalibratedIRM6Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBINTA", TCalibratedIRM6Chunk_data__EBINTA, &b_TCalibratedIRM6Chunk_data__EBINTA);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBINTB", TCalibratedIRM6Chunk_data__EBINTB, &b_TCalibratedIRM6Chunk_data__EBINTB);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.SLP860", TCalibratedIRM6Chunk_data__SLP860, &b_TCalibratedIRM6Chunk_data__SLP860);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.INT860", TCalibratedIRM6Chunk_data__INT860, &b_TCalibratedIRM6Chunk_data__INT860);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.SLP875", TCalibratedIRM6Chunk_data__SLP875, &b_TCalibratedIRM6Chunk_data__SLP875);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.INT875", TCalibratedIRM6Chunk_data__INT875, &b_TCalibratedIRM6Chunk_data__INT875);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBDIFA", TCalibratedIRM6Chunk_data__EBDIFA, &b_TCalibratedIRM6Chunk_data__EBDIFA);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBDIFB", TCalibratedIRM6Chunk_data__EBDIFB, &b_TCalibratedIRM6Chunk_data__EBDIFB);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBSUMA", TCalibratedIRM6Chunk_data__EBSUMA, &b_TCalibratedIRM6Chunk_data__EBSUMA);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.EBSUMB", TCalibratedIRM6Chunk_data__EBSUMB, &b_TCalibratedIRM6Chunk_data__EBSUMB);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.TR860G", TCalibratedIRM6Chunk_data__TR860G, &b_TCalibratedIRM6Chunk_data__TR860G);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.TR875G", TCalibratedIRM6Chunk_data__TR875G, &b_TCalibratedIRM6Chunk_data__TR875G);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.TOR860", TCalibratedIRM6Chunk_data__TOR860, &b_TCalibratedIRM6Chunk_data__TOR860);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.data_.TOR875", TCalibratedIRM6Chunk_data__TOR875, &b_TCalibratedIRM6Chunk_data__TOR875);
   fChain->SetBranchAddress("TCalibratedIRM6Chunk.name_", TCalibratedIRM6Chunk_name_, &b_TCalibratedIRM6Chunk_name_);
   fChain->SetBranchAddress("TCalibratedMWRChunk", &TCalibratedMWRChunk_, &b_TCalibratedMWRChunk_);
   fChain->SetBranchAddress("TCalibratedMWRChunk.chunk_id_", TCalibratedMWRChunk_chunk_id_, &b_TCalibratedMWRChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.fUniqueID", TCalibratedMWRChunk_data__fUniqueID, &b_TCalibratedMWRChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.fBits", TCalibratedMWRChunk_data__fBits, &b_TCalibratedMWRChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.horchannels", TCalibratedMWRChunk_data__horchannels, &b_TCalibratedMWRChunk_data__horchannels);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.horintensity", TCalibratedMWRChunk_data__horintensity, &b_TCalibratedMWRChunk_data__horintensity);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.horMean", TCalibratedMWRChunk_data__horMean, &b_TCalibratedMWRChunk_data__horMean);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.horRMS", TCalibratedMWRChunk_data__horRMS, &b_TCalibratedMWRChunk_data__horRMS);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.verchannels", TCalibratedMWRChunk_data__verchannels, &b_TCalibratedMWRChunk_data__verchannels);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.verintensity", TCalibratedMWRChunk_data__verintensity, &b_TCalibratedMWRChunk_data__verintensity);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.verMean", TCalibratedMWRChunk_data__verMean, &b_TCalibratedMWRChunk_data__verMean);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.verRMS", TCalibratedMWRChunk_data__verRMS, &b_TCalibratedMWRChunk_data__verRMS);
   fChain->SetBranchAddress("TCalibratedMWRChunk.data_.devicetag", TCalibratedMWRChunk_data__devicetag, &b_TCalibratedMWRChunk_data__devicetag);
   fChain->SetBranchAddress("TCalibratedMWRChunk.name_", TCalibratedMWRChunk_name_, &b_TCalibratedMWRChunk_name_);
      fChain->SetBranchAddress("TBPMOnTargetChunk", &TBPMOnTargetChunk_, &b_TBPMOnTargetChunk_);
   fChain->SetBranchAddress("TBPMOnTargetChunk.chunk_id_", TBPMOnTargetChunk_chunk_id_, &b_TBPMOnTargetChunk_chunk_id_);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.fUniqueID", TBPMOnTargetChunk_data__fUniqueID, &b_TBPMOnTargetChunk_data__fUniqueID);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.fBits", TBPMOnTargetChunk_data__fBits, &b_TBPMOnTargetChunk_data__fBits);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.horiz", TBPMOnTargetChunk_data__horiz, &b_TBPMOnTargetChunk_data__horiz);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.vert", TBPMOnTargetChunk_data__vert, &b_TBPMOnTargetChunk_data__vert);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.costheta", TBPMOnTargetChunk_data__costheta, &b_TBPMOnTargetChunk_data__costheta);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.horpos", TBPMOnTargetChunk_data__horpos, &b_TBPMOnTargetChunk_data__horpos);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.verpos", TBPMOnTargetChunk_data__verpos, &b_TBPMOnTargetChunk_data__verpos);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.horang", TBPMOnTargetChunk_data__horang, &b_TBPMOnTargetChunk_data__horang);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.verang", TBPMOnTargetChunk_data__verang, &b_TBPMOnTargetChunk_data__verang);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.ppp", TBPMOnTargetChunk_data__ppp, &b_TBPMOnTargetChunk_data__ppp);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.fom1", TBPMOnTargetChunk_data__fom1, &b_TBPMOnTargetChunk_data__fom1);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.fom2", TBPMOnTargetChunk_data__fom2, &b_TBPMOnTargetChunk_data__fom2);
   fChain->SetBranchAddress("TBPMOnTargetChunk.data_.fom3", TBPMOnTargetChunk_data__fom3, &b_TBPMOnTargetChunk_data__fom3);
   fChain->SetBranchAddress("TBPMOnTargetChunk.name_", TBPMOnTargetChunk_name_, &b_TBPMOnTargetChunk_name_);
   fChain->SetBranchAddress("TMergePerformanceChunk", &TMergePerformanceChunk_, &b_TMergePerformanceChunk_);
   fChain->SetBranchAddress("TMergePerformanceChunk.chunk_id_", TMergePerformanceChunk_chunk_id_, &b_TMergePerformanceChunk_chunk_id_);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.fUniqueID", TMergePerformanceChunk_data__fUniqueID, &b_TMergePerformanceChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.fBits", TMergePerformanceChunk_data__fBits, &b_TMergePerformanceChunk_data__fBits);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.have_TANK", TMergePerformanceChunk_data__have_TANK, &b_TMergePerformanceChunk_data__have_TANK);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.have_RWM", TMergePerformanceChunk_data__have_RWM, &b_TMergePerformanceChunk_data__have_RWM);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.have_ACNET_IRM", TMergePerformanceChunk_data__have_ACNET_IRM, &b_TMergePerformanceChunk_data__have_ACNET_IRM);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.have_ACNET_MWR", TMergePerformanceChunk_data__have_ACNET_MWR, &b_TMergePerformanceChunk_data__have_ACNET_MWR);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.have_LMC", TMergePerformanceChunk_data__have_LMC, &b_TMergePerformanceChunk_data__have_LMC);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.RWM_tdiff", TMergePerformanceChunk_data__RWM_tdiff, &b_TMergePerformanceChunk_data__RWM_tdiff);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.ACNET_IRM_tdiff", TMergePerformanceChunk_data__ACNET_IRM_tdiff, &b_TMergePerformanceChunk_data__ACNET_IRM_tdiff);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.ACNET_MWR_tdiff", TMergePerformanceChunk_data__ACNET_MWR_tdiff, &b_TMergePerformanceChunk_data__ACNET_MWR_tdiff);
   fChain->SetBranchAddress("TMergePerformanceChunk.data_.LMC_tdiff", TMergePerformanceChunk_data__LMC_tdiff, &b_TMergePerformanceChunk_data__LMC_tdiff);
   fChain->SetBranchAddress("TMergePerformanceChunk.name_", TMergePerformanceChunk_name_, &b_TMergePerformanceChunk_name_);
   fChain->SetBranchAddress("TProtonsOnTargetChunk", &TProtonsOnTargetChunk_, &b_TProtonsOnTargetChunk_);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.chunk_id_", TProtonsOnTargetChunk_chunk_id_, &b_TProtonsOnTargetChunk_chunk_id_);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.fUniqueID", TProtonsOnTargetChunk_data__fUniqueID, &b_TProtonsOnTargetChunk_data__fUniqueID);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.fBits", TProtonsOnTargetChunk_data__fBits, &b_TProtonsOnTargetChunk_data__fBits);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.pot860", TProtonsOnTargetChunk_data__pot860, &b_TProtonsOnTargetChunk_data__pot860);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.pot875", TProtonsOnTargetChunk_data__pot875, &b_TProtonsOnTargetChunk_data__pot875);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.cal_pot860", TProtonsOnTargetChunk_data__cal_pot860, &b_TProtonsOnTargetChunk_data__cal_pot860);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.cal_pot875", TProtonsOnTargetChunk_data__cal_pot875, &b_TProtonsOnTargetChunk_data__cal_pot875);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.pot860_err", TProtonsOnTargetChunk_data__pot860_err, &b_TProtonsOnTargetChunk_data__pot860_err);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.pot875_err", TProtonsOnTargetChunk_data__pot875_err, &b_TProtonsOnTargetChunk_data__pot875_err);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.good_for_analysis", TProtonsOnTargetChunk_data__good_for_analysis, &b_TProtonsOnTargetChunk_data__good_for_analysis);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_multiwire_test", TProtonsOnTargetChunk_data__passed_multiwire_test, &b_TProtonsOnTargetChunk_data__passed_multiwire_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_toroid_test", TProtonsOnTargetChunk_data__passed_toroid_test, &b_TProtonsOnTargetChunk_data__passed_toroid_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_horn_current_test", TProtonsOnTargetChunk_data__passed_horn_current_test, &b_TProtonsOnTargetChunk_data__passed_horn_current_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_90degree_test", TProtonsOnTargetChunk_data__passed_90degree_test, &b_TProtonsOnTargetChunk_data__passed_90degree_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_bpm_test", TProtonsOnTargetChunk_data__passed_bpm_test, &b_TProtonsOnTargetChunk_data__passed_bpm_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_bpm_radius_test", TProtonsOnTargetChunk_data__passed_bpm_radius_test, &b_TProtonsOnTargetChunk_data__passed_bpm_radius_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_bpm_angle_test", TProtonsOnTargetChunk_data__passed_bpm_angle_test, &b_TProtonsOnTargetChunk_data__passed_bpm_angle_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_bpm_fom2_test", TProtonsOnTargetChunk_data__passed_bpm_fom2_test, &b_TProtonsOnTargetChunk_data__passed_bpm_fom2_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.data_.passed_latency_test", TProtonsOnTargetChunk_data__passed_latency_test, &b_TProtonsOnTargetChunk_data__passed_latency_test);
   fChain->SetBranchAddress("TProtonsOnTargetChunk.name_", TProtonsOnTargetChunk_name_, &b_TProtonsOnTargetChunk_name_);
   fChain->SetBranchAddress("TDAQbitFieldsChunk", &TDAQbitFieldsChunk_, &b_TDAQbitFieldsChunk_);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.chunk_id_", TDAQbitFieldsChunk_chunk_id_, &b_TDAQbitFieldsChunk_chunk_id_);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.fUniqueID", TDAQbitFieldsChunk_data__fUniqueID, &b_TDAQbitFieldsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.fBits", TDAQbitFieldsChunk_data__fBits, &b_TDAQbitFieldsChunk_data__fBits);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Time_Origin", TDAQbitFieldsChunk_data__Time_Origin, &b_TDAQbitFieldsChunk_data__Time_Origin);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_days_ones", TDAQbitFieldsChunk_data__GPS_days_ones, &b_TDAQbitFieldsChunk_data__GPS_days_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_days_tens", TDAQbitFieldsChunk_data__GPS_days_tens, &b_TDAQbitFieldsChunk_data__GPS_days_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_days_hundreds", TDAQbitFieldsChunk_data__GPS_days_hundreds, &b_TDAQbitFieldsChunk_data__GPS_days_hundreds);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_days", TDAQbitFieldsChunk_data__GPS_days, &b_TDAQbitFieldsChunk_data__GPS_days);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_bclock", TDAQbitFieldsChunk_data__GPS_bclock, &b_TDAQbitFieldsChunk_data__GPS_bclock);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_milli_ones", TDAQbitFieldsChunk_data__GPS_milli_ones, &b_TDAQbitFieldsChunk_data__GPS_milli_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_milli_tens", TDAQbitFieldsChunk_data__GPS_milli_tens, &b_TDAQbitFieldsChunk_data__GPS_milli_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_milli_hundreds", TDAQbitFieldsChunk_data__GPS_milli_hundreds, &b_TDAQbitFieldsChunk_data__GPS_milli_hundreds);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_milli", TDAQbitFieldsChunk_data__GPS_milli, &b_TDAQbitFieldsChunk_data__GPS_milli);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_sec_ones", TDAQbitFieldsChunk_data__GPS_sec_ones, &b_TDAQbitFieldsChunk_data__GPS_sec_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_sec_tens", TDAQbitFieldsChunk_data__GPS_sec_tens, &b_TDAQbitFieldsChunk_data__GPS_sec_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_sec", TDAQbitFieldsChunk_data__GPS_sec, &b_TDAQbitFieldsChunk_data__GPS_sec);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_min_ones", TDAQbitFieldsChunk_data__GPS_min_ones, &b_TDAQbitFieldsChunk_data__GPS_min_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_min_tens", TDAQbitFieldsChunk_data__GPS_min_tens, &b_TDAQbitFieldsChunk_data__GPS_min_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_min", TDAQbitFieldsChunk_data__GPS_min, &b_TDAQbitFieldsChunk_data__GPS_min);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_hour_ones", TDAQbitFieldsChunk_data__GPS_hour_ones, &b_TDAQbitFieldsChunk_data__GPS_hour_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_hour_tens", TDAQbitFieldsChunk_data__GPS_hour_tens, &b_TDAQbitFieldsChunk_data__GPS_hour_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.GPS_hour", TDAQbitFieldsChunk_data__GPS_hour, &b_TDAQbitFieldsChunk_data__GPS_hour);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Bcast_tsa[6]", TDAQbitFieldsChunk_data__Bcast_tsa, &b_TDAQbitFieldsChunk_data__Bcast_tsa);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Bcast_winsize[6]", TDAQbitFieldsChunk_data__Bcast_winsize, &b_TDAQbitFieldsChunk_data__Bcast_winsize);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Bcast_evtype[6]", TDAQbitFieldsChunk_data__Bcast_evtype, &b_TDAQbitFieldsChunk_data__Bcast_evtype);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Bcast_seqid[6]", TDAQbitFieldsChunk_data__Bcast_seqid, &b_TDAQbitFieldsChunk_data__Bcast_seqid);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.BcastDiag_bclock[6]", TDAQbitFieldsChunk_data__BcastDiag_bclock, &b_TDAQbitFieldsChunk_data__BcastDiag_bclock);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.BcastDiag_GPS_milli_ones[6]", TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_ones, &b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_ones);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.BcastDiag_GPS_milli_tens[6]", TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_tens, &b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli_tens);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.BcastDiag_GPS_milli[6]", TDAQbitFieldsChunk_data__BcastDiag_GPS_milli, &b_TDAQbitFieldsChunk_data__BcastDiag_GPS_milli);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.BcastDiag_seqid[6]", TDAQbitFieldsChunk_data__BcastDiag_seqid, &b_TDAQbitFieldsChunk_data__BcastDiag_seqid);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_bclock", TDAQbitFieldsChunk_data__FIFO_bclock, &b_TDAQbitFieldsChunk_data__FIFO_bclock);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_calib", TDAQbitFieldsChunk_data__FIFO_calib, &b_TDAQbitFieldsChunk_data__FIFO_calib);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_strobe", TDAQbitFieldsChunk_data__FIFO_strobe, &b_TDAQbitFieldsChunk_data__FIFO_strobe);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_beam", TDAQbitFieldsChunk_data__FIFO_beam, &b_TDAQbitFieldsChunk_data__FIFO_beam);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_det5", TDAQbitFieldsChunk_data__FIFO_det5, &b_TDAQbitFieldsChunk_data__FIFO_det5);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_det4", TDAQbitFieldsChunk_data__FIFO_det4, &b_TDAQbitFieldsChunk_data__FIFO_det4);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_det3", TDAQbitFieldsChunk_data__FIFO_det3, &b_TDAQbitFieldsChunk_data__FIFO_det3);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_det2", TDAQbitFieldsChunk_data__FIFO_det2, &b_TDAQbitFieldsChunk_data__FIFO_det2);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_veto2", TDAQbitFieldsChunk_data__FIFO_veto2, &b_TDAQbitFieldsChunk_data__FIFO_veto2);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_Eor", TDAQbitFieldsChunk_data__FIFO_Eor, &b_TDAQbitFieldsChunk_data__FIFO_Eor);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_det1", TDAQbitFieldsChunk_data__FIFO_det1, &b_TDAQbitFieldsChunk_data__FIFO_det1);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.FIFO_veto1", TDAQbitFieldsChunk_data__FIFO_veto1, &b_TDAQbitFieldsChunk_data__FIFO_veto1);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_tsa", TDAQbitFieldsChunk_data__Rcvr_tsa, &b_TDAQbitFieldsChunk_data__Rcvr_tsa);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_seqid", TDAQbitFieldsChunk_data__Rcvr_seqid, &b_TDAQbitFieldsChunk_data__Rcvr_seqid);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_evtype", TDAQbitFieldsChunk_data__Rcvr_evtype, &b_TDAQbitFieldsChunk_data__Rcvr_evtype);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_qt_ff", TDAQbitFieldsChunk_data__Rcvr_qt_ff, &b_TDAQbitFieldsChunk_data__Rcvr_qt_ff);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_qt_hf", TDAQbitFieldsChunk_data__Rcvr_qt_hf, &b_TDAQbitFieldsChunk_data__Rcvr_qt_hf);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_qt_ef", TDAQbitFieldsChunk_data__Rcvr_qt_ef, &b_TDAQbitFieldsChunk_data__Rcvr_qt_ef);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_rcvr_ff", TDAQbitFieldsChunk_data__Rcvr_rcvr_ff, &b_TDAQbitFieldsChunk_data__Rcvr_rcvr_ff);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_rcvr_hf", TDAQbitFieldsChunk_data__Rcvr_rcvr_hf, &b_TDAQbitFieldsChunk_data__Rcvr_rcvr_hf);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_rcvr_ef", TDAQbitFieldsChunk_data__Rcvr_rcvr_ef, &b_TDAQbitFieldsChunk_data__Rcvr_rcvr_ef);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.data_.Rcvr_eof", TDAQbitFieldsChunk_data__Rcvr_eof, &b_TDAQbitFieldsChunk_data__Rcvr_eof);
   fChain->SetBranchAddress("TDAQbitFieldsChunk.name_", TDAQbitFieldsChunk_name_, &b_TDAQbitFieldsChunk_name_);
   fChain->SetBranchAddress("TTriggerActivityChunk", &TTriggerActivityChunk_, &b_TTriggerActivityChunk_);
   fChain->SetBranchAddress("TTriggerActivityChunk.chunk_id_", TTriggerActivityChunk_chunk_id_, &b_TTriggerActivityChunk_chunk_id_);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.fUniqueID", TTriggerActivityChunk_data__fUniqueID, &b_TTriggerActivityChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.fBits", TTriggerActivityChunk_data__fBits, &b_TTriggerActivityChunk_data__fBits);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.ntsas[4]", TTriggerActivityChunk_data__ntsas, &b_TTriggerActivityChunk_data__ntsas);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.bclock[4]", TTriggerActivityChunk_data__bclock, &b_TTriggerActivityChunk_data__bclock);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.calib[4]", TTriggerActivityChunk_data__calib, &b_TTriggerActivityChunk_data__calib);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.strobe[4]", TTriggerActivityChunk_data__strobe, &b_TTriggerActivityChunk_data__strobe);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.beam[4]", TTriggerActivityChunk_data__beam, &b_TTriggerActivityChunk_data__beam);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.det5[4]", TTriggerActivityChunk_data__det5, &b_TTriggerActivityChunk_data__det5);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.det4[4]", TTriggerActivityChunk_data__det4, &b_TTriggerActivityChunk_data__det4);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.det3[4]", TTriggerActivityChunk_data__det3, &b_TTriggerActivityChunk_data__det3);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.det2[4]", TTriggerActivityChunk_data__det2, &b_TTriggerActivityChunk_data__det2);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.veto2[4]", TTriggerActivityChunk_data__veto2, &b_TTriggerActivityChunk_data__veto2);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.Eor[4]", TTriggerActivityChunk_data__Eor, &b_TTriggerActivityChunk_data__Eor);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.det1[4]", TTriggerActivityChunk_data__det1, &b_TTriggerActivityChunk_data__det1);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.veto1[4]", TTriggerActivityChunk_data__veto1, &b_TTriggerActivityChunk_data__veto1);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_bclock[90]", TTriggerActivityChunk_data__FIFO_bclock, &b_TTriggerActivityChunk_data__FIFO_bclock);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_calib[90]", TTriggerActivityChunk_data__FIFO_calib, &b_TTriggerActivityChunk_data__FIFO_calib);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_strobe[90]", TTriggerActivityChunk_data__FIFO_strobe, &b_TTriggerActivityChunk_data__FIFO_strobe);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_beam[90]", TTriggerActivityChunk_data__FIFO_beam, &b_TTriggerActivityChunk_data__FIFO_beam);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_det5[90]", TTriggerActivityChunk_data__FIFO_det5, &b_TTriggerActivityChunk_data__FIFO_det5);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_det4[90]", TTriggerActivityChunk_data__FIFO_det4, &b_TTriggerActivityChunk_data__FIFO_det4);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_det3[90]", TTriggerActivityChunk_data__FIFO_det3, &b_TTriggerActivityChunk_data__FIFO_det3);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_det2[90]", TTriggerActivityChunk_data__FIFO_det2, &b_TTriggerActivityChunk_data__FIFO_det2);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_veto2[90]", TTriggerActivityChunk_data__FIFO_veto2, &b_TTriggerActivityChunk_data__FIFO_veto2);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_Eor[90]", TTriggerActivityChunk_data__FIFO_Eor, &b_TTriggerActivityChunk_data__FIFO_Eor);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_det1[90]", TTriggerActivityChunk_data__FIFO_det1, &b_TTriggerActivityChunk_data__FIFO_det1);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.FIFO_veto1[90]", TTriggerActivityChunk_data__FIFO_veto1, &b_TTriggerActivityChunk_data__FIFO_veto1);
   fChain->SetBranchAddress("TTriggerActivityChunk.data_.timer[23]", TTriggerActivityChunk_data__timer, &b_TTriggerActivityChunk_data__timer);
   fChain->SetBranchAddress("TTriggerActivityChunk.name_", TTriggerActivityChunk_name_, &b_TTriggerActivityChunk_name_);
   fChain->SetBranchAddress("TCalibratedDataChunk", &TCalibratedDataChunk_, &b_TCalibratedDataChunk_);
   fChain->SetBranchAddress("TCalibratedDataChunk.chunk_id_", TCalibratedDataChunk_chunk_id_, &b_TCalibratedDataChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.fUniqueID", TCalibratedDataChunk_data__fUniqueID, &b_TCalibratedDataChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.fBits", TCalibratedDataChunk_data__fBits, &b_TCalibratedDataChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Hits", TCalibratedDataChunk_data__Hits, &b_TCalibratedDataChunk_data__Hits);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.PMT", TCalibratedDataChunk_data__PMT, &b_TCalibratedDataChunk_data__PMT);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Q", TCalibratedDataChunk_data__Q, &b_TCalibratedDataChunk_data__Q);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.notruncQ", TCalibratedDataChunk_data__notruncQ, &b_TCalibratedDataChunk_data__notruncQ);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.T", TCalibratedDataChunk_data__T, &b_TCalibratedDataChunk_data__T);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Tmin", TCalibratedDataChunk_data__Tmin, &b_TCalibratedDataChunk_data__Tmin);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Tmax", TCalibratedDataChunk_data__Tmax, &b_TCalibratedDataChunk_data__Tmax);
   fChain->SetBranchAddress("TCalibratedDataChunk.name_", TCalibratedDataChunk_name_, &b_TCalibratedDataChunk_name_);
     fChain->SetBranchAddress("TTwoTrackPredictionsChunk", &TTwoTrackPredictionsChunk_, &b_TTwoTrackPredictionsChunk_);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.chunk_id_", TTwoTrackPredictionsChunk_chunk_id_, &b_TTwoTrackPredictionsChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.fUniqueID", TTwoTrackPredictionsChunk_data__fUniqueID, &b_TTwoTrackPredictionsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.fBits", TTwoTrackPredictionsChunk_data__fBits, &b_TTwoTrackPredictionsChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.pmt[1280]", TTwoTrackPredictionsChunk_data__pmt, &b_TTwoTrackPredictionsChunk_data__pmt);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.goodTube[1280]", TTwoTrackPredictionsChunk_data__goodTube, &b_TTwoTrackPredictionsChunk_data__goodTube);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.mu_cer[2][1280]", TTwoTrackPredictionsChunk_data__mu_cer, &b_TTwoTrackPredictionsChunk_data__mu_cer);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.mu_sci[2][1280]", TTwoTrackPredictionsChunk_data__mu_sci, &b_TTwoTrackPredictionsChunk_data__mu_sci);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.mu_cerEx[2][1280]", TTwoTrackPredictionsChunk_data__mu_cerEx, &b_TTwoTrackPredictionsChunk_data__mu_cerEx);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.mu_sciEx[2][1280]", TTwoTrackPredictionsChunk_data__mu_sciEx, &b_TTwoTrackPredictionsChunk_data__mu_sciEx);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.q[1280]", TTwoTrackPredictionsChunk_data__q, &b_TTwoTrackPredictionsChunk_data__q);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.tcor[2][1280]", TTwoTrackPredictionsChunk_data__tcor, &b_TTwoTrackPredictionsChunk_data__tcor);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.cos_pmt[2][1280]", TTwoTrackPredictionsChunk_data__cos_pmt, &b_TTwoTrackPredictionsChunk_data__cos_pmt);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.nll_q[1280]", TTwoTrackPredictionsChunk_data__nll_q, &b_TTwoTrackPredictionsChunk_data__nll_q);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.nll_t[1280]", TTwoTrackPredictionsChunk_data__nll_t, &b_TTwoTrackPredictionsChunk_data__nll_t);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.dr[2][1280]", TTwoTrackPredictionsChunk_data__dr, &b_TTwoTrackPredictionsChunk_data__dr);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.data_.cos_dir[2][1280]", TTwoTrackPredictionsChunk_data__cos_dir, &b_TTwoTrackPredictionsChunk_data__cos_dir);
   fChain->SetBranchAddress("TTwoTrackPredictionsChunk.name_", TTwoTrackPredictionsChunk_name_, &b_TTwoTrackPredictionsChunk_name_);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk", &TCalibratedIRM7Chunk_, &b_TCalibratedIRM7Chunk_);
   fChain->SetBranchAddress("TCalibratedIRMAChunk", &TCalibratedIRMAChunk_, &b_TCalibratedIRMAChunk_);
   fChain->SetBranchAddress("TCalibratedMuMonChunk", &TCalibratedMuMonChunk_, &b_TCalibratedMuMonChunk_);
   fChain->SetBranchAddress("TCalibratedToroidsChunk", &TCalibratedToroidsChunk_, &b_TCalibratedToroidsChunk_);
   fChain->SetBranchAddress("TRWMAnalysisChunk", &TRWMAnalysisChunk_, &b_TRWMAnalysisChunk_);
   fChain->SetBranchAddress("TUncalibratedIRMChunk", &TUncalibratedIRMChunk_, &b_TUncalibratedIRMChunk_);
   fChain->SetBranchAddress("TUncalibratedMWRChunk", &TUncalibratedMWRChunk_, &b_TUncalibratedMWRChunk_);
   fChain->SetBranchAddress("TUncalibratedRWMChunk", &TUncalibratedRWMChunk_, &b_TUncalibratedRWMChunk_);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.chunk_id_", TCalibratedIRM7Chunk_chunk_id_, &b_TCalibratedIRM7Chunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT860X", TCalibratedIRM7Chunk_data__HT860X, &b_TCalibratedIRM7Chunk_data__HT860X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT862X", TCalibratedIRM7Chunk_data__HT862X, &b_TCalibratedIRM7Chunk_data__HT862X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT865X", TCalibratedIRM7Chunk_data__HT865X, &b_TCalibratedIRM7Chunk_data__HT865X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT866X", TCalibratedIRM7Chunk_data__HT866X, &b_TCalibratedIRM7Chunk_data__HT866X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT868X", TCalibratedIRM7Chunk_data__HT868X, &b_TCalibratedIRM7Chunk_data__HT868X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT870X", TCalibratedIRM7Chunk_data__HT870X, &b_TCalibratedIRM7Chunk_data__HT870X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT872X", TCalibratedIRM7Chunk_data__HT872X, &b_TCalibratedIRM7Chunk_data__HT872X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HT873X", TCalibratedIRM7Chunk_data__HT873X, &b_TCalibratedIRM7Chunk_data__HT873X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.HV860X", TCalibratedIRM7Chunk_data__HV860X, &b_TCalibratedIRM7Chunk_data__HV860X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q860X", TCalibratedIRM7Chunk_data__Q860X, &b_TCalibratedIRM7Chunk_data__Q860X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q861X", TCalibratedIRM7Chunk_data__Q861X, &b_TCalibratedIRM7Chunk_data__Q861X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q862X", TCalibratedIRM7Chunk_data__Q862X, &b_TCalibratedIRM7Chunk_data__Q862X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q864X", TCalibratedIRM7Chunk_data__Q864X, &b_TCalibratedIRM7Chunk_data__Q864X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q865X", TCalibratedIRM7Chunk_data__Q865X, &b_TCalibratedIRM7Chunk_data__Q865X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.Q866X", TCalibratedIRM7Chunk_data__Q866X, &b_TCalibratedIRM7Chunk_data__Q866X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT860X", TCalibratedIRM7Chunk_data__VT860X, &b_TCalibratedIRM7Chunk_data__VT860X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT862X", TCalibratedIRM7Chunk_data__VT862X, &b_TCalibratedIRM7Chunk_data__VT862X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT865X", TCalibratedIRM7Chunk_data__VT865X, &b_TCalibratedIRM7Chunk_data__VT865X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT867X", TCalibratedIRM7Chunk_data__VT867X, &b_TCalibratedIRM7Chunk_data__VT867X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT869X", TCalibratedIRM7Chunk_data__VT869X, &b_TCalibratedIRM7Chunk_data__VT869X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT871X", TCalibratedIRM7Chunk_data__VT871X, &b_TCalibratedIRM7Chunk_data__VT871X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.VT873X", TCalibratedIRM7Chunk_data__VT873X, &b_TCalibratedIRM7Chunk_data__VT873X);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.fBits", TCalibratedIRM7Chunk_data__fBits, &b_TCalibratedIRM7Chunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.data_.fUniqueID", TCalibratedIRM7Chunk_data__fUniqueID, &b_TCalibratedIRM7Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRM7Chunk.name_", TCalibratedIRM7Chunk_name_, &b_TCalibratedIRM7Chunk_name_);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.chunk_id_", TCalibratedIRMAChunk_chunk_id_, &b_TCalibratedIRMAChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM1P", TCalibratedIRMAChunk_data__BPM1P, &b_TCalibratedIRMAChunk_data__BPM1P);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM1SA", TCalibratedIRMAChunk_data__BPM1SA, &b_TCalibratedIRMAChunk_data__BPM1SA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM1SB", TCalibratedIRMAChunk_data__BPM1SB, &b_TCalibratedIRMAChunk_data__BPM1SB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM2P", TCalibratedIRMAChunk_data__BPM2P, &b_TCalibratedIRMAChunk_data__BPM2P);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM2SA", TCalibratedIRMAChunk_data__BPM2SA, &b_TCalibratedIRMAChunk_data__BPM2SA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM2SB", TCalibratedIRMAChunk_data__BPM2SB, &b_TCalibratedIRMAChunk_data__BPM2SB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM3P", TCalibratedIRMAChunk_data__BPM3P, &b_TCalibratedIRMAChunk_data__BPM3P);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM3SA", TCalibratedIRMAChunk_data__BPM3SA, &b_TCalibratedIRMAChunk_data__BPM3SA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM3SB", TCalibratedIRMAChunk_data__BPM3SB, &b_TCalibratedIRMAChunk_data__BPM3SB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM4P", TCalibratedIRMAChunk_data__BPM4P, &b_TCalibratedIRMAChunk_data__BPM4P);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM4SA", TCalibratedIRMAChunk_data__BPM4SA, &b_TCalibratedIRMAChunk_data__BPM4SA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BPM4SB", TCalibratedIRMAChunk_data__BPM4SB, &b_TCalibratedIRMAChunk_data__BPM4SB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTBLAP", TCalibratedIRMAChunk_data__BTBLAP, &b_TCalibratedIRMAChunk_data__BTBLAP);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTBT1", TCalibratedIRMAChunk_data__BTBT1, &b_TCalibratedIRMAChunk_data__BTBT1);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTBT2", TCalibratedIRMAChunk_data__BTBT2, &b_TCalibratedIRMAChunk_data__BTBT2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH1AP", TCalibratedIRMAChunk_data__BTH1AP, &b_TCalibratedIRMAChunk_data__BTH1AP);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH1AV", TCalibratedIRMAChunk_data__BTH1AV, &b_TCalibratedIRMAChunk_data__BTH1AV);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH1T1", TCalibratedIRMAChunk_data__BTH1T1, &b_TCalibratedIRMAChunk_data__BTH1T1);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH1T2", TCalibratedIRMAChunk_data__BTH1T2, &b_TCalibratedIRMAChunk_data__BTH1T2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH2AV", TCalibratedIRMAChunk_data__BTH2AV, &b_TCalibratedIRMAChunk_data__BTH2AV);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH2T1", TCalibratedIRMAChunk_data__BTH2T1, &b_TCalibratedIRMAChunk_data__BTH2T1);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTH2T2", TCalibratedIRMAChunk_data__BTH2T2, &b_TCalibratedIRMAChunk_data__BTH2T2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTJT1", TCalibratedIRMAChunk_data__BTJT1, &b_TCalibratedIRMAChunk_data__BTJT1);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.BTJT2", TCalibratedIRMAChunk_data__BTJT2, &b_TCalibratedIRMAChunk_data__BTJT2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBDIFA", TCalibratedIRMAChunk_data__EBDIFA, &b_TCalibratedIRMAChunk_data__EBDIFA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBDIFB", TCalibratedIRMAChunk_data__EBDIFB, &b_TCalibratedIRMAChunk_data__EBDIFB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBINTA", TCalibratedIRMAChunk_data__EBINTA, &b_TCalibratedIRMAChunk_data__EBINTA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBINTB", TCalibratedIRMAChunk_data__EBINTB, &b_TCalibratedIRMAChunk_data__EBINTB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBSUMA", TCalibratedIRMAChunk_data__EBSUMA, &b_TCalibratedIRMAChunk_data__EBSUMA);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.EBSUMB", TCalibratedIRMAChunk_data__EBSUMB, &b_TCalibratedIRMAChunk_data__EBSUMB);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.H866", TCalibratedIRMAChunk_data__H866, &b_TCalibratedIRMAChunk_data__H866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI860", TCalibratedIRMAChunk_data__HI860, &b_TCalibratedIRMAChunk_data__HI860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI861", TCalibratedIRMAChunk_data__HI861, &b_TCalibratedIRMAChunk_data__HI861);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI864", TCalibratedIRMAChunk_data__HI864, &b_TCalibratedIRMAChunk_data__HI864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI866", TCalibratedIRMAChunk_data__HI866, &b_TCalibratedIRMAChunk_data__HI866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI868", TCalibratedIRMAChunk_data__HI868, &b_TCalibratedIRMAChunk_data__HI868);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI870", TCalibratedIRMAChunk_data__HI870, &b_TCalibratedIRMAChunk_data__HI870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI872", TCalibratedIRMAChunk_data__HI872, &b_TCalibratedIRMAChunk_data__HI872);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI873", TCalibratedIRMAChunk_data__HI873, &b_TCalibratedIRMAChunk_data__HI873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HI875", TCalibratedIRMAChunk_data__HI875, &b_TCalibratedIRMAChunk_data__HI875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HITGTL", TCalibratedIRMAChunk_data__HITGTL, &b_TCalibratedIRMAChunk_data__HITGTL);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP860", TCalibratedIRMAChunk_data__HP860, &b_TCalibratedIRMAChunk_data__HP860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP861", TCalibratedIRMAChunk_data__HP861, &b_TCalibratedIRMAChunk_data__HP861);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP864", TCalibratedIRMAChunk_data__HP864, &b_TCalibratedIRMAChunk_data__HP864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP866", TCalibratedIRMAChunk_data__HP866, &b_TCalibratedIRMAChunk_data__HP866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP868", TCalibratedIRMAChunk_data__HP868, &b_TCalibratedIRMAChunk_data__HP868);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP870", TCalibratedIRMAChunk_data__HP870, &b_TCalibratedIRMAChunk_data__HP870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP872", TCalibratedIRMAChunk_data__HP872, &b_TCalibratedIRMAChunk_data__HP872);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP873", TCalibratedIRMAChunk_data__HP873, &b_TCalibratedIRMAChunk_data__HP873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HP875", TCalibratedIRMAChunk_data__HP875, &b_TCalibratedIRMAChunk_data__HP875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HPTGTL", TCalibratedIRMAChunk_data__HPTGTL, &b_TCalibratedIRMAChunk_data__HPTGTL);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT860", TCalibratedIRMAChunk_data__HT860, &b_TCalibratedIRMAChunk_data__HT860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT862", TCalibratedIRMAChunk_data__HT862, &b_TCalibratedIRMAChunk_data__HT862);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT865", TCalibratedIRMAChunk_data__HT865, &b_TCalibratedIRMAChunk_data__HT865);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT866", TCalibratedIRMAChunk_data__HT866, &b_TCalibratedIRMAChunk_data__HT866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT868", TCalibratedIRMAChunk_data__HT868, &b_TCalibratedIRMAChunk_data__HT868);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT870", TCalibratedIRMAChunk_data__HT870, &b_TCalibratedIRMAChunk_data__HT870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT872", TCalibratedIRMAChunk_data__HT872, &b_TCalibratedIRMAChunk_data__HT872);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HT873", TCalibratedIRMAChunk_data__HT873, &b_TCalibratedIRMAChunk_data__HT873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HV860", TCalibratedIRMAChunk_data__HV860, &b_TCalibratedIRMAChunk_data__HV860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HV865", TCalibratedIRMAChunk_data__HV865, &b_TCalibratedIRMAChunk_data__HV865);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HWFLOW", TCalibratedIRMAChunk_data__HWFLOW, &b_TCalibratedIRMAChunk_data__HWFLOW);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HWTIN", TCalibratedIRMAChunk_data__HWTIN, &b_TCalibratedIRMAChunk_data__HWTIN);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.HWTOUT", TCalibratedIRMAChunk_data__HWTOUT, &b_TCalibratedIRMAChunk_data__HWTOUT);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.INT860", TCalibratedIRMAChunk_data__INT860, &b_TCalibratedIRMAChunk_data__INT860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.INT875", TCalibratedIRMAChunk_data__INT875, &b_TCalibratedIRMAChunk_data__INT875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM851A", TCalibratedIRMAChunk_data__LM851A, &b_TCalibratedIRMAChunk_data__LM851A);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM860", TCalibratedIRMAChunk_data__LM860, &b_TCalibratedIRMAChunk_data__LM860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM862", TCalibratedIRMAChunk_data__LM862, &b_TCalibratedIRMAChunk_data__LM862);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM864", TCalibratedIRMAChunk_data__LM864, &b_TCalibratedIRMAChunk_data__LM864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM865A", TCalibratedIRMAChunk_data__LM865A, &b_TCalibratedIRMAChunk_data__LM865A);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM865B", TCalibratedIRMAChunk_data__LM865B, &b_TCalibratedIRMAChunk_data__LM865B);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM866", TCalibratedIRMAChunk_data__LM866, &b_TCalibratedIRMAChunk_data__LM866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM867", TCalibratedIRMAChunk_data__LM867, &b_TCalibratedIRMAChunk_data__LM867);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM868", TCalibratedIRMAChunk_data__LM868, &b_TCalibratedIRMAChunk_data__LM868);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM869", TCalibratedIRMAChunk_data__LM869, &b_TCalibratedIRMAChunk_data__LM869);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM870", TCalibratedIRMAChunk_data__LM870, &b_TCalibratedIRMAChunk_data__LM870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM871", TCalibratedIRMAChunk_data__LM871, &b_TCalibratedIRMAChunk_data__LM871);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM872", TCalibratedIRMAChunk_data__LM872, &b_TCalibratedIRMAChunk_data__LM872);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM873", TCalibratedIRMAChunk_data__LM873, &b_TCalibratedIRMAChunk_data__LM873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM874", TCalibratedIRMAChunk_data__LM874, &b_TCalibratedIRMAChunk_data__LM874);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM875A", TCalibratedIRMAChunk_data__LM875A, &b_TCalibratedIRMAChunk_data__LM875A);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM875B", TCalibratedIRMAChunk_data__LM875B, &b_TCalibratedIRMAChunk_data__LM875B);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LM875C", TCalibratedIRMAChunk_data__LM875C, &b_TCalibratedIRMAChunk_data__LM875C);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.LMBPST", TCalibratedIRMAChunk_data__LMBPST, &b_TCalibratedIRMAChunk_data__LMBPST);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.MBT90D", TCalibratedIRMAChunk_data__MBT90D, &b_TCalibratedIRMAChunk_data__MBT90D);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q860", TCalibratedIRMAChunk_data__Q860, &b_TCalibratedIRMAChunk_data__Q860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q861", TCalibratedIRMAChunk_data__Q861, &b_TCalibratedIRMAChunk_data__Q861);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q862", TCalibratedIRMAChunk_data__Q862, &b_TCalibratedIRMAChunk_data__Q862);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q864", TCalibratedIRMAChunk_data__Q864, &b_TCalibratedIRMAChunk_data__Q864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q865", TCalibratedIRMAChunk_data__Q865, &b_TCalibratedIRMAChunk_data__Q865);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q866", TCalibratedIRMAChunk_data__Q866, &b_TCalibratedIRMAChunk_data__Q866);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q872", TCalibratedIRMAChunk_data__Q872, &b_TCalibratedIRMAChunk_data__Q872);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q873", TCalibratedIRMAChunk_data__Q873, &b_TCalibratedIRMAChunk_data__Q873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q874", TCalibratedIRMAChunk_data__Q874, &b_TCalibratedIRMAChunk_data__Q874);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.Q875", TCalibratedIRMAChunk_data__Q875, &b_TCalibratedIRMAChunk_data__Q875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLINE1", TCalibratedIRMAChunk_data__SLINE1, &b_TCalibratedIRMAChunk_data__SLINE1);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLINE2", TCalibratedIRMAChunk_data__SLINE2, &b_TCalibratedIRMAChunk_data__SLINE2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLINE3", TCalibratedIRMAChunk_data__SLINE3, &b_TCalibratedIRMAChunk_data__SLINE3);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLINE4", TCalibratedIRMAChunk_data__SLINE4, &b_TCalibratedIRMAChunk_data__SLINE4);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLP860", TCalibratedIRMAChunk_data__SLP860, &b_TCalibratedIRMAChunk_data__SLP860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.SLP875", TCalibratedIRMAChunk_data__SLP875, &b_TCalibratedIRMAChunk_data__SLP875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.THCURR", TCalibratedIRMAChunk_data__THCURR, &b_TCalibratedIRMAChunk_data__THCURR);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TLI860", TCalibratedIRMAChunk_data__TLI860, &b_TCalibratedIRMAChunk_data__TLI860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TLI862", TCalibratedIRMAChunk_data__TLI862, &b_TCalibratedIRMAChunk_data__TLI862);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TLI864", TCalibratedIRMAChunk_data__TLI864, &b_TCalibratedIRMAChunk_data__TLI864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TLI870", TCalibratedIRMAChunk_data__TLI870, &b_TCalibratedIRMAChunk_data__TLI870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TLI873", TCalibratedIRMAChunk_data__TLI873, &b_TCalibratedIRMAChunk_data__TLI873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR860", TCalibratedIRMAChunk_data__TOR860, &b_TCalibratedIRMAChunk_data__TOR860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR8602", TCalibratedIRMAChunk_data__TOR8602, &b_TCalibratedIRMAChunk_data__TOR8602);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR8603", TCalibratedIRMAChunk_data__TOR8603, &b_TCalibratedIRMAChunk_data__TOR8603);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR875", TCalibratedIRMAChunk_data__TOR875, &b_TCalibratedIRMAChunk_data__TOR875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR8752", TCalibratedIRMAChunk_data__TOR8752, &b_TCalibratedIRMAChunk_data__TOR8752);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TOR8753", TCalibratedIRMAChunk_data__TOR8753, &b_TCalibratedIRMAChunk_data__TOR8753);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR860G", TCalibratedIRMAChunk_data__TR860G, &b_TCalibratedIRMAChunk_data__TR860G);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR860G2", TCalibratedIRMAChunk_data__TR860G2, &b_TCalibratedIRMAChunk_data__TR860G2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR860Z", TCalibratedIRMAChunk_data__TR860Z, &b_TCalibratedIRMAChunk_data__TR860Z);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR875G", TCalibratedIRMAChunk_data__TR875G, &b_TCalibratedIRMAChunk_data__TR875G);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR875G2", TCalibratedIRMAChunk_data__TR875G2, &b_TCalibratedIRMAChunk_data__TR875G2);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.TR875Z", TCalibratedIRMAChunk_data__TR875Z, &b_TCalibratedIRMAChunk_data__TR875Z);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI860", TCalibratedIRMAChunk_data__VI860, &b_TCalibratedIRMAChunk_data__VI860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI861", TCalibratedIRMAChunk_data__VI861, &b_TCalibratedIRMAChunk_data__VI861);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI864", TCalibratedIRMAChunk_data__VI864, &b_TCalibratedIRMAChunk_data__VI864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI867", TCalibratedIRMAChunk_data__VI867, &b_TCalibratedIRMAChunk_data__VI867);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI869", TCalibratedIRMAChunk_data__VI869, &b_TCalibratedIRMAChunk_data__VI869);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI870", TCalibratedIRMAChunk_data__VI870, &b_TCalibratedIRMAChunk_data__VI870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI871", TCalibratedIRMAChunk_data__VI871, &b_TCalibratedIRMAChunk_data__VI871);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI873", TCalibratedIRMAChunk_data__VI873, &b_TCalibratedIRMAChunk_data__VI873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VI875", TCalibratedIRMAChunk_data__VI875, &b_TCalibratedIRMAChunk_data__VI875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VITGTL", TCalibratedIRMAChunk_data__VITGTL, &b_TCalibratedIRMAChunk_data__VITGTL);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP860", TCalibratedIRMAChunk_data__VP860, &b_TCalibratedIRMAChunk_data__VP860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP861", TCalibratedIRMAChunk_data__VP861, &b_TCalibratedIRMAChunk_data__VP861);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP864", TCalibratedIRMAChunk_data__VP864, &b_TCalibratedIRMAChunk_data__VP864);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP867", TCalibratedIRMAChunk_data__VP867, &b_TCalibratedIRMAChunk_data__VP867);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP869", TCalibratedIRMAChunk_data__VP869, &b_TCalibratedIRMAChunk_data__VP869);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP870", TCalibratedIRMAChunk_data__VP870, &b_TCalibratedIRMAChunk_data__VP870);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP871", TCalibratedIRMAChunk_data__VP871, &b_TCalibratedIRMAChunk_data__VP871);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP873", TCalibratedIRMAChunk_data__VP873, &b_TCalibratedIRMAChunk_data__VP873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VP875", TCalibratedIRMAChunk_data__VP875, &b_TCalibratedIRMAChunk_data__VP875);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VPTGTL", TCalibratedIRMAChunk_data__VPTGTL, &b_TCalibratedIRMAChunk_data__VPTGTL);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT860", TCalibratedIRMAChunk_data__VT860, &b_TCalibratedIRMAChunk_data__VT860);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT862", TCalibratedIRMAChunk_data__VT862, &b_TCalibratedIRMAChunk_data__VT862);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT865", TCalibratedIRMAChunk_data__VT865, &b_TCalibratedIRMAChunk_data__VT865);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT867", TCalibratedIRMAChunk_data__VT867, &b_TCalibratedIRMAChunk_data__VT867);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT869", TCalibratedIRMAChunk_data__VT869, &b_TCalibratedIRMAChunk_data__VT869);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT871", TCalibratedIRMAChunk_data__VT871, &b_TCalibratedIRMAChunk_data__VT871);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.VT873", TCalibratedIRMAChunk_data__VT873, &b_TCalibratedIRMAChunk_data__VT873);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.fBits", TCalibratedIRMAChunk_data__fBits, &b_TCalibratedIRMAChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.data_.fUniqueID", TCalibratedIRMAChunk_data__fUniqueID, &b_TCalibratedIRMAChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedIRMAChunk.name_", TCalibratedIRMAChunk_name_, &b_TCalibratedIRMAChunk_name_);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.chunk_id_", TCalibratedMuMonChunk_chunk_id_, &b_TCalibratedMuMonChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.fBits", TCalibratedMuMonChunk_data__fBits, &b_TCalibratedMuMonChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.fUniqueID", TCalibratedMuMonChunk_data__fUniqueID, &b_TCalibratedMuMonChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.horMean", TCalibratedMuMonChunk_data__horMean, &b_TCalibratedMuMonChunk_data__horMean);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.horchannels", TCalibratedMuMonChunk_data__horchannels, &b_TCalibratedMuMonChunk_data__horchannels);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.horintensity", TCalibratedMuMonChunk_data__horintensity, &b_TCalibratedMuMonChunk_data__horintensity);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.verMean", TCalibratedMuMonChunk_data__verMean, &b_TCalibratedMuMonChunk_data__verMean);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.verchannels", TCalibratedMuMonChunk_data__verchannels, &b_TCalibratedMuMonChunk_data__verchannels);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.data_.verintensity", TCalibratedMuMonChunk_data__verintensity, &b_TCalibratedMuMonChunk_data__verintensity);
   fChain->SetBranchAddress("TCalibratedMuMonChunk.name_", TCalibratedMuMonChunk_name_, &b_TCalibratedMuMonChunk_name_);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.chunk_id_", TCalibratedToroidsChunk_chunk_id_, &b_TCalibratedToroidsChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.AcnetCalAvg860", TCalibratedToroidsChunk_data__AcnetCalAvg860, &b_TCalibratedToroidsChunk_data__AcnetCalAvg860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.AcnetCalAvg875", TCalibratedToroidsChunk_data__AcnetCalAvg875, &b_TCalibratedToroidsChunk_data__AcnetCalAvg875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.AcnetCalAvgPed860", TCalibratedToroidsChunk_data__AcnetCalAvgPed860, &b_TCalibratedToroidsChunk_data__AcnetCalAvgPed860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.AcnetCalAvgPed875", TCalibratedToroidsChunk_data__AcnetCalAvgPed875, &b_TCalibratedToroidsChunk_data__AcnetCalAvgPed875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.DelayEBermCalAvg860", TCalibratedToroidsChunk_data__DelayEBermCalAvg860, &b_TCalibratedToroidsChunk_data__DelayEBermCalAvg860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.DelayEBermCalAvg875", TCalibratedToroidsChunk_data__DelayEBermCalAvg875, &b_TCalibratedToroidsChunk_data__DelayEBermCalAvg875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermCalAvg860", TCalibratedToroidsChunk_data__EBermCalAvg860, &b_TCalibratedToroidsChunk_data__EBermCalAvg860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermCalAvg875", TCalibratedToroidsChunk_data__EBermCalAvg875, &b_TCalibratedToroidsChunk_data__EBermCalAvg875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermGain860", TCalibratedToroidsChunk_data__EBermGain860, &b_TCalibratedToroidsChunk_data__EBermGain860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermGain875", TCalibratedToroidsChunk_data__EBermGain875, &b_TCalibratedToroidsChunk_data__EBermGain875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermPedestal860", TCalibratedToroidsChunk_data__EBermPedestal860, &b_TCalibratedToroidsChunk_data__EBermPedestal860);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.EBermPedestal875", TCalibratedToroidsChunk_data__EBermPedestal875, &b_TCalibratedToroidsChunk_data__EBermPedestal875);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.fBits", TCalibratedToroidsChunk_data__fBits, &b_TCalibratedToroidsChunk_data__fBits);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.data_.fUniqueID", TCalibratedToroidsChunk_data__fUniqueID, &b_TCalibratedToroidsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibratedToroidsChunk.name_", TCalibratedToroidsChunk_name_, &b_TCalibratedToroidsChunk_name_);
   fChain->SetBranchAddress("TRWMAnalysisChunk.chunk_id_", TRWMAnalysisChunk_chunk_id_, &b_TRWMAnalysisChunk_chunk_id_);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.BunchIntensity", TRWMAnalysisChunk_data__BunchIntensity, &b_TRWMAnalysisChunk_data__BunchIntensity);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.BunchPos", TRWMAnalysisChunk_data__BunchPos, &b_TRWMAnalysisChunk_data__BunchPos);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.BunchRMS", TRWMAnalysisChunk_data__BunchRMS, &b_TRWMAnalysisChunk_data__BunchRMS);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.BunchSpacingRMS", TRWMAnalysisChunk_data__BunchSpacingRMS, &b_TRWMAnalysisChunk_data__BunchSpacingRMS);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.NumBunches", TRWMAnalysisChunk_data__NumBunches, &b_TRWMAnalysisChunk_data__NumBunches);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.SpillIntensity", TRWMAnalysisChunk_data__SpillIntensity, &b_TRWMAnalysisChunk_data__SpillIntensity);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.fBits", TRWMAnalysisChunk_data__fBits, &b_TRWMAnalysisChunk_data__fBits);
   fChain->SetBranchAddress("TRWMAnalysisChunk.data_.fUniqueID", TRWMAnalysisChunk_data__fUniqueID, &b_TRWMAnalysisChunk_data__fUniqueID);
   fChain->SetBranchAddress("TRWMAnalysisChunk.name_", TRWMAnalysisChunk_name_, &b_TRWMAnalysisChunk_name_);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.chunk_id_", TUncalibratedIRMChunk_chunk_id_, &b_TUncalibratedIRMChunk_chunk_id_);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.BoosterEvent", TUncalibratedIRMChunk_data__BoosterEvent, &b_TUncalibratedIRMChunk_data__BoosterEvent);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.Data", TUncalibratedIRMChunk_data__Data, &b_TUncalibratedIRMChunk_data__Data);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.DataSize", TUncalibratedIRMChunk_data__DataSize, &b_TUncalibratedIRMChunk_data__DataSize);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.Delta1F", TUncalibratedIRMChunk_data__Delta1F, &b_TUncalibratedIRMChunk_data__Delta1F);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.GPSTime1", TUncalibratedIRMChunk_data__GPSTime1, &b_TUncalibratedIRMChunk_data__GPSTime1);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.GPSTime2", TUncalibratedIRMChunk_data__GPSTime2, &b_TUncalibratedIRMChunk_data__GPSTime2);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.Hz15MICnt", TUncalibratedIRMChunk_data__Hz15MICnt, &b_TUncalibratedIRMChunk_data__Hz15MICnt);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.MIEvent", TUncalibratedIRMChunk_data__MIEvent, &b_TUncalibratedIRMChunk_data__MIEvent);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.NumData", TUncalibratedIRMChunk_data__NumData, &b_TUncalibratedIRMChunk_data__NumData);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.PulseMI", TUncalibratedIRMChunk_data__PulseMI, &b_TUncalibratedIRMChunk_data__PulseMI);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.PulseSc", TUncalibratedIRMChunk_data__PulseSc, &b_TUncalibratedIRMChunk_data__PulseSc);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.TimeNSec", TUncalibratedIRMChunk_data__TimeNSec, &b_TUncalibratedIRMChunk_data__TimeNSec);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.TimeSec", TUncalibratedIRMChunk_data__TimeSec, &b_TUncalibratedIRMChunk_data__TimeSec);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.fBits", TUncalibratedIRMChunk_data__fBits, &b_TUncalibratedIRMChunk_data__fBits);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.data_.fUniqueID", TUncalibratedIRMChunk_data__fUniqueID, &b_TUncalibratedIRMChunk_data__fUniqueID);
   fChain->SetBranchAddress("TUncalibratedIRMChunk.name_", TUncalibratedIRMChunk_name_, &b_TUncalibratedIRMChunk_name_);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.chunk_id_", TUncalibratedMWRChunk_chunk_id_, &b_TUncalibratedMWRChunk_chunk_id_);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.BoosterEvent", TUncalibratedMWRChunk_data__BoosterEvent, &b_TUncalibratedMWRChunk_data__BoosterEvent);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.Data", TUncalibratedMWRChunk_data__Data, &b_TUncalibratedMWRChunk_data__Data);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.DataSize", TUncalibratedMWRChunk_data__DataSize, &b_TUncalibratedMWRChunk_data__DataSize);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.Delta1F", TUncalibratedMWRChunk_data__Delta1F, &b_TUncalibratedMWRChunk_data__Delta1F);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.GPSTime1", TUncalibratedMWRChunk_data__GPSTime1, &b_TUncalibratedMWRChunk_data__GPSTime1);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.GPSTime2", TUncalibratedMWRChunk_data__GPSTime2, &b_TUncalibratedMWRChunk_data__GPSTime2);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.Hz15MICnt", TUncalibratedMWRChunk_data__Hz15MICnt, &b_TUncalibratedMWRChunk_data__Hz15MICnt);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.MIEvent", TUncalibratedMWRChunk_data__MIEvent, &b_TUncalibratedMWRChunk_data__MIEvent);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.NumData", TUncalibratedMWRChunk_data__NumData, &b_TUncalibratedMWRChunk_data__NumData);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.PulseMI", TUncalibratedMWRChunk_data__PulseMI, &b_TUncalibratedMWRChunk_data__PulseMI);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.PulseSc", TUncalibratedMWRChunk_data__PulseSc, &b_TUncalibratedMWRChunk_data__PulseSc);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.TimeNSec", TUncalibratedMWRChunk_data__TimeNSec, &b_TUncalibratedMWRChunk_data__TimeNSec);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.TimeSec", TUncalibratedMWRChunk_data__TimeSec, &b_TUncalibratedMWRChunk_data__TimeSec);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.fBits", TUncalibratedMWRChunk_data__fBits, &b_TUncalibratedMWRChunk_data__fBits);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.data_.fUniqueID", TUncalibratedMWRChunk_data__fUniqueID, &b_TUncalibratedMWRChunk_data__fUniqueID);
   fChain->SetBranchAddress("TUncalibratedMWRChunk.name_", TUncalibratedMWRChunk_name_, &b_TUncalibratedMWRChunk_name_);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.chunk_id_", TUncalibratedRWMChunk_chunk_id_, &b_TUncalibratedRWMChunk_chunk_id_);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.Data", TUncalibratedRWMChunk_data__Data, &b_TUncalibratedRWMChunk_data__Data);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.NumWaveformData", TUncalibratedRWMChunk_data__NumWaveformData, &b_TUncalibratedRWMChunk_data__NumWaveformData);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.TZeroRecord", TUncalibratedRWMChunk_data__TZeroRecord, &b_TUncalibratedRWMChunk_data__TZeroRecord);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.XScale", TUncalibratedRWMChunk_data__XScale, &b_TUncalibratedRWMChunk_data__XScale);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.YOffset", TUncalibratedRWMChunk_data__YOffset, &b_TUncalibratedRWMChunk_data__YOffset);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.YScale", TUncalibratedRWMChunk_data__YScale, &b_TUncalibratedRWMChunk_data__YScale);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.fBits", TUncalibratedRWMChunk_data__fBits, &b_TUncalibratedRWMChunk_data__fBits);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.data_.fUniqueID", TUncalibratedRWMChunk_data__fUniqueID, &b_TUncalibratedRWMChunk_data__fUniqueID);
   fChain->SetBranchAddress("TUncalibratedRWMChunk.name_", TUncalibratedRWMChunk_name_, &b_TUncalibratedRWMChunk_name_);
   Notify();
}

Bool_t MC_Chunk::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}
void MC_Chunk::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void MC_Chunk::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t MC_Chunk::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either MC_Chunk::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.
   this->GetEntry(entry);
std::cout << TGlobalTankHeaderChunk_data__RUN_NUM[0] << std::endl;

   return kTRUE;
}

void MC_Chunk::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void MC_Chunk::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

}

#endif // #ifdef MC_Chunk_cxx
