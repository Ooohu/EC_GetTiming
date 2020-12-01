# this code is to modify the auto generated TSelector
#    1. move const Int_t into static const Int_t
#    2. comment the middle #endif & #ifdef [classname]
#    3. attach everything from .C file into .h
#    4. remove .C file
import sys, os
def modifyGeneratedTSelector(className):
	fH = open(className+".h")
	fC = open(className+".C")

	linesH = fH.readlines()
	linesC = fC.readlines()

	nlinesH = len(linesH)
	nlinesC = len(linesC)
	line_endif = -1
	for i, line in enumerate(linesH):

		if line.strip().find("const Int_t")==0:
			pos = line.find("const Int_t")
			linesH[i] = line[:pos] + "static " + line[pos:]
		
		elif line.find("#endif")>=0 and i<(nlinesH-5):
			linesH[i] = "// " + line

		elif line.strip().find("#ifdef")==0:
			linesH[i] = "// " + line

		elif line.strip().find("#endif")==0 and i<(nlinesH-5):
			line_endif = i

	# get .C file remove things I don't need like #def or //
	linesCnew = []
	for i, line in enumerate(linesC):
		if line.strip().find("#")!=0 and line.strip().find("//")!=0:
			linesCnew.append(line)

	linesHnew = linesH[:line_endif] + linesCnew + linesH[line_endif:]

	fH.close()
	fC.close()

	with open(className+".h","w") as f:
		f.writelines(linesHnew)
	os.remove(className+".C")

if __name__ == "__main__":
	import ROOT
	f = ROOT.TFile("ntuples/data_numu_ntuple_aug16.root")
	T = f.Get("MiniBooNE")
	T.MakeSelector("temp","=legacy")
	modifyGeneratedTSelector("temp")



