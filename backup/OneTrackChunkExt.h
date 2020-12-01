#include <cmath>
#include <iostream>
#include <TROOT.h>
#define RBOONE 548.17
using namespace std;
#ifndef DEBUGMODE
#define DEBUGMODE 0
#endif
class OneTrackChunkExt{
public:
	// original ones
	Int_t  iterations;
	Int_t  trackType;
	Float_t X;             
    Float_t Y;             
    Float_t Z;             
    Float_t UX;            
    Float_t UY;            
    Float_t UZ;            
    Float_t T;             
    Float_t E;             
    Float_t distToMeanCer; 
    Float_t fluxScale;     
    Float_t relativeSci;   
    Float_t F;  

    // derived ones
    Float_t R;				// radius of the event center
    Float_t REnd;			// raidus of the end
    Float_t UdotR;
    Float_t NormUdotR;	
    Float_t RtoWallF;
    Float_t RtoWallB;
    Float_t TransR;
    Float_t cosTheta;
    Float_t thetaZ;
    Float_t EnuQE;
    Float_t EnuQEOrig;
    Float_t EnuQERyan;
    Float_t EnuQ2;
    Float_t Qpaper;
    Float_t RtoWallCutLine;

    // Timing
    Float_t XDiff, YDiff;
    Float_t TrackBeamRadius;
    Float_t XODiff;
	Float_t YODiff;
	Float_t dtZ;
	Float_t dtR;
	Float_t dtEDrive;
	Float_t T_RWMZ; 		// corrected by Z position
	Float_t T_RWMR; 		// corrected by XYZ position
	Float_t T_RWMZ_Bunch; 	// converted into each bunch
	Float_t T_RWMR_Bunch; 	// converted into each bunch
	Int_t NBKZ; 			// which block it is in
	Int_t NBKR;

	// MC mode only
	bool MCMode;
	Float_t MC_dZ;

	// time difference
	Float_t MC_dtRec;		// time difference btw MC and reconstruction: T - MC_T
	Float_t MC_dtZ;
	Float_t MC_dtDcy;


	// methods 
    void Reset();
    OneTrackChunkExt();
    void CalculateGeometryAndEnergy();
    void CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void Print(Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix);
};

OneTrackChunkExt::OneTrackChunkExt(){
	this->Reset();
}

void OneTrackChunkExt::CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset)
{
	// Positions
	XDiff = X - XBeam;
	YDiff = Y - YBeam;
	TrackBeamRadius = sqrt( XDiff*XDiff + YDiff*YDiff);
	Float_t X0 = 95.0;
	Float_t Y0 = -153;
	XODiff = X0 - XBeam;
	YODiff = Y0 - YBeam;

	// Calculate position dependent difference
	Float_t cspeed = 29.9792458; // in cm/nsec
	dtZ = Z / cspeed;   //distance between 875 and detector center in cm
	float MWDetectorDist= 54645.4;
	float XOffsetDet= -25.9; //multiwire X center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
    float YOffsetDet= -115.3; //multiwire Y center offsets in detector coordinates (cm) --new 3/10/14 (fixed detector offset definition)
    float d0 = sqrt( MWDetectorDist*MWDetectorDist + XOffsetDet*XOffsetDet + YOffsetDet*YOffsetDet);
	dtR = dtZ + (0.5 * R * R / d0) / cspeed; // correction due to XY position


	// dtEdrive
	float pt0=  3.22761e+00;
	float pt1= -9.59163e-03;
	float pt2=  1.17604e-05;
	float pt3= -5.82479e-09;
	float pt4=  9.77795e-13;
    if(E <= 70.) 
    dtEDrive= pt0 + pt1*E + pt2*pow(E,2) + pt3*pow(E,3) + pt4*pow(E,4);

 	if(E > 70. && E <=1950.) 
    dtEDrive= pt0 + pt1*E + pt2*pow(E,2) + pt3*pow(E,3) + pt4*pow(E,4); // Why discontinuity?

 	if(E > 1950.) 
    dtEDrive= 0.25;

	// Calucate bunch time
	float dtInterval = 1.0e9 / 52.8114e6;
	T_RWMZ = T + dtBunchOffset - dtRWMRawTime - dtZ;
	T_RWMR = T + dtBunchOffset - dtRWMRawTime - dtR;
	NBKZ = floor(T_RWMZ / dtInterval);
	NBKR = floor(T_RWMR / dtInterval);
	T_RWMZ_Bunch = T_RWMZ - NBKZ * dtInterval;
	T_RWMR_Bunch = T_RWMR - NBKR * dtInterval;

}


void OneTrackChunkExt::CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix)
{
	// Calculate position dependent difference
	Float_t cspeed = 29.9792458; // in cm/nsec

	MC_dtRec = T - MC_T;
	MC_dZ    = Z - MC_Z;  //z-vertex
	MC_dtZ   = MC_dZ / cspeed;

	//correct timing for various effects

	T_RWMZ = MC_dtRec + dtDcySum - MC_dtZ - dtRF - dtInstr - dtFix;


	// Calucate bunch time
	float dtInterval = 1.0e9 / 52.8114e6;
	NBKZ = floor(T_RWMZ / dtInterval);
	NBKR = floor(T_RWMR / dtInterval);

	T_RWMZ_Bunch = T_RWMZ - NBKZ * dtInterval;
	T_RWMR_Bunch = T_RWMZ - NBKR * dtInterval;


	cout << "dtRec = T - MC_T = " << T << " - " << MC_T << " = " << MC_dtRec;
	cout << "" << endl;
	printf("T_RWMZ = dtDcy - dtZ + dtRec - dtRF - dtInstr - dtFix \n       = %.2f - %.2f + %.2f - %.2f - %.2f -%.2f \n       = %.2f\n", 
		            dtDcySum, MC_dtZ, MC_dtRec, dtRF, dtInstr, dtFix, T_RWMZ);


}



