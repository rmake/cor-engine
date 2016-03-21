
$LOAD_PATH.push('.')

require 'fileutils'
require 'open3'

run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

@result = true

def run_cmd(cmd)
  puts "run -> #{cmd}"
  r = system cmd
  unless r
    puts "faild on -> #{cmd}"
  end
  @result &= r
  r
end

source_branch = `git rev-parse --abbrev-ref HEAD`
puts "source_branch = #{source_branch}"

run_cmd `git fetch`

is_ff = `git rev-list --count #{source_branch}..origin/#{source_branch}`
puts "is_ff #{is_ff}"
if is_ff == "0"
  #run_cmd "git pull origin devel"
  run_cmd "git pull --rebase origin #{source_branch}"

  if @result
    run_cmd "ruby start_day_work.rb"
  end
end

exit @result
