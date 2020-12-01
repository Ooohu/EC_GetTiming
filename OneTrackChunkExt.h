#ifndef OneTrackChunkExt_h
#define OneTrackChunkExt_h


#include <cmath>
#include <iostream>
#include <TROOT.h>
#include <TObject.h>
#define RBOONE 548.17
using namespace std;

class OneTrackChunkExt: public TObject{
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
    Float_t dtCorr;
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
    OneTrackChunkExt();
    void Reset();
    void CalculateGeometryAndEnergy();
    void CalculateTiming(Float_t XBeam, Float_t YBeam, Float_t dtRWMRawTime, Float_t dtBunchOffset, Float_t dt_corr=0);
    void PrintValues(Float_t dtRWMRawTime, Float_t dtBunchOffset);
    void CalculateTimingMC(Float_t MC_T, Float_t MC_Z,  Float_t dtDcySum, Float_t dtRF, Float_t dtInstr, Float_t dtFix);

    ClassDef(OneTrackChunkExt, 3);  //Simple event class
};

#endif

