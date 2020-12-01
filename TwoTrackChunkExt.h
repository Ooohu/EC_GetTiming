#ifndef TwoTrackChunkExt_h
#define TwoTrackChunkExt_h


#include <cmath>
#include <iostream>
#include "TROOT.h"
#include "TObject.h"
#define RBOONE 548.17
using namespace std;


class TwoTrackChunkExt : public TObject{
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
    Float_t dtCorr;
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

    TwoTrackChunkExt();
    void Reset();
    void CalculateGeometryAndEnergy();
    void CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset, Float_t dt_corr=0);
    void PrintValues(Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix);
	ClassDef(TwoTrackChunkExt, 3);  //Simple event class
};


#endif
