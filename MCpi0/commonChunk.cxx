#define commonChunk_cxx
#include "commonChunk.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void commonChunk::Loop()
{
//   In a ROOT session, you can do:
//      root> .L commonChunk.C
//      root> commonChunk t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
   }
}

commonChunk::commonChunk(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
//   if (tree == 0) {
//      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/e898-data/data60/users/echuang/data_root_files/MC_pi0_ntuple_may07.root");
//      if (!f || !f->IsOpen()) {
//         f = new TFile("/e898-data/data60/users/echuang/data_root_files/MC_pi0_ntuple_may07.root");
//      }
//      f->GetObject("MiniBooNE",tree);
//
//   }
//   Init(tree);
   if(tree!=0) Init(tree);
}

commonChunk::~commonChunk()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t commonChunk::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t commonChunk::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void commonChunk::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set array pointer
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_NUM[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_CMD[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_DIAG[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_LAT[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__PMT[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__Q[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__notruncQ[i] = 0;
   for(int i=0; i<kMaxTCalibratedDataChunk; ++i) TCalibratedDataChunk_data__T[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VT[i] = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
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
   Notify();
}

Bool_t commonChunk::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void commonChunk::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t commonChunk::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
