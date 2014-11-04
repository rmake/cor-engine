
old_tm = Time.new

succeeded = true

10000.times do

  1000.times do
    Hash.new
  end
  
  tm = Time.new
  if tm < old_tm
    puts "time travel happened! now #{tm.to_f}, past #{old_tm.to_f}. failed!"
    succeeded = false
    break
  end
  
  old_tm = tm

end

if succeeded
  puts "no time travel. succeeded!."
end


