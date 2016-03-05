cmake_minimum_required(VERSION 3.2)
project (cor_console_app_main)

if(MSVC)

else()
    set(CMAKE_CXX_FLAGS "-std=c++11 -fexceptions -frtti -fsigned-char ")
endif()

include_directories (cor_console_app_main)
include_directories (../../../libraries/)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
add_subdirectory (../../../libraries/cor_all_cpp/proj.cmake cor_all_cpp)
file(GLOB_RECURSE cor_console_app_main_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_all_cpp)

add_executable (cor_console_app_main ${cor_console_app_main_scr})
#target_link_libraries (cor_console_app_main mruby)

message("COR_BUILD_TYPE ${COR_BUILD_TYPE}")

if(MSVC)
    target_link_libraries (cor_console_app_main cor_all_cpp)

elseif(${COR_BUILD_TYPE} MATCHES "osx")
    target_link_libraries (cor_console_app_main cor_all_cpp)

else()
    target_link_libraries (cor_console_app_main cor_all_cpp)
endif()
