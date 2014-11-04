# ndk-build NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_ABI=armeabi obj/local/armeabi/libmruby.a

APP_ABI := all
NDK_TOOLCHAIN_VERSION := clang
APP_PLATFORM := android-14
APP_STL := gnustl_static

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

MRUBY_PATH:=./
LOCAL_MODULE:= mruby
LOCAL_CFLAGS:= -DSIZE_MAX=4294967296 -D__MRB_ENABLE_CXX_EXCEPTION -O3 -I../../mruby/include -I../../mruby/src/
LOCAL_CPPFLAGS := -fexceptions -frtti -fpermissive -O3 -DSIZE_MAX=4294967296 -DMRB_ENABLE_CXX_EXCEPTION -O3 -I../../mruby/include -I../../mruby/src/
# mruby_make_begin
LOCAL_SRC_FILES:= $(MRUBY_PATH)/build_src/build/host/mrbgems/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-array-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enum-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enum-lazy/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enumerator/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-eval/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-exit/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-fiber/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-hash-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-math/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-numeric-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-object-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-objectspace/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-print/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-proc-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-random/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-range-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-sprintf/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-string-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-string-utf8/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-struct/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-symbol-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-time/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-toplevel-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrblib/mrblib.c \
  $(MRUBY_PATH)/build_src/build/host/src/y.tab.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-array-ext/src/array.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-eval/src/eval.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-exit/src/mruby-exit.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-fiber/src/fiber.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-hash-ext/src/hash-ext.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-math/src/math.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-numeric-ext/src/numeric_ext.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-object-ext/src/object.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-objectspace/src/mruby_objectspace.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-print/src/print.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-proc-ext/src/proc.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-random/src/mt19937ar.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-random/src/random.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-range-ext/src/range.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-sprintf/src/kernel.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-sprintf/src/sprintf.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-string-ext/src/string.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-string-utf8/src/string.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-struct/src/struct.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-symbol-ext/src/symbol.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-time/src/time.c \
  $(MRUBY_PATH)/build_src/src/array.c \
  $(MRUBY_PATH)/build_src/src/backtrace.c \
  $(MRUBY_PATH)/build_src/src/class.c \
  $(MRUBY_PATH)/build_src/src/codegen.c \
  $(MRUBY_PATH)/build_src/src/compar.c \
  $(MRUBY_PATH)/build_src/src/crc.c \
  $(MRUBY_PATH)/build_src/src/debug.c \
  $(MRUBY_PATH)/build_src/src/dump.c \
  $(MRUBY_PATH)/build_src/src/enum.c \
  $(MRUBY_PATH)/build_src/src/error.c \
  $(MRUBY_PATH)/build_src/src/etc.c \
  $(MRUBY_PATH)/build_src/src/gc.c \
  $(MRUBY_PATH)/build_src/src/hash.c \
  $(MRUBY_PATH)/build_src/src/init.c \
  $(MRUBY_PATH)/build_src/src/kernel.c \
  $(MRUBY_PATH)/build_src/src/load.c \
  $(MRUBY_PATH)/build_src/src/numeric.c \
  $(MRUBY_PATH)/build_src/src/object.c \
  $(MRUBY_PATH)/build_src/src/pool.c \
  $(MRUBY_PATH)/build_src/src/print.c \
  $(MRUBY_PATH)/build_src/src/proc.c \
  $(MRUBY_PATH)/build_src/src/range.c \
  $(MRUBY_PATH)/build_src/src/state.c \
  $(MRUBY_PATH)/build_src/src/string.c \
  $(MRUBY_PATH)/build_src/src/symbol.c \
  $(MRUBY_PATH)/build_src/src/variable.c \
  $(MRUBY_PATH)/build_src/src/version.c \
  $(MRUBY_PATH)/build_src/src/vm.c
# mruby_make_end

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
LOCAL_EXPORT_LDLIBS := -llog

include $(BUILD_STATIC_LIBRARY)
