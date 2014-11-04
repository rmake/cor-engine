ruby ../project_script/copy_project.rb
cd ../cor_lib_test_main
V=1 cocos run -p android -j 8 --ndk-mode release 2>&1 | tee compile.log
