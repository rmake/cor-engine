
VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = '.\minirake'

#puts `git clone https://github.com/mruby/mruby.git build_tmp/mruby`
Dir.chdir 'build_tmp/mruby'
puts `cmd /c "call \"#{VCVAR_PATH.gsub("\\", "\\\\")}\" x86 & ruby #{MINIRAKE.gsub("\\", "\\\\")} -v"`
Dir.chdir '../..'

puts "stack_test.rb crash"
puts `build_tmp/mruby/build/host/bin/mruby.exe stack_test.rb`

puts "stack_test_2.rb ok"
puts `build_tmp/mruby/build/host/bin/mruby.exe stack_test_2.rb`

