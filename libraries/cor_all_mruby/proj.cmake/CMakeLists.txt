cmake_minimum_required(VERSION 3.2)
project (cor_all_mruby)
if(MSVC)

elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char -DNDEBUG -O3")
    set(LIBRARY_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
    set(EXECUTABLE_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
elseif(${COR_BUILD_TYPE} MATCHES "ios")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -stdlib=libc++ -fexceptions -frtti -fsigned-char -isysroot ${CMAKE_OSX_SYSROOT}")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -O3")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -stdlib=libc++ -fexceptions -frtti -fsigned-char ")
endif()

if (DEFINED COR_CMAKE_OSX_ARCHITECTURES)
    set(CMAKE_OSX_ARCHITECTURES ${COR_CMAKE_OSX_ARCHITECTURES})
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


target_include_directories (cor_all_mruby PUBLIC ../../)


