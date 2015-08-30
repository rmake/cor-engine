
require 'fileutils'

FileUtils.chdir "#{File.dirname __FILE__}"

$LOAD_PATH.push(".")
$LOAD_PATH.push("../../../libraries/scripts/lib")

require 'pathname'

mruby_binging_generator_script_path = "../../../libraries/scripts"

base_path = Pathname(File.expand_path(mruby_binging_generator_script_path))
conf_path = Pathname(File.expand_path("."))
puts "base_path #{base_path}"
puts "conf_path #{conf_path}"
conf_path_for_gen = conf_path.relative_path_from base_path

puts "conf_path_for_gen #{conf_path_for_gen}"

system("ruby #{mruby_binging_generator_script_path}/generate_mruby_interface.rb #{conf_path_for_gen.to_s}/binding_conf.rb")


