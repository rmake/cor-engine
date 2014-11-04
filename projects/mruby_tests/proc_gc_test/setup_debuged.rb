
VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = 'minirake'

puts `git clone https://github.com/dycoon/mruby_dycoon.git build_tmp/mruby_debuged`
Dir.chdir 'build_tmp/mruby_debuged'
puts `git checkout issue2525`
puts `sh -c \"MRUBY_CONFIG=../../build_config.rb ruby #{MINIRAKE.gsub("\\", "\\\\")}\"`
#puts `cmd /c "call \"#{VCVAR_PATH.gsub("\\", "\\\\")}\" x86 & ruby #{MINIRAKE.gsub("\\", "\\\\")} -v"`
Dir.chdir '../..'

puts "gc_test"
puts `build_tmp/mruby_debuged/build/host/bin/mruby -e "GC.test"`

puts "proc_gc"
#puts `build_tmp/mruby_debuged/build/host/bin/mruby proc_gc.rb`


