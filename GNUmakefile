include $(ROOTSYS)/etc/Makefile.arch

TARGET    = calculateTiming
EVENT_O   = MonteCarloBEAMChunkExt.o MonteCarloEVNTChunkExt.o OneTrackChunkExt.o TwoTrackChunkExt.o  MsgLog.o EventDict.o
EVENT_SRC = MonteCarloBEAMChunkExt.cxx MonteCarloEVNTChunkExt.cxx OneTrackChunkExt.cxx TwoTrackChunkExt.cxx MsgLog.cxx  EventDict.cxx 
EVENT_SO  = libEvent.$(DllSuf)
EVENTLIBS = -lTreePlayer
EVENTLIB  = $(shell pwd)/$(EVENT_SO)

MAIN_O = $(TARGET).o getTimingClass.o getTimingClassMC.o Consts.o commonChunk.o

LIBS += -lXMLParser -lMinuit -lXMLIO
#SRCS = $(TARGET).cxx getTimingClass.cxx getTimingClassMC.cxx MsgLog.cxx MonteCarloBEAMChunkExt.cxx MonteCarloEVNTChunkExt.cxx OneTrackChunkExt.cxx TwoTrackChunkExt.cxx commonChunk.cxx

#CERNLIBS =  
#ROOTLIBS = $(shell root-config --glibs)  $(shell root-config --cflags)  -lXMLParser -lMinuit -lXMLIO -lXMLParser
#EXTRALIBS =  -lm -lg2c -L/usr/lib
#EXTRALIBS =  -lm -L/usr/lib

#CPPFLAGS   +=  -O3 -std=cxx11
#CPPFLAGS   +=  -I/Users/enchuan/lib/include/cfortran
#CPPFLAGS   +=  -I$(ROOTSYS)/include
#CPPFLAGS   +=   $(shell root-config --cflags)

.SUFFIXES: .cxx .o .so

all: $(EVENT_SO) $(TARGET)

$(EVENT_SO):  $(EVENT_O)
		@echo "compiling event_so"
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@ $(EXPLLINKLIBS)
		@echo "$@ done"

$(TARGET) : $(EVENT_SO) $(MAIN_O) 
	@echo "compiling $@"; $(LD)  $(LDFLAGS) -v $(MAIN_O) $(EVENT_O) $(LIBS) $(EVENTLIBS) $(OutPutOpt)$@
	$(MT_EXE)
	
#	@echo "clean -o,-so files"
#	@rm -f *.o *.so
	@echo "$@ done"

clean :
	@echo Cleaning...
	-@rm -f *.o *.so
	-@rm -f $(TARGET) 
	-@rm -f ../$(TARGET)

.SUFFIXES: .cxx

OneTrackChunkExt.o: OneTrackChunkExt.h
TwoTrackChunkExt.o: TwoTrackChunkExt.h
MonteCarloEVNTChunkExt.o: MonteCarloEVNTChunkExt.h 
MonteCarloBEAMChunkExt.o: MonteCarloBEAMChunkExt.h
Consts.o: Consts.h

EventDict.cxx: MonteCarloBEAMChunkExt.h MonteCarloEVNTChunkExt.h OneTrackChunkExt.h TwoTrackChunkExt.h MsgLog.h LinkDef.h
	@echo "Generating dictionary $@..."
	$(ROOTCLING) -f $@ -c $^

.$(SrcSuf).$(ObjSuf):
	@echo "compiling individual files"
	$(CXX)  $(CXXFLAGS) -c $<






