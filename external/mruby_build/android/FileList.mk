# mruby_make_begin
LOCAL_SRC_FILES:= $(MRUBY_PATH)/build_src/build/host/mrbgems/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-array-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-compiler/core/y.tab.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enum-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enum-lazy/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-enumerator/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-error/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-eval/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-exit/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-fiber/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-hash-ext/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-json/gem_init.c \
  $(MRUBY_PATH)/build_src/build/host/mrbgems/mruby-kernel-ext/gem_init.c \
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
  $(MRUBY_PATH)/build_src/build/mrbgems/mruby-json/src/mrb_json.c \
  $(MRUBY_PATH)/build_src/build/mrbgems/mruby-json/src/parson.c \
  $(MRUBY_PATH)/build_src/doc/api/mruby/array.h.md \
  $(MRUBY_PATH)/build_src/doc/api/mruby/hash.h.md \
  $(MRUBY_PATH)/build_src/doc/api/mruby/value.h.md \
  $(MRUBY_PATH)/build_src/doc/api/mruby.h.md \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-array-ext/src/array.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-compiler/core/codegen.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-error/src/exception.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-eval/src/eval.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-exit/src/mruby-exit.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-fiber/src/fiber.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-hash-ext/src/hash-ext.c \
  $(MRUBY_PATH)/build_src/mrbgems/mruby-kernel-ext/src/kernel.c \
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
  $(MRUBY_PATH)/build_src/src/codedump.c \
  $(MRUBY_PATH)/build_src/src/compar.c \
  $(MRUBY_PATH)/build_src/src/crc.c \
  $(MRUBY_PATH)/build_src/src/debug.c \
  $(MRUBY_PATH)/build_src/src/dump.c \
  $(MRUBY_PATH)/build_src/src/enum.c \
  $(MRUBY_PATH)/build_src/src/error.c \
  $(MRUBY_PATH)/build_src/src/etc.c \
  $(MRUBY_PATH)/build_src/src/fmt_fp.c \
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
