
VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = '.\minirake'

puts `git clone https://github.com/mruby/mruby.git build_tmp/mruby`
Dir.chdir 'build_tmp/mruby'
puts `ruby #{MINIRAKE}`

#puts `sh -c \"MRUBY_CONFIG=../../build_config.rb ruby minirake clean\"`
#puts `sh -c \"MRUBY_CONFIG=../../build_config.rb ruby minirake\"`

#puts `cmd /c "call \"#{VCVAR_PATH.gsub("\\", "\\\\")}\" x86 & ruby #{MINIRAKE.gsub("\\", "\\\\")} -v"`
Dir.chdir '../..'

#puts "gc_test"
#puts `build_tmp/mruby/build/host/bin/mruby -e "GC.test"`


puts "proc gc"
puts `build_tmp/mruby/build/host/bin/mruby proc_gc.rb`

