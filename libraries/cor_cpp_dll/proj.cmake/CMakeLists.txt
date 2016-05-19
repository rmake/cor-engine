cmake_minimum_required(VERSION 3.2)
project (cor_cpp_dll)

if(MSVC)

else()
    set(CMAKE_CXX_FLAGS "-std=c++11 -fexceptions -frtti -fsigned-char ")
endif()

include_directories (../sources)
include_directories (../../../libraries/)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
add_subdirectory (../../../libraries/cor_all_cpp/proj.cmake cor_all_cpp)
file(GLOB_RECURSE cor_cpp_dll_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
message("cor_cpp_dll_scr ${cor_cpp_dll_scr}")
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_all_cpp)

add_library (cor_cpp_dll SHARED ${cor_cpp_dll_scr})
#target_link_libraries (cor_cpp_dll mruby)

message("COR_BUILD_TYPE ${COR_BUILD_TYPE}")

if(MSVC)
    target_link_libraries (cor_cpp_dll cor_all_cpp)

elseif(${COR_BUILD_TYPE} MATCHES "osx")
    target_link_libraries (cor_cpp_dll cor_all_cpp)

else()
    target_link_libraries (cor_cpp_dll cor_all_cpp)
endif()
