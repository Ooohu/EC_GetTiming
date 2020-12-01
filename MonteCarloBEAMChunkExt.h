#ifndef MonteCarloBEAMChunkExt_h
#define MonteCarloBEAMChunkExt_h


#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include "TROOT.h"
#include "TObject.h"


using namespace std;
#define MonteCarloBEAM_MAX_NPAR 20


class MonteCarloBEAMChunkExt : public TObject{
public:
	Int_t VERSION;
    Int_t VAR_FLAGS; 						//ith bit is set if this chunk's ith variable is set
    Int_t ntp;								//Neutrino type: 0=not a neutrino, 1=nue,2=nuebar,3=numu,4=numubar
    Int_t npart; 							//Number of ancestor particles of the neutrino in the event, minimum number should be 3 (e.g. p->pi+->numu)
    vector<Int_t> id;    							// [npart] Geant3 ID of the ancestors of the neutrino, size:MonteCarloBEAM_npart@!

	Float_t beamwgt;


	vector<Float_t> ini_eng;								// [npart] Initial total energy of each ancester particle
	vector<Float_t> ini_t;        							// [npart] Creation time of each ancester particle
	vector<Float_t> ini_posX; 								// [npart] Initial X,Y,Z position of each ancester particle
	vector<Float_t> ini_posY; 								// [npart] 
	vector<Float_t> ini_posZ; 								// [npart] 
	vector<Float_t> ini_momX;								// [npart] Initial PX,PY,PZ momentum of each ancester particle
	vector<Float_t> ini_momY;								// [npart] 
	vector<Float_t> ini_momZ;								// [npart] 
	vector<Float_t> fin_momX;								// [npart] The three momentum components of each ancestor particle just before it dies
	vector<Float_t> fin_momY;								// [npart] 
	vector<Float_t> fin_momZ;								// [npart] 
	vector<Float_t> fin_polX; 								// [npart] The three polarization components of each ancestor particle just before it dies
	vector<Float_t> fin_polY; 								// [npart] 
	vector<Float_t> fin_polZ; 								// [npart] 


    //Float_t ini_eng[MonteCarloBEAM_MAX_NPAR];  		//
    //Float_t ini_eng[MonteCarloBEAM_MAX_NPAR];	  	// [npart] Initial total energy of each ancester particle
    //Float_t ini_t[MonteCarloBEAM_MAX_NPAR];     	// [npart] Creation time of each ancester particle
    //Float_t ini_pos[MonteCarloBEAM_MAX_NPAR][3]; 	// [npart][3] Initial X,Y,Z position of each ancester particle
    //Float_t ini_mom[MonteCarloBEAM_MAX_NPAR][3];	//Initial PX,PY,PZ momentum of each ancester particle
    //Float_t fin_mom[MonteCarloBEAM_MAX_NPAR][3];	//The three momentum components of each ancestor particle just before it dies
    //Float_t fin_pol[MonteCarloBEAM_MAX_NPAR][3]; 	//The three polarization components of each ancestor particle j

//derivative
	vector<Float_t> dtDcy;									// [npart] (tf-ti) - dx/c, considering the extra time needed for non-relativistic particle
	vector<Float_t> distDiff;								// [npart] distance difference between each non-relativistic particles
	Float_t dtDcySum;
   	Float_t ppitot, ppiangle;
   	Float_t pktot, pkangle;
	Float_t dt_PiNu, dt_KaonNu; //pion-neutrino delta T (nsec)
	int piflag;  //we have a pion with delta time dt_PiNu
	int muflag;  
	int kaonflag;
	Float_t pi_E, pi_t, pi_x, pi_y, pi_z;
	Float_t nu_E, nu_t, nu_x, nu_y, nu_z;
	Float_t kaon_E, kaon_t, kaon_x, kaon_y, kaon_z;
	Float_t dist_PiNu, dist_KaonNu;


// methods
    MonteCarloBEAMChunkExt();
    ~MonteCarloBEAMChunkExt(){ Reset(); };
    int calculateBEAMTiming();
    void Reset();
    void PrintValues();
	
	ClassDef(MonteCarloBEAMChunkExt, 3);  //Simple event class
};


#endif
