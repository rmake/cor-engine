
require 'fileutils'
require 'open3'


run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

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

run_cmd "ruby ../unit/proj.cmake/test.rb --log_level=test_suite"



