

MrubyBindingGen.name "cor_mruby"
MrubyBindingGen.namespace "mruby_interface"
MrubyBindingGen.output_path "../cor_mruby_interface/sources/basic_bind"
MrubyBindingGen.add_cor_lib_list([
  'cor_type',
  'cor_data_structure',
  'cor_algorithm',
  'cor_system',
  'cor_mruby_interface',
])

load "gen_info/mruby_interface.rb"

