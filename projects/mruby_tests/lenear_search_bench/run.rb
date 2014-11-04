

def run(url, local_path, branch)
  #puts `git clone #{url} #{local_path}`
  #puts `sh -c \"cd #{local_path}; git checkout #{branch}"`
  #puts `sh -c \"cd #{local_path}; ruby minirake"`
  
  code = <<EOS
class C
  #{(100.times.map do |i| "  def a#{i}; @a#{i};   end\n" end).join}
  #{(100.times.map do |i| "  def a#{i}=(v); @a#{i}=v; end\n" end).join}
  def initialize
    #{(100.times.map do |i| "    self.a#{i} = 0\n" end).join}
  end
end
c = C.new;
1000.times do |i|
  #{(100.times.map do |i| "  c.a#{i} += 1;\n" end).join}
end
puts "c.a0 = \#{c.a0}"
EOS
  
  File.open "#{local_path}/code.rb", "w" do |f|
    f.write code
  end
  
  tm = Time.new
  puts `#{local_path}/build/host/bin/mruby #{local_path}/code.rb`
  tm = (Time.new - tm).to_f
  o = []
  o << "time = #{tm}"
  o << ""
end

require 'fileutils'
#FileUtils.rmtree "build_tmp"

o = []

o << "lenear search"
o += run "https://github.com/mruby/mruby.git", "build_tmp/mruby", "master"

o << "hash search"
o += run "https://github.com/dycoon/mruby_dycoon.git", "build_tmp/mruby_dycoon", "symbol_to_name_hash"

puts o.join("\n")
