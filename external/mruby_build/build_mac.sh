cd ..
cd mruby
rm -rf build
MRUBY_CONFIG=../mruby_build/build_config_mac.rb ruby ./minirake
cd ..
cd mruby_build

ruby ../../scripts/utility/rec_copy.rb ../mruby/build ./builded "(.*\.exe)|(.*\.lib)|(.*\.a)"
