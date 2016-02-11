cmake_minimum_required(VERSION 2.8)
project (cor_all_cocos2dx)
if(MSVC)

    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /D_UNICODE /DCOCOS2D_DEBUG=1")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /D_UNICODE /DCOCOS2D_DEBUG=0")
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DANDROID_NDK -fexceptions -frtti -std=c++11 -fsigned-char -DNDEBUG -O3")
    set(LIBRARY_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
    set(EXECUTABLE_OUTPUT_PATH_ROOT "${CMAKE_CURRENT_BINARY_DIR}" CACHE PATH "")
else()
    set(CMAKE_CXX_FLAGS "-std=c++11  -stdlib=libc++ -fexceptions -frtti -fsigned-char ")
endif()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DCOCOS2D_DEBUG=1")

if(MSVC)
    add_definitions(/DCOCOS2DXWIN32_EXPOR)
    add_definitions(/DGL_GLEXT_PROTOTYPES)
    add_definitions(/D_CRT_SECURE_NO_WARNINGS)
    add_definitions(/D_SCL_SECURE_NO_WARNINGS)
    add_definitions(/D_EXPORT_DLL_)
    add_definitions(/D_USEGUIDLL)
    add_definitions(/D_USRSTUDIODLL)
    add_definitions(/D_USREXDLL)
    add_definitions(/DCC_ENABLE_CHIPMUNK_INTEGRATION=1)
    add_definitions(/DPROTOBUF_USE_DLLS)
    add_definitions(/DMRB_ENABLE_CXX_EXCEPTION)
else()

    if(${COR_BUILD_TYPE} MATCHES "osx")
        add_definitions(-DCC_TARGET_OS_MAC)
    elseif({COR_BUILD_TYPE} MATCHES "ios")
        add_definitions(-DCC_TARGET_OS_IPHONE)
    endif()

    add_definitions(-DCC_ENABLE_CHIPMUNK_INTEGRATION=1)
    add_definitions(-DMRB_ENABLE_CXX_EXCEPTION)
endif()

set(COCOS2D_PATH "../../../projects/cor_lib_test_main/cocos2d")
file(GLOB_RECURSE cor_all_cocos2dx_scr
    "../../cor_cocos2dx_mruby_interface/sources/*.cpp"
    "../../cor_algorithm/sources/*.cpp"
    "../../cor_data_structure/sources/*.cpp"
    "../../cor_system/sources/*.cpp"
    "../../cor_type/sources/*.cpp"
    "../../cor_mruby_interface/sources/*.cpp"
    "../../cor_cocos2dx_converter/sources/*.cpp"
    "../../cor_project_structure/sources/*.cpp"
)
message("test")

if(EXISTS ${PROJECT_SOURCE_DIR}/../../cor_project_structure/proj.common/cor_project_structure_cmake_local_conf.txt)
    include(${PROJECT_SOURCE_DIR}/../../cor_project_structure/proj.common/cor_project_structure_cmake_local_conf.txt)

    foreach(loop_var ${cor_project_strucre_sources})
        set(cor_all_cocos2dx_scr ${cor_all_cocos2dx_scr} ${PROJECT_SOURCE_DIR}/${loop_var})
    endforeach(loop_var)

endif()

add_library (cor_all_cocos2dx ${cor_all_cocos2dx_scr})
include_directories (../../)
include_directories (../../../external/boost)
include_directories (../../../external/mruby/include)
include_directories (../../../external/mrubybind)
include_directories (../../cor_algorithm/sources)
include_directories (../../cor_data_structure/sources)
include_directories (../../cor_system/sources)
include_directories (../../cor_type/sources)
include_directories (../../cor_mruby_interface/sources)
include_directories (../../cor_cocos2dx_converter/sources)
include_directories (../../cor_cocos2dx_mruby_interface/sources)
include_directories (../../cor_project_structure/sources)
include_directories (${COCOS2D_PATH})
include_directories (${COCOS2D_PATH}/cocos)
include_directories (${COCOS2D_PATH}/cocos/audio/include)
include_directories (${COCOS2D_PATH}/cocos/2d)
include_directories (${COCOS2D_PATH}/cocos/renderer)
include_directories (${COCOS2D_PATH}/cocos/platform)
include_directories (${COCOS2D_PATH}/cocos/platform/desktop)
include_directories (${COCOS2D_PATH}/cocos/base)
include_directories (${COCOS2D_PATH}/cocos/physics)
include_directories (${COCOS2D_PATH}/cocos/editor-support )
include_directories (${COCOS2D_PATH}/cocos/math)
message(${CMAKE_SYSTEM_NAME})
if(MSVC)
    include_directories (${COCOS2D_PATH}/cocos/platform/win32)
    include_directories (${COCOS2D_PATH}/external/win32-specific/gles/include/OGLES)
    include_directories (${COCOS2D_PATH}/external/glfw3/include)
    include_directories (${COCOS2D_PATH}/external/glfw3/include/win32)
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Android")
    include_directories (${COCOS2D_PATH}/cocos/platform/android)

elseif(${COR_BUILD_TYPE} MATCHES "osx")
    include_directories (${COCOS2D_PATH}/cocos/platform/mac)
    include_directories (${COCOS2D_PATH}/external/glfw3/include/mac)
elseif({COR_BUILD_TYPE} MATCHES "ios")
    include_directories (${COCOS2D_PATH}/cocos/platform/ios)
    include_directories (${COCOS2D_PATH}/cocos/platform/ios/Simulation)
endif()

target_include_directories (cor_all_cocos2dx PUBLIC ../../)


