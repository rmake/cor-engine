project (cor_type)
file(GLOB_RECURSE cor_type_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
add_library (cor_type ${cor_type_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (./sources)
target_include_directories (cor_type PUBLIC ../../)


