rem cd C:\cocos2dx\dycoon_labo\external\mruby_build
rem build_vc.bat

call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86_amd64

cd ..
cd mruby
SET MRUBY_CONFIG=..\mruby_build\build_config_vc.rb
ruby .\minirake clean -v
ruby .\minirake -v
cd ..
cd mruby_build
