puts `sh -c \"cd build_tmp/mruby; ruby minirake\"`
succeeded = true
ret = `build_tmp/mruby/build/host/bin/mruby proc_gc_ef.rb`
succeeded &&= ret.match(/succeeded!/)
puts "t0 #{ret.match(/succeeded!/)}"

ret = `build_tmp/mruby/build/host/bin/mruby proc_gc_ef_2.rb`
succeeded &&= ret.match(/succeeded!/)
puts "t1 #{ret.match(/succeeded!/)}"


if succeeded
  puts "all success."
else
  puts "some failed."
end



