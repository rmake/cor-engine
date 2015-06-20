
$LOAD_PATH.push('.')

require 'fileutils'
require 'open3'

run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

@result = true

def run_cmd(cmd)
  puts "run -> #{cmd}"
  r = system cmd
  @result &= r
  r
end

source_branch = `git rev-parse --abbrev-ref HEAD`
puts "source_branch = #{source_branch}"

run_cmd "git pull origin devel"
run_cmd "git pull origin #{source_branch}"

run_cmd "ruby start_day_work.rb"

exit @result
