#C:\cocos2dx\external\apps\android-ndk-r9d\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_64\bin

puts `adb pull /sdcard/gmon.out`
puts `sh -c \"PATH=$PATH:/c/cocos2dx/external/apps/android-ndk-r9d/toolchains/arm-linux-androideabi-4.8/prebuilt/windows-x86_64/bin arm-linux-androideabi-gprof ../cor_lib_test_main/proj.android/obj/local/armeabi-v7a/libcocos2dcpp.so -PprofCount -QprofCount -P__gnu_mcount_nc -Q__gnu_mcount_nc > profile.log\"`
