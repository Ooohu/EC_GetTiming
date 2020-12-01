

#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include "TROOT.h"

#include "MonteCarloBEAMChunkExt.h"
#include "MsgLog.h"
ClassImp(MonteCarloBEAMChunkExt);

using namespace std;


int MonteCarloBEAMChunkExt::calculateBEAMTiming(){
	bool print_msg = true;
  //get beam parent pi+ angle (take first pi+)
	int PionPlus  = 8;   //pi+
	int PionMinus = 9;   //pi-
	int MuonPlus  = 5;   //mu+
	int MuonMinus = 6;   //mu-
	int Neutrino  = 4;  //neutrino
	int KaonL     = 10;   //k0Long
	int KaonP     = 11;   //k+
	int KaonM     = 12;   //k-
	float clight= 29.979;   // cm/nsec

	string particleNames[20] = {""};

	particleNames[ PionPlus  ] = "pi+";
	particleNames[ PionMinus ] = "pi-";
	particleNames[ MuonPlus  ] = "mu+";
	particleNames[ MuonMinus ] = "mu-";
	particleNames[ Neutrino  ] = "nu";
	particleNames[ KaonL     ] = "k0Long";
	particleNames[ KaonP     ] = "k+";
	particleNames[ KaonM     ] = "k-";
	particleNames[ 14 ]		   = "proton";

	// Get Beam parent and angle : first Pion+
  	for(int in= 0; in< npart; in++){
		if(id[in] == PionPlus){  //we have first pi+
	  		float px= ini_momX[in];
	  		float py= ini_momY[in];
	  		float pz= ini_momZ[in];
	  		ppitot= sqrt( pow(px,2) + pow(py,2) + pow(pz,2) ); //total momentum
	  		if(ppitot != 0)
	  			ppiangle= 1000.0*acos(pz/ppitot); //in mRads
	  		break;
		}
  	}

  	//get beam parent Kaon angle : first Kaon+
  	for(int in= 0; in< npart; in++){
		if(id[in] == KaonP){  //we have first K+
		float px= ini_momX[in];
		float py= ini_momY[in];
		float pz= ini_momZ[in];
		pktot= sqrt( pow(px,2)+pow(py,2)+pow(pz,2)); //total momentum
		if(pktot > 0.){
			pkangle= 1000.0*acos(pz/pktot); //in mRads
			}
			break;
		}
  	}

	//Start dT timing analysis: print particle list and time
if(print_msg){
	MsgInfo("Start timing analysis: particle list");
	MsgInfo(MsgLog::Form("%15s%15s%15s%15s%15s%15s%15s\n", "Index", "particle ID", "particleName", "time", "Z", "distDiff", "dtDcy"));
	}
	double dX, dY, dZ, dt;

	for(int in= npart -1; in >=0;  in--){
		if(in!=0){
			dX = ini_posX[in-1] - ini_posX[in];
			dY = ini_posY[in-1] - ini_posY[in];
			dZ = ini_posZ[in-1] - ini_posZ[in];
			distDiff[in] = sqrt( dX*dX + dY*dY + dZ*dZ );
			dt = ini_t[in-1] - ini_t[in] ;
			dtDcy[in] =  dt - distDiff[in] / clight;
			dtDcySum += dtDcy[in];
		}
		//printf("%15d%15d%15s%15.2f%15.2f%15.2f%15.2f\n", in, id[in], particleNames[id[in]].c_str(), ini_t[in], ini_posZ[in], distDiff[in], dtDcy[in]);
	}
	if(id[0]!=4) MsgWarning("Warning: No neutrino was generated");
if(print_msg) MsgInfo(MsgLog::Form("dtDcySum (correction for non-relativistic particles) = ",dtDcySum));
  	//
  	// calculate timing
  	//
   //get beam parent pion/muon time delay
   //creation time of pion Tpip (+) and Tpim (-)
   //d is distance between Kaon and pi
   //everything in reverse order  nu <- mu <- pi <- p
   //Example, event with muon decay is always preceed by pi decay.  Thus for mu decay we measure time 
   //between pion and nuetrino to get full dT
   // **Start timing analysis: particle list
   //Index, particle ID, time, Z:  4  1130700272  	124.046  0
   //Index, particle ID, time, Z:  3  14  			0        -1
   //Index, particle ID, time, Z:  2  8  				47.4785  1410.77
   //Index, particle ID, time, Z:  1  5  				86.6072  2565.26
   //Index, particle ID, time, Z:  0  4  				96.9229  2870.59

   //dT= Tnu - Tk - d/c   	     

	//
	// Pion/Muon
	//
   int first= 0;
 if(print_msg)  MsgInfo("**Pion/Muon Timing**");
   for(int in= npart-1; in >=0;  in--){
   	int ptype= id[in];

		if(first == 0 && (ptype == PionPlus || ptype == PionMinus)){  //we have first pion
		  pi_E= ini_eng[in]*1000.0;   	//in MeV
		  pi_t= ini_t[in];     			//in nsec
		  pi_x= ini_posX[in]; 			//in cm
		  pi_y= ini_posY[in];
		  pi_z= ini_posZ[in];
if(print_msg)		  MsgInfo(MsgLog::Form("We have Pion! (T, x, y, z) = (%.4f,%.4f,%.4f,%.4f)", pi_t, pi_x, pi_y, pi_z));
		  first= 1;
		}
		if(first == 1 && (ptype == MuonPlus || ptype == MuonMinus))
			muflag= 1;   //we have a muon in the decay chain
		if(first == 1 && (id[in] == Neutrino ) ){  //we have decay neutrino
		  	nu_E= ini_eng[in]*1000.0;   	//in MeV
			nu_t= ini_t[in];
			nu_x= ini_posX[in];
			nu_y= ini_posY[in];
			nu_z= ini_posZ[in];
	if(print_msg)	  	MsgInfo(MsgLog::Form("We have neutrino from Pion! (T, x, y, z) = (%.4f,%.4f,%.4f,%.4f)", nu_t, nu_x, nu_y, nu_z));
			first= 2;
		}
	}
   //now calculate pion-neutirno dt
   if(first == 2){  //we have a good event
		piflag= 1;  //set pion dT flag
		dist_PiNu= sqrt( pow(pi_x-nu_x,2) + pow(pi_y-nu_y,2) + pow(pi_z-nu_z,2) ); //distance
		dt_PiNu=  nu_t - pi_t - dist_PiNu/clight;   
	if(print_msg)	MsgInfo(MsgLog::Form("Pion energy, D_pi-nu, Pion dT = ", pi_E, dist_PiNu, dt_PiNu));
   }

   //
   // Kaon
   //
	first= 0;
	if(print_msg)MsgInfo("**Kaon Timing**");
   for(int in= npart-1; in >=0;  in--){
		int ptype= id[in];
		if(first == 0 && (ptype == KaonL || ptype == KaonP || ptype == KaonM)){  //we have first Kaon
		  kaon_E= ini_eng[in]*1000.0;   //in MeV
		  kaon_t= ini_t[in];     //in nsec
		  kaon_x= ini_posX[in]; //in cm
		  kaon_y= ini_posY[in];
		  kaon_z= ini_posZ[in];
	if(print_msg)	  MsgInfo(MsgLog::Form("We have Kaon! (T, x, y, z) = (%.4f,%.4f,%.4f,%.4f)", kaon_t, kaon_x, kaon_y, kaon_z));
		  first= 1;
		}
		if(first == 1 && (id[in] == Neutrino ) ){  //we have decay neutirno
		  nu_E= ini_eng[in]*1000.0;   //in MeV
		  nu_t= ini_t[in];
		  nu_x= ini_posX[in];
		  nu_y= ini_posY[in];
		  nu_z= ini_posZ[in];
	if(print_msg)	  MsgInfo(MsgLog::Form("We have neutrino from Kaon! (T, x, y, z) = (%.4f,%.4f,%.4f,%.4f)", nu_t, nu_x, nu_y, nu_z));
		  first= 2;
		}
   }
   //now calculate dt
   if(first == 2){  //we have a good event
		kaonflag= 1;  //set kaon dt flag
		dist_KaonNu= sqrt( pow(kaon_x - nu_x,2) + pow(kaon_y - nu_y,2) + pow(kaon_z - nu_z,2)); //distance
		dt_KaonNu=  nu_t - kaon_t - dist_KaonNu/clight;  
if(print_msg)		MsgInfo(MsgLog::Form("K0 energy, D_pi-nu, Kaon dT = ", kaon_E, dist_KaonNu, dt_KaonNu));
   }

   return 1;
}


