cd ..
cd mruby
rm -rf build/host
cp -f ../mruby_build/android/my.gembox mrbgems/
MRUBY_CONFIG=../mruby_build/android/build_config.rb ruby ./minirake
rm -f mrbgems/my.gembox
cd ..
cd mruby_build

cd android
ruby select_file.rb
ruby build_process.rb
cd ..
