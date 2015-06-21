

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

Dir.chdir "../../"

run_cmd "git submodule init"
run_cmd "git submodule update"

#
Dir.chdir "external/mruby"

run_cmd "git checkout work"

run_cmd "git submodule init"
run_cmd "git submodule update"

#run_cmd "git pull origin work"
run_cmd "git fetch"
run_cmd "git reset --hard origin/work"

Dir.chdir "../../"

#
Dir.chdir "external/mrubybind"

run_cmd "git checkout devel"

run_cmd "git submodule init"
run_cmd "git submodule update"

#run_cmd "git pull origin devel"
run_cmd "git fetch"
run_cmd "git reset --hard origin/devel"

Dir.chdir "../../"



