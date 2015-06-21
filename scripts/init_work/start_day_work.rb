
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

run_cmd "ruby update_all.rb"

if RUBY_PLATFORM.include? "mswin32"
  WINDOWS = true
else
  WINDOWS = false
end

if WINDOWS
  Dir.chdir "../../external/mruby_build"
  
  #run_cmd "sh build_win_all.sh"
  
end

Dir.chdir run_dir
Dir.chdir "../../libraries/scripts/"

run_cmd  "ruby filelist.rb"

exit @result
