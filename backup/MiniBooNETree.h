//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Feb  9 11:37:42 2017 by ROOT version 5.32/00
// from TTree MiniBooNE/Created in MC_nue_ntuple_may07.root
// found on file: MC_nue_ntuple_may07.root
//////////////////////////////////////////////////////////

#ifndef MiniBooNETree_h
#define MiniBooNETree_h
#include <iostream>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <TClonesArray.h>
#include <TObject.h>

#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

const Int_t kMaxTCalibratedDataChunk = 3 ; 
const Int_t kMaxTCalibratedDataChunk_chunk_id = 3 ; 
const Int_t kMaxTCalibratedDataChunk_name = 3 ; 
const Int_t kMaxTMCRawEventChunk = 1 ; 
const Int_t kMaxTMCRawEventChunk_chunk_id = 1 ; 
const Int_t kMaxTMCRawEventChunk_name = 1 ; 
const Int_t kMaxTMonteCarloEVNTChunk = 1 ; 
const Int_t kMaxTMonteCarloEVNTChunk_chunk_id = 1 ; 
const Int_t kMaxTMonteCarloEVNTChunk_name = 1 ; 
const Int_t kMaxTMonteCarloBEAMChunk = 1 ; 
const Int_t kMaxTMonteCarloBEAMChunk_chunk_id = 1 ; 
const Int_t kMaxTMonteCarloBEAMChunk_name = 1 ; 

