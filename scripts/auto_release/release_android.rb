
run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')

require 'cor/utility'


#
Dir.chdir run_dir
Dir.chdir '../init_work'
system "ruby start_day_work.rb"

#
Dir.chdir run_dir
Dir.chdir '../../projects/deploy_script'

#system 'ruby deploy_android.rb ../majitai_running'
system "ruby ../project_script/copy_project.rb ../majitai_running"
Dir.chdir "../cor_lib_test_main"
system "cocos compile -p android -j 8 --ndk-mode release"

puts "end of release_android.rb"
