
require "fileutils"
FileUtils.chdir "#{File.dirname __FILE__}"
@here = Dir::getwd

# ruby test.rb --log_level=test_suite
# ruby test.rb --run_test=each/each_vector

args = ARGV
force = ""
args = args.select do |arg|
  if arg === "-f"
    force = arg
    false
  else
    true
  end
end
args = args.join(" ")

def run_cmd(cmd)
  puts "run -> #{cmd}"
  r = system cmd
  unless r
    message = "faild on -> #{cmd}"
    puts message
    raise message
  end
  @result &= r
  r
end

if RUBY_PLATFORM.downcase =~ /mswin(?!ce)|mingw|cygwin|bccwin/
  run_cmd "ruby build_win64.rb #{force}"
  run_cmd "build/win64/Debug/cor_test_main.exe #{args}"
else
  run_cmd "ruby build_default.rb"
  run_cmd "build/default/cor_test_main.exe #{args}"
end

