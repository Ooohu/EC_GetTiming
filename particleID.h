#ifndef particleID_h
#define particleID_h

#include <string>

namespace GEANT
{
	static std::map<int, std::string> pID={
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

#endif