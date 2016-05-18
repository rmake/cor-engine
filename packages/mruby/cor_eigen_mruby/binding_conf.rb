
MrubyBindingGen.set_templated_binding __FILE__, :name => "cor_eigen_mruby"
MrubyBindingGen.add_include_paths [
  MrubyBindingGen.package_path + "/../../cpp/cor_eigen_cpp/cpp",
  MrubyBindingGen.package_path + "/../../cpp/cor_eigen_cpp/cpp/cor_eigen_cpp",
]

MrubyBindingGen.add_taget_classes([
    {
      :name => "cor::eigen::EVector3D",
      :value => :value,
      :create_function => "new",
    },
    {
      :name => "cor::eigen::EVector3F",
      :value => :value,
      :create_function => "new",
    },
    {
      :name => "cor::eigen::Vector3D",
      :value => :value,
      :create_function => "new",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::eigen::Vector3D", :arg => ["double"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::eigen::Vector3D", :arg => ["cor::eigen::Vector3D"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::eigen::Vector3D", :arg => ["cor::eigen::Vector3D"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::eigen::Vector3D", :arg => []},
        ]},
      ],
    },
    {
      :name => "cor::eigen::Vector3F",
      :value => :value,
      :create_function => "new",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::eigen::Vector3F", :arg => ["double"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::eigen::Vector3F", :arg => ["cor::eigen::Vector3F"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::eigen::Vector3F", :arg => ["cor::eigen::Vector3F"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::eigen::Vector3F", :arg => []},
        ]},
      ],
    },
])

MrubyBindingGen.merge_type_assoc_table({
  "cor::eigen::EVector3D" => "cor::eigen::Vector3D",
  "cor::eigen::EVector3F" => "cor::eigen::Vector3F"
})

