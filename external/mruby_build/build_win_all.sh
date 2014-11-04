
cmd /c "build_vc.bat"
cmd /c "build_vc_32.bat"

echo "end build_vc.bat"

cd ..
cd mruby
MRUBY_CONFIG=../mruby_build/build_config.rb ruby ./minirake clean -v -t
MRUBY_CONFIG=../mruby_build/build_config.rb ruby ./minirake -v -t
cd ..
cd mruby_build

ruby ../../scripts/utility/rec_copy.rb ../mruby/build ./builded "(.*\.exe)|(.*\.lib)|(.*\.a)"

