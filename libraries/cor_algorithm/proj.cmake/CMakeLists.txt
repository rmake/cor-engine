project (cor_algorithm)
file(GLOB_RECURSE cor_algorithm_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
add_library (cor_algorithm ${cor_algorithm_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (./sources)
target_include_directories (cor_algorithm PUBLIC ../../)


