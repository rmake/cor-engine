
$LOAD_PATH.push('.')

require 'fileutils'
require 'open3'

run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

def run_cmd cmd
  puts "run -> #{cmd}"
  o, e, s = Open3.capture3("#{cmd}")
  puts o
  puts e
  puts s
  STDOUT.flush
end

source_branch = `git rev-parse --abbrev-ref HEAD`
puts "source_branch = #{source_branch}"

run_cmd "git pull origin devel"
run_cmd "git pull origin #{source_branch}"

run_cmd "ruby start_day_work.rb"

