
require "fileutils"

run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

FileUtils.chdir ".."
FileUtils.chdir "mruby"
system({ "MRUBY_CONFIG" => "../mruby_build/build_config.rb"}, "ruby ./minirake")
FileUtils.chdir ".."
FileUtils.chdir "mruby_build"

system 'ruby ../../scripts/utility/rec_copy.rb ../mruby/build ./builded "(.*\.exe)|(.*\.lib)|(.*\.a)"'




