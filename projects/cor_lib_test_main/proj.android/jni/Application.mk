APP_STL := gnustl_static
#APP_STL := c++_static
NDK_TOOLCHAIN_VERSION = 4.8
#NDK_TOOLCHAIN_VERSION=clang

APP_CPPFLAGS := -frtti -DCC_ENABLE_CHIPMUNK_INTEGRATION=1 -std=c++11 -fsigned-char
APP_LDFLAGS := -latomic

APP_DEBUG := $(strip $(NDK_DEBUG))
ifeq ($(APP_DEBUG),1)
  APP_CPPFLAGS += -DCOCOS2D_DEBUG=1
  APP_OPTIM := debug
else
  APP_CPPFLAGS += -DNDEBUG
  APP_OPTIM := release
endif

#ifeq ($(PROFILE),1)
#  APP_CFLAGS += -pg -DPROFILING
#  APP_CPPFLAGS += -pg -DPROFILING
#endif

#APP_ABI := armeabi-v7a
APP_ABI := armeabi armeabi-v7a x86
