cmake_minimum_required(VERSION 3.2)
project (cor_test_main)
find_package (Threads)

if(MSVC)

else()
    set(CMAKE_CXX_FLAGS "-std=c++11 -fexceptions -frtti -fsigned-char -pthread")
endif()

add_definitions("-DCOR_ALLOCATION_MONITOR_ENABLE")

set(COR_PATH ../../../)

include_directories (cor_test_main)
include_directories ("${COR_PATH}/libraries/")
include_directories ("${COR_PATH}/external/boost")
include_directories ("${COR_PATH}/external/mruby/include")
include_directories ("${COR_PATH}/external/mrubybind")
#add_subdirectory (../../../libraries/cor_all_mruby/proj.cmake cor_all_mruby)
#add_subdirectory (../../../libraries/cor_all_cpp/proj.cmake cor_all_cpp)

include_directories ("${COR_PATH}/libraries/cor_algorithm/sources")
include_directories ("${COR_PATH}/libraries/cor_data_structure/sources")
include_directories ("${COR_PATH}/libraries/cor_system/sources")
include_directories ("${COR_PATH}/libraries/cor_type/sources")
include_directories ("${COR_PATH}/libraries/cor_cpp_import/sources")

file(GLOB_RECURSE cor_test_main_scr
    "../sources/*.h"
    "../sources/*.cpp"
    "${COR_PATH}/libraries/cor_algorithm/sources/*.h"
    "${COR_PATH}/libraries/cor_algorithm/sources/*.cpp"
    "${COR_PATH}/libraries/cor_data_structure/sources/*.h"
    "${COR_PATH}/libraries/cor_data_structure/sources/*.cpp"
    "${COR_PATH}/libraries/cor_system/sources/*.h"
    "${COR_PATH}/libraries/cor_system/sources/*.cpp"
    "${COR_PATH}/libraries/cor_type/sources/*.h"
    "${COR_PATH}/libraries/cor_type/sources/*.cpp"
    "${COR_PATH}/libraries/cor_cpp_interface/sources/*.h"
    "${COR_PATH}/libraries/cor_cpp_interface/sources/*.cpp"
    "${COR_PATH}/libraries/cor_cpp_import/sources/*.h"
    "${COR_PATH}/libraries/cor_cpp_import/sources/*.cpp"
)

if(EXISTS ${PROJECT_SOURCE_DIR}/../../../libraries/cor_cpp_import/proj.common/cor_cpp_interface_cmake_local_conf.txt)
    include(${PROJECT_SOURCE_DIR}/../../../libraries/cor_cpp_import/proj.common/cor_cpp_interface_cmake_local_conf.txt)

    foreach(loop_var ${cor_cpp_interface_sources})
        set(cor_test_main_scr ${cor_test_main_scr} ${PROJECT_SOURCE_DIR}/${loop_var})
    endforeach(loop_var)

endif()


#link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_all_cpp)

add_executable (cor_test_main ${cor_test_main_scr})

#message("COR_BUILD_TYPE ${COR_BUILD_TYPE}")

if(MSVC)
    #if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    #    target_link_libraries (cor_test_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_debug/lib/libmruby.lib)
    #    target_link_libraries (cor_test_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_release/lib/libmruby.lib)
    #else()
    #    target_link_libraries (cor_test_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_debug_32/lib/libmruby.lib)
    #    target_link_libraries (cor_test_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_release_32/lib/libmruby.lib)
    #endif()

    #target_link_libraries (cor_test_main cor_all_cpp)

elseif(${COR_BUILD_TYPE} MATCHES "osx")

    message("COR_BUILD_TYPE MATCHES osx")

    #target_link_libraries (cor_test_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/mac_debug/lib/libmruby.a)
    #target_link_libraries (cor_test_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/mac_release/lib/libmruby.a)

    #target_link_libraries (cor_test_main cor_all_cpp)

else()

    execute_process(COMMAND
        ruby ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/build.rb
    )
    #target_link_libraries (cor_test_main ${PROJECT_SOURCE_DIR}/../../../external/mruby/build/default_debug/lib/libmruby.a)
    #target_link_libraries (cor_test_main cor_all_cpp)
endif()
