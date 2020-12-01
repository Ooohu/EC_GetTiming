#ifndef MonteCarloEVNTChunkExt_h
#define MonteCarloEVNTChunkExt_h


#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <TROOT.h>
#include "TObject.h"

#include "particleID.h"

#define MonteCarloEVNT_NTHTMX 16383
#define MonteCarloEVNT_NPTAGMX 63
#define MonteCarloEVNT_NFSMX 127

using namespace::std;


class MonteCarloEVNTChunkExt: public TObject{
public:
    enum IBKGD{ BNAN            = -1,
                BCCQE           = 1,
                BNCPI0          = 2,
                BCCPIP          = 3,
                BCHPI0          = 4,
                BDELTA          = 5,
                BOTHERS         = 6,
                KREAL_NUE       = 15,
                KNUMU_NUMU      = 16,
                KREAL_NUMU      = 17,
                KFAKE_NUMU      = 18 };

	Int_t  VERSION;     // Detector MC output version
    Int_t  VAR_FLAGS;   // ith bit is set if this chunk's ith variable is set 
    Int_t  IEVNT;       // Event number
    Int_t  INNO;        // Generating neutrino type [1-4]
    Int_t  IBKGD;       // background 
    Int_t  NDCY;        // Number of decay particles
    Int_t  RNDM1;       // First random number seed
    Int_t  RNDM2;       // Second random number seed 

    Int_t  NFSP;        // range:0-MonteCarloEVNT_NFSMX Number of final state particles [including the NDCY]
    vector<Int_t> IPFS;		// [NFSP] Particle number of each final state particle
    vector<Int_t> NHTTCER;		// [NFSP] Number of CER photons from each final state particle
    vector<Int_t> NHTTSCI;		// [NFSP] Number of SCI photons from each final state particle

    Int_t  NPROCTAG;    // range:0-MonteCarloEVNT_NPTAGMX Number of process tags
    vector<Int_t> IPROCTAG;	// [NPROCTAG] List of process tags

    Int_t  NHTT;        // range:0-MonteCarloEVNT_NTHTMX Number of PMT hits [1/photon] in the TANK
    vector<Int_t> NOTPMT;		// [NHTT] PMT number of each TANK hit

    Float_t EVWT;       // Event weight
    Float_t PNEUX;    // Four momentum of the neutrino in px/p
    Float_t PNEUY;    // Four momentum of the neutrino in py/p
    Float_t PNEUZ;    // Four momentum of the neutrino in pz/p
    Float_t PNEUE;    // Four momentum of the neutrino in |p|
    vector<Float_t> VRTX;		// [NFSP] Creation 3-vertex of each  final state particle [cm]
    vector<Float_t> VRTY;		// [NFSP] 
    vector<Float_t> VRTZ;		// [NFSP] 
    vector<Float_t> TIME;		// [NFSP] Creation time of each final state particle [ns]
    vector<Float_t> PFSPX;		// [NFSP] Four momentum of each final state particle, in the form px/|p|, py/|p|, pz/|p|, |p|
    vector<Float_t> PFSPY;		// [NFSP] 
    vector<Float_t> PFSPZ;		// [NFSP] 
    vector<Float_t> PFSPP;		// [NFSP] 
    vector<Float_t> TITPMT;		// [NHTT] Time of the each TANK hit [ns]





//deriative
    Float_t R;
    Float_t X;
    Float_t Y;
    Float_t Z;
    Float_t E;

// external
    Float_t wt;

// methods 
    MonteCarloEVNTChunkExt();
    void Reset();

    void CalculateGeometryAndEnergy();
    //void CalculateTiming();
    void GetBkgdType();
    void PrintValues();

    ClassDef(MonteCarloEVNTChunkExt, 3);
};

#endif