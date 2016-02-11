
$LOAD_PATH.push('.')

require 'fileutils'

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

if ARGV[0]
  run_cmd "ruby ../project_script/copy_project.rb #{ARGV[0]}"
else
  run_cmd "ruby ../project_script/copy_project.rb"
end

Dir.chdir run_dir
Dir.chdir '../../libraries/cor_all_cocos2dx/proj.cmake'
run_cmd "ruby build_android.rb"

Dir.chdir run_dir

Dir.chdir "../cor_lib_test_main"
ENV.store 'V', '1'
run_cmd "cocos run -p android -j 6 --ndk-mode release"

exit @result
