LOCAL_PATH := $(call my-dir)

#

include $(CLEAR_VARS)

LOCAL_MODULE            := cor_all_cocos2dx
LOCAL_SRC_FILES         := ../../../../libraries/cor_all_cocos2dx/proj.cmake/build/android/$(TARGET_ARCH_ABI)/Release/libcor_all_cocos2dx.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../../libraries

include $(PREBUILT_STATIC_LIBRARY)

#

include $(CLEAR_VARS)

MRUBY_SRC_PATH := ../../../../external/mruby
MRUBY_GEM_SRC_PATH := $(MRUBY_SRC_PATH)/build/host/mrbgems
LOCAL_ARM_MODE := arm
LOCAL_MODULE := mruby
LOCAL_CFLAGS := -DANDROID_NDK -DFT2_BUILD_LIBRARY=1 -O3  -DSIZE_MAX=4294967295 # -DSIZE_MAX=4294967296
LOCAL_CPPFLAGS := -DANDROID_NDK -fexceptions -frtti -O3
ifeq ($(PROFILE),1)
  LOCAL_CFLAGS += -pg -DPROFILING
  LOCAL_CPPFLAGS += -pg -DPROFILING
endif
LOCAL_C_INCLUDES := $(LOCAL_PATH)/$(MRUBY_SRC_PATH)/include $(LOCAL_PATH)/$(MRUBY_SRC_PATH)/src $(LOCAL_PATH)/$(MRUBY_SRC_PATH)/mrbgems/mruby-compiler/core


ifeq ($(TARGET_ARCH),arm)
    #LOCAL_CFLAGS +=  -mtune=xscale -msoft-float
endif


MRUBY_PATH = ../../../../external/mruby_build/android/
include ../../../external/mruby_build/android/FileList.mk

include $(BUILD_STATIC_LIBRARY)

#

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/HelloWorldScene.cpp \
                   ../../Classes/ProjectTest1.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
    $(LOCAL_PATH)/$(LIB_BASE_PATH) \
    $(LOCAL_PATH)/../../../../external/mruby/include \
    $(LOCAL_PATH)/../../../../external/mrubybind \
    $(LOCAL_PATH)/../../../../external/boost \
    $(COCOS2D_PATH)/cocos $(COCOS2D_PATH)/cocos/audio/include $(COCOS2D_PATH)/cocos/2d $(COCOS2D_PATH)/cocos/renderer $(COCOS2D_PATH)/cocos/platform $(COCOS2D_PATH)/cocos/platform/desktop $(COCOS2D_PATH)/cocos/platform/android $(COCOS2D_PATH)/cocos/base $(COCOS2D_PATH)/cocos/physics $(COCOS2D_PATH)/cocos/editor-support $(COCOS2D_PATH)/cocos/math $(COCOS2D_PATH)/extensions $(COCOS2D_PATH)


# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

LOCAL_WHOLE_STATIC_LIBRARIES += mruby
LOCAL_WHOLE_STATIC_LIBRARIES += cor_all_cocos2dx

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END

ifeq ($(PROFILE),1)
  $(call import-module,android-ndk-profiler)
endif
