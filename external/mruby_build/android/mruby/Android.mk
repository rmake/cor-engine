

#APP_ABI := all
#NDK_TOOLCHAIN_VERSION := clang
#APP_PLATFORM := android-14
#APP_STL := gnustl_static

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

MRUBY_PATH:=../
LOCAL_MODULE:= mruby_static
LOCAL_MODULE_FILENAME := libmruby
LOCAL_CFLAGS:= -DSIZE_MAX=4294967296 -D__MRB_ENABLE_CXX_EXCEPTION -O3 -I../../../mruby/include -I../../../mruby/src/
LOCAL_CPPFLAGS := -fexceptions -frtti -fpermissive -O3 -DSIZE_MAX=4294967296 -DMRB_ENABLE_CXX_EXCEPTION -O3 -I../../../mruby/include -I../../../mruby/src/

include ../FileList.mk

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../
LOCAL_EXPORT_LDLIBS := -llog

include $(BUILD_STATIC_LIBRARY)

