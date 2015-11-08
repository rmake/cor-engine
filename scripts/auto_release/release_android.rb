
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
Dir.chdir '../../projects/deploy_script'

#run_cmd 'ruby deploy_android.rb ../majitai_running'
run_cmd "ruby ../project_script/copy_project.rb ../majitai_running"
Dir.chdir "../cor_lib_test_main"
run_cmd "cocos compile -p android -j 2 --ndk-mode release"

puts "end of release_android.rb"

exit @result
