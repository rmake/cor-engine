cmake_minimum_required(VERSION 3.2)
project (cor_mruby_console_app_main)

if(MSVC)

else()
    set(CMAKE_CXX_FLAGS "-std=c++11 -fexceptions -frtti -fsigned-char ")
endif()

include_directories (cor_mruby_console_app_main)
include_directories (../../../libraries/)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
add_subdirectory (../../../libraries/cor_all_mruby/proj.cmake cor_all_mruby)
file(GLOB_RECURSE cor_mruby_console_app_main_scr
    "../sources/*.h"
    "../sources/*.cpp"
)
link_directories(${CMAKE_CURRENT_BINARY_DIR}/cor_all_mruby)

add_executable (cor_mruby_console_app_main ${cor_mruby_console_app_main_scr})
#target_link_libraries (cor_mruby_console_app_main mruby)

message("COR_BUILD_TYPE ${COR_BUILD_TYPE}")

if(MSVC)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        target_link_libraries (cor_mruby_console_app_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_debug/lib/libmruby.lib)
        target_link_libraries (cor_mruby_console_app_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_release/lib/libmruby.lib)
    else()
        target_link_libraries (cor_mruby_console_app_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_debug_32/lib/libmruby.lib)
        target_link_libraries (cor_mruby_console_app_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/vc_release_32/lib/libmruby.lib)
    endif()

    target_link_libraries (cor_mruby_console_app_main cor_all_mruby)

    file(COPY "../resources" DESTINATION "${PROJECT_BINARY_DIR}/Debug")
    file(COPY "../resources" DESTINATION "${PROJECT_BINARY_DIR}/Release")

elseif(${COR_BUILD_TYPE} MATCHES "osx")

    message("COR_BUILD_TYPE MATCHES osx")

    target_link_libraries (cor_mruby_console_app_main debug ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/mac_debug/lib/libmruby.a)
    target_link_libraries (cor_mruby_console_app_main optimized ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/builded/mac_release/lib/libmruby.a)

    target_link_libraries (cor_mruby_console_app_main cor_all_mruby)

    file(COPY "../resources" DESTINATION "${PROJECT_BINARY_DIR}")
else()

    execute_process(COMMAND
        ruby ${PROJECT_SOURCE_DIR}/../../../external/mruby_build/build.rb
    )
    target_link_libraries (cor_mruby_console_app_main ${PROJECT_SOURCE_DIR}/../../../external/mruby/build/default_debug/lib/libmruby.a)
    target_link_libraries (cor_mruby_console_app_main cor_all_mruby)

    file(COPY "../resources" DESTINATION "${PROJECT_BINARY_DIR}")
endif()


