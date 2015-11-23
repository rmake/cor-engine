
system "sh -c \"ruby ../project_script/copy_project.rb\""
system "sh -c \"cd ../cor_lib_test_main;PROFILE=1 V=1 cocos run -p android -j 6 --ndk-mode release 2>&1 | tee compile.log\""