MonteCarloBEAMChunkExt::MonteCarloBEAMChunkExt(){

	Reset();
}

void MonteCarloBEAMChunkExt::PrintValues(){

	 MsgInfo(MsgLog::Form("VERSION     = %d" 		, VERSION ));                                                                                                                                                                                                                                                                    
    MsgInfo(MsgLog::Form("VAR_FLAGS   = %d" 		, VAR_FLAGS )); 						//ith bit is set if this chunk's ith variable is set                                                                                                              
    MsgInfo(MsgLog::Form("ntp         = %d" 		, ntp ));								//Neutrino type: 0=not a neutrino, 1=nue,2=nuebar,3=numu,4=numubar                                                                                        
    MsgInfo(MsgLog::Form("npart       = %d" 		, npart )); 							//Number of ancestor particles of the neutrino in the event, minimum number should be 3 (e.g. p->pi+->numu)
    MsgInfo(MsgLog::Form("dist_PiNu   = %.4f" 	, dist_PiNu ));                                                                                                                                                                                                                                                          
    MsgInfo(MsgLog::Form("dist_KaonNu = %.4f" 	, dist_KaonNu ));                                                                                                                                                                                                                                                      

    if(dist_PiNu!=0 && dist_KaonNu!=0) MsgWarning("Warning : Pion and Kaon are both present!");




}


