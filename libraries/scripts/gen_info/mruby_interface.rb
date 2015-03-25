
MRUBY_INTERFACE_TAGET_CLASSES = [
    {
      :name => "cor::mruby_interface::AnyWP",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
    },
    {
      :name => "cor::system::AllocationMonitor",
      :value => :pointer,
    },
    {
      :name => "cor::type::Vector2F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Vector2F", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector2F", :arg => ["cor::type::Vector2F"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector2F", :arg => ["cor::type::Vector2F"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector2F", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "float", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "float", :arg => ["int", "float"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Vector2I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Vector2I", :arg => ["int"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector2I", :arg => ["cor::type::Vector2I"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector2I", :arg => ["cor::type::Vector2I"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector2I", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "int", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "int", :arg => ["int", "int"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Vector3F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          #{:ret => "cor::type::Vector3F", :arg => ["float", "cor::type::Vector3F"]},
          {:ret => "cor::type::Vector3F", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector3F", :arg => ["cor::type::Vector3F"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector3F", :arg => ["cor::type::Vector3F"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector3F", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "float", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "float", :arg => ["int", "float"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Vector3I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Vector3I", :arg => ["int"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector3I", :arg => ["cor::type::Vector3I"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector3I", :arg => ["cor::type::Vector3I"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector3I", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "int", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "int", :arg => ["int", "int"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Vector4F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Vector4F", :arg => ["float"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector4F", :arg => ["cor::type::Vector4F"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector4F", :arg => ["cor::type::Vector4F"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector4F", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "float", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "float", :arg => ["int", "float"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Vector4I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Vector4I", :arg => ["int"]},
        ]},
        { :name => "+", :args => [
          {:ret => "cor::type::Vector4I", :arg => ["cor::type::Vector4I"]},
        ]},
        { :name => "-", :args => [
          {:ret => "cor::type::Vector4I", :arg => ["cor::type::Vector4I"]},
        ]},
        { :name => "-@", :args => [
          {:ret => "cor::type::Vector4I", :arg => []},
        ]},
        { :name => "[]", :args => [
          {:ret => "int", :arg => ["int"]},
        ]},
        { :name => "[]=", :args => [
          {:ret => "int", :arg => ["int", "int"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Matrix4x4F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
      :operator => [
        { :name => "*", :args => [
          {:ret => "cor::type::Matrix4x4F", :arg => ["cor::type::Matrix4x4F"]},
        ]},
      ],
    },
    {
      :name => "cor::type::Box2F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::Box2I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::OBox2F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::OBox2I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::Sphere2F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::Sphere2I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::OSphere2F",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::type::OSphere2I",
      :value => :value, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::system::Logger",
      :value => :pointer, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
    },
    {
      :name => "cor::system::JobQueue",
      :value => :shared_ptr, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::system::CorCrypt",
      :value => :pointer, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
    },
    {
      :name => "cor::mruby_interface::MrubyRefContainer",
      :value => :shared_ptr,
      :create_function => "create",
    },
    {
      :name => "cor::mruby_interface::MrubyExperimentalBindTestClass",
      :value => :shared_ptr, # :value, :pointer, :shared_ptr, :weak_ptr, :cocos_ptr
      :create_function => "create",
    },
    {
      :name => "cor::mruby_interface::MrubyExperimentalBindTestStruct",
      :value => :shared_ptr, 
      :create_function => "create",
    },
    {
      :name => "cor::mruby_interface::MrubyExperimentalBindTestClassInherited",
      :value => :shared_ptr, 
      :create_function => "create",
    },
    {
      :name => "cor::mruby_interface::MrubyExperimentalTemplateStructRInt32",
      :value => :shared_ptr, 
      :create_function => "create",
    },
    {
      :name => "cor::mruby_interface::MrubyExperimentalTemplateStructRString",
      :value => :shared_ptr, 
      :create_function => "create",
    },
    {
      :name => "cor::RCharArray",
      :value => :shared_ptr, 
      :create_function => "create",
    },
    {
      :name => "cor::data_structure::SharedPtrTable",
      :value => :shared_ptr,
    },
    {
      :name => "cor::data_structure::CostGridSpaceItem",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cor::data_structure::CostGridSpacePath",
      :value => :value,
      :create_function => "create",
    },
    {
      :name => "cor::data_structure::CostGridSpace",
      :value => :shared_ptr,
      :create_function => "create",
    },
  ]

MRUBY_INTERFACE_TAGET_ENUMS = [
    
  ]