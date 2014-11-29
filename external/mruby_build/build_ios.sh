cd ..
cd mruby
rm -rf build
MRUBY_CONFIG=../mruby_build/build_config_ios.rb ruby ./minirake -v
cd ..
cd mruby_build

ruby ../../scripts/utility/rec_copy.rb ../mruby/build ./builded "(.*\.exe)|(.*\.lib)|(.*\.a)"

lipo -create ./builded/ios_debug/lib/libmruby.a ./builded/ios_sim_debug/lib/libmruby.a -output ./builded/ios_debug/lib/libmruby_combined.a
lipo -create ./builded/ios_release/lib/libmruby.a ./builded/ios_sim_release/lib/libmruby.a -output ./builded/ios_release/lib/libmruby_combined.a

