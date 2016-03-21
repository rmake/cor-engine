

MrubyBindingGen.name "simple_cpp_gen_binding"
MrubyBindingGen.namespace "simple_cpp_gen_binding"
puts "Dire.dirname(__FILE__) #{File.dirname(__FILE__)}"
puts "MrubyBindingGen.convert_relative_path File.dirname(__FILE__) #{MrubyBindingGen.convert_relative_path File.dirname(__FILE__)}"
MrubyBindingGen.output_path "#{MrubyBindingGen.convert_relative_path File.dirname(__FILE__)}/cpp/generated_binding"
MrubyBindingGen.add_include_files [
    "#{MrubyBindingGen.convert_relative_path File.dirname(__FILE__)}/cpp/binding_interface/simple_class.h"
]

load "gen_info/mruby_interface.rb"

MrubyBindingGen.add_taget_classes([
    {
    :name => "cor::project_structure::SimpleClass",
    :value => :value,
    :create_function => "create",
  },
])

