
require "fileutils"
FileUtils.chdir "#{File.dirname __FILE__}"
@here = Dir::getwd

# ruby test.rb -- --log_level=test_suite
# ruby test.rb -- --run_test=each/each_vector

args = ARGV
build_args = args.slice_before do |v|
  v == "--"
end
build_args = build_args.to_a

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
  run_cmd "ruby build_win64.rb #{build_args[0].join " "}"
  run_cmd "build/win64/Debug/cor_test_main.exe #{build_args[1] ? build_args[1].join(" "): ""}"
else
  run_cmd "ruby build_default.rb #{build_args[0].join " "}"
  run_cmd "build/default/cor_test_main #{build_args[1] ? build_args[1].join(" "): ""}"
end

