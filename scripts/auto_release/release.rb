
$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')

require 'cor/utility'

run_dir = File.dirname(File.expand_path(__FILE__))

#
Dir.chdir run_dir
Dir.chdir '../../projects/deploy_script'
system 'ruby deploy_list_win.rb'

#
Dir.chdir run_dir
Dir.chdir '../../projects/deploy_script/build_tmp/majitai_running_test'

str = `cor_lib_test_main.exe`
puts "output -> #{str}"

if str.match(/error/)
  puts 'failed -> majitai_running_test'
else
  puts 'succeeded -> majitai_running_test'
end


#
Dir.chdir run_dir
Dir.chdir '../../libraries/scripts/'



