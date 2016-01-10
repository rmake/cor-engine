project (cor_all_mruby)
file(GLOB_RECURSE cor_all_mruby_scr
    "../../cor_algorithm/sources/*.h"
    "../../cor_data_structure/sources/*.cpp"
    "../../cor_system/sources/*.cpp"
    "../../cor_type/sources/*.cpp"
    "../../cor_mruby_interface/sources/*.cpp"
)
add_library (cor_all_mruby ${cor_all_mruby_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
include_directories (../../cor_algorithm/sources)
include_directories (../../cor_data_structure/sources)
include_directories (../../cor_system/sources)
include_directories (../../cor_type/sources)
include_directories (../../cor_mruby_interface/sources)

target_include_directories (cor_all_mruby PUBLIC ../../)




