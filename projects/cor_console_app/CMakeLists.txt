cmake_minimum_required (VERSION 3.2)
project (cor_console_app_main)
include_directories (cor_console_app_main)
include_directories (../../libraries/)
include_directories (../../external/boost)
include_directories (../../external/mruby/include)
include_directories (../../external/mrubybind)
add_subdirectory (../../libraries/cor_type/proj.cmake cor_type)
add_subdirectory (../../libraries/cor_algorithm/proj.cmake cor_algorithm)
add_subdirectory (../../libraries/cor_data_structure/proj.cmake cor_data_structure)
add_subdirectory (../../libraries/cor_system/proj.cmake cor_system)
add_subdirectory (../../libraries/cor_mruby_interface/proj.cmake cor_mruby_interface)
file(GLOB_RECURSE cor_console_app_main_scr
    "sources/*.h"
    "sources/*.cpp"
)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_type)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_algorithm)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_data_structure)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_system)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_mruby_interface)


add_executable (cor_console_app_main ${cor_console_app_main_scr})
#target_link_libraries (cor_console_app_main mruby)

if(MSVC)
    target_link_libraries (cor_console_app_main debug ${PROJECT_SOURCE_DIR}/../../external/mruby_build/builded/vc_debug/lib/libmruby.lib)
    target_link_libraries (cor_console_app_main optimized ${PROJECT_SOURCE_DIR}/../../external/mruby_build/builded/vc_release/lib/libmruby.lib)

    target_link_libraries (cor_console_app_main cor_type)
    target_link_libraries (cor_console_app_main cor_algorithm)
    target_link_libraries (cor_console_app_main cor_data_structure)
    target_link_libraries (cor_console_app_main cor_system)
    target_link_libraries (cor_console_app_main cor_mruby_interface)

endif()
