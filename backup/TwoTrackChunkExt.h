#include <cmath>
#include <iostream>
#include "TROOT.h"
#define RBOONE 548.17
using namespace std;
#ifndef DEBUGMODE
#define DEBUGMODE 0
#endif
class TwoTrackChunkExt{
public:
	Int_t   trackType1;
	Int_t   trackType2;
    Float_t X;				// vertex X coord (cm)
    Float_t Y;				// vertex Y coord (cm)
    Float_t Z;				// vertex Z coord (cm)
    Float_t T;				// time (ns)
    Float_t M;				// mass (MeV)
    Float_t CosOp;			// cos(opening angle)
    Float_t UX1;				// 1st direction X component
    Float_t UY1;				// 1st direction Y component
    Float_t UZ1;				// 1st direction Z component
    Float_t E1;				// 1st energy (MeV)
    Float_t distToMeanCer1;	// 1st distance to mean Cer emission pt (cm) [doesn't include gamma dist]
    Float_t S1;				// 1st conversion length
    Float_t UX2;				// 2nd direction X component
    Float_t UY2;				// 2nd direction Y component
    Float_t UZ2;				// 2nd direction Z component
    Float_t E2;				// 2nd energy (MeV)
    Float_t distToMeanCer2;	// 2nd distance to mean Cer emission pt (cm) [doesn't include gamma dist]
    Float_t S2;				// 2nd conversion length
    Float_t fluxScale;		// flux adjustment (currently fixed)
    Float_t relativeSci;		// relative sci flux adjustment (currently fixed)
    Float_t Fqqq;			// -log(charge likelihood) function value
    Float_t Fttt;			// -log(time likelihood) function value
    Float_t F;				// -log(total likelihood) function value
    bool  fixedMass;        // was the mass fixed?

   //pion specific
    Float_t pi0mom; //pion momentum

    // derived ones
    Float_t R;						// radius of the center
    Float_t REnd1, REnd2;				// REnd of the first one
    Float_t UdotR1, UdotR2;
    Float_t NormUdotR1, NormUdotR2;
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

    // Timing
    Float_t XDiff, YDiff;
    Float_t TrackBeamRadius;
    Float_t XODiff;
    Float_t YODiff;
    Float_t dtZ;
    Float_t dtR;
    Float_t dtEDrive;
    Float_t T_RWMZ;
    Float_t T_RWMR;
    Float_t T_RWMZ_Bunch;
    Float_t T_RWMR_Bunch;
    Int_t NBKZ;
    Int_t NBKR;


    bool MCMode;
    Float_t MC_dtRec;       // time difference btw MC and reconstruction: T - MC_T
    Float_t MC_dZ;
    Float_t MC_dtZ;

    void Reset();
    TwoTrackChunkExt();
    void CalculateGeometryAndEnergy();
    void CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void Print(Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix);
};

TwoTrackChunkExt::TwoTrackChunkExt(){
	this->Reset();
}

void TwoTrackChunkExt::CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset)
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
    Float_t E = E1 + E2;
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
void TwoTrackChunkExt::CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix)
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

    T_RWMZ_Bunch = T_RWMZ - NBKZ * dtInterval;

    cout << "dtRec = T - MC_T = " << T << " - " << MC_T << " = " << MC_dtRec;
    cout << "" << endl;
    printf("T_RWMZ = dtDcy - dtZ + dtRec - dtRF - dtInstr - dtFix \n       = %.2f - %.2f + %.2f - %.2f - %.2f -%.2f \n       = %.2f\n", 
                    dtDcySum, MC_dtZ, MC_dtRec, dtRF, dtInstr, dtFix, T_RWMZ);

}

void TwoTrackChunkExt::Print(Float_t dtRWMRawTime, Float_t dtBunchOffset)
{
    cout << "Two Track Info:\n";
    cout << Form("%15s%15s%15s%15s%15s\n", "Pi0Mom", "E1", "E2", "Angle", "Mass");
    cout << Form("%15.2f%15.2f%15.2f%15.2f%15.2f\n\n", pi0mom, E1, E2, CosOp, M);


    // Timing 
    cout << Form("%15s%15s%15s%15s%15s\n", "T", "dtRWMRawTime", "dtZ", "dtR", "dtBunchOffset");
    cout << Form("%15.2f%15.2f%15.2f%15.2f%15.2f\n\n", T, dtRWMRawTime, dtZ, dtR, dtBunchOffset);
    cout << Form("%15s%15s%15s%15s\n", "T_RWMZ", "T_RWMR", "T_RWMZ_Bunch", "T_RWMR_Bunch");
    cout << Form("%15.2f%15.2f%15.2f%15.2f\n\n",T_RWMZ, T_RWMR, T_RWMZ_Bunch, T_RWMR_Bunch);

}

void TwoTrackChunkExt::CalculateGeometryAndEnergy(){
    pi0mom = sqrt( E1*E1 + E2*E2 + 2.0 * E1 * E2 * CosOp );





}

void TwoTrackChunkExt::Reset(){
	trackType1     = -9999;
	trackType2     = -9999;
	X              = -9999;
	Y              = -9999;
	Z              = -9999;
	T              = -9999;
	M              = -9999;
	CosOp          = -9999;
	UX1            = -9999;
	UY1            = -9999;
	UZ1            = -9999;
	E1             = -9999;
	distToMeanCer1 = -9999;
	S1             = -9999;
	UX2            = -9999;
	UY2            = -9999;
	UZ2            = -9999;
	E2             = -9999;
	distToMeanCer2 = -9999;
	S2             = -9999;
	fluxScale      = -9999;
	relativeSci    = -9999;
	Fqqq           = -9999;
	Fttt           = -9999;
	F              = -9999;
	fixedMass		= false;

    pi0mom          = -9999; 
    R               = -9999;                      
    REnd1           = -9999, 
    REnd2           = -9999;               
    UdotR1          = -9999, 
    UdotR2          = -9999;
    NormUdotR1      = -9999, 
    NormUdotR2      = -9999;
    RtoWallF        = -9999;
    RtoWallB        = -9999;
    TransR          = -9999;
    cosTheta        = -9999;
    thetaZ          = -9999;
    EnuQE           = -9999;
    EnuQEOrig       = -9999;
    EnuQERyan       = -9999;
    EnuQ2           = -9999;
    Qpaper          = -9999;
    XDiff           = -9999, 
    YDiff           = -9999;
    TrackBeamRadius = -9999;
    XODiff          = -9999;
    YODiff          = -9999;
    dtZ             = -9999;
    dtR             = -9999;
    dtEDrive        = -9999;
    T_RWMZ          = -9999;
    T_RWMR          = -9999;
    T_RWMZ_Bunch    = -9999;
    T_RWMR_Bunch    = -9999;
    NBKZ            = -9999;
    NBKR            = -9999;



    MCMode   = false;
    MC_dtRec = -9999;        // time difference btw MC and reconstruction: T - MC_T
    MC_dZ    = -9999;
    MC_dtZ   = -9999;
}


