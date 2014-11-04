
INCDIRFLAGS = -I../../../../external/boost \
-I../../../../external/mruby/include \
-I../../../../external/mrubybind \
-I../../../../external/boost \
-I../../../../ \
-I../../../../../
TARGET = libcor_system.a
MACROS = -DUSE_FILE32API \
-DCC_TARGET_OS_MAC \
-DCOCOS2D_DEBUG=1 \
-DCC_ENABLE_CHIPMUNK_INTEGRATION=1
ADDITIONALFLAGS = 

OUTPUTDIR = ./

CC = clang
CXX = clang++
AR = ar
MKDIR = mkdir -p

CPPFLAGS = -std=c++11 -stdlib=libc++ -Wall -O2 -DRMAKE_CUSTOM_NEW_OPERATOR     -I. -I../.. -I../../../ -I../../../../     $(INCDIRFLAGS) $(MACROS) $(ADDITIONALFLAGS)

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

-include ../../proj.common/file_list.mk

DIRS = $(SRCDIRS)
SRCS = $(addprefix ../,$(PRJSRCS))
OBJS = $(patsubst %.cc,%.$(TARGET).o, $(patsubst %.cpp,%.$(TARGET).o,$(SRCS)))
DEPENDS = $(patsubst %.cc,%.$(TARGET).d, $(patsubst %.cpp,%.$(TARGET).$(TARGET).d,$(SRCS)))

all: $(TARGET)
	echo "DEBUG = $(DEBUG), $(CPPFLAGS)"

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