void OneTrackChunkExt::CalculateGeometryAndEnergy(){

	R         = sqrt( X*X + Y*Y + Z*Z );
	REnd 	  = pow( X + 2.0 * distToMeanCer * UX , 2 ) + pow( Y + 2.0 * distToMeanCer * UY , 2 ) , pow( Z + 2.0 * distToMeanCer * UZ , 2 );
	REnd      = sqrt ( REnd );
	UdotR     = X * UX + Y * UY + Z * UZ;
	NormUdotR = UdotR / R;

	if( R < RBOONE){
		RtoWallF = - UdotR + sqrt( RBOONE * RBOONE - ( R * R - UdotR * UdotR ) );
		RtoWallB =   UdotR + sqrt( RBOONE * RBOONE - ( R * R - UdotR * UdotR ) );
	}

	TransR = sqrt( X*X + Y*Y );
	cosTheta = UZ;
	thetaZ	= 180. / 3.1415926535897 * acos(UZ);


	// calculate EnuQE
	Float_t Me  = 0.511;
	Float_t Mmu = 105.658;
	Float_t Mp  = 938.27;
	Float_t Mn  = 939.56;
	Float_t Mlep;
	if (trackType==1) Mlep = Me;
	else if(trackType==2) Mlep = Mmu;
	else{
		cout << "Warning: Unknown trackType, treated as electron" << endl;
		Mlep = Me;
	}
	Float_t Etot = Mlep + E;

   EnuQEOrig = 0.5 * ( 2.0 * Mp * E - Mlep * Mlep ) / ( Mp - E + sqrt( E * E - Mlep * Mlep ) * cosTheta );
   EnuQERyan = 0.5 * ( 2.0 * Mn * Etot + Mp * Mp - Mn * Mn - Mlep * Mlep )/(Mn - Etot + cosTheta*sqrt( Etot*Etot - Mlep*Mlep ) );
   EnuQE     = EnuQERyan;

   //calculate q2 (from Sam)
   EnuQ2= 2.0 * EnuQE * Etot * (1.0 - cosTheta) / pow(1000.0,2);  //GeV**2
   Qpaper= Etot * ( 1.0 - cosTheta ) / 1000.0;    


   //Optimized line fit rtowallcut using evis bin technique
   Float_t Slope          = -0.595; // cm/MeV
   Float_t Intercept      = 347.3;  //cm
   RtoWallCutLine = Slope * E + Intercept;

}


void OneTrackChunkExt::Print(Float_t dtRWMRawTime, Float_t dtBunchOffset)
{
	// Energy
	cout << Form("%15s%15s%15s%15s%15s%15s\n","Evis", "UZ", "EnueQE", "Radius", "RtoWallB", "RtoWallF");
	cout << Form("%15.2f%15.2f%15.2f%15.2f%15.2f%15.2f\n\n", E, UZ, EnuQE, R, RtoWallB, RtoWallF);
	
	// Position
	cout << Form("%15s%15s%15s%15s%15s%15s%15s\n","X", "Y","Z","UX", "UY", "UZ", "Track L");
	cout << Form("%15.2f%15.2f%15.2f%15.2f%15.2f%15.2f%15.2f\n\n", X, Y, Z, UX, UY, UZ, 2.0 * distToMeanCer);	

	// Timing 
	cout << Form("%15s%15s%15s%15s%15s\n", "T", "dtRWMRawTime", "dtZ", "dtR", "dtBunchOffset");
	cout << Form("%15.2f%15.2f%15.2f%15.2f%15.2f\n\n", T, dtRWMRawTime, dtZ, dtR, dtBunchOffset);
	cout << Form("%15s%15s%15s%15s\n", "T_RWMZ", "T_RWMR", "T_RWMZ_Bunch", "T_RWMR_Bunch");
	cout << Form("%15.2f%15.2f%15.2f%15.2f\n\n",T_RWMZ, T_RWMR, T_RWMZ_Bunch, T_RWMR_Bunch);

}

void OneTrackChunkExt::Reset(){
	// original ones
	iterations    = -9999;
	trackType     = -9999;
	X             = -9999;             
	Y             = -9999;             
	Z             = -9999;             
	UX            = -9999;            
	UY            = -9999;            
	UZ            = -9999;            
	T             = -9999;             
	E             = -9999;             
	distToMeanCer = -9999; 
	fluxScale     = -9999;     
	relativeSci   = -9999;   
	F             = -9999;  

    // derived ones
    R 		  = -9999;
	REnd      = -9999;
	UdotR     = -9999;
	NormUdotR = -9999;
	RtoWallF  = -9999;
	RtoWallB  = -9999;
	TransR    = -9999;
	cosTheta  = -9999;
	thetaZ    = -9999;
	EnuQE     = -9999;
	EnuQEOrig = -9999;
	EnuQERyan = -9999;
	EnuQ2     = -9999;
	Qpaper    = -9999;

	MCMode      = false;
	MC_dtRec    = -9999;		// time difference btw MC and reconstruction: T - MC_T
	MC_dZ       = -9999;
	MC_dtZ      = -9999;

}


