
run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')

require 'cor/utility'

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


#
Dir.chdir run_dir
Dir.chdir '../init_work'
run_cmd "ruby start_day_work.rb"

#
Dir.chdir run_dir

Dir.chdir '../../packages/examples/majitai_running'

run_cmd "ruby make.rb android --for-ci --arch=armeabi-v7a release"

puts "end of release_android.rb"

exit @result
