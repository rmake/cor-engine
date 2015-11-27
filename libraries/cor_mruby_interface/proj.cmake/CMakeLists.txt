project (cor_mruby_interface)
file(GLOB_RECURSE cor_mruby_interface_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
add_library (cor_mruby_interface ${cor_mruby_interface_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
include_directories (./sources)
target_include_directories (cor_mruby_interface PUBLIC ../../)


