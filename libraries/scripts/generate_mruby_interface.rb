run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

$LOAD_PATH.push('.')
$LOAD_PATH.push('lib')
require 'cor/utility'
require 'cor/clang_dump_tree_parse'
require 'cor/clang_dump_tree_gen'
require 'cor/mruby_binding_gen'

require 'inc_path.rb'

Encoding.default_external = 'utf-8'

ARGV.each do |arg|
  load arg
  MrubyBindingGen.gen_code({})
end

puts "generate success!"
