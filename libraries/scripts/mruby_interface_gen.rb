

$LOAD_PATH.push('.')
$LOAD_PATH.push('lib')
require 'cor/utility'
require 'cor/clang_dump_tree_parse'
require 'cor/clang_dump_tree_gen'
require 'cor/mruby_binding_gen'


require 'inc_path.rb'

Encoding.default_external = 'utf-8'

tasks = [
  "gen_task/mruby_interface.rb",
  "gen_task/cocos2dx_mruby_interface.rb",
]

threads = []
tasks.each do |task|
  threads << Thread.new do
    #puts `ruby mruby_interface_gen.rb #{option[:name]}`
    system "ruby generate_mruby_interface.rb #{task}"
  end
end

threads.each do |thread|
  thread.join
end

`ruby create_source.rb`

puts "all success!"











