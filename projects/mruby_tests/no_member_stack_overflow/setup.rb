VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = '.\minirake'

puts `rm -rf build_tmp/mruby`
puts `git clone https://github.com/mruby/mruby.git build_tmp/mruby`
Dir.chdir 'build_tmp/mruby'
#puts `cmd /c "call \"#{VCVAR_PATH.gsub("\\", "\\\\")}\" x86 & ruby #{MINIRAKE.gsub("\\", "\\\\")} -v"`
puts `make`
Dir.chdir '../..'

puts "test.rb crash"
puts `build_tmp/mruby/build/host/bin/mruby test.rb`

