

$LOAD_PATH.push('.')
$LOAD_PATH.push('lib')
require 'cor/utility'
require 'cor/clang_dump_tree_parse'
require 'cor/clang_dump_tree_gen'


require 'inc_path.rb'

Encoding.default_external = 'utf-8'


def gen_code option

  puts "generating #{option[:path]} ..."

  lib_list = option[:lib_list]

  a = []
  lib_list.each do |p|
    a += Utility.file_list "../#{p}/sources" do |path|
      [".h"].index File.extname(path)
    end
  end
  
  a = a.select do |p|
    !p.match(/^\.\.\/cor_.*_tmpl_impl.h/)
  end
  
  cocos2dx = option[:cocos2dx]
  
  a2 = []
  if cocos2dx
    a2 = [
      "#{COCOS2DX_PATH}/cocos/cocos2d.h",
      #"#{COCOS2DX_PATH}/extensions/cocos-ext.h",
      "#{COCOS2DX_PATH}/extensions/GUI/CCScrollView/CCScrollView.h",
      "#{COCOS2DX_PATH}/cocos/audio/include/SimpleAudioEngine.h",
      "../cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h",
    ]
  end

  src = a.map{|v| "#include \"../#{v}\"\n" }.join("") +
    "#undef RELATIVE\n#undef ABSOLUTE\n" +
    a2.map{|v| "#include \"../#{v}\"\n" }.join("")

  Utility.file_write "data_gen/#{option[:name]}_cor_mruby_interface_inc.cpp", src

  inc_path = ALL_INCPATH + ["../"]
  includes = inc_path.map{|v| "-I#{v}"}.join(' ')
  
  if cocos2dx
    ipath = [
      "#{COCOS2DX_PATH}/external/win32-specific/gles/include/OGLES",
      "#{COCOS2DX_PATH}/external/glfw3/include/win32",
    ]
    includes += ' ' + (COCOS2DX_INCPATH + ipath).map{|v| "-I#{v}"}.join(' ')
  end
  
  cmd_clang = "clang++ -Xclang -ast-dump -fsyntax-only -std=c++11 -pg -Wall -DLINUX -DCC_STATIC #{includes} data_gen/#{option[:name]}_cor_mruby_interface_inc.cpp"
  
  str = `#{cmd_clang}`
  
  str = str.encode("UTF-16BE", "UTF-8", :invalid => :replace, :undef => :replace, :replace => '?').encode("UTF-8")

  Utility.file_write "log/#{option[:name]}/tmp.log", str

  tree = ClangDumpTree::parse_tree str

  #str = tree.print_tree
  #Utility.file_write "log/#{option[:name]}/print_tree.log", str

  classes = tree.print_classes
  Utility.file_write "log/#{option[:name]}/tree_classes.log", classes

  typedefs = tree.print_typedefs
  Utility.file_write "log/#{option[:name]}/tree_typedefs.log", typedefs

  methods = tree.print_methods
  Utility.file_write "log/#{option[:name]}/tree_methods.log", methods
  
  class_templates = tree.print_class_templates
  Utility.file_write "log/#{option[:name]}/tree_class_templates.log", class_templates
  
  require 'gen_info/mruby_interface'
  
  target_classes = MRUBY_INTERFACE_TAGET_CLASSES
  
  type_assoc_table = {
    "std::vector<char>" => "cor::RCharArray",
    "_Bool" => "bool",
    "unsigned char" => "int", 
    "const _Bool" => "const bool",
    "RBool" => "bool",
    "std::shared_ptr<void>" => "std::weak_ptr<void>",
    "std::function<void (EventCustom *)>" => "mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>)>",
    "Touch::DispatchMode" => "cocos2d::Touch::DispatchMode",
    "std::function<_Bool (cocos2d::Touch *, cocos2d::Event *)>" => "mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)>",
    "std::function<void (cocos2d::Touch *, cocos2d::Event *)>" => "mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)>",
    "std::function<void (Texture2D *)>" => "mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D>)>",
    "std::function<void (Node *)>" => "mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)>",
    "Texture2D::PixelFormat" => "cocos2d::Texture2D::PixelFormat",
    "MipmapInfo *" => "delete",
    "TexParams *" => "delete",
    "const TexParams *" => "delete",
    " char*" => "std::string",
    "std::vector<Touch *>" => "std::vector<cocos2d::Touch *>",
    "std::vector<Touch*>" => "std::vector<cocos2d::Touch*>",
    "std::vector<Vec2 *>" => "delete",
    "std::vector<Vec2*>" => "delete",
    "std::vector<Vec2 *> *" => "delete",
    "std::vector<Vec2*>*" => "delete",
    "const std::vector<Vec2 *> *" => "delete",
    "const std::vector<Vec2*>*" => "delete",
    "std::vector<PhysicsJoint *>" => "std::vector<cocos2d::PhysicsJoint *>",
    "std::vector<PhysicsJoint*>" => "std::vector<cocos2d::PhysicsJoint*>",
    "std::vector<Sprite *>" => "std::vector<cocos2d::Sprite *>",
    "std::vector<Sprite*>" => "std::vector<cocos2d::Sprite*>",
    "std::vector<Camera*>" => "std::vector<cocos2d::Camera*>",
    "std::vector<BaseLight*>" => "std::vector<cocos2d::BaseLight*>",
    "std::vector<Mesh*>" => "std::vector<cocos2d::Mesh*>",
    #"Vector<cocos2d::PhysicsShape*>" => "delete",
    "cocos2d::Vec2 [4]" => "delete",
    #"Vector<cocos2d::SpriteFrame *>" => "delete",
    #"Vector<cocos2d::AnimationFrame *>" => "delete",
    #"Vector<cocos2d::FiniteTimeAction *>" => "delete",
    #"Vector<cocos2d::Node*>" => "delete",
    #"Vector<cocos2d::Node *>" => "delete",
    #"Vector<cocos2d::PhysicsBody*>" => "delete",
    #"Vector<cocos2d::AnimationFrame*>" => "delete",
    "tParticle *" => "delete",
    "Node" => "cocos2d::Node",
    "Node *" => "cocos2d::Node *",
    "va_list" => "delete",
    "delete type" => "delete",
    "PhysicsContactData" => "cocos2d::PhysicsContactData",
    "const PhysicsContactData*" => "cocos2d::PhysicsContactData*",
    "TMXTileFlags *" => "delete",
    "cocos2d::Texture2D::PixelFormatInfoMap" => "delete",
    #"enum cocos2d::TextHAlignment" => "int",
    "std::unordered_map<ssize_t,Texture2D*>" => "delete",
    "std::hash<string>" => "std::hash<std::string>",
    "std::unordered_map<std::basic_string<char>, cocos2d::Value, std::hash<string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >" => "std::unordered_map<std::basic_string<char>, cocos2d::Value, std::hash<std::string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >",
    "std::map<enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo, std::less<enum cocos2d::Texture2D::PixelFormat>, std::allocator<std::pair<const enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo> > >" => "delete",
  }
  
  reject_method_table = {
    #"cocos2d::EventListenerTouchAllAtOnce" => {
    #  "onTouchesBegan" => true,
    #  "onTouchesMoved" => true,
    #  "onTouchesEnded" => true,
    #  "onTouchesCancelled" => true,
    #}
  }
  
  #reject_method_table = {
  #  "cocos2d::PhysicsWorld" => {
  #    "rayCast" => true,
  #    "queryRect" => true,
  #    "queryPoint" => true,
  #  },
  #}
  
  name_space = "mruby_interface"
  
  if cocos2dx
    
    require 'gen_info/cocos2dx_mruby_interface'
  
    target_classes = COCOS2DX_MRUBY_INTERFACE
    
    name_space = "cocos2dx_mruby_interface"
  end
  
  code_header, code_cpp, code_sub_cpp = ClangDumpTree.gen_code({
    :name => option[:name],
    :tree => tree,
    :path => option[:path],
    :name_space => name_space,
    :target_classes => target_classes,
    :type_assoc_table => type_assoc_table,
    :reject_method_table => reject_method_table,
  })
  Utility.file_write "log/#{option[:name]}/tree_code_header.log", code_header
  Utility.file_write "log/#{option[:name]}/tree_code_cpp.log", src.gsub("../../", "") + code_cpp
  code_sub_cpp.each_with_index do |v, i|
    Utility.file_write "log/#{option[:name]}/sub/cpp_#{i}.log", src.gsub("../../", "") + v
  end
  
  Utility.file_write "#{option[:path]}.h", code_header
  Utility.file_write "#{option[:path]}.cpp", src.gsub("../../", "") + code_cpp
  code_sub_cpp.each_with_index do |v, i|
    if v != ""
      Utility.file_write "#{option[:path]}/sub_#{i}.cpp", src.gsub("../../", "") + v
    else
      Utility.file_write "#{option[:path]}/sub_#{i}.cpp", v
    end
  end
end

options = [
  {
    :name => "cor_mruby",
    :path => "../cor_mruby_interface/sources/basic_bind",
    :lib_list => [
        'cor_type',
        'cor_data_structure',
        'cor_algorithm',
        'cor_system',
        'cor_mruby_interface',
      ],
  },
  {
  :name => "cor_cocos2dx_mruby",
  :path => "../cor_cocos2dx_mruby_interface/sources/cocos2dx_bind",
  :cocos2dx => true,
  :lib_list => [
      #'cor_type',
      #'cor_data_structure',
      #'cor_algorithm',
      #'cor_system',
      'cor_mruby_interface',
      'cor_cocos2dx_converter',
      'cor_cocos2dx_mruby_interface',
    ],
  },
]

if ARGV.length > 0
  ops = ARGV.map do |ag|
    options.find do |op|
      op[:name] == ag
    end
  end
  
  ops.each do |option|
    gen_code(option)
  end
  
  puts "generate success!"

else

  threads = []
  options.each do |option|
    threads << Thread.new do
      puts `ruby mruby_interface_gen.rb #{option[:name]}`
    end
  end

  threads.each do |thread|
    thread.join
  end

  `ruby create_source.rb`

  puts "all success!"

end










