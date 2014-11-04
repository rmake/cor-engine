cd ..
cd mruby
MRUBY_CONFIG=../mruby_build/build_config.rb ruby ./minirake
cd ..
cd mruby_build

ruby ../../scripts/utility/rec_copy.rb ../mruby/build ./builded "(.*\.exe)|(.*\.lib)|(.*\.a)"

