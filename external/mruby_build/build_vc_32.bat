rem cd C:\cocos2dx\dycoon_labo\external\mruby_build
rem build_vc_32.bat

call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86

cd ..
cd mruby
SET MRUBY_CONFIG=..\mruby_build\build_config_vc_32.rb
ruby .\minirake clean -v -t
ruby .\minirake -v -t
cd ..
cd mruby_build
