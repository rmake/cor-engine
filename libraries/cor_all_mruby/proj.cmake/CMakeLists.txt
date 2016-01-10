project (cor_system)
file(GLOB_RECURSE cor_system_scr
    "../../cor_algorithm/sources/*.h"
    "../../cor_data_structure/sources/*.cpp"
)
add_library (cor_system ${cor_system_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (../../cor_algorithm/sources)
include_directories (../../cor_data_structure/sources)
include_directories (../../cor_system/sources)
include_directories (../../cor_type/sources)
include_directories (../../cor_mruby_interface/sources)

target_include_directories (cor_system PUBLIC ../../)




