VCVAR_PATH = 'C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat'
MINIRAKE = '.\minirake'

#puts `git clone https://github.com/mruby/mruby.git build_tmp/mruby`
puts `git clone https://github.com/dycoon/mruby_dycoon.git build_tmp/mruby`
puts `sh -c \"cd build_tmp/mruby; git checkout issue2525\"`
#puts `sh -c \"cd build_tmp/mruby; git reset --hard HEAD\"`
#puts `sh -c \"cd build_tmp/mruby; ruby minirake clean\"`
puts `sh -c \"cd build_tmp/mruby; ruby minirake\"`

succeeded = true

puts "proc gc ef"
ret = `build_tmp/mruby/build/host/bin/mruby proc_gc_ef.rb`
succeeded &&= ret.match(/succeeded!/)
puts "#{ret}"

puts "proc gc ef 2"
ret = `build_tmp/mruby/build/host/bin/mruby proc_gc_ef_2.rb`
succeeded &&= ret.match(/succeeded!/)
puts "#{ret}"


if false
  # before correction
  puts `sh -c \"cd build_tmp/mruby; git reset --hard 2b9e5e751b4d6d1a86eb25b2a4e40f9c8d19c06c\"`
  #puts `sh -c \"cd build_tmp/mruby; ruby minirake clean\"`
  puts `sh -c \"cd build_tmp/mruby; ruby minirake\"`

  puts "proc gc ef before correction"
  ret = `build_tmp/mruby/build/host/bin/mruby proc_gc_ef.rb`
  succeeded ||= ret.match(/succeeded!/)
  puts "#{ret}"
end

if succeeded
  puts "all success."
else
  puts "some failed."
end
