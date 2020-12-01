#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <TROOT.h>
#include "particleID.h"
#include "MsgLog.h"

#include "MonteCarloEVNTChunkExt.h"
ClassImp(MonteCarloEVNTChunkExt);

using namespace::std;



void MonteCarloEVNTChunkExt::CalculateGeometryAndEnergy(){
	X = VRTX[0];
	Y = VRTY[0];
	Z = VRTZ[0];
	R = sqrt( X*X + Y*Y + Z*Z );
	E = PNEUE * 1000;
}


void MonteCarloEVNTChunkExt::GetBkgdType(){
      IBKGD = BOTHERS;

	if ((INNO==1) || (INNO==3)){ 
		if (EVWT==1) 						IBKGD = BCCQE;
		else if ((EVWT==3) || (EVWT==5)) 	IBKGD = BCCPIP;
		else if ((EVWT==6) || (EVWT==8)) 	IBKGD = BNCPI0;
		else if ((EVWT==96) || (EVWT==97)) 	IBKGD = BCHPI0;
		else if ((EVWT==93) || (EVWT==94)) 	IBKGD = BDELTA;
	}
	else{
		if (EVWT==1) 						IBKGD = BCCQE;
		else if (EVWT==10 || EVWT==12) 		IBKGD = BCCPIP;
		else if (EVWT==13 || EVWT==15) 		IBKGD = BNCPI0;
		else if (EVWT==96 || EVWT==97) 		IBKGD = BCHPI0;
		else if (EVWT==93 || EVWT==94) 		IBKGD = BDELTA;
	}

}


MonteCarloEVNTChunkExt::MonteCarloEVNTChunkExt(){

	Reset();
}

void MonteCarloEVNTChunkExt::Reset(){
	// int
	IBKGD       = NAN;
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


void MonteCarloEVNTChunkExt::PrintValues(){
	static vector<string> valueNames = {"IPFS", "NHTTCER", "NHTTSCI", "TIME", "VRTX", "VRTY", "VRTZ", "PFSPX", "PFSPY", "PFSPZ", "PFSPP"};
	static vector<string> nuTypes = {"","numu", "numubar", "nue", "nuebar"};	
	MsgInfo( MsgLog::Form( "Generating neutrino : %d  %s", INNO, nuTypes[INNO].c_str()));
	MsgInfo( MsgLog::Form( "Event Weight        : %.4f", EVWT));
	MsgInfo( MsgLog::Form( "neutrino energy     : %.4f", PNEUE));
	MsgInfo( MsgLog::Form( "N decay particles   : %d", NDCY));
	MsgInfo( MsgLog::Form( "N final particles   : %d", NFSP));
	MsgInfo( MsgLog::Form( "N PMT hits          : %d", NHTT));


	string tempStr = MsgLog::Form("%15s", "particleID");
	for (auto valueName : valueNames) tempStr += MsgLog::Form("%10s", valueName.c_str());
	MsgInfo(tempStr);
	MsgInfo("\n------------------------------------------------------------------");

	double totE = 0.;
	for( int iFPS = 0;  iFPS<NFSP; iFPS++){
		MsgInfo( MsgLog::Form("%15s%10d%10d%10d%10.3f%10.3f%10.3f%10.3f%10.3f%10.3f%10.3f%10.3f",
									  GEANT::pID[IPFS[iFPS]].c_str(),
									  IPFS[iFPS],
									  NHTTCER[iFPS],
									  NHTTSCI[iFPS],
									  TIME[iFPS],
									  VRTX[iFPS],
									  VRTY[iFPS],
									  VRTZ[iFPS],
									  PFSPX[iFPS],
									  PFSPY[iFPS],
									  PFSPZ[iFPS],
									  PFSPP[iFPS]));
	  if (TIME[iFPS]==0)
	     totE += PFSPP[iFPS];
	}
	MsgInfo(MsgLog::Form("Total E of final p  : %.4f", totE));
	MsgInfo(MsgLog::Form("neutrino energy     : %.4f", PNEUE));
	MsgInfo(MsgLog::Form("Energy difference   : %.4f\n\n", totE - PNEUE ));


}

