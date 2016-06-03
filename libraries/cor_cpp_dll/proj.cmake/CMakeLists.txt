cmake_minimum_required(VERSION 3.2)
project (cor_cpp_dll)

find_package (Threads)
if(MSVC)

elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char -DNDEBUG -O3")
    set(LIBRARY_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
    set(EXECUTABLE_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -llog")

elseif(${COR_BUILD_TYPE} MATCHES "ios")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -stdlib=libc++ -fexceptions -frtti -fsigned-char -isysroot ${CMAKE_OSX_SYSROOT}")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -O3")
    set(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> -rcs <TARGET> <LINK_FLAGS> <OBJECTS>")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fexceptions -frtti -fsigned-char -pthread")
endif()

if (DEFINED COR_CMAKE_OSX_ARCHITECTURES)
    set(CMAKE_OSX_ARCHITECTURES ${COR_CMAKE_OSX_ARCHITECTURES})
endif()

include_directories (../sources)
include_directories (../../../libraries/)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
include_directories (../../cor_algorithm/sources)
include_directories (../../cor_data_structure/sources)
include_directories (../../cor_system/sources)
include_directories (../../cor_type/sources)
include_directories (../../cor_cpp_import/sources)
file(GLOB_RECURSE cor_cpp_dll_scr
    "../sources/*.h"
    "../sources/*.cpp"
    "../../cor_algorithm/sources/*.h"
    "../../cor_algorithm/sources/*.cpp"
    "../../cor_data_structure/sources/*.h"
    "../../cor_data_structure/sources/*.cpp"
    "../../cor_system/sources/*.h"
    "../../cor_system/sources/*.cpp"
    "../../cor_type/sources/*.h"
    "../../cor_type/sources/*.cpp"
    "../../cor_cpp_interface/sources/*.h"
    "../../cor_cpp_interface/sources/*.cpp"
    "../../cor_cpp_import/sources/*.h"
    "../../cor_cpp_import/sources/*.cpp"
)

if(EXISTS ${PROJECT_SOURCE_DIR}/../../cor_cpp_import/proj.common/cor_cpp_interface_cmake_local_conf.txt)
    include(${PROJECT_SOURCE_DIR}/../../cor_cpp_import/proj.common/cor_cpp_interface_cmake_local_conf.txt)

    foreach(loop_var ${cor_cpp_interface_sources})
        set(cor_cpp_dll_scr ${cor_cpp_dll_scr} ${PROJECT_SOURCE_DIR}/${loop_var})
    endforeach(loop_var)

endif()

add_library (cor_cpp_dll SHARED ${cor_cpp_dll_scr})

