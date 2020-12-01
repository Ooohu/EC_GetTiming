#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <TROOT.h>

#define MonteCarloEVNT_NTHTMX 16383
#define MonteCarloEVNT_NPTAGMX 63
#define MonteCarloEVNT_NFSMX 127

using namespace::std;

namespace GEANT
{
	std::map<int, string> pID={
	{1  , "GAMMA"},
	{2  , "POSITRON"},
	{3  , "ELECTRON"},
	{4  , "NEUTRINO"},
	{5  , "MUON +"},
	{6  , "MUON -"},
	{7  , "PION 0"},
	{8  , "PION +"},
	{9  , "PION -"},
	{10 , "KAON 0 LONG"},
	{11 , "KAON +"},
	{12 , "KAON -"},
	{13 , "NEUTRON"},
	{14 , "PROTON"},
	{15 , "ANTIPROTON"},
	{16 , "KAON 0 SHORT"},
	{17 , "ETA"},
	{18 , "LAMBDA"},
	{19 , "SIGMA +"},
	{20 , "SIGMA 0"},
	{21 , "SIGMA -"},
	{22 , "XI 0"},
	{23 , "XI -"},
	{24 , "OMEGA -"},
	{25 , "ANTINEUTRON"},
	{26 , "ANTILAMBDA"},
	{27 , "ANTISIGMA -"},
	{28 , "ANTISIGMA 0"},
	{29 , "ANTISIGMA +"},
	{30 , "ANTIXI 0"},
	{31 , "ANTIXI +"},
	{32 , "ANTIOMEGA +"},
	{45 , "DEUTERON"},
	{46 , "TRITON"},
	{47 , "ALPHA"},
	{48 , "GEANTINO"},
	{49 , "HE3"},
	{50 , "Cerenkov"}};
}

class MonteCarloEVNTChunkExt{
public:
	Int_t  VERSION;     // Detector MC output version
    Int_t  VAR_FLAGS;   // ith bit is set if this chunk's ith variable is set 
    Int_t  IEVNT;       // Event number
    Int_t  INNO;        // Generating neutrino type [1-4]
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
    void Reset();
    MonteCarloEVNTChunkExt();

    void CalculateGeometryAndEnergy();
    //void CalculateTiming();
    void Print();


};

void MonteCarloEVNTChunkExt::CalculateGeometryAndEnergy(){
	X = VRTX[0];
	Y = VRTY[0];
	Z = VRTZ[0];
	R = sqrt( X*X + Y*Y + Z*Z );
	E = PNEUE * 1000;
}


MonteCarloEVNTChunkExt::MonteCarloEVNTChunkExt(){

	Reset();
}

void MonteCarloEVNTChunkExt::Reset(){
	// int
	VERSION		= -9999;
	VAR_FLAGS	= -9999;
	IEVNT		= -9999;
	INNO		= -9999;
	NDCY		= -9999;
	NFSP		= -9999;
	NPROCTAG	= -9999;
	NHTT		= -9999;
	RNDM1		= -9999;
	RNDM2		= -9999;

	//float
	EVWT  = -9999;
	PNEUX = -9999;
	PNEUY = -9999;
	PNEUZ = -9999;
	PNEUE = -9999;
	IPFS.resize(0);
	NHTTCER.resize(0);
	NHTTSCI.resize(0);
	IPROCTAG.resize(0);
	NOTPMT.resize(0);
	VRTX.resize(0);
	VRTY.resize(0);
	VRTZ.resize(0);
	TIME.resize(0);
	PFSPX.resize(0);
	PFSPY.resize(0);
	PFSPZ.resize(0);
	PFSPP.resize(0);
	TITPMT.resize(0);





	// MonteCarloEVNT_NTHTMX
	//std::fill(NOTPMT, NOTPMT + MonteCarloEVNT_NTHTMX, -9999);
	//std::fill(TITPMT, TITPMT + MonteCarloEVNT_NTHTMX, -9999);

	//std::fill(IPROCTAG, IPROCTAG + MonteCarloEVNT_NPTAGMX, -9999);


	//std::fill(IPFS		, IPFS 		+ MonteCarloEVNT_NFSMX, -9999);
	//std::fill(NHTTCER	, NHTTCER 	+ MonteCarloEVNT_NFSMX, -9999);
	//std::fill(NHTTSCI	, NHTTSCI 	+ MonteCarloEVNT_NFSMX, -9999);
	//std::fill(TIME		, TIME 		+ MonteCarloEVNT_NFSMX, -9999);


	//for(int i = 0 ; i<MonteCarloEVNT_NFSMX ; i++){
	//	std::fill(VRTX[i], VRTX[i] + 3, -9999);
	//	std::fill(PFSP[i], PFSP[i] + 4, -9999);
	//}


	//Derivatives

}


void MonteCarloEVNTChunkExt::Print(){
	static vector<string> valueNames = {"IPFS", "NHTTCER", "NHTTSCI", "TIME", "VRTX", "VRTY", "VRTZ", "PFSPX", "PFSPY", "PFSPZ", "PFSPP"};
	static vector<string> nuTypes = {"","numu", "numubar", "nue", "nuebar"};	
	cout << "Generating neutrino :" << INNO << " " << nuTypes[INNO] << endl;
	cout << "Event Weight        :" << EVWT << endl;
	cout << "neutrino energy     :" << PNEUE << endl;
	cout << "N decay particles   :" << NDCY << endl;
	cout << "N final particles   :" << NFSP << endl;
	cout << "N PMT hits          :" << NHTT << endl;


	cout << Form("%15s", "particleID");
	for (auto valueName : valueNames){
		cout << setw(10) << valueName;
	}
	cout << "\n------------------------------------------------------------------" << endl;

	double totE = 0.;
	for( int iFPS = 0;  iFPS<NFSP; iFPS++){
		cout << setw(15) << GEANT::pID[IPFS[iFPS]];
		cout << setw(10) << IPFS[iFPS];
		cout << setw(10) << NHTTCER[iFPS];
		cout << setw(10) << NHTTSCI[iFPS];
		cout << defaultfloat;
		cout << setprecision(3) << setw(10) << TIME[iFPS];
		cout << fixed;
		cout << setprecision(3) << setw(10) << VRTX[iFPS];
		cout << setprecision(3) << setw(10) << VRTY[iFPS];
		cout << setprecision(3) << setw(10) << VRTZ[iFPS];
		cout << setprecision(3) << setw(10) << PFSPX[iFPS];
		cout << setprecision(3) << setw(10) << PFSPY[iFPS];
		cout << setprecision(3) << setw(10) << PFSPZ[iFPS];
		cout << setprecision(3) << setw(10) << PFSPP[iFPS];
		cout << endl;
	  if (TIME[iFPS]==0)
	     totE += PFSPP[iFPS];
	}
	cout << "Total E of final p  :" << totE << endl;
	cout << "neutrino energy     :" << PNEUE << endl;
	cout << "Energy difference   :" << totE - PNEUE << endl;
	cout << endl << endl;


}