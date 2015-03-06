
require 'fileutils'
require 'open3'

target_list = [
  { :name => "../basic", :exe => "basic_test.exe" },
  { :name => "../math", :exe => "math_test.exe" },
  #{ :name => "../thread", :exe => "thread_test.exe" }, #mingw thead is buggy?
  { :name => "../data_structure", :exe => "data_structure_test.exe" },
  { :name => "../data_structure/geometry", :exe => "data_structure_geometry_test.exe" },
  { :name => "../data_structure/ai", :exe => "data_structure_ai_test.exe" },
]

run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

Dir.chdir '../../libraries/scripts/'

`ruby make_all_gcc.rb`

clean = ARGV.include? "with_clean"

target_pattern = /^target=/
targets = nil
ARGV.each do |v| 
  if v.match(target_pattern)
    targets ||= []
    targets << v.gsub(target_pattern, "")
  end
end

case_pattern = /^case=/
cases = nil
ARGV.each do |v| 
  if v.match(case_pattern)
    cases ||= []
    cases << v.gsub(case_pattern, "")
  end
end



def run_test run_dir, clean, path, cmd

  #run_dir = File.dirname(File.expand_path(__FILE__))
  Dir.chdir run_dir
  Dir.chdir path

  print "#{path} start\n"
  
  File.open "test_result.log", "w" do |f|
    f.write "not tested."
  end

  flag = ""
  mkcmd = "make"
  if RUBY_PLATFORM.include? "mswin32"
      flag = "WINDOWS=TRUE"
      mkcmd = "/c/MinGW/msys/opt/windows_64/bin/mingw32-make.exe"
  end
  
  
  
  test_result = ""
  
  if clean
    tmp_cmd = "sh -c \"#{mkcmd} clean -j 4 -j 4 #{flag}\""
    puts tmp_cmd
    o, e, s = Open3.capture3(tmp_cmd)
  end
  
  tmp_cmd = "sh -c \"#{mkcmd} -j 4 -j 4 #{flag}\""
  puts tmp_cmd
  o, e, s = Open3.capture3(tmp_cmd)
  
  print o
  print e
  print s
  
  if s.exitstatus != 0
    test_result += "failed\n"
    #test_result += "#{o}\n"
    #test_result += "#{e}\n"
    test_result += "#{s}\n"
  else
    o, e, s = Open3.capture3(cmd)
    
    if e.include? "*** No errors detected"
      test_result += "succeeded\n"
    else
      test_result += "failed\n"
    end
    
    test_result += "<p>\n"
    if e.include? "*** No errors detected"
      test_result += '<span class="label label-success">succeeded!</span><br />'
    else
      test_result += '<span class="label label-important">failed!</span><br />'
    end
    test_result += "\n"
    test_result += "path=#{path},cmd = #{cmd}<br />"
    test_result += "<pre>\n"
    test_result += "#{o}#{e}".gsub(/\n/m, "<br />\n")
    test_result += "</pre>\n"
    test_result += "</p>\n"
    
  end

  


  print test_result

  File.open "test_result.log", "w" do |f|
    f.write test_result
  end

  print "#{path} end\n"

end

target_list.each do |target|
  if targets
    next unless targets.include? target[:name]
  end
  
  exe = target[:exe]
  if cases
    exe += " --run_test=" + cases.first
  end
  run_test run_dir, clean, target[:name], exe
end



