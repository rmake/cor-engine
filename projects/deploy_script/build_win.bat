call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86

cd ..
cd cor_lib_test_main\proj.win32\

msbuild cor_lib_test_main.sln /p:Configuration=Release

cd ..\..
cd deploy_script

