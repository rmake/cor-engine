project (cor_data_structure)
file(GLOB_RECURSE cor_data_structure_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
add_library (cor_data_structure ${cor_data_structure_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (./sources)
target_include_directories (cor_data_structure PUBLIC ../../)


