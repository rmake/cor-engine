
MrubyBindingGen.set_templated_binding __FILE__, :name => "lib_load_eval"

MrubyBindingGen.add_taget_classes([
    {
      :name => "cor::mruby_interface::MrubyLoader",
      :value => :shared_ptr,
      :create_function => "create",
    },
])

