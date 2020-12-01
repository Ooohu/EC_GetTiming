//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon May 25 14:34:52 2020 by ROOT version 6.12/04
// from TTree MiniBooNE/Created in MC_pi0_ntuple_may07.root
// found on file: /e898-data/data60/users/echuang/data_root_files/MC_pi0_ntuple_may07.root
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
   static constexpr Int_t kMaxTHistory = 63;
   static constexpr Int_t kMaxTHistory_algo_name = 63;
   static constexpr Int_t kMaxTHistory_algo_inst = 63;
   static constexpr Int_t kMaxTHistory_chunk_name = 63;
   static constexpr Int_t kMaxTHistory_ext_name = 63;
   static constexpr Int_t kMaxTHistory_version = 63;
   static constexpr Int_t kMaxTHistory_node = 63;
   static constexpr Int_t kMaxTHistory_database = 63;
   static constexpr Int_t kMaxTHistory_inst_num = 63;
   static constexpr Int_t kMaxTHistory_timestamp = 63;
   static constexpr Int_t kMaxTHistory_rcpid = 63;
   static constexpr Int_t kMaxTHistory_chunkid = 63;
   static constexpr Int_t kMaxTHistory_parents = 63;
   static constexpr Int_t kMaxTHistory_tags = 63;
   static constexpr Int_t kMaxTGlobalHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_name = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_name = 2;
   static constexpr Int_t kMaxTCalibratedDataChunk = 3;
   static constexpr Int_t kMaxTCalibratedDataChunk_chunk_id = 3;
   static constexpr Int_t kMaxTCalibratedDataChunk_name = 3;
   static constexpr Int_t kMaxTSplitEventChunk = 1;
   static constexpr Int_t kMaxTSplitEventChunk_chunk_id = 1;
   static constexpr Int_t kMaxTSplitEventChunk_name = 1;
   static constexpr Int_t kMaxTStancuFullChunk = 1;
   static constexpr Int_t kMaxTStancuFullChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFullChunk_name = 1;
   static constexpr Int_t kMaxTOneTrackChunk = 2;
   static constexpr Int_t kMaxTOneTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTOneTrackChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackChunk = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_name = 2;

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

