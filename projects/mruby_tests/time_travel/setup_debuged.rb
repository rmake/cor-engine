
VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = '.\minirake'

puts `git clone https://github.com/dycoon/mruby_dycoon.git build_tmp/mruby_debuged`
Dir.chdir 'build_tmp/mruby_debuged'
puts `git checkout debug_timer`
puts `ruby #{MINIRAKE}`
#puts `cmd /c "call \"#{VCVAR_PATH.gsub("\\", "\\\\")}\" x86 & ruby #{MINIRAKE.gsub("\\", "\\\\")} -v"`
Dir.chdir '../..'

puts "time travel"
puts `build_tmp/mruby_debuged/build/host/bin/mruby time_travel.rb`

