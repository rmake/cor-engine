
INCDIRFLAGS = -I../../../external/boost \
-I../../../external/mruby/include \
-I../../../external/mrubybind \
-I../../../external/boost \
-I../../../ \
-I../../../../ \
-I../../../projects/cor_lib_test_main/cocos2d/cocos \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/audio/include \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/2d \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/renderer \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/platform \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/platform/desktop \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/platform/linux \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/base \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/physics \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/editor-support \
-I../../../projects/cor_lib_test_main/cocos2d/cocos/math \
-I../../../projects/cor_lib_test_main/cocos2d/extensions \
-I../../../projects/cor_lib_test_main/cocos2d/external \
-I../../../projects/cor_lib_test_main/cocos2d
TARGET = libcor_cocos2dx_converter.a

OUTPUTDIR = ./lib

#CC := clang
#CXX := clang++ -Xclang -ast-dump -fsyntax-only -DLINUX
CC := gcc
CXX := g++
AR := ar
MKDIR := mkdir -p

ifneq ($(WINDOWS), )
    CC := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\x86_64-w64-mingw32-gcc.exe" -m32 -static 
    CXX := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\x86_64-w64-mingw32-g++.exe" -m32 -static 
    AR := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\Mingw64\mingw64_4_8_1_5\bin\ar.exe"
    MKDIR := mkdir -p
    
    #CC := clang -D_HAS_EXCEPTIONS=0
    #CXX := clang++ -D_HAS_EXCEPTIONS=0
    #AR := ar
    #MKDIR := mkdir -p
endif

ifneq ($(CLANG), )
    INCDIRFLAGS += -I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/
    INCDIRFLAGS += -I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/x86_64-redhat-linux/
    CC := clang
    CXX := clang++ 
    AR := ar
    MKDIR := mkdir -p
endif


#ifneq ($(WINDOWS), )
#    CC := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\TDM-GCC-64\bin\gcc.exe" -m32 -static 
#    CXX := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\TDM-GCC-64\bin\g++.exe" -m32 -static 
#    AR := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\TDM-GCC-64\bin\ar.exe"
#    MKDIR := mkdir -p
#endif


CPPFLAGS = -std=c++11 -pg -Wall -O2 -DRMAKE_CUSTOM_NEW_OPERATOR \
    -I. -I.. -I../../ -I../../../ \
    $(INCDIRFLAGS)

ifneq ($(CLANG), )
  CPPFLAGS += -stdlib=libstdc++
endif

ifneq ($(DEBUG), )
    CPPFLAGS += -g
endif

CCFLAGS = $(CPPFLAGS)

LDFLAGS =
ARFLAGS = crsv

ifneq ($(PROFILING), )
    CPPFLAGS += -pg
    LDFLAGS += -pg
endif

-include ../proj.common/file_list.mk

DIRS = $(SRCDIRS)
SRCS = $(PRJSRCS)
OBJS = $(patsubst %.cc,%.$(TARGET).o, $(patsubst %.cpp,%.$(TARGET).o,$(SRCS)))
DEPENDS = $(patsubst %.cc,%.$(TARGET).d, $(patsubst %.cpp,%.$(TARGET).d,$(SRCS)))



all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJS)
	
%.$(TARGET).o: %.cpp
	$(CXX) $(CPPFLAGS) $< -c -o $@

#%.$(TARGET).o: %.cc
#	$(CXX) $(CPPFLAGS) $< -c -o $@

%.$(TARGET).o: %.c
	$(CC) $(CCFLAGS) $< -c -o $@
	
%.$(TARGET).d: %.cpp
	$(CXX) $(CPPFLAGS) -M $<  >  $@

#%.$(TARGET).d: %.cc
#	$(CXX) $(CPPFLAGS) -M $<  >  $@

clean : 
	-$(RM) $(TARGET) $(OBJS) $(DEPENDS)

-include $(DEPENDS)