void MonteCarloBEAMChunkExt::Reset(){
	VERSION   = -9999;
	VAR_FLAGS = -9999;
	ntp       = -9999;
	npart     = -9999;
	beamwgt   = -9999;




	id       .resize(0);
	ini_eng  .resize(0);
	ini_t    .resize(0);
	ini_posX .resize(0);
	ini_posY .resize(0);
	ini_posZ .resize(0);
	ini_momX .resize(0);
	ini_momY .resize(0);
	ini_momZ .resize(0);
	fin_momX .resize(0);
	fin_momY .resize(0);
	fin_momZ .resize(0);
	fin_polX .resize(0);
	fin_polY .resize(0);
	fin_polZ .resize(0);
	dtDcy    .resize(0);
	distDiff .resize(0);
	//derivative
	dtDcySum = 0;
	ppitot   = -9999;
	ppiangle = -9999;
	pktot    = -9999;
	pkangle  = -9999;

	dt_PiNu=0;
	dt_KaonNu=0;

	piflag = 0;
	muflag = 0;
	kaonflag=0;

	pi_E = -9999; pi_t = -9999; pi_x = -9999; pi_y = -9999; pi_z = -9999;
	nu_E = -9999; nu_t = -9999; nu_x = -9999; nu_y = -9999; nu_z = -9999;
	kaon_E = -9999; kaon_t = -9999; kaon_x = -9999; kaon_y = -9999; kaon_z = -9999;
	dist_PiNu = 0.; dist_KaonNu = 0.;


	//std::fill( id		, id 		+ MonteCarloBEAM_MAX_NPAR, -9999);
	//std::fill( ini_eng	, ini_eng 	+ MonteCarloBEAM_MAX_NPAR, -9999);
	//std::fill( ini_t	, ini_t 	+ MonteCarloBEAM_MAX_NPAR, -9999);
	//for(int i = 0 ; i < MonteCarloBEAM_MAX_NPAR ; i++){
	//	std::fill( ini_pos[i], ini_pos[i] + 3, -9999);
	//	std::fill( ini_mom[i], ini_mom[i] + 3, -9999);
	//	std::fill( fin_mom[i], fin_mom[i] + 3, -9999);
	//	std::fill( fin_pol[i], fin_pol[i] + 3, -9999);
	//}


}

