
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

run_cmd "ruby ../project_script/copy_project.rb"
Dir.chdir "../cor_lib_test_main"
ENV.store 'V', '1'
run_cmd "cocos run -p android -j 8 --ndk-mode release"

exit @result
