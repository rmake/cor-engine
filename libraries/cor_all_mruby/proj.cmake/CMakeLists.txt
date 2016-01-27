cmake_minimum_required(VERSION 3.4)
project (cor_all_mruby)
if(MSVC)

elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char -DNDEBUG -O3")
    set(LIBRARY_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
    set(EXECUTABLE_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
endif()
add_definitions(-DMRB_ENABLE_CXX_EXCEPTION)
file(GLOB_RECURSE cor_all_mruby_scr
    "../../cor_mruby_interface/sources/*.cpp"
    "../../cor_algorithm/sources/*.cpp"
    "../../cor_data_structure/sources/*.cpp"
    "../../cor_system/sources/*.cpp"
    "../../cor_type/sources/*.cpp"
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
include_directories (../../cor_mruby_interface/sources)


target_include_directories (cor_all_mruby PUBLIC ../../)


