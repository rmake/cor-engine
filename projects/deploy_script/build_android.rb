
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

Dir.chdir "../cor_lib_test_main"
run_cmd "cocos compile -p android -m release -j 8 --ndk-mode release"

exit @result
