project (cor_system)
file(GLOB_RECURSE cor_system_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
add_library (cor_system ${cor_system_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (./sources)
target_include_directories (cor_system PUBLIC ../../)