class MiniBooNETree  {
public :

   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderArray<unsigned int> THistory_fUniqueID = {fReader, "THistory.fUniqueID"};
   TTreeReaderArray<unsigned int> THistory_fBits = {fReader, "THistory.fBits"};
   TTreeReaderArray<string> THistory_algo_name_ = {fReader, "THistory.algo_name_"};
   TTreeReaderArray<string> THistory_algo_inst_ = {fReader, "THistory.algo_inst_"};
   TTreeReaderArray<string> THistory_chunk_name_ = {fReader, "THistory.chunk_name_"};
   TTreeReaderArray<string> THistory_ext_name_ = {fReader, "THistory.ext_name_"};
   TTreeReaderArray<string> THistory_version_ = {fReader, "THistory.version_"};
   TTreeReaderArray<string> THistory_node_ = {fReader, "THistory.node_"};
   TTreeReaderArray<Char_t> THistory_database_ = {fReader, "THistory.database_"};
   TTreeReaderArray<Int_t> THistory_inst_num_ = {fReader, "THistory.inst_num_"};
   TTreeReaderArray<Long_t> THistory_timestamp_ = {fReader, "THistory.timestamp_"};
   TTreeReaderArray<ULong_t> THistory_rcpid_ = {fReader, "THistory.rcpid_"};
   TTreeReaderArray<Int_t> THistory_chunkid_ = {fReader, "THistory.chunkid_"};
   TTreeReaderArray<vector<int>> THistory_parents_ = {fReader, "THistory.parents_"};
   TTreeReaderArray<vector<string>> THistory_tags_ = {fReader, "THistory.tags_"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_chunk_id_ = {fReader, "TGlobalHeaderChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TGlobalHeaderChunk_data__fUniqueID = {fReader, "TGlobalHeaderChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TGlobalHeaderChunk_data__fBits = {fReader, "TGlobalHeaderChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER = {fReader, "TGlobalHeaderChunk.data_.DAQ_VERSION_NUMBER"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__RECORD_TYPE = {fReader, "TGlobalHeaderChunk.data_.RECORD_TYPE"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__RECORD_ORIGIN = {fReader, "TGlobalHeaderChunk.data_.RECORD_ORIGIN"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__NUM_BYTES = {fReader, "TGlobalHeaderChunk.data_.NUM_BYTES"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__RUN_NUM = {fReader, "TGlobalHeaderChunk.data_.RUN_NUM"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__SECS = {fReader, "TGlobalHeaderChunk.data_.SECS"};
   TTreeReaderArray<Int_t> TGlobalHeaderChunk_data__MSECS = {fReader, "TGlobalHeaderChunk.data_.MSECS"};
   TTreeReaderArray<Int_t> TCalibratedIRM1Chunk_chunk_id_ = {fReader, "TCalibratedIRM1Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM1Chunk_data__fUniqueID = {fReader, "TCalibratedIRM1Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM1Chunk_data__fBits = {fReader, "TCalibratedIRM1Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP860 = {fReader, "TCalibratedIRM1Chunk.data_.HP860"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI860 = {fReader, "TCalibratedIRM1Chunk.data_.HI860"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP860 = {fReader, "TCalibratedIRM1Chunk.data_.VP860"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI860 = {fReader, "TCalibratedIRM1Chunk.data_.VI860"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP861 = {fReader, "TCalibratedIRM1Chunk.data_.HP861"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI861 = {fReader, "TCalibratedIRM1Chunk.data_.HI861"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP861 = {fReader, "TCalibratedIRM1Chunk.data_.VP861"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI861 = {fReader, "TCalibratedIRM1Chunk.data_.VI861"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP864 = {fReader, "TCalibratedIRM1Chunk.data_.HP864"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI864 = {fReader, "TCalibratedIRM1Chunk.data_.HI864"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP864 = {fReader, "TCalibratedIRM1Chunk.data_.VP864"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI864 = {fReader, "TCalibratedIRM1Chunk.data_.VI864"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP866 = {fReader, "TCalibratedIRM1Chunk.data_.HP866"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI866 = {fReader, "TCalibratedIRM1Chunk.data_.HI866"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP867 = {fReader, "TCalibratedIRM1Chunk.data_.VP867"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI867 = {fReader, "TCalibratedIRM1Chunk.data_.VI867"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP868 = {fReader, "TCalibratedIRM1Chunk.data_.HP868"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI868 = {fReader, "TCalibratedIRM1Chunk.data_.HI868"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP869 = {fReader, "TCalibratedIRM1Chunk.data_.VP869"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI869 = {fReader, "TCalibratedIRM1Chunk.data_.VI869"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP870 = {fReader, "TCalibratedIRM1Chunk.data_.HP870"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI870 = {fReader, "TCalibratedIRM1Chunk.data_.HI870"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP870 = {fReader, "TCalibratedIRM1Chunk.data_.VP870"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI870 = {fReader, "TCalibratedIRM1Chunk.data_.VI870"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP871 = {fReader, "TCalibratedIRM1Chunk.data_.VP871"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI871 = {fReader, "TCalibratedIRM1Chunk.data_.VI871"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP872 = {fReader, "TCalibratedIRM1Chunk.data_.HP872"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI872 = {fReader, "TCalibratedIRM1Chunk.data_.HI872"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP873 = {fReader, "TCalibratedIRM1Chunk.data_.HP873"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI873 = {fReader, "TCalibratedIRM1Chunk.data_.HI873"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP873 = {fReader, "TCalibratedIRM1Chunk.data_.VP873"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI873 = {fReader, "TCalibratedIRM1Chunk.data_.VI873"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HP875 = {fReader, "TCalibratedIRM1Chunk.data_.HP875"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__HI875 = {fReader, "TCalibratedIRM1Chunk.data_.HI875"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VP875 = {fReader, "TCalibratedIRM1Chunk.data_.VP875"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__VI875 = {fReader, "TCalibratedIRM1Chunk.data_.VI875"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__TR860G = {fReader, "TCalibratedIRM1Chunk.data_.TR860G"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__TR875G = {fReader, "TCalibratedIRM1Chunk.data_.TR875G"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__TOR860 = {fReader, "TCalibratedIRM1Chunk.data_.TOR860"};
   TTreeReaderArray<Float_t> TCalibratedIRM1Chunk_data__TOR875 = {fReader, "TCalibratedIRM1Chunk.data_.TOR875"};
   TTreeReaderArray<Int_t> TCalibratedIRM2Chunk_chunk_id_ = {fReader, "TCalibratedIRM2Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM2Chunk_data__fUniqueID = {fReader, "TCalibratedIRM2Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM2Chunk_data__fBits = {fReader, "TCalibratedIRM2Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM851A = {fReader, "TCalibratedIRM2Chunk.data_.LM851A"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM860 = {fReader, "TCalibratedIRM2Chunk.data_.LM860"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM862 = {fReader, "TCalibratedIRM2Chunk.data_.LM862"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM864 = {fReader, "TCalibratedIRM2Chunk.data_.LM864"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM865A = {fReader, "TCalibratedIRM2Chunk.data_.LM865A"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM865B = {fReader, "TCalibratedIRM2Chunk.data_.LM865B"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM866 = {fReader, "TCalibratedIRM2Chunk.data_.LM866"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM867 = {fReader, "TCalibratedIRM2Chunk.data_.LM867"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM868 = {fReader, "TCalibratedIRM2Chunk.data_.LM868"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM869 = {fReader, "TCalibratedIRM2Chunk.data_.LM869"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM870 = {fReader, "TCalibratedIRM2Chunk.data_.LM870"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM871 = {fReader, "TCalibratedIRM2Chunk.data_.LM871"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM872 = {fReader, "TCalibratedIRM2Chunk.data_.LM872"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM873 = {fReader, "TCalibratedIRM2Chunk.data_.LM873"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM874 = {fReader, "TCalibratedIRM2Chunk.data_.LM874"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM875A = {fReader, "TCalibratedIRM2Chunk.data_.LM875A"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM875B = {fReader, "TCalibratedIRM2Chunk.data_.LM875B"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LM875C = {fReader, "TCalibratedIRM2Chunk.data_.LM875C"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__LMBPST = {fReader, "TCalibratedIRM2Chunk.data_.LMBPST"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TR860Z = {fReader, "TCalibratedIRM2Chunk.data_.TR860Z"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TR875Z = {fReader, "TCalibratedIRM2Chunk.data_.TR875Z"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TLI860 = {fReader, "TCalibratedIRM2Chunk.data_.TLI860"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TLI862 = {fReader, "TCalibratedIRM2Chunk.data_.TLI862"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TLI864 = {fReader, "TCalibratedIRM2Chunk.data_.TLI864"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TLI870 = {fReader, "TCalibratedIRM2Chunk.data_.TLI870"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TLI873 = {fReader, "TCalibratedIRM2Chunk.data_.TLI873"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TOR860 = {fReader, "TCalibratedIRM2Chunk.data_.TOR860"};
   TTreeReaderArray<Float_t> TCalibratedIRM2Chunk_data__TOR875 = {fReader, "TCalibratedIRM2Chunk.data_.TOR875"};
   TTreeReaderArray<Int_t> TCalibratedIRM3Chunk_chunk_id_ = {fReader, "TCalibratedIRM3Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM3Chunk_data__fUniqueID = {fReader, "TCalibratedIRM3Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM3Chunk_data__fBits = {fReader, "TCalibratedIRM3Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__HPTGTL = {fReader, "TCalibratedIRM3Chunk.data_.HPTGTL"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__HITGTL = {fReader, "TCalibratedIRM3Chunk.data_.HITGTL"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__VPTGTL = {fReader, "TCalibratedIRM3Chunk.data_.VPTGTL"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__VITGTL = {fReader, "TCalibratedIRM3Chunk.data_.VITGTL"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__MBT90D = {fReader, "TCalibratedIRM3Chunk.data_.MBT90D"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM1P = {fReader, "TCalibratedIRM3Chunk.data_.BPM1P"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM2P = {fReader, "TCalibratedIRM3Chunk.data_.BPM2P"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM3P = {fReader, "TCalibratedIRM3Chunk.data_.BPM3P"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM4P = {fReader, "TCalibratedIRM3Chunk.data_.BPM4P"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM1SA = {fReader, "TCalibratedIRM3Chunk.data_.BPM1SA"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM1SB = {fReader, "TCalibratedIRM3Chunk.data_.BPM1SB"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM2SA = {fReader, "TCalibratedIRM3Chunk.data_.BPM2SA"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM2SB = {fReader, "TCalibratedIRM3Chunk.data_.BPM2SB"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM3SA = {fReader, "TCalibratedIRM3Chunk.data_.BPM3SA"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM3SB = {fReader, "TCalibratedIRM3Chunk.data_.BPM3SB"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM4SA = {fReader, "TCalibratedIRM3Chunk.data_.BPM4SA"};
   TTreeReaderArray<Float_t> TCalibratedIRM3Chunk_data__BPM4SB = {fReader, "TCalibratedIRM3Chunk.data_.BPM4SB"};
   TTreeReaderArray<Int_t> TCalibratedIRM4Chunk_chunk_id_ = {fReader, "TCalibratedIRM4Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM4Chunk_data__fUniqueID = {fReader, "TCalibratedIRM4Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM4Chunk_data__fBits = {fReader, "TCalibratedIRM4Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM4Chunk_data__THCURR = {fReader, "TCalibratedIRM4Chunk.data_.THCURR"};
   TTreeReaderArray<Float_t> TCalibratedIRM4Chunk_data__SLINE1 = {fReader, "TCalibratedIRM4Chunk.data_.SLINE1"};
   TTreeReaderArray<Float_t> TCalibratedIRM4Chunk_data__SLINE2 = {fReader, "TCalibratedIRM4Chunk.data_.SLINE2"};
   TTreeReaderArray<Float_t> TCalibratedIRM4Chunk_data__SLINE3 = {fReader, "TCalibratedIRM4Chunk.data_.SLINE3"};
   TTreeReaderArray<Float_t> TCalibratedIRM4Chunk_data__SLINE4 = {fReader, "TCalibratedIRM4Chunk.data_.SLINE4"};
   TTreeReaderArray<Int_t> TCalibratedIRM5Chunk_chunk_id_ = {fReader, "TCalibratedIRM5Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM5Chunk_data__fUniqueID = {fReader, "TCalibratedIRM5Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM5Chunk_data__fBits = {fReader, "TCalibratedIRM5Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTBT1 = {fReader, "TCalibratedIRM5Chunk.data_.BTBT1"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTBT2 = {fReader, "TCalibratedIRM5Chunk.data_.BTBT2"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTJT1 = {fReader, "TCalibratedIRM5Chunk.data_.BTJT1"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTJT2 = {fReader, "TCalibratedIRM5Chunk.data_.BTJT2"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH1T1 = {fReader, "TCalibratedIRM5Chunk.data_.BTH1T1"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH1AV = {fReader, "TCalibratedIRM5Chunk.data_.BTH1AV"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTBLAP = {fReader, "TCalibratedIRM5Chunk.data_.BTBLAP"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH2T2 = {fReader, "TCalibratedIRM5Chunk.data_.BTH2T2"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH2AV = {fReader, "TCalibratedIRM5Chunk.data_.BTH2AV"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH1T2 = {fReader, "TCalibratedIRM5Chunk.data_.BTH1T2"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH1AP = {fReader, "TCalibratedIRM5Chunk.data_.BTH1AP"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__BTH2T1 = {fReader, "TCalibratedIRM5Chunk.data_.BTH2T1"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__HWTIN = {fReader, "TCalibratedIRM5Chunk.data_.HWTIN"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__HWTOUT = {fReader, "TCalibratedIRM5Chunk.data_.HWTOUT"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__HWFLOW = {fReader, "TCalibratedIRM5Chunk.data_.HWFLOW"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__HV865 = {fReader, "TCalibratedIRM5Chunk.data_.HV865"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__Q872 = {fReader, "TCalibratedIRM5Chunk.data_.Q872"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__Q873 = {fReader, "TCalibratedIRM5Chunk.data_.Q873"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__Q874 = {fReader, "TCalibratedIRM5Chunk.data_.Q874"};
   TTreeReaderArray<Float_t> TCalibratedIRM5Chunk_data__Q875 = {fReader, "TCalibratedIRM5Chunk.data_.Q875"};
   TTreeReaderArray<Int_t> TCalibratedIRM6Chunk_chunk_id_ = {fReader, "TCalibratedIRM6Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedIRM6Chunk_data__fUniqueID = {fReader, "TCalibratedIRM6Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedIRM6Chunk_data__fBits = {fReader, "TCalibratedIRM6Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBINTA = {fReader, "TCalibratedIRM6Chunk.data_.EBINTA"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBINTB = {fReader, "TCalibratedIRM6Chunk.data_.EBINTB"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__SLP860 = {fReader, "TCalibratedIRM6Chunk.data_.SLP860"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__INT860 = {fReader, "TCalibratedIRM6Chunk.data_.INT860"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__SLP875 = {fReader, "TCalibratedIRM6Chunk.data_.SLP875"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__INT875 = {fReader, "TCalibratedIRM6Chunk.data_.INT875"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBDIFA = {fReader, "TCalibratedIRM6Chunk.data_.EBDIFA"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBDIFB = {fReader, "TCalibratedIRM6Chunk.data_.EBDIFB"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBSUMA = {fReader, "TCalibratedIRM6Chunk.data_.EBSUMA"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__EBSUMB = {fReader, "TCalibratedIRM6Chunk.data_.EBSUMB"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__TR860G = {fReader, "TCalibratedIRM6Chunk.data_.TR860G"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__TR875G = {fReader, "TCalibratedIRM6Chunk.data_.TR875G"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__TOR860 = {fReader, "TCalibratedIRM6Chunk.data_.TOR860"};
   TTreeReaderArray<Float_t> TCalibratedIRM6Chunk_data__TOR875 = {fReader, "TCalibratedIRM6Chunk.data_.TOR875"};
   TTreeReaderArray<Int_t> TCalibratedMWRChunk_chunk_id_ = {fReader, "TCalibratedMWRChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedMWRChunk_data__fUniqueID = {fReader, "TCalibratedMWRChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedMWRChunk_data__fBits = {fReader, "TCalibratedMWRChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedMWRChunk_data__horMean = {fReader, "TCalibratedMWRChunk.data_.horMean"};
   TTreeReaderArray<Float_t> TCalibratedMWRChunk_data__horRMS = {fReader, "TCalibratedMWRChunk.data_.horRMS"};
   TTreeReaderArray<Float_t> TCalibratedMWRChunk_data__verMean = {fReader, "TCalibratedMWRChunk.data_.verMean"};
   TTreeReaderArray<Float_t> TCalibratedMWRChunk_data__verRMS = {fReader, "TCalibratedMWRChunk.data_.verRMS"};
   TTreeReaderArray<Int_t> TCalibratedMWRChunk_data__devicetag = {fReader, "TCalibratedMWRChunk.data_.devicetag"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_chunk_id_ = {fReader, "TGlobalTankHeaderChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TGlobalTankHeaderChunk_data__fUniqueID = {fReader, "TGlobalTankHeaderChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TGlobalTankHeaderChunk_data__fBits = {fReader, "TGlobalTankHeaderChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__RUN_NUM = {fReader, "TGlobalTankHeaderChunk.data_.RUN_NUM"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__EVENT_NUM = {fReader, "TGlobalTankHeaderChunk.data_.EVENT_NUM"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__SUB_RUN_NUM = {fReader, "TGlobalTankHeaderChunk.data_.SUB_RUN_NUM"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__EVENT_TYPE = {fReader, "TGlobalTankHeaderChunk.data_.EVENT_TYPE"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__TRIG_EV_NUM = {fReader, "TGlobalTankHeaderChunk.data_.TRIG_EV_NUM"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__TRIG_FIFO = {fReader, "TGlobalTankHeaderChunk.data_.TRIG_FIFO"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__NTSAS_FIFO = {fReader, "TGlobalTankHeaderChunk.data_.NTSAS_FIFO"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__GPS_LOWER = {fReader, "TGlobalTankHeaderChunk.data_.GPS_LOWER"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__GPS_UPPER = {fReader, "TGlobalTankHeaderChunk.data_.GPS_UPPER"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__TRIG_EV_TYPE = {fReader, "TGlobalTankHeaderChunk.data_.TRIG_EV_TYPE"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__TRIG_NTSAS = {fReader, "TGlobalTankHeaderChunk.data_.TRIG_NTSAS"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__FIFO_HIST_POINT = {fReader, "TGlobalTankHeaderChunk.data_.FIFO_HIST_POINT"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT = {fReader, "TGlobalTankHeaderChunk.data_.ACTIVITY_HIST_POINT"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__QTH_RCVR = {fReader, "TGlobalTankHeaderChunk.data_.QTH_RCVR"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__QTH_BUFSIZE = {fReader, "TGlobalTankHeaderChunk.data_.QTH_BUFSIZE"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__QTH_NUM_HITS = {fReader, "TGlobalTankHeaderChunk.data_.QTH_NUM_HITS"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__QTH_DATA_TYPE = {fReader, "TGlobalTankHeaderChunk.data_.QTH_DATA_TYPE"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS = {fReader, "TGlobalTankHeaderChunk.data_.NUM_UNCAL_HITS"};
   TTreeReaderArray<Int_t> TGlobalTankHeaderChunk_data__RATE = {fReader, "TGlobalTankHeaderChunk.data_.RATE"};
   TTreeReaderArray<Int_t> TUncalibratedDataChunk_chunk_id_ = {fReader, "TUncalibratedDataChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TUncalibratedDataChunk_data__fUniqueID = {fReader, "TUncalibratedDataChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TUncalibratedDataChunk_data__fBits = {fReader, "TUncalibratedDataChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TBPMOnTargetChunk_chunk_id_ = {fReader, "TBPMOnTargetChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TBPMOnTargetChunk_data__fUniqueID = {fReader, "TBPMOnTargetChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TBPMOnTargetChunk_data__fBits = {fReader, "TBPMOnTargetChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__horiz = {fReader, "TBPMOnTargetChunk.data_.horiz"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__vert = {fReader, "TBPMOnTargetChunk.data_.vert"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__costheta = {fReader, "TBPMOnTargetChunk.data_.costheta"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__horpos = {fReader, "TBPMOnTargetChunk.data_.horpos"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__verpos = {fReader, "TBPMOnTargetChunk.data_.verpos"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__horang = {fReader, "TBPMOnTargetChunk.data_.horang"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__verang = {fReader, "TBPMOnTargetChunk.data_.verang"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__ppp = {fReader, "TBPMOnTargetChunk.data_.ppp"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__fom1 = {fReader, "TBPMOnTargetChunk.data_.fom1"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__fom2 = {fReader, "TBPMOnTargetChunk.data_.fom2"};
   TTreeReaderArray<Float_t> TBPMOnTargetChunk_data__fom3 = {fReader, "TBPMOnTargetChunk.data_.fom3"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_chunk_id_ = {fReader, "TMergePerformanceChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMergePerformanceChunk_data__fUniqueID = {fReader, "TMergePerformanceChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMergePerformanceChunk_data__fBits = {fReader, "TMergePerformanceChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_data__have_TANK = {fReader, "TMergePerformanceChunk.data_.have_TANK"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_data__have_RWM = {fReader, "TMergePerformanceChunk.data_.have_RWM"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_data__have_ACNET_IRM = {fReader, "TMergePerformanceChunk.data_.have_ACNET_IRM"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_data__have_ACNET_MWR = {fReader, "TMergePerformanceChunk.data_.have_ACNET_MWR"};
   TTreeReaderArray<Int_t> TMergePerformanceChunk_data__have_LMC = {fReader, "TMergePerformanceChunk.data_.have_LMC"};
   TTreeReaderArray<Float_t> TMergePerformanceChunk_data__RWM_tdiff = {fReader, "TMergePerformanceChunk.data_.RWM_tdiff"};
   TTreeReaderArray<Float_t> TMergePerformanceChunk_data__ACNET_IRM_tdiff = {fReader, "TMergePerformanceChunk.data_.ACNET_IRM_tdiff"};
   TTreeReaderArray<Float_t> TMergePerformanceChunk_data__ACNET_MWR_tdiff = {fReader, "TMergePerformanceChunk.data_.ACNET_MWR_tdiff"};
   TTreeReaderArray<Float_t> TMergePerformanceChunk_data__LMC_tdiff = {fReader, "TMergePerformanceChunk.data_.LMC_tdiff"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_chunk_id_ = {fReader, "TProtonsOnTargetChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TProtonsOnTargetChunk_data__fUniqueID = {fReader, "TProtonsOnTargetChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TProtonsOnTargetChunk_data__fBits = {fReader, "TProtonsOnTargetChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__pot860 = {fReader, "TProtonsOnTargetChunk.data_.pot860"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__pot875 = {fReader, "TProtonsOnTargetChunk.data_.pot875"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__cal_pot860 = {fReader, "TProtonsOnTargetChunk.data_.cal_pot860"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__cal_pot875 = {fReader, "TProtonsOnTargetChunk.data_.cal_pot875"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__pot860_err = {fReader, "TProtonsOnTargetChunk.data_.pot860_err"};
   TTreeReaderArray<Float_t> TProtonsOnTargetChunk_data__pot875_err = {fReader, "TProtonsOnTargetChunk.data_.pot875_err"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__good_for_analysis = {fReader, "TProtonsOnTargetChunk.data_.good_for_analysis"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_multiwire_test = {fReader, "TProtonsOnTargetChunk.data_.passed_multiwire_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_toroid_test = {fReader, "TProtonsOnTargetChunk.data_.passed_toroid_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_horn_current_test = {fReader, "TProtonsOnTargetChunk.data_.passed_horn_current_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_90degree_test = {fReader, "TProtonsOnTargetChunk.data_.passed_90degree_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_bpm_test = {fReader, "TProtonsOnTargetChunk.data_.passed_bpm_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_bpm_radius_test = {fReader, "TProtonsOnTargetChunk.data_.passed_bpm_radius_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_bpm_angle_test = {fReader, "TProtonsOnTargetChunk.data_.passed_bpm_angle_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_bpm_fom2_test = {fReader, "TProtonsOnTargetChunk.data_.passed_bpm_fom2_test"};
   TTreeReaderArray<Int_t> TProtonsOnTargetChunk_data__passed_latency_test = {fReader, "TProtonsOnTargetChunk.data_.passed_latency_test"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_chunk_id_ = {fReader, "TDAQbitFieldsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TDAQbitFieldsChunk_data__fUniqueID = {fReader, "TDAQbitFieldsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TDAQbitFieldsChunk_data__fBits = {fReader, "TDAQbitFieldsChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Time_Origin = {fReader, "TDAQbitFieldsChunk.data_.Time_Origin"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_days_ones = {fReader, "TDAQbitFieldsChunk.data_.GPS_days_ones"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_days_tens = {fReader, "TDAQbitFieldsChunk.data_.GPS_days_tens"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_days_hundreds = {fReader, "TDAQbitFieldsChunk.data_.GPS_days_hundreds"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_days = {fReader, "TDAQbitFieldsChunk.data_.GPS_days"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_bclock = {fReader, "TDAQbitFieldsChunk.data_.GPS_bclock"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_milli_ones = {fReader, "TDAQbitFieldsChunk.data_.GPS_milli_ones"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_milli_tens = {fReader, "TDAQbitFieldsChunk.data_.GPS_milli_tens"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_milli_hundreds = {fReader, "TDAQbitFieldsChunk.data_.GPS_milli_hundreds"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_milli = {fReader, "TDAQbitFieldsChunk.data_.GPS_milli"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_sec_ones = {fReader, "TDAQbitFieldsChunk.data_.GPS_sec_ones"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_sec_tens = {fReader, "TDAQbitFieldsChunk.data_.GPS_sec_tens"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_sec = {fReader, "TDAQbitFieldsChunk.data_.GPS_sec"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_min_ones = {fReader, "TDAQbitFieldsChunk.data_.GPS_min_ones"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_min_tens = {fReader, "TDAQbitFieldsChunk.data_.GPS_min_tens"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_min = {fReader, "TDAQbitFieldsChunk.data_.GPS_min"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_hour_ones = {fReader, "TDAQbitFieldsChunk.data_.GPS_hour_ones"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_hour_tens = {fReader, "TDAQbitFieldsChunk.data_.GPS_hour_tens"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__GPS_hour = {fReader, "TDAQbitFieldsChunk.data_.GPS_hour"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_bclock = {fReader, "TDAQbitFieldsChunk.data_.FIFO_bclock"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_calib = {fReader, "TDAQbitFieldsChunk.data_.FIFO_calib"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_strobe = {fReader, "TDAQbitFieldsChunk.data_.FIFO_strobe"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_beam = {fReader, "TDAQbitFieldsChunk.data_.FIFO_beam"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_det5 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_det5"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_det4 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_det4"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_det3 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_det3"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_det2 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_det2"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_veto2 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_veto2"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_Eor = {fReader, "TDAQbitFieldsChunk.data_.FIFO_Eor"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_det1 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_det1"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__FIFO_veto1 = {fReader, "TDAQbitFieldsChunk.data_.FIFO_veto1"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_tsa = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_tsa"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_seqid = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_seqid"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_evtype = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_evtype"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_qt_ff = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_qt_ff"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_qt_hf = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_qt_hf"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_qt_ef = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_qt_ef"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_rcvr_ff = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_rcvr_ff"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_rcvr_hf = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_rcvr_hf"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_rcvr_ef = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_rcvr_ef"};
   TTreeReaderArray<Int_t> TDAQbitFieldsChunk_data__Rcvr_eof = {fReader, "TDAQbitFieldsChunk.data_.Rcvr_eof"};
   TTreeReaderArray<Int_t> TTriggerActivityChunk_chunk_id_ = {fReader, "TTriggerActivityChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TTriggerActivityChunk_data__fUniqueID = {fReader, "TTriggerActivityChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TTriggerActivityChunk_data__fBits = {fReader, "TTriggerActivityChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TCalibratedDataChunk_chunk_id_ = {fReader, "TCalibratedDataChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibratedDataChunk_data__fUniqueID = {fReader, "TCalibratedDataChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibratedDataChunk_data__fBits = {fReader, "TCalibratedDataChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibratedDataChunk_data__Tmin = {fReader, "TCalibratedDataChunk.data_.Tmin"};
   TTreeReaderArray<Float_t> TCalibratedDataChunk_data__Tmax = {fReader, "TCalibratedDataChunk.data_.Tmax"};
   TTreeReaderArray<Int_t> TCrate13Chunk_chunk_id_ = {fReader, "TCrate13Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCrate13Chunk_data__fUniqueID = {fReader, "TCrate13Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCrate13Chunk_data__fBits = {fReader, "TCrate13Chunk.data_.fBits"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__Laser_flask = {fReader, "TCrate13Chunk.data_.Laser_flask"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_laser = {fReader, "TCrate13Chunk.data_.N_laser"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_cubes = {fReader, "TCrate13Chunk.data_.N_cubes"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_RWM = {fReader, "TCrate13Chunk.data_.N_RWM"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_d90 = {fReader, "TCrate13Chunk.data_.N_d90"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_MUTR = {fReader, "TCrate13Chunk.data_.N_MUTR"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_trig_e1 = {fReader, "TCrate13Chunk.data_.N_trig_e1"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_trig_e2 = {fReader, "TCrate13Chunk.data_.N_trig_e2"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_trig_e3 = {fReader, "TCrate13Chunk.data_.N_trig_e3"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__N_trig_e4 = {fReader, "TCrate13Chunk.data_.N_trig_e4"};
   TTreeReaderArray<Int_t> TCrate13Chunk_data__RWM_quality = {fReader, "TCrate13Chunk.data_.RWM_quality"};
   TTreeReaderArray<Float_t> TCrate13Chunk_data__RWM_refined_time = {fReader, "TCrate13Chunk.data_.RWM_refined_time"};
   TTreeReaderArray<Float_t> TCrate13Chunk_data__RWM_bounce_time = {fReader, "TCrate13Chunk.data_.RWM_bounce_time"};
   TTreeReaderArray<Int_t> TConnectTheHitsChunk_chunk_id_ = {fReader, "TConnectTheHitsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TConnectTheHitsChunk_data__fUniqueID = {fReader, "TConnectTheHitsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TConnectTheHitsChunk_data__fBits = {fReader, "TConnectTheHitsChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TVetoClusterChunk_chunk_id_ = {fReader, "TVetoClusterChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TVetoClusterChunk_data__fUniqueID = {fReader, "TVetoClusterChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TVetoClusterChunk_data__fBits = {fReader, "TVetoClusterChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TVetoClusterChunk_data__Left = {fReader, "TVetoClusterChunk.data_.Left"};
   TTreeReaderArray<Int_t> TVetoClusterChunk_data__NC = {fReader, "TVetoClusterChunk.data_.NC"};
   TTreeReaderArray<Int_t> TVetoClusterChunk_data__Subevent = {fReader, "TVetoClusterChunk.data_.Subevent"};
   TTreeReaderArray<Int_t> TSplitEventChunk_chunk_id_ = {fReader, "TSplitEventChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TSplitEventChunk_data__fUniqueID = {fReader, "TSplitEventChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TSplitEventChunk_data__fBits = {fReader, "TSplitEventChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TSplitEventChunk_data__Subevent = {fReader, "TSplitEventChunk.data_.Subevent"};
   TTreeReaderArray<Int_t> TSplitEventChunk_data__TposHits = {fReader, "TSplitEventChunk.data_.TposHits"};
   TTreeReaderArray<Int_t> TSplitEventChunk_data__VposHits = {fReader, "TSplitEventChunk.data_.VposHits"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__Qtot = {fReader, "TSplitEventChunk.data_.Qtot"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__TQpos = {fReader, "TSplitEventChunk.data_.TQpos"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__VQpos = {fReader, "TSplitEventChunk.data_.VQpos"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__Tmin = {fReader, "TSplitEventChunk.data_.Tmin"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__Tmax = {fReader, "TSplitEventChunk.data_.Tmax"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__AvgTTim = {fReader, "TSplitEventChunk.data_.AvgTTim"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__PeakTTim = {fReader, "TSplitEventChunk.data_.PeakTTim"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__rmsTTim = {fReader, "TSplitEventChunk.data_.rmsTTim"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__AvgVTim = {fReader, "TSplitEventChunk.data_.AvgVTim"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__PeakVTim = {fReader, "TSplitEventChunk.data_.PeakVTim"};
   TTreeReaderArray<Float_t> TSplitEventChunk_data__rmsVTim = {fReader, "TSplitEventChunk.data_.rmsVTim"};
   TTreeReaderArray<Int_t> TStancuFastChunk_chunk_id_ = {fReader, "TStancuFastChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuFastChunk_data__fUniqueID = {fReader, "TStancuFastChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuFastChunk_data__fBits = {fReader, "TStancuFastChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuFastChunk_data__IT = {fReader, "TStancuFastChunk.data_.IT"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__X = {fReader, "TStancuFastChunk.data_.X"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__Y = {fReader, "TStancuFastChunk.data_.Y"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__Z = {fReader, "TStancuFastChunk.data_.Z"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__UX = {fReader, "TStancuFastChunk.data_.UX"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__UY = {fReader, "TStancuFastChunk.data_.UY"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__UZ = {fReader, "TStancuFastChunk.data_.UZ"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__T = {fReader, "TStancuFastChunk.data_.T"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__D = {fReader, "TStancuFastChunk.data_.D"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__E = {fReader, "TStancuFastChunk.data_.E"};
   TTreeReaderArray<Float_t> TStancuFastChunk_data__F = {fReader, "TStancuFastChunk.data_.F"};
   TTreeReaderArray<Int_t> TStancuFullChunk_chunk_id_ = {fReader, "TStancuFullChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuFullChunk_data__fUniqueID = {fReader, "TStancuFullChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuFullChunk_data__fBits = {fReader, "TStancuFullChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuFullChunk_data__IT = {fReader, "TStancuFullChunk.data_.IT"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__X = {fReader, "TStancuFullChunk.data_.X"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Y = {fReader, "TStancuFullChunk.data_.Y"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Z = {fReader, "TStancuFullChunk.data_.Z"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__UX = {fReader, "TStancuFullChunk.data_.UX"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__UY = {fReader, "TStancuFullChunk.data_.UY"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__UZ = {fReader, "TStancuFullChunk.data_.UZ"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__T = {fReader, "TStancuFullChunk.data_.T"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__D = {fReader, "TStancuFullChunk.data_.D"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__E = {fReader, "TStancuFullChunk.data_.E"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__F = {fReader, "TStancuFullChunk.data_.F"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__E_mu = {fReader, "TStancuFullChunk.data_.E_mu"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__S_tkint = {fReader, "TStancuFullChunk.data_.S_tkint"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__RdR = {fReader, "TStancuFullChunk.data_.RdR"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Fqlt05 = {fReader, "TStancuFullChunk.data_.Fqlt05"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Fqlt10 = {fReader, "TStancuFullChunk.data_.Fqlt10"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Xvtx = {fReader, "TStancuFullChunk.data_.Xvtx"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Yvtx = {fReader, "TStancuFullChunk.data_.Yvtx"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Zvtx = {fReader, "TStancuFullChunk.data_.Zvtx"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Rvtx = {fReader, "TStancuFullChunk.data_.Rvtx"};
   TTreeReaderArray<Float_t> TStancuFullChunk_data__Tvtx = {fReader, "TStancuFullChunk.data_.Tvtx"};
   TTreeReaderArray<Int_t> TStancuFluxChunk_chunk_id_ = {fReader, "TStancuFluxChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuFluxChunk_data__fUniqueID = {fReader, "TStancuFluxChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuFluxChunk_data__fBits = {fReader, "TStancuFluxChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuFluxChunk_data__IT = {fReader, "TStancuFluxChunk.data_.IT"};
   TTreeReaderArray<Float_t> TStancuFluxChunk_data__CER = {fReader, "TStancuFluxChunk.data_.CER"};
   TTreeReaderArray<Float_t> TStancuFluxChunk_data__SCI = {fReader, "TStancuFluxChunk.data_.SCI"};
   TTreeReaderArray<Float_t> TStancuFluxChunk_data__F = {fReader, "TStancuFluxChunk.data_.F"};
   TTreeReaderArray<Float_t> TStancuFluxChunk_data__EcerEl = {fReader, "TStancuFluxChunk.data_.EcerEl"};
   TTreeReaderArray<Float_t> TStancuFluxChunk_data__EcerMu = {fReader, "TStancuFluxChunk.data_.EcerMu"};
   TTreeReaderArray<Int_t> TStancuTrakChunk_chunk_id_ = {fReader, "TStancuTrakChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuTrakChunk_data__fUniqueID = {fReader, "TStancuTrakChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuTrakChunk_data__fBits = {fReader, "TStancuTrakChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuTrakChunk_data__IT = {fReader, "TStancuTrakChunk.data_.IT"};
   TTreeReaderArray<Float_t> TStancuTrakChunk_data__TRAK = {fReader, "TStancuTrakChunk.data_.TRAK"};
   TTreeReaderArray<Float_t> TStancuTrakChunk_data__F = {fReader, "TStancuTrakChunk.data_.F"};
   TTreeReaderArray<Int_t> TStancuMuvdChunk_chunk_id_ = {fReader, "TStancuMuvdChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuMuvdChunk_data__fUniqueID = {fReader, "TStancuMuvdChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuMuvdChunk_data__fBits = {fReader, "TStancuMuvdChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuMuvdChunk_data__IT = {fReader, "TStancuMuvdChunk.data_.IT"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__X = {fReader, "TStancuMuvdChunk.data_.X"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__Y = {fReader, "TStancuMuvdChunk.data_.Y"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__Z = {fReader, "TStancuMuvdChunk.data_.Z"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__UX = {fReader, "TStancuMuvdChunk.data_.UX"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__UY = {fReader, "TStancuMuvdChunk.data_.UY"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__UZ = {fReader, "TStancuMuvdChunk.data_.UZ"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__T = {fReader, "TStancuMuvdChunk.data_.T"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__F = {fReader, "TStancuMuvdChunk.data_.F"};
   TTreeReaderArray<Float_t> TStancuMuvdChunk_data__L = {fReader, "TStancuMuvdChunk.data_.L"};
   TTreeReaderArray<Int_t> TStancuPi0Chunk_chunk_id_ = {fReader, "TStancuPi0Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuPi0Chunk_data__fUniqueID = {fReader, "TStancuPi0Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuPi0Chunk_data__fBits = {fReader, "TStancuPi0Chunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuPi0Chunk_data__iter = {fReader, "TStancuPi0Chunk.data_.iter"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__x = {fReader, "TStancuPi0Chunk.data_.x"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__y = {fReader, "TStancuPi0Chunk.data_.y"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__z = {fReader, "TStancuPi0Chunk.data_.z"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__t = {fReader, "TStancuPi0Chunk.data_.t"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__llike = {fReader, "TStancuPi0Chunk.data_.llike"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__mass = {fReader, "TStancuPi0Chunk.data_.mass"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__darec = {fReader, "TStancuPi0Chunk.data_.darec"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__fcer = {fReader, "TStancuPi0Chunk.data_.fcer"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__phi1 = {fReader, "TStancuPi0Chunk.data_.phi1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__teta1 = {fReader, "TStancuPi0Chunk.data_.teta1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__phi2 = {fReader, "TStancuPi0Chunk.data_.phi2"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__teta2 = {fReader, "TStancuPi0Chunk.data_.teta2"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__cer1 = {fReader, "TStancuPi0Chunk.data_.cer1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__sci1 = {fReader, "TStancuPi0Chunk.data_.sci1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__cer2 = {fReader, "TStancuPi0Chunk.data_.cer2"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__sci2 = {fReader, "TStancuPi0Chunk.data_.sci2"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__srec1 = {fReader, "TStancuPi0Chunk.data_.srec1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__dist1 = {fReader, "TStancuPi0Chunk.data_.dist1"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__srec2 = {fReader, "TStancuPi0Chunk.data_.srec2"};
   TTreeReaderArray<Float_t> TStancuPi0Chunk_data__dist2 = {fReader, "TStancuPi0Chunk.data_.dist2"};
   TTreeReaderArray<Int_t> TStancuVarsChunk_chunk_id_ = {fReader, "TStancuVarsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuVarsChunk_data__fUniqueID = {fReader, "TStancuVarsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuVarsChunk_data__fBits = {fReader, "TStancuVarsChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TStancuVarsChunk_data__nchunks = {fReader, "TStancuVarsChunk.data_.nchunks"};
   TTreeReaderArray<Int_t> TStancuVarsChunk_data__chunknr = {fReader, "TStancuVarsChunk.data_.chunknr"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__energy = {fReader, "TStancuVarsChunk.data_.energy"};
   TTreeReaderArray<Int_t> TStancuVarsChunk_data__thits = {fReader, "TStancuVarsChunk.data_.thits"};
   TTreeReaderArray<Int_t> TStancuVarsChunk_data__vhits = {fReader, "TStancuVarsChunk.data_.vhits"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__d = {fReader, "TStancuVarsChunk.data_.d"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rdr = {fReader, "TStancuVarsChunk.data_.rdr"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__stint = {fReader, "TStancuVarsChunk.data_.stint"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_rawtsig = {fReader, "TStancuVarsChunk.data_.EMu_rawtsig"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_rawtavg = {fReader, "TStancuVarsChunk.data_.EMu_rawtavg"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_trak = {fReader, "TStancuVarsChunk.data_.EMu_trak"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_qlful = {fReader, "TStancuVarsChunk.data_.EMu_qlful"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_tlful = {fReader, "TStancuVarsChunk.data_.EMu_tlful"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_tlb45 = {fReader, "TStancuVarsChunk.data_.EMu_tlb45"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_tlb24 = {fReader, "TStancuVarsChunk.data_.EMu_tlb24"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_tlm22 = {fReader, "TStancuVarsChunk.data_.EMu_tlm22"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_tlsci = {fReader, "TStancuVarsChunk.data_.EMu_tlsci"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_qtmr4 = {fReader, "TStancuVarsChunk.data_.EMu_qtmr4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_qtmr3 = {fReader, "TStancuVarsChunk.data_.EMu_qtmr3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_fthvp = {fReader, "TStancuVarsChunk.data_.EMu_fthvp"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_fthvl = {fReader, "TStancuVarsChunk.data_.EMu_fthvl"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_rslvl53 = {fReader, "TStancuVarsChunk.data_.EMu_rslvl53"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EMu_rslvl64 = {fReader, "TStancuVarsChunk.data_.EMu_rslvl64"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_mass = {fReader, "TStancuVarsChunk.data_.EPi_mass"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_angle = {fReader, "TStancuVarsChunk.data_.EPi_angle"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_trak = {fReader, "TStancuVarsChunk.data_.EPi_trak"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_qlful = {fReader, "TStancuVarsChunk.data_.EPi_qlful"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_tlful = {fReader, "TStancuVarsChunk.data_.EPi_tlful"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_tlcer = {fReader, "TStancuVarsChunk.data_.EPi_tlcer"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_rslvl53 = {fReader, "TStancuVarsChunk.data_.EPi_rslvl53"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_rslvl64 = {fReader, "TStancuVarsChunk.data_.EPi_rslvl64"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_scratio = {fReader, "TStancuVarsChunk.data_.EPi_scratio"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_qqover = {fReader, "TStancuVarsChunk.data_.EPi_qqover"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_fmdiff = {fReader, "TStancuVarsChunk.data_.EPi_fmdiff"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_qldiff = {fReader, "TStancuVarsChunk.data_.EPi_qldiff"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_tldiff = {fReader, "TStancuVarsChunk.data_.EPi_tldiff"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_fcer = {fReader, "TStancuVarsChunk.data_.EPi_fcer"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_qtmr0 = {fReader, "TStancuVarsChunk.data_.EPi_qtmr0"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_dcbeam = {fReader, "TStancuVarsChunk.data_.EPi_dcbeam"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_qtmr56 = {fReader, "TStancuVarsChunk.data_.EPi_qtmr56"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_tlb245 = {fReader, "TStancuVarsChunk.data_.EPi_tlb245"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__EPi_dist1 = {fReader, "TStancuVarsChunk.data_.EPi_dist1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh11p13 = {fReader, "TStancuVarsChunk.data_.fqlkh11p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh9p14 = {fReader, "TStancuVarsChunk.data_.fqlkh9p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh1t5p1518 = {fReader, "TStancuVarsChunk.data_.fqlkh1t5p1518"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh1p18 = {fReader, "TStancuVarsChunk.data_.fqlkh1p18"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh13p14 = {fReader, "TStancuVarsChunk.data_.fqlkh13p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlkh11t14 = {fReader, "TStancuVarsChunk.data_.fqlkh11t14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrpp = {fReader, "TStancuVarsChunk.data_.qtmrpp"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrmm = {fReader, "TStancuVarsChunk.data_.qtmrmm"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr7m2 = {fReader, "TStancuVarsChunk.data_.qtmr7m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr8m5 = {fReader, "TStancuVarsChunk.data_.qtmr8m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr5m2 = {fReader, "TStancuVarsChunk.data_.qtmr5m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr5m3 = {fReader, "TStancuVarsChunk.data_.qtmr5m3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr0p5 = {fReader, "TStancuVarsChunk.data_.qtmr0p5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr4p5 = {fReader, "TStancuVarsChunk.data_.qtmr4p5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr6p7 = {fReader, "TStancuVarsChunk.data_.qtmr6p7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrc2 = {fReader, "TStancuVarsChunk.data_.qtmrc2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__nqtmr17p18 = {fReader, "TStancuVarsChunk.data_.nqtmr17p18"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__nqtmr18p19 = {fReader, "TStancuVarsChunk.data_.nqtmr18p19"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__nqtmr16 = {fReader, "TStancuVarsChunk.data_.nqtmr16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rsqtmr13 = {fReader, "TStancuVarsChunk.data_.rsqtmr13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rsqtmr16 = {fReader, "TStancuVarsChunk.data_.rsqtmr16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rsqtmr14 = {fReader, "TStancuVarsChunk.data_.rsqtmr14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit4p9 = {fReader, "TStancuVarsChunk.data_.ftnhit4p9"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit4 = {fReader, "TStancuVarsChunk.data_.ftnhit4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit3p6 = {fReader, "TStancuVarsChunk.data_.ftnhit3p6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit4p5 = {fReader, "TStancuVarsChunk.data_.ftnhit4p5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit4p8 = {fReader, "TStancuVarsChunk.data_.ftnhit4p8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit4p10 = {fReader, "TStancuVarsChunk.data_.ftnhit4p10"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph13p14 = {fReader, "TStancuVarsChunk.data_.tlph13p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph14p15 = {fReader, "TStancuVarsChunk.data_.tlph14p15"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph16 = {fReader, "TStancuVarsChunk.data_.tlph16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph11p15 = {fReader, "TStancuVarsChunk.data_.tlph11p15"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph15p17 = {fReader, "TStancuVarsChunk.data_.tlph15p17"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph15p16 = {fReader, "TStancuVarsChunk.data_.tlph15p16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlph16p17 = {fReader, "TStancuVarsChunk.data_.tlph16p17"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlt05 = {fReader, "TStancuVarsChunk.data_.fqlt05"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlt10 = {fReader, "TStancuVarsChunk.data_.fqlt10"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fthjp = {fReader, "TStancuVarsChunk.data_.fthjp"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fthjl = {fReader, "TStancuVarsChunk.data_.fthjl"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fthvp = {fReader, "TStancuVarsChunk.data_.fthvp"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk014p15 = {fReader, "TStancuVarsChunk.data_.fqlk014p15"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk08p13 = {fReader, "TStancuVarsChunk.data_.fqlk08p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk012p14 = {fReader, "TStancuVarsChunk.data_.fqlk012p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk010p13 = {fReader, "TStancuVarsChunk.data_.fqlk010p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk011p13 = {fReader, "TStancuVarsChunk.data_.fqlk011p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk012p13 = {fReader, "TStancuVarsChunk.data_.fqlk012p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk013p14 = {fReader, "TStancuVarsChunk.data_.fqlk013p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqlk016p17 = {fReader, "TStancuVarsChunk.data_.fqlk016p17"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec6t14 = {fReader, "TStancuVarsChunk.data_.fqrec6t14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec15t20 = {fReader, "TStancuVarsChunk.data_.fqrec15t20"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec15t16 = {fReader, "TStancuVarsChunk.data_.fqrec15t16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec1t10 = {fReader, "TStancuVarsChunk.data_.fqrec1t10"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec6t10 = {fReader, "TStancuVarsChunk.data_.fqrec6t10"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fqrec15t18 = {fReader, "TStancuVarsChunk.data_.fqrec15t18"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fn018m14 = {fReader, "TStancuVarsChunk.data_.fn018m14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fn014p16 = {fReader, "TStancuVarsChunk.data_.fn014p16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fn010p16 = {fReader, "TStancuVarsChunk.data_.fn010p16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsn013 = {fReader, "TStancuVarsChunk.data_.frsn013"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsn011 = {fReader, "TStancuVarsChunk.data_.frsn011"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsn010p13 = {fReader, "TStancuVarsChunk.data_.frsn010p13"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsn010p14 = {fReader, "TStancuVarsChunk.data_.frsn010p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsn011p14 = {fReader, "TStancuVarsChunk.data_.frsn011p14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rslvl9m1ovq = {fReader, "TStancuVarsChunk.data_.rslvl9m1ovq"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rslvl3p9ovq = {fReader, "TStancuVarsChunk.data_.rslvl3p9ovq"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rslvl7m4ovq = {fReader, "TStancuVarsChunk.data_.rslvl7m4ovq"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rslvl1p8ovq = {fReader, "TStancuVarsChunk.data_.rslvl1p8ovq"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__rslvl8p9ovq = {fReader, "TStancuVarsChunk.data_.rslvl8p9ovq"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlph16m12 = {fReader, "TStancuVarsChunk.data_.qlph16m12"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlph16m8 = {fReader, "TStancuVarsChunk.data_.qlph16m8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01ql2 = {fReader, "TStancuVarsChunk.data_.pi01ql2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01ql4 = {fReader, "TStancuVarsChunk.data_.pi01ql4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi02ql3 = {fReader, "TStancuVarsChunk.data_.pi02ql3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01ql1 = {fReader, "TStancuVarsChunk.data_.pi01ql1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01tl2 = {fReader, "TStancuVarsChunk.data_.pi01tl2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi02tl4 = {fReader, "TStancuVarsChunk.data_.pi02tl4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fnh1t5p1518 = {fReader, "TStancuVarsChunk.data_.fnh1t5p1518"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fnh11t14 = {fReader, "TStancuVarsChunk.data_.fnh11t14"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftq4 = {fReader, "TStancuVarsChunk.data_.ftq4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frsq14p20 = {fReader, "TStancuVarsChunk.data_.frsq14p20"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqlk02p16 = {fReader, "TStancuVarsChunk.data_.frqlk02p16"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__trakove = {fReader, "TStancuVarsChunk.data_.trakove"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fcertflx = {fReader, "TStancuVarsChunk.data_.fcertflx"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__srec1 = {fReader, "TStancuVarsChunk.data_.srec1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__nqovovthit = {fReader, "TStancuVarsChunk.data_.nqovovthit"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qcer2ovqtot = {fReader, "TStancuVarsChunk.data_.qcer2ovqtot"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos8 = {fReader, "TStancuVarsChunk.data_.qtmrcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqqov = {fReader, "TStancuVarsChunk.data_.frqqov"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frrs6m1 = {fReader, "TStancuVarsChunk.data_.frrs6m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnqcer1 = {fReader, "TStancuVarsChunk.data_.frnqcer1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__cerfrdiff = {fReader, "TStancuVarsChunk.data_.cerfrdiff"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m1 = {fReader, "TStancuVarsChunk.data_.tlphcos8m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ql0cos6 = {fReader, "TStancuVarsChunk.data_.ql0cos6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m5 = {fReader, "TStancuVarsChunk.data_.tlphcos8m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frrs7m1 = {fReader, "TStancuVarsChunk.data_.frrs7m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit9m3 = {fReader, "TStancuVarsChunk.data_.ftnhit9m3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frchia10m4 = {fReader, "TStancuVarsChunk.data_.frchia10m4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos8m5 = {fReader, "TStancuVarsChunk.data_.qtmrcos8m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos4m1 = {fReader, "TStancuVarsChunk.data_.tlphcos4m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos7 = {fReader, "TStancuVarsChunk.data_.qtmrcos7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__chirsqrec = {fReader, "TStancuVarsChunk.data_.chirsqrec"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ffast = {fReader, "TStancuVarsChunk.data_.ffast"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ffulmffas = {fReader, "TStancuVarsChunk.data_.ffulmffas"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fflux = {fReader, "TStancuVarsChunk.data_.fflux"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frcer1 = {fReader, "TStancuVarsChunk.data_.frcer1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frcer2 = {fReader, "TStancuVarsChunk.data_.frcer2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnqcer1m2 = {fReader, "TStancuVarsChunk.data_.frnqcer1m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqqcer1m2 = {fReader, "TStancuVarsChunk.data_.frqqcer1m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcer1mov = {fReader, "TStancuVarsChunk.data_.frqcer1mov"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01ql3 = {fReader, "TStancuVarsChunk.data_.pi01ql3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi02ql4 = {fReader, "TStancuVarsChunk.data_.pi02ql4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi02fthl = {fReader, "TStancuVarsChunk.data_.pi02fthl"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__srec2 = {fReader, "TStancuVarsChunk.data_.srec2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__dist2 = {fReader, "TStancuVarsChunk.data_.dist2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr5 = {fReader, "TStancuVarsChunk.data_.qtmr5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr5m4 = {fReader, "TStancuVarsChunk.data_.qtmr5m4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr7m6 = {fReader, "TStancuVarsChunk.data_.qtmr7m6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__chiqrec = {fReader, "TStancuVarsChunk.data_.chiqrec"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlfwd = {fReader, "TStancuVarsChunk.data_.tlfwd"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos6 = {fReader, "TStancuVarsChunk.data_.qtmrcos6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos5m1 = {fReader, "TStancuVarsChunk.data_.qtmrcos5m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos6m1 = {fReader, "TStancuVarsChunk.data_.qtmrcos6m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos7m2 = {fReader, "TStancuVarsChunk.data_.qtmrcos7m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos7m5 = {fReader, "TStancuVarsChunk.data_.qtmrcos7m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos8m3 = {fReader, "TStancuVarsChunk.data_.qtmrcos8m3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos8m6 = {fReader, "TStancuVarsChunk.data_.qtmrcos8m6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos10m2 = {fReader, "TStancuVarsChunk.data_.qtmrcos10m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos10m5 = {fReader, "TStancuVarsChunk.data_.qtmrcos10m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos8 = {fReader, "TStancuVarsChunk.data_.frqcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos6m1 = {fReader, "TStancuVarsChunk.data_.frqcos6m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos8m3 = {fReader, "TStancuVarsChunk.data_.frqcos8m3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos8m4 = {fReader, "TStancuVarsChunk.data_.frqcos8m4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos8m5 = {fReader, "TStancuVarsChunk.data_.frqcos8m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos8m7 = {fReader, "TStancuVarsChunk.data_.frqcos8m7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos10m3 = {fReader, "TStancuVarsChunk.data_.frqcos10m3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frqcos10m8 = {fReader, "TStancuVarsChunk.data_.frqcos10m8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ql0cos7 = {fReader, "TStancuVarsChunk.data_.ql0cos7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ql0cos10 = {fReader, "TStancuVarsChunk.data_.ql0cos10"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlkcos3 = {fReader, "TStancuVarsChunk.data_.qlkcos3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlkcos8 = {fReader, "TStancuVarsChunk.data_.qlkcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlphcos7 = {fReader, "TStancuVarsChunk.data_.qlphcos7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlppmtcos5 = {fReader, "TStancuVarsChunk.data_.qlppmtcos5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlppmtcos6 = {fReader, "TStancuVarsChunk.data_.qlppmtcos6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlppmtcos8 = {fReader, "TStancuVarsChunk.data_.qlppmtcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qlppmtcos8m6 = {fReader, "TStancuVarsChunk.data_.qlppmtcos8m6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos5 = {fReader, "TStancuVarsChunk.data_.tlphcos5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8 = {fReader, "TStancuVarsChunk.data_.tlphcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos5m1 = {fReader, "TStancuVarsChunk.data_.tlphcos5m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos6m2 = {fReader, "TStancuVarsChunk.data_.tlphcos6m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m2 = {fReader, "TStancuVarsChunk.data_.tlphcos8m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m4 = {fReader, "TStancuVarsChunk.data_.tlphcos8m4"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m7 = {fReader, "TStancuVarsChunk.data_.tlphcos8m7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos9m1 = {fReader, "TStancuVarsChunk.data_.tlphcos9m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos9m2 = {fReader, "TStancuVarsChunk.data_.tlphcos9m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos10m8 = {fReader, "TStancuVarsChunk.data_.tlphcos10m8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos10m9 = {fReader, "TStancuVarsChunk.data_.tlphcos10m9"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhcos8 = {fReader, "TStancuVarsChunk.data_.frnhcos8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhcos10m8 = {fReader, "TStancuVarsChunk.data_.frnhcos10m8"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrsnb7 = {fReader, "TStancuVarsChunk.data_.qtmrsnb7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhnb8m2 = {fReader, "TStancuVarsChunk.data_.frnhnb8m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhrsnb5 = {fReader, "TStancuVarsChunk.data_.frnhrsnb5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frrs8m1 = {fReader, "TStancuVarsChunk.data_.frrs8m1"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__ftnhit3m2 = {fReader, "TStancuVarsChunk.data_.ftnhit3m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi02tl3 = {fReader, "TStancuVarsChunk.data_.pi02tl3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__pi01tl3 = {fReader, "TStancuVarsChunk.data_.pi01tl3"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr7m5 = {fReader, "TStancuVarsChunk.data_.qtmr7m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr9m5 = {fReader, "TStancuVarsChunk.data_.qtmr9m5"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmr4m2 = {fReader, "TStancuVarsChunk.data_.qtmr4m2"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qcer1ovqtot = {fReader, "TStancuVarsChunk.data_.qcer1ovqtot"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__fscitflx = {fReader, "TStancuVarsChunk.data_.fscitflx"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__abscerasy = {fReader, "TStancuVarsChunk.data_.abscerasy"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__qtmrcos8m7 = {fReader, "TStancuVarsChunk.data_.qtmrcos8m7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos7 = {fReader, "TStancuVarsChunk.data_.tlphcos7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos8m6 = {fReader, "TStancuVarsChunk.data_.tlphcos8m6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos9m6 = {fReader, "TStancuVarsChunk.data_.tlphcos9m6"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__tlphcos9m7 = {fReader, "TStancuVarsChunk.data_.tlphcos9m7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhcos8m7 = {fReader, "TStancuVarsChunk.data_.frnhcos8m7"};
   TTreeReaderArray<Float_t> TStancuVarsChunk_data__frnhcos9m8 = {fReader, "TStancuVarsChunk.data_.frnhcos9m8"};
   TTreeReaderArray<Int_t> TStancuVarsTwoChunk_chunk_id_ = {fReader, "TStancuVarsTwoChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TStancuVarsTwoChunk_data__fUniqueID = {fReader, "TStancuVarsTwoChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TStancuVarsTwoChunk_data__fBits = {fReader, "TStancuVarsTwoChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TVetoLinkingChunk_chunk_id_ = {fReader, "TVetoLinkingChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TVetoLinkingChunk_data__fUniqueID = {fReader, "TVetoLinkingChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TVetoLinkingChunk_data__fBits = {fReader, "TVetoLinkingChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__EnDl = {fReader, "TVetoLinkingChunk.data_.EnDl"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__ExDl = {fReader, "TVetoLinkingChunk.data_.ExDl"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__EnSigma = {fReader, "TVetoLinkingChunk.data_.EnSigma"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__ExSigma = {fReader, "TVetoLinkingChunk.data_.ExSigma"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__EnDt = {fReader, "TVetoLinkingChunk.data_.EnDt"};
   TTreeReaderArray<Float_t> TVetoLinkingChunk_data__ExDt = {fReader, "TVetoLinkingChunk.data_.ExDt"};
   TTreeReaderArray<Int_t> TVetoLinkingChunk_data__NC = {fReader, "TVetoLinkingChunk.data_.NC"};
   TTreeReaderArray<Int_t> TVetoLinkingChunk_data__Enter = {fReader, "TVetoLinkingChunk.data_.Enter"};
   TTreeReaderArray<Int_t> TVetoLinkingChunk_data__Exit = {fReader, "TVetoLinkingChunk.data_.Exit"};
   TTreeReaderArray<Int_t> TCalibrateEnergyChunk_chunk_id_ = {fReader, "TCalibrateEnergyChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TCalibrateEnergyChunk_data__fUniqueID = {fReader, "TCalibrateEnergyChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TCalibrateEnergyChunk_data__fBits = {fReader, "TCalibrateEnergyChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__Tlep_e = {fReader, "TCalibrateEnergyChunk.data_.Tlep_e"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__Tlep_m = {fReader, "TCalibrateEnergyChunk.data_.Tlep_m"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__Qsq_e = {fReader, "TCalibrateEnergyChunk.data_.Qsq_e"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__Qsq_m = {fReader, "TCalibrateEnergyChunk.data_.Qsq_m"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__EnuQE_e = {fReader, "TCalibrateEnergyChunk.data_.EnuQE_e"};
   TTreeReaderArray<Float_t> TCalibrateEnergyChunk_data__EnuQE_m = {fReader, "TCalibrateEnergyChunk.data_.EnuQE_m"};
   TTreeReaderArray<Int_t> TInteractionPointChunk_chunk_id_ = {fReader, "TInteractionPointChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TInteractionPointChunk_data__fUniqueID = {fReader, "TInteractionPointChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TInteractionPointChunk_data__fBits = {fReader, "TInteractionPointChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__X_e = {fReader, "TInteractionPointChunk.data_.X_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__Y_e = {fReader, "TInteractionPointChunk.data_.Y_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__Z_e = {fReader, "TInteractionPointChunk.data_.Z_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__T_e = {fReader, "TInteractionPointChunk.data_.T_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__drive_e = {fReader, "TInteractionPointChunk.data_.drive_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__tdrive_e = {fReader, "TInteractionPointChunk.data_.tdrive_e"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__X_m = {fReader, "TInteractionPointChunk.data_.X_m"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__Y_m = {fReader, "TInteractionPointChunk.data_.Y_m"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__Z_m = {fReader, "TInteractionPointChunk.data_.Z_m"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__T_m = {fReader, "TInteractionPointChunk.data_.T_m"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__drive_m = {fReader, "TInteractionPointChunk.data_.drive_m"};
   TTreeReaderArray<Float_t> TInteractionPointChunk_data__tdrive_m = {fReader, "TInteractionPointChunk.data_.tdrive_m"};
   TTreeReaderArray<Int_t> TOneTrackChunk_chunk_id_ = {fReader, "TOneTrackChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TOneTrackChunk_data__fUniqueID = {fReader, "TOneTrackChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TOneTrackChunk_data__fBits = {fReader, "TOneTrackChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TOneTrackChunk_data__iterations = {fReader, "TOneTrackChunk.data_.iterations"};
   TTreeReaderArray<Int_t> TOneTrackChunk_data__trackType = {fReader, "TOneTrackChunk.data_.trackType"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__X = {fReader, "TOneTrackChunk.data_.X"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__Y = {fReader, "TOneTrackChunk.data_.Y"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__Z = {fReader, "TOneTrackChunk.data_.Z"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__UX = {fReader, "TOneTrackChunk.data_.UX"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__UY = {fReader, "TOneTrackChunk.data_.UY"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__UZ = {fReader, "TOneTrackChunk.data_.UZ"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__T = {fReader, "TOneTrackChunk.data_.T"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__E = {fReader, "TOneTrackChunk.data_.E"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__distToMeanCer = {fReader, "TOneTrackChunk.data_.distToMeanCer"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__fluxScale = {fReader, "TOneTrackChunk.data_.fluxScale"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__relativeSci = {fReader, "TOneTrackChunk.data_.relativeSci"};
   TTreeReaderArray<Float_t> TOneTrackChunk_data__F = {fReader, "TOneTrackChunk.data_.F"};
   TTreeReaderArray<Int_t> TRoeFullChunk_chunk_id_ = {fReader, "TRoeFullChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TRoeFullChunk_data__fUniqueID = {fReader, "TRoeFullChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TRoeFullChunk_data__fBits = {fReader, "TRoeFullChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__time = {fReader, "TRoeFullChunk.data_.time"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__length = {fReader, "TRoeFullChunk.data_.length"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__time_v = {fReader, "TRoeFullChunk.data_.time_v"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__charge_infit = {fReader, "TRoeFullChunk.data_.charge_infit"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__charge_wgt_infit = {fReader, "TRoeFullChunk.data_.charge_wgt_infit"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__chisq_a_infit = {fReader, "TRoeFullChunk.data_.chisq_a_infit"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__chisq_r_infit = {fReader, "TRoeFullChunk.data_.chisq_r_infit"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__weight_total = {fReader, "TRoeFullChunk.data_.weight_total"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__chisq_avg = {fReader, "TRoeFullChunk.data_.chisq_avg"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__rtowall = {fReader, "TRoeFullChunk.data_.rtowall"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__Energy = {fReader, "TRoeFullChunk.data_.Energy"};
   TTreeReaderArray<Int_t> TRoeFullChunk_data__numhits_infit = {fReader, "TRoeFullChunk.data_.numhits_infit"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__EnergyMU = {fReader, "TRoeFullChunk.data_.EnergyMU"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__lengthMU = {fReader, "TRoeFullChunk.data_.lengthMU"};
   TTreeReaderArray<Float_t> TRoeFullChunk_data__chg_length_nue = {fReader, "TRoeFullChunk.data_.chg_length_nue"};
   TTreeReaderArray<Int_t> TFittersChunk_chunk_id_ = {fReader, "TFittersChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TFittersChunk_data__fUniqueID = {fReader, "TFittersChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TFittersChunk_data__fBits = {fReader, "TFittersChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TFittersChunk_data__x = {fReader, "TFittersChunk.data_.x"};
   TTreeReaderArray<Float_t> TFittersChunk_data__y = {fReader, "TFittersChunk.data_.y"};
   TTreeReaderArray<Float_t> TFittersChunk_data__z = {fReader, "TFittersChunk.data_.z"};
   TTreeReaderArray<Float_t> TFittersChunk_data__t = {fReader, "TFittersChunk.data_.t"};
   TTreeReaderArray<Float_t> TFittersChunk_data__ux = {fReader, "TFittersChunk.data_.ux"};
   TTreeReaderArray<Float_t> TFittersChunk_data__uy = {fReader, "TFittersChunk.data_.uy"};
   TTreeReaderArray<Float_t> TFittersChunk_data__uz = {fReader, "TFittersChunk.data_.uz"};
   TTreeReaderArray<Float_t> TFittersChunk_data__r3 = {fReader, "TFittersChunk.data_.r3"};
   TTreeReaderArray<Float_t> TFittersChunk_data__e = {fReader, "TFittersChunk.data_.e"};
   TTreeReaderArray<Float_t> TFittersChunk_data__trklen = {fReader, "TFittersChunk.data_.trklen"};
   TTreeReaderArray<Float_t> TFittersChunk_data__emu = {fReader, "TFittersChunk.data_.emu"};
   TTreeReaderArray<Float_t> TFittersChunk_data__trklenmu = {fReader, "TFittersChunk.data_.trklenmu"};
   TTreeReaderArray<Float_t> TFittersChunk_data__goodfit = {fReader, "TFittersChunk.data_.goodfit"};
   TTreeReaderArray<Int_t> TYangVarChunk_chunk_id_ = {fReader, "TYangVarChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TYangVarChunk_data__fUniqueID = {fReader, "TYangVarChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TYangVarChunk_data__fBits = {fReader, "TYangVarChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__cx = {fReader, "TYangVarChunk.data_.cx"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__cy = {fReader, "TYangVarChunk.data_.cy"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__cz = {fReader, "TYangVarChunk.data_.cz"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__ux = {fReader, "TYangVarChunk.data_.ux"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__uy = {fReader, "TYangVarChunk.data_.uy"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__uz = {fReader, "TYangVarChunk.data_.uz"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__time = {fReader, "TYangVarChunk.data_.time"};
   TTreeReaderArray<Int_t> TYangVarChunk_data__tot_hit = {fReader, "TYangVarChunk.data_.tot_hit"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__tot_q = {fReader, "TYangVarChunk.data_.tot_q"};
   TTreeReaderArray<Float_t> TYangVarChunk_data__length = {fReader, "TYangVarChunk.data_.length"};
   TTreeReaderArray<Int_t> TPFitterChunk_chunk_id_ = {fReader, "TPFitterChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TPFitterChunk_data__fUniqueID = {fReader, "TPFitterChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TPFitterChunk_data__fBits = {fReader, "TPFitterChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_x = {fReader, "TPFitterChunk.data_.mu_x"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_y = {fReader, "TPFitterChunk.data_.mu_y"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_z = {fReader, "TPFitterChunk.data_.mu_z"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_ux = {fReader, "TPFitterChunk.data_.mu_ux"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_uy = {fReader, "TPFitterChunk.data_.mu_uy"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_uz = {fReader, "TPFitterChunk.data_.mu_uz"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_T = {fReader, "TPFitterChunk.data_.mu_T"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_E = {fReader, "TPFitterChunk.data_.mu_E"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_distToMeanCer = {fReader, "TPFitterChunk.data_.mu_distToMeanCer"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__mu_F = {fReader, "TPFitterChunk.data_.mu_F"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_x = {fReader, "TPFitterChunk.data_.e_x"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_y = {fReader, "TPFitterChunk.data_.e_y"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_z = {fReader, "TPFitterChunk.data_.e_z"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_ux = {fReader, "TPFitterChunk.data_.e_ux"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_uy = {fReader, "TPFitterChunk.data_.e_uy"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_uz = {fReader, "TPFitterChunk.data_.e_uz"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_T = {fReader, "TPFitterChunk.data_.e_T"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_E = {fReader, "TPFitterChunk.data_.e_E"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_distToMeanCer = {fReader, "TPFitterChunk.data_.e_distToMeanCer"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__e_F = {fReader, "TPFitterChunk.data_.e_F"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_T = {fReader, "TPFitterChunk.data_.pi_T"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_M = {fReader, "TPFitterChunk.data_.pi_M"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_Cos0p = {fReader, "TPFitterChunk.data_.pi_Cos0p"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_E1 = {fReader, "TPFitterChunk.data_.pi_E1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_E2 = {fReader, "TPFitterChunk.data_.pi_E2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_distToMeanCer1 = {fReader, "TPFitterChunk.data_.pi_distToMeanCer1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_distToMeanCer2 = {fReader, "TPFitterChunk.data_.pi_distToMeanCer2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_S1 = {fReader, "TPFitterChunk.data_.pi_S1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_S2 = {fReader, "TPFitterChunk.data_.pi_S2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_Fqqq = {fReader, "TPFitterChunk.data_.pi_Fqqq"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_Fttt = {fReader, "TPFitterChunk.data_.pi_Fttt"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pi_F = {fReader, "TPFitterChunk.data_.pi_F"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_T = {fReader, "TPFitterChunk.data_.pifix_T"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_M = {fReader, "TPFitterChunk.data_.pifix_M"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_Cos0p = {fReader, "TPFitterChunk.data_.pifix_Cos0p"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_E1 = {fReader, "TPFitterChunk.data_.pifix_E1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_E2 = {fReader, "TPFitterChunk.data_.pifix_E2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_distToMeanCer1 = {fReader, "TPFitterChunk.data_.pifix_distToMeanCer1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_distToMeanCer2 = {fReader, "TPFitterChunk.data_.pifix_distToMeanCer2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_S1 = {fReader, "TPFitterChunk.data_.pifix_S1"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_S2 = {fReader, "TPFitterChunk.data_.pifix_S2"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_Fqqq = {fReader, "TPFitterChunk.data_.pifix_Fqqq"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_Fttt = {fReader, "TPFitterChunk.data_.pifix_Fttt"};
   TTreeReaderArray<Float_t> TPFitterChunk_data__pifix_F = {fReader, "TPFitterChunk.data_.pifix_F"};
   TTreeReaderArray<Int_t> TRoePiChunk_chunk_id_ = {fReader, "TRoePiChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TRoePiChunk_data__fUniqueID = {fReader, "TRoePiChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TRoePiChunk_data__fBits = {fReader, "TRoePiChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__time_v = {fReader, "TRoePiChunk.data_.time_v"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__shiftg1 = {fReader, "TRoePiChunk.data_.shiftg1"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__shiftg2 = {fReader, "TRoePiChunk.data_.shiftg2"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__chge_g1 = {fReader, "TRoePiChunk.data_.chge_g1"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__chge_g2 = {fReader, "TRoePiChunk.data_.chge_g2"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__chgew_g1 = {fReader, "TRoePiChunk.data_.chgew_g1"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__chgew_g2 = {fReader, "TRoePiChunk.data_.chgew_g2"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__Eg1 = {fReader, "TRoePiChunk.data_.Eg1"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__Eg2 = {fReader, "TRoePiChunk.data_.Eg2"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__pi0mass = {fReader, "TRoePiChunk.data_.pi0mass"};
   TTreeReaderArray<Float_t> TRoePiChunk_data__cosang1 = {fReader, "TRoePiChunk.data_.cosang1"};
   TTreeReaderArray<Int_t> TFittersPi0Chunk_chunk_id_ = {fReader, "TFittersPi0Chunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TFittersPi0Chunk_data__fUniqueID = {fReader, "TFittersPi0Chunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TFittersPi0Chunk_data__fBits = {fReader, "TFittersPi0Chunk.data_.fBits"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__x = {fReader, "TFittersPi0Chunk.data_.x"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__y = {fReader, "TFittersPi0Chunk.data_.y"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__z = {fReader, "TFittersPi0Chunk.data_.z"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__t = {fReader, "TFittersPi0Chunk.data_.t"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__mass = {fReader, "TFittersPi0Chunk.data_.mass"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__angle = {fReader, "TFittersPi0Chunk.data_.angle"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__eg1 = {fReader, "TFittersPi0Chunk.data_.eg1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__eg2 = {fReader, "TFittersPi0Chunk.data_.eg2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__shift1 = {fReader, "TFittersPi0Chunk.data_.shift1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__shift2 = {fReader, "TFittersPi0Chunk.data_.shift2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__ux1 = {fReader, "TFittersPi0Chunk.data_.ux1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__uy1 = {fReader, "TFittersPi0Chunk.data_.uy1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__uz1 = {fReader, "TFittersPi0Chunk.data_.uz1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__ux2 = {fReader, "TFittersPi0Chunk.data_.ux2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__uy2 = {fReader, "TFittersPi0Chunk.data_.uy2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__uz2 = {fReader, "TFittersPi0Chunk.data_.uz2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__qgamma1 = {fReader, "TFittersPi0Chunk.data_.qgamma1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__qgamma2 = {fReader, "TFittersPi0Chunk.data_.qgamma2"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__cosang1 = {fReader, "TFittersPi0Chunk.data_.cosang1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__chg_length_g1 = {fReader, "TFittersPi0Chunk.data_.chg_length_g1"};
   TTreeReaderArray<Float_t> TFittersPi0Chunk_data__chg_length_g2 = {fReader, "TFittersPi0Chunk.data_.chg_length_g2"};
   TTreeReaderArray<Int_t> TParticleIDChunk_chunk_id_ = {fReader, "TParticleIDChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TParticleIDChunk_data__fUniqueID = {fReader, "TParticleIDChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TParticleIDChunk_data__fBits = {fReader, "TParticleIDChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TTwoTrackChunk_chunk_id_ = {fReader, "TTwoTrackChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TTwoTrackChunk_data__fUniqueID = {fReader, "TTwoTrackChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TTwoTrackChunk_data__fBits = {fReader, "TTwoTrackChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TTwoTrackChunk_data__trackType1 = {fReader, "TTwoTrackChunk.data_.trackType1"};
   TTreeReaderArray<Int_t> TTwoTrackChunk_data__trackType2 = {fReader, "TTwoTrackChunk.data_.trackType2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__X = {fReader, "TTwoTrackChunk.data_.X"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__Y = {fReader, "TTwoTrackChunk.data_.Y"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__Z = {fReader, "TTwoTrackChunk.data_.Z"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__T = {fReader, "TTwoTrackChunk.data_.T"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__M = {fReader, "TTwoTrackChunk.data_.M"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__CosOp = {fReader, "TTwoTrackChunk.data_.CosOp"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UX1 = {fReader, "TTwoTrackChunk.data_.UX1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UY1 = {fReader, "TTwoTrackChunk.data_.UY1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UZ1 = {fReader, "TTwoTrackChunk.data_.UZ1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__E1 = {fReader, "TTwoTrackChunk.data_.E1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__distToMeanCer1 = {fReader, "TTwoTrackChunk.data_.distToMeanCer1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__S1 = {fReader, "TTwoTrackChunk.data_.S1"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UX2 = {fReader, "TTwoTrackChunk.data_.UX2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UY2 = {fReader, "TTwoTrackChunk.data_.UY2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__UZ2 = {fReader, "TTwoTrackChunk.data_.UZ2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__E2 = {fReader, "TTwoTrackChunk.data_.E2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__distToMeanCer2 = {fReader, "TTwoTrackChunk.data_.distToMeanCer2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__S2 = {fReader, "TTwoTrackChunk.data_.S2"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__fluxScale = {fReader, "TTwoTrackChunk.data_.fluxScale"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__relativeSci = {fReader, "TTwoTrackChunk.data_.relativeSci"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__Fqqq = {fReader, "TTwoTrackChunk.data_.Fqqq"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__Fttt = {fReader, "TTwoTrackChunk.data_.Fttt"};
   TTreeReaderArray<Float_t> TTwoTrackChunk_data__F = {fReader, "TTwoTrackChunk.data_.F"};
   TTreeReaderArray<Int_t> TTwoTrackChunk_data__fixedMass = {fReader, "TTwoTrackChunk.data_.fixedMass"};
   TTreeReaderArray<Int_t> TTwoTrackPredictionsChunk_chunk_id_ = {fReader, "TTwoTrackPredictionsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TTwoTrackPredictionsChunk_data__fUniqueID = {fReader, "TTwoTrackPredictionsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TTwoTrackPredictionsChunk_data__fBits = {fReader, "TTwoTrackPredictionsChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_chunk_id_ = {fReader, "TTwoTrackEndConditionsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TTwoTrackEndConditionsChunk_data__fUniqueID = {fReader, "TTwoTrackEndConditionsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TTwoTrackEndConditionsChunk_data__fBits = {fReader, "TTwoTrackEndConditionsChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TTwoTrackEndConditionsChunk_data__OneTrack_E = {fReader, "TTwoTrackEndConditionsChunk.data_.OneTrack_E"};
   TTreeReaderArray<Float_t> TTwoTrackEndConditionsChunk_data__OneTrack_F = {fReader, "TTwoTrackEndConditionsChunk.data_.OneTrack_F"};
   TTreeReaderArray<Float_t> TTwoTrackEndConditionsChunk_data__end_F = {fReader, "TTwoTrackEndConditionsChunk.data_.end_F"};
   TTreeReaderArray<Float_t> TTwoTrackEndConditionsChunk_data__cut_DeltaF = {fReader, "TTwoTrackEndConditionsChunk.data_.cut_DeltaF"};
   TTreeReaderArray<Float_t> TTwoTrackEndConditionsChunk_data__end_DeltaF = {fReader, "TTwoTrackEndConditionsChunk.data_.end_DeltaF"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_data__fitWasAborted = {fReader, "TTwoTrackEndConditionsChunk.data_.fitWasAborted"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_data__enteredMainFit = {fReader, "TTwoTrackEndConditionsChunk.data_.enteredMainFit"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_data__finalStartPointer = {fReader, "TTwoTrackEndConditionsChunk.data_.finalStartPointer"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_data__finalStartOrder = {fReader, "TTwoTrackEndConditionsChunk.data_.finalStartOrder"};
   TTreeReaderArray<Int_t> TTwoTrackEndConditionsChunk_data__fixedMass = {fReader, "TTwoTrackEndConditionsChunk.data_.fixedMass"};
   TTreeReaderArray<Int_t> TTwoTrackInternalsChunk_chunk_id_ = {fReader, "TTwoTrackInternalsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TTwoTrackInternalsChunk_data__fUniqueID = {fReader, "TTwoTrackInternalsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TTwoTrackInternalsChunk_data__fBits = {fReader, "TTwoTrackInternalsChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TTwoTrackInternalsChunk_data__fixedMass = {fReader, "TTwoTrackInternalsChunk.data_.fixedMass"};
   TTreeReaderArray<Int_t> TTwoTrackInternalsChunk_data__fitWasAborted = {fReader, "TTwoTrackInternalsChunk.data_.fitWasAborted"};

   // Specific to MC
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_chunk_id_ = {fReader, "TMonteCarloEVNTChunk.chunk_id_"};
   //TTreeReaderArray<unsigned int> TMonteCarloEVNTChunk_data__fUniqueID = {fReader, "TMonteCarloEVNTChunk.data_.fUniqueID"};
   //TTreeReaderArray<unsigned int> TMonteCarloEVNTChunk_data__fBits = {fReader, "TMonteCarloEVNTChunk.data_.fBits"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__VERSION = {fReader, "TMonteCarloEVNTChunk.data_.VERSION"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__VAR_FLAGS = {fReader, "TMonteCarloEVNTChunk.data_.VAR_FLAGS"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__IEVNT = {fReader, "TMonteCarloEVNTChunk.data_.IEVNT"};
   //TTreeReaderArray<Float_t> TMonteCarloEVNTChunk_data__EVWT = {fReader, "TMonteCarloEVNTChunk.data_.EVWT"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__INNO = {fReader, "TMonteCarloEVNTChunk.data_.INNO"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__NDCY = {fReader, "TMonteCarloEVNTChunk.data_.NDCY"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__RNDM1 = {fReader, "TMonteCarloEVNTChunk.data_.RNDM1"};
   //TTreeReaderArray<Int_t> TMonteCarloEVNTChunk_data__RNDM2 = {fReader, "TMonteCarloEVNTChunk.data_.RNDM2"};
   TTreeReaderArray<Int_t> TMonteCarloVETOChunk_chunk_id_ = {fReader, "TMonteCarloVETOChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMonteCarloVETOChunk_data__fUniqueID = {fReader, "TMonteCarloVETOChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMonteCarloVETOChunk_data__fBits = {fReader, "TMonteCarloVETOChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMonteCarloVETOChunk_data__VERSION = {fReader, "TMonteCarloVETOChunk.data_.VERSION"};
   TTreeReaderArray<Int_t> TMonteCarloVETOChunk_data__VAR_FLAGS = {fReader, "TMonteCarloVETOChunk.data_.VAR_FLAGS"};
   TTreeReaderArray<Int_t> TMonteCarloVETOChunk_data__IEVNV = {fReader, "TMonteCarloVETOChunk.data_.IEVNV"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_chunk_id_ = {fReader, "TMonteCarloMUTRChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMonteCarloMUTRChunk_data__fUniqueID = {fReader, "TMonteCarloMUTRChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMonteCarloMUTRChunk_data__fBits = {fReader, "TMonteCarloMUTRChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__VERSION = {fReader, "TMonteCarloMUTRChunk.data_.VERSION"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__VAR_FLAGS = {fReader, "TMonteCarloMUTRChunk.data_.VAR_FLAGS"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__IEVNM = {fReader, "TMonteCarloMUTRChunk.data_.IEVNM"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__INVT = {fReader, "TMonteCarloMUTRChunk.data_.INVT"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__INTK = {fReader, "TMonteCarloMUTRChunk.data_.INTK"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__LVTK = {fReader, "TMonteCarloMUTRChunk.data_.LVTK"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__MUSTP = {fReader, "TMonteCarloMUTRChunk.data_.MUSTP"};
   TTreeReaderArray<Int_t> TMonteCarloMUTRChunk_data__MUDCY = {fReader, "TMonteCarloMUTRChunk.data_.MUDCY"};
   TTreeReaderArray<Int_t> TMonteCarloINVIChunk_chunk_id_ = {fReader, "TMonteCarloINVIChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMonteCarloINVIChunk_data__fUniqueID = {fReader, "TMonteCarloINVIChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMonteCarloINVIChunk_data__fBits = {fReader, "TMonteCarloINVIChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMonteCarloINVIChunk_data__VERSION = {fReader, "TMonteCarloINVIChunk.data_.VERSION"};
   TTreeReaderArray<Int_t> TMonteCarloINVIChunk_data__VAR_FLAGS = {fReader, "TMonteCarloINVIChunk.data_.VAR_FLAGS"};
   TTreeReaderArray<Int_t> TMonteCarloINVIChunk_data__IEVNT = {fReader, "TMonteCarloINVIChunk.data_.IEVNT"};
   TTreeReaderArray<Int_t> TMonteCarloNUANChunk_chunk_id_ = {fReader, "TMonteCarloNUANChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMonteCarloNUANChunk_data__fUniqueID = {fReader, "TMonteCarloNUANChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMonteCarloNUANChunk_data__fBits = {fReader, "TMonteCarloNUANChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMonteCarloNUANChunk_data__VERSION = {fReader, "TMonteCarloNUANChunk.data_.VERSION"};
   TTreeReaderArray<Int_t> TMonteCarloNUANChunk_data__VAR_FLAGS = {fReader, "TMonteCarloNUANChunk.data_.VAR_FLAGS"};
   TTreeReaderArray<Int_t> TMonteCarloNUANChunk_data__rateid = {fReader, "TMonteCarloNUANChunk.data_.rateid"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__e_neutrino = {fReader, "TMonteCarloNUANChunk.data_.e_neutrino"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__e_lepton = {fReader, "TMonteCarloNUANChunk.data_.e_lepton"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__k_target = {fReader, "TMonteCarloNUANChunk.data_.k_target"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__qsq = {fReader, "TMonteCarloNUANChunk.data_.qsq"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__w = {fReader, "TMonteCarloNUANChunk.data_.w"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__x = {fReader, "TMonteCarloNUANChunk.data_.x"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__y = {fReader, "TMonteCarloNUANChunk.data_.y"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__phi_cm = {fReader, "TMonteCarloNUANChunk.data_.phi_cm"};
   TTreeReaderArray<Float_t> TMonteCarloNUANChunk_data__cos_fermi = {fReader, "TMonteCarloNUANChunk.data_.cos_fermi"};
   TTreeReaderArray<Int_t> TMonteCarloBEAMChunk_chunk_id_ = {fReader, "TMonteCarloBEAMChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMonteCarloBEAMChunk_data__fUniqueID = {fReader, "TMonteCarloBEAMChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMonteCarloBEAMChunk_data__fBits = {fReader, "TMonteCarloBEAMChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMonteCarloBEAMChunk_data__VERSION = {fReader, "TMonteCarloBEAMChunk.data_.VERSION"};
   TTreeReaderArray<Int_t> TMonteCarloBEAMChunk_data__VAR_FLAGS = {fReader, "TMonteCarloBEAMChunk.data_.VAR_FLAGS"};
   TTreeReaderArray<Float_t> TMonteCarloBEAMChunk_data__beamwgt = {fReader, "TMonteCarloBEAMChunk.data_.beamwgt"};
   TTreeReaderArray<Int_t> TMonteCarloBEAMChunk_data__ntp = {fReader, "TMonteCarloBEAMChunk.data_.ntp"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_chunk_id_ = {fReader, "TMCRawEventChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMCRawEventChunk_data__fUniqueID = {fReader, "TMCRawEventChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMCRawEventChunk_data__fBits = {fReader, "TMCRawEventChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__numhits = {fReader, "TMCRawEventChunk.data_.numhits"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__MCVersion = {fReader, "TMCRawEventChunk.data_.MCVersion"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__varflags = {fReader, "TMCRawEventChunk.data_.varflags"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__nutype = {fReader, "TMCRawEventChunk.data_.nutype"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__ndcy = {fReader, "TMCRawEventChunk.data_.ndcy"};
   TTreeReaderArray<Float_t> TMCRawEventChunk_data__evwt = {fReader, "TMCRawEventChunk.data_.evwt"};
   TTreeReaderArray<Int_t> TMCRawEventChunk_data__ievnt = {fReader, "TMCRawEventChunk.data_.ievnt"};
   TTreeReaderArray<Int_t> TMCHitMatchChunk_chunk_id_ = {fReader, "TMCHitMatchChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TMCHitMatchChunk_data__fUniqueID = {fReader, "TMCHitMatchChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TMCHitMatchChunk_data__fBits = {fReader, "TMCHitMatchChunk.data_.fBits"};
   TTreeReaderArray<Int_t> TMCHitMatchChunk_data__Nhit = {fReader, "TMCHitMatchChunk.data_.Nhit"};
   TTreeReaderArray<Int_t> TMCHitMatchChunk_data__NumFSP = {fReader, "TMCHitMatchChunk.data_.NumFSP"};
   TTreeReaderArray<Int_t> TProtonChunk_chunk_id_ = {fReader, "TProtonChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TProtonChunk_data__fUniqueID = {fReader, "TProtonChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TProtonChunk_data__fBits = {fReader, "TProtonChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TProtonChunk_data__E = {fReader, "TProtonChunk.data_.E"};
   TTreeReaderArray<Float_t> TProtonChunk_data__X = {fReader, "TProtonChunk.data_.X"};
   TTreeReaderArray<Float_t> TProtonChunk_data__Y = {fReader, "TProtonChunk.data_.Y"};
   TTreeReaderArray<Float_t> TProtonChunk_data__Z = {fReader, "TProtonChunk.data_.Z"};
   TTreeReaderArray<Float_t> TProtonChunk_data__T = {fReader, "TProtonChunk.data_.T"};
   TTreeReaderArray<Float_t> TProtonChunk_data__UX = {fReader, "TProtonChunk.data_.UX"};
   TTreeReaderArray<Float_t> TProtonChunk_data__UY = {fReader, "TProtonChunk.data_.UY"};
   TTreeReaderArray<Float_t> TProtonChunk_data__UZ = {fReader, "TProtonChunk.data_.UZ"};
   TTreeReaderArray<Float_t> TProtonChunk_data__TLLK = {fReader, "TProtonChunk.data_.TLLK"};
   TTreeReaderArray<Float_t> TProtonChunk_data__QLLK = {fReader, "TProtonChunk.data_.QLLK"};
   TTreeReaderArray<Int_t> TNeutronChunk_chunk_id_ = {fReader, "TNeutronChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TNeutronChunk_data__fUniqueID = {fReader, "TNeutronChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TNeutronChunk_data__fBits = {fReader, "TNeutronChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__E = {fReader, "TNeutronChunk.data_.E"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__X = {fReader, "TNeutronChunk.data_.X"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__Y = {fReader, "TNeutronChunk.data_.Y"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__Z = {fReader, "TNeutronChunk.data_.Z"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__T = {fReader, "TNeutronChunk.data_.T"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__TLLK = {fReader, "TNeutronChunk.data_.TLLK"};
   TTreeReaderArray<Float_t> TNeutronChunk_data__QLLK = {fReader, "TNeutronChunk.data_.QLLK"};
   TTreeReaderArray<Int_t> TReweightToCVChunk_chunk_id_ = {fReader, "TReweightToCVChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TReweightToCVChunk_data__fUniqueID = {fReader, "TReweightToCVChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TReweightToCVChunk_data__fBits = {fReader, "TReweightToCVChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TReweightToCVChunk_data__ppi0 = {fReader, "TReweightToCVChunk.data_.ppi0"};
   TTreeReaderArray<Int_t> TReweightToCVChunk_data__nuanceChannel = {fReader, "TReweightToCVChunk.data_.nuanceChannel"};
   TTreeReaderArray<Int_t> TReweightToCVChunk_data__nuType = {fReader, "TReweightToCVChunk.data_.nuType"};
   TTreeReaderArray<Float_t> TReweightToCVChunk_data__enu = {fReader, "TReweightToCVChunk.data_.enu"};
   TTreeReaderArray<Int_t> TReweightToCVChunk_data__parentId = {fReader, "TReweightToCVChunk.data_.parentId"};
   TTreeReaderArray<Float_t> TReweightToCVChunk_data__xsecweight = {fReader, "TReweightToCVChunk.data_.xsecweight"};
   TTreeReaderArray<Float_t> TReweightToCVChunk_data__fluxweight = {fReader, "TReweightToCVChunk.data_.fluxweight"};
   TTreeReaderArray<Int_t> TWeightDetailsChunk_chunk_id_ = {fReader, "TWeightDetailsChunk.chunk_id_"};
   TTreeReaderArray<unsigned int> TWeightDetailsChunk_data__fUniqueID = {fReader, "TWeightDetailsChunk.data_.fUniqueID"};
   TTreeReaderArray<unsigned int> TWeightDetailsChunk_data__fBits = {fReader, "TWeightDetailsChunk.data_.fBits"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__resangle_wgt = {fReader, "TWeightDetailsChunk.data_.resangle_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__dirt_wgt = {fReader, "TWeightDetailsChunk.data_.dirt_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__pi0mom_wgt = {fReader, "TWeightDetailsChunk.data_.pi0mom_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__deltamom_wgt = {fReader, "TWeightDetailsChunk.data_.deltamom_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__raddelta_wgt = {fReader, "TWeightDetailsChunk.data_.raddelta_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__pi0coh_wgt = {fReader, "TWeightDetailsChunk.data_.pi0coh_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__pi0res_wgt = {fReader, "TWeightDetailsChunk.data_.pi0res_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__nuance_wgt = {fReader, "TWeightDetailsChunk.data_.nuance_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__multpi0_wgt = {fReader, "TWeightDetailsChunk.data_.multpi0_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__multdelta_wgt = {fReader, "TWeightDetailsChunk.data_.multdelta_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__pipflux_wgt = {fReader, "TWeightDetailsChunk.data_.pipflux_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__pimflux_wgt = {fReader, "TWeightDetailsChunk.data_.pimflux_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__kpflux_wgt = {fReader, "TWeightDetailsChunk.data_.kpflux_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__kmflux_wgt = {fReader, "TWeightDetailsChunk.data_.kmflux_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__k0flux_wgt = {fReader, "TWeightDetailsChunk.data_.k0flux_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__histo_wgt = {fReader, "TWeightDetailsChunk.data_.histo_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__npip_wgt = {fReader, "TWeightDetailsChunk.data_.npip_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__npim_wgt = {fReader, "TWeightDetailsChunk.data_.npim_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__absorber_wgt = {fReader, "TWeightDetailsChunk.data_.absorber_wgt"};
   TTreeReaderArray<Float_t> TWeightDetailsChunk_data__totalweight = {fReader, "TWeightDetailsChunk.data_.totalweight"};

   // unsupported ones
   Int_t           TCalibratedDataChunk_data__Hits[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_]
   Int_t          *TCalibratedDataChunk_data__PMT[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t        *TCalibratedDataChunk_data__T[kMaxTCalibratedDataChunk];   //[TCalibratedDataChunk_data__Hits]
   Float_t        *TMCRawEventChunk_data__time[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Float_t         TMCRawEventChunk_data__vrtx[kMaxTMCRawEventChunk][127][3];   //[TMCRawEventChunk_]
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
   Int_t           TMonteCarloBEAMChunk_;
   //Int_t           TMonteCarloBEAMChunk_chunk_id_[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //UInt_t          TMonteCarloBEAMChunk_data__fUniqueID[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //UInt_t          TMonteCarloBEAMChunk_data__fBits[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //Int_t           TMonteCarloBEAMChunk_data__VERSION[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //Int_t           TMonteCarloBEAMChunk_data__VAR_FLAGS[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //Float_t         TMonteCarloBEAMChunk_data__beamwgt[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   //Int_t           TMonteCarloBEAMChunk_data__ntp[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__npart[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t          *TMonteCarloBEAMChunk_data__id[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__ini_pos[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__ini_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t        *TMonteCarloBEAMChunk_data__ini_eng[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t        *TMonteCarloBEAMChunk_data__ini_t[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__fin_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__fin_pol[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   string          TMonteCarloBEAMChunk_name_[kMaxTMonteCarloBEAMChunk];

   TBranch        *b_TCalibratedDataChunk_data__Hits;   //!
   TBranch        *b_TCalibratedDataChunk_data__PMT;   //!
   TBranch        *b_TCalibratedDataChunk_data__T;   //!
   TBranch        *b_TMCRawEventChunk_data__time;   //!
   TBranch        *b_TMCRawEventChunk_data__vrtx;   //!
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
   TBranch        *b_TMonteCarloBEAMChunk_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_chunk_id_;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__fUniqueID;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__fBits;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__VERSION;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__VAR_FLAGS;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__beamwgt;   //!
   //TBranch        *b_TMonteCarloBEAMChunk_data__ntp;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__npart;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__id;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_pos;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_eng;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_t;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_pol;   //!
   TBranch        *b_TMonteCarloBEAMChunk_name_;   //!
public:
   MiniBooNETree(TTree * /*tree*/ =0) { }
   virtual ~MiniBooNETree() { }
   virtual Int_t   Version() const { return 2; }
   //virtual void    Begin(TTree *tree);
   //virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   //virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { 
      cout << entry<<":"<<getall<<endl;
      cout << fChain->GetTree()->GetDirectory()->GetName() << endl;
      return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; 
      //return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; 
   }
   //virtual void    SetOption(const char *option) { fOption = option; }
   //virtual void    SetObject(TObject *obj) { fObject = obj; }
   //virtual void    SetInputList(TList *input) { fInput = input; }
   //virtual TList  *GetOutputList() const { return fOutput; }
   //virtual void    SlaveTerminate();
   //virtual void    Terminate();
   ClassDef(MiniBooNETree,0);

};


void MiniBooNETree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
cout << "Starting MiniBooNETree::Init\n";
   fReader.SetTree(tree);

   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__time[i] = 0;   
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TIME[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPFS[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTCER[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTSCI[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPROCTAG[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NOTPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TITPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__id[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_eng[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_t[i] = 0;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("TCalibratedDataChunk.data_.Hits", TCalibratedDataChunk_data__Hits, &b_TCalibratedDataChunk_data__Hits);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.PMT", TCalibratedDataChunk_data__PMT, &b_TCalibratedDataChunk_data__PMT);
   fChain->SetBranchAddress("TCalibratedDataChunk.data_.T", TCalibratedDataChunk_data__T, &b_TCalibratedDataChunk_data__T);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.time", TMCRawEventChunk_data__time, &b_TMCRawEventChunk_data__time);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.vrtx[127][3]", TMCRawEventChunk_data__vrtx, &b_TMCRawEventChunk_data__vrtx);
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
   fChain->SetBranchAddress("TMonteCarloBEAMChunk", &TMonteCarloBEAMChunk_, &b_TMonteCarloBEAMChunk_);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.chunk_id_", TMonteCarloBEAMChunk_chunk_id_, &b_TMonteCarloBEAMChunk_chunk_id_);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fUniqueID", TMonteCarloBEAMChunk_data__fUniqueID, &b_TMonteCarloBEAMChunk_data__fUniqueID);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fBits", TMonteCarloBEAMChunk_data__fBits, &b_TMonteCarloBEAMChunk_data__fBits);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VERSION", TMonteCarloBEAMChunk_data__VERSION, &b_TMonteCarloBEAMChunk_data__VERSION);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VAR_FLAGS", TMonteCarloBEAMChunk_data__VAR_FLAGS, &b_TMonteCarloBEAMChunk_data__VAR_FLAGS);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.beamwgt", TMonteCarloBEAMChunk_data__beamwgt, &b_TMonteCarloBEAMChunk_data__beamwgt);
   //fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ntp", TMonteCarloBEAMChunk_data__ntp, &b_TMonteCarloBEAMChunk_data__ntp);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.npart", TMonteCarloBEAMChunk_data__npart, &b_TMonteCarloBEAMChunk_data__npart);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.id", TMonteCarloBEAMChunk_data__id, &b_TMonteCarloBEAMChunk_data__id);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_pos[20][3]", TMonteCarloBEAMChunk_data__ini_pos, &b_TMonteCarloBEAMChunk_data__ini_pos);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_mom[20][3]", TMonteCarloBEAMChunk_data__ini_mom, &b_TMonteCarloBEAMChunk_data__ini_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_eng", TMonteCarloBEAMChunk_data__ini_eng, &b_TMonteCarloBEAMChunk_data__ini_eng);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_t", TMonteCarloBEAMChunk_data__ini_t, &b_TMonteCarloBEAMChunk_data__ini_t);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_mom[20][3]", TMonteCarloBEAMChunk_data__fin_mom, &b_TMonteCarloBEAMChunk_data__fin_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_pol[20][3]", TMonteCarloBEAMChunk_data__fin_pol, &b_TMonteCarloBEAMChunk_data__fin_pol);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.name_", TMonteCarloBEAMChunk_name_, &b_TMonteCarloBEAMChunk_name_);

   Notify();
}

Bool_t MiniBooNETree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}
/*
void MiniBooNETree::Begin(TTree * tree)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void MiniBooNETree::SlaveBegin(TTree * tree)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t MiniBooNETree::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either MiniBooNETree::GetEntry() or TBranch::GetEntry()
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

   return kTRUE;
}

void MiniBooNETree::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void MiniBooNETree::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

}
*/
#endif // #ifdef MiniBooNETree_cxx
