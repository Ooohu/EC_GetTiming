TARGET = calculateTiming


OBJS_CXX = $(TARGET).o getTimingClass.C OneTrackChunkExt.o TwoTrackChunkExt.o MonteCarloEVNTChunkExt.o MonteCarloBEAMChunkExt.o MsgLog.o
SRCS = $(TARGET).C getTimingClass.C OneTrackChunkExt.h TwoTrackChunkExt.h MonteCarloEVNTChunkExt.h MonteCarloBEAMChunkExt.h MsgLog.cxx

CERNLIBS =  
ROOTLIBS = $(shell root-config --glibs)  $(shell root-config --cflags)  -lXMLParser -lMinuit -lXMLIO -lXMLParser
#EXTRALIBS =  -lm -lg2c -L/usr/lib
EXTRALIBS =  -lm -L/usr/lib

CPPFLAGS   +=  -O3 -std=cxx11
CPPFLAGS   +=  -I/Users/enchuan/lib/include/cfortran
#CPPFLAGS   +=  -I$(ROOTSYS)/include
CPPFLAGS   +=   $(shell root-config --cflags)

#CC = @echo Compiling $@; g++
LD = @echo Linking $@; ld
#LD = ld
CC = g++ -Wall -frtti -fno-exceptions -fPIC

%.o: %.C
	@echo Compiling $*.o
	$(CC) -c $*.C -Df2cFortran $(CPPFLAGS)

%.o: %.cxx
	@echo Compiling $*.o
	$(CC) -c $*.cxx -Df2cFortran $(CPPFLAGS) 

%.o: %.h
	@echo Compiling $*.o
	$(CC) -c $*.h -Df2cFortran $(CPPFLAGS) 

$(TARGET) : $(OBJS_CXX)
	@echo target; $(CC) $(CPPFLAGS) $(OBJS_CXX) -o $(TARGET)  $(CERNLIBS) $(ROOTLIBS) $(EXTRALIBS)
	@cd ../bin; ln -s -f ../src/$(TARGET)

getTimingClass.o: OneTrackChunkExt.h TwoTrackChunkExt.h MonteCarloEVNTChunkExt.h MonteCarloBEAMChunkExt.h MsgLog.cxx
calculateTiming.o: calculateTiming.C getTimingClass.C OneTrackChunkExt.h TwoTrackChunkExt.h MonteCarloEVNTChunkExt.h MonteCarloBEAMChunkExt.h MsgLog.cxx



#for fortran files:
#        g77 -c ffilename.f


.PHONY : clean

libWeight :  WeightCalc.cxx WeightCalc.h OscWeightCalc.cxx OscWeightCalc.h POTWeightCalc.cxx POTWeightCalc.h
	rootcint WeightCalcDict.C -c WeightCalc.h OscWeightCalc.h POTWeightCalc.h
	g++ -Wall -fPIC -c WeightCalc.cxx OscWeightCalc.cxx POTWeightCalc.cxx WeightCalcDict.C $(CPPFLAGS) $(ROOTLIBS)
	g++ -shared -Wl,-soname,libWeight.so -o libWeight.so *WeightCalc*.o
#	ld -G *WeightCalc.o -o libWeight.so

clean :
	@echo Cleaning...
	-@rm -f ../src/*.o 
	-@rm -f ../src/$(TARGET) 
	-@rm -f ../bin/$(TARGET)

