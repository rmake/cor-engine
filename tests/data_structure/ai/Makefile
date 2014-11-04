# /c/Mingw64/mingw64_4_8_1_5/bin/mingw32-make.exe -j 4

INCDIRFLAGS = -I../../../external/boost \
    -I../../../external/mruby/include \
    -I../../../external/mrubybind \
    -I../../../ \
    -I../../../../\
    -I../../../libraries
TARGET = data_structure_ai_test

OUTPUTDIR = ./lib

#CC = gcc
#CXX = g++
#AR = ar
#MKDIR = mkdir -p

CC := gcc
CXX := g++
AR := ar
MKDIR := mkdir -p

ifneq ($(WINDOWS), )
    CC = PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\x86_64-w64-mingw32-gcc.exe" -m32 -static 
    CXX = PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\x86_64-w64-mingw32-g++.exe" -m32 -static 
    AR = PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\ar.exe"
    LD = PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\ld.exe"
    MKDIR = mkdir -p
endif

CPPFLAGS = -std=c++11 -pg -Wall -O2 -DRMAKE_CUSTOM_NEW_OPERATOR \
    -I. -I.. -I../../ -I../../../ \
    $(INCDIRFLAGS)

ifneq ($(DEBUG), )
    CPPFLAGS += -g
endif

CCFLAGS = $(CPPFLAGS)

LDFLAGS = \
    -L../../../libraries/cor_algorithm/proj.gcc/ -lcor_algorithm \
    -L../../../libraries/cor_data_structure/proj.gcc/ -lcor_data_structure \
    -L../../../libraries/cor_type/proj.gcc/ -lcor_type \
    -L../../../libraries/cor_system/proj.gcc/ -lcor_system \
    -L../../../libraries/cor_mruby_interface/proj.gcc/ -lcor_mruby_interface
ARFLAGS = crsv

ifneq ($(PROFILING), )
    CPPFLAGS += -pg
    LDFLAGS += -pg
endif


DIRS = $(SRCDIRS)
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cc,%.o, $(patsubst %.cpp,%.o,$(SRCS)))
DEPENDS = $(patsubst %.cc,%.d, $(patsubst %.cpp,%.d,$(SRCS)))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(TARGET) $(OBJS)  $(LDFLAGS)
	
%.o: %.cpp
	$(CXX) $(CPPFLAGS) $< -c -o $@

%.o: %.cc
	$(CXX) $(CPPFLAGS) $< -c -o $@

%.o: %.c
	$(CC) $(CCFLAGS) $< -c -o $@
	
%.d: %.cpp
	$(CXX) $(CPPFLAGS) -M $<  >  $@

%.d: %.cc
	$(CXX) $(CPPFLAGS) -M $<  >  $@

clean : 
	-$(RM) $(TARGET) $(OBJS) $(DEPENDS)

-include $(DEPENDS)

