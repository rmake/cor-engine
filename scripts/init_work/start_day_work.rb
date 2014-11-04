
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

run_cmd "sh ./update_all.sh"

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
