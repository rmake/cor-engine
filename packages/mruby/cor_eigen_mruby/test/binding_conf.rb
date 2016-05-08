#load_relative "../binding_conf.rb"
MrubyBindingGen.set_templated_binding __FILE__, :name => "cor_eigen_test"

MrubyBindingGen.add_taget_classes([
    #{
    #  :name => "cor::type::Vector3D",
    #  :value => :value,
    #  :create_function => "create",
    #  :operator => [
    #    { :name => "*", :args => [
    #      {:ret => "cor::type::Vector3D", :arg => ["double"]},
    #    ]},
    #},
])
