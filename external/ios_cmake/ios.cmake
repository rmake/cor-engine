# from http://taichino.com/programming/python-programming/4225

# variables
set(ARCH "i386" CACHE STRING "Target Architecture")
set(PLATFORM "iPhoneSimulator" CACHE STRING "Target Platform")

# path
set(DEV_ROOT "/Applications/Xcode.app/Contents/Developer")
#file(GLOB IOS_SDKS "${DEV_ROOT}/Platforms/${PLATFORM}.platform/Developer/SDKs/*")
#list(SORT IOS_SDKS)
#list(REVERSE IOS_SDKS)
#list(GET IOS_SDKS 0 SDK_ROOT)
set(SDK_ROOT "${DEV_ROOT}/Platforms/${PLATFORM}.platform/Developer/SDKs/${PLATFORM}.sdk")
#set(CMAKE_C_COMPILER "${DEV_ROOT}/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang")
#set(CMAKE_CXX_COMPILER "${DEV_ROOT}/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++")
#set(CMAKE_AR "${DEV_ROOT}/Toolchains/XcodeDefault.xctoolchain/usr/bin/ar")
#set(CMAKE_RANLIB "${DEV_ROOT}/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -miphoneos-version-min=5.0 -arch ${ARCH} -isysroot ${SDK_ROOT}")
