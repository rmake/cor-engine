
require 'cor/utility'
require 'pathname'

module Cor

  module MrubyBindingGen

    def self.name(v)
      @name = v
    end

    def self.output_path(path)
      @output_path = path
    end

    def self.namespace(namespace)
      @namespace = namespace
    end

    def self.add_include_files(files)
      @additional_include_files ||= []
      @additional_include_files += files
    end

    def self.add_include_paths(paths)
      @add_include_paths ||= []
      @add_include_paths += paths
    end

    def self.add_cor_lib_list(lib_list)
      @lib_list ||= []
      @lib_list += lib_list
    end

    @@use_default_assoc_table = true

    def self.use_default_assoc_table(use)
      @@use_default_assoc_table = use
    end

    @@use_cor_name_space = true

    #def self.use_cor_name_space(use)
    #  @@use_cor_name_space = use
    #end

    def self.merge_type_assoc_table(table)
      @type_assoc_table ||= {}
      @type_assoc_table.merge! table
    end

    def self.add_taget_classes(classes)
      @target_classes ||= []
      @target_classes += classes
    end

    def self.add_taget_enums(enums)
      @target_enums ||= []
      @target_enums += enums
    end

    def self.convert_relative_path(path)
      base_path = Pathname(File.expand_path("./"))
      target_path = Pathname(File.expand_path(path))
      relative_path = target_path.relative_path_from base_path
      relative_path.to_s
    end

    def self.package_path=(v)
      @package_path = v
    end

    def self.package_path
      @package_path
    end

    def self.set_templated_binding(file_path, option)

      self.package_path = "#{MrubyBindingGen.convert_relative_path File.dirname(file_path)}"
      base_cpp_path = "#{self.package_path}/cpp"

      if option[:name]
        name = option[:name]
        MrubyBindingGen.name "#{name}_cpp_gen_binding"
        MrubyBindingGen.namespace "#{name}_cpp_gen_binding"
        cpp_path = "#{self.package_path}/cpp/#{name}"
        MrubyBindingGen.output_path "#{cpp_path}/generated_binding"

      end

      if option[:include_files]
        MrubyBindingGen.add_include_files option[:include_files]
      end

      if option[:include_paths]
        MrubyBindingGen.add_include_paths option[:include_paths]
      end

      puts "cpp_path #{cpp_path}"

      binding_base_path = "#{cpp_path}/binding_interface"
      finded_headers = Dir.glob("#{binding_base_path}/**/*.h")

      MrubyBindingGen.add_include_files finded_headers

      puts "finded_headers #{finded_headers}"

      MrubyBindingGen.add_include_paths [
        "#{base_cpp_path}/"
      ]

      puts "finded_headers #{base_cpp_path}"

      #load "gen_info/mruby_interface.rb"

    end

    def self.gen_code(option)

      option[:name] ||= @name
      option[:path] ||= @output_path

      puts "generating #{option[:path]} ..."

      lib_list = option[:lib_list] || @lib_list || []

      a = []
      lib_list.each do |p|
        a += Utility.file_list "../#{p}/sources" do |path|
          path.match(/\.h/) && !path.match(/local_conf\.h/)

          [".h"].index File.extname(path)
        end
      end

      a = a.select do |p|
        !p.match(/^\.\.\/cor_.*_tmpl_impl.h/)
      end
      a = a.select do |p|
        !p.match(/^\.\.\/cor_.*_binding_generated.h/)
      end
      a = a.select do |p|
        !p.match(/^\.\.\/cor_project_structure\/sources\/import\/cpp/)
      end

      cocos2dx = option[:cocos2dx]

      a2 = []
      if cocos2dx
        a2 += [
          "#{COCOS2DX_PATH}/cocos/cocos2d.h",
          "#{COCOS2DX_PATH}/cocos/ui/UIEditBox/UIEditBox.h",
          #"#{COCOS2DX_PATH}/extensions/cocos-ext.h",
          "#{COCOS2DX_PATH}/extensions/GUI/CCScrollView/CCScrollView.h",
          "#{COCOS2DX_PATH}/cocos/audio/include/SimpleAudioEngine.h",
          "../cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h",
        ]
      end
      if @additional_include_files
        a2 += @additional_include_files
      end

      only_gen_src = "#undef __SSE__\n" +
        "#define BOOST_VARIANT_HPP\n"
      src =
        a.map{|v| "#include \"../#{v}\"\n" }.join("") +
        "#undef RELATIVE\n#undef ABSOLUTE\n" +
        a2.map{|v| "#include \"../#{v}\"\n" }.join("")

      Utility.file_write "data_gen/#{option[:name]}_cor_mruby_interface_inc.cpp", only_gen_src + src

      inc_path = ALL_INCPATH + ["../"]
      includes = inc_path.map{|v| "-I#{v}"}.join(' ')

      if cocos2dx
        ipath = [
          "#{COCOS2DX_PATH}/external/win32-specific/gles/include/OGLES",
          "#{COCOS2DX_PATH}/external/glfw3/include/win32",
        ]
        includes += ' ' + (COCOS2DX_INCPATH + ipath).map{|v| "-I#{v}"}.join(' ')
      end
      if @add_include_paths
        includes += ' ' + @add_include_paths.map{|v| "-I#{v}"}.join(' ')
      end

      includes += ' ' + ["-I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/",
        "-I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/x86_64-redhat-linux/"
        ].join(' ')

      if RUBY_PLATFORM.downcase =~ /mswin(?!ce)|mingw|cygwin|bccwin/
        cmd_clang = "clang++ -fcxx-exceptions -Xclang -ast-dump -fsyntax-only -std=c++11 -pg -Wall -fms-compatibility-version=19.00.22816 -fno-color-diagnostics -DCOCOS2DXWIN32_EXPORTS -D_WINDOWS -DWIN32 -D_WIN32 -D_USRDLL -D_EXPORT_DLL_ -D_USEGUIDLL -D_USREXDLL -D_USRSTUDIODLL -DCC_STATIC #{includes} data_gen/#{option[:name]}_cor_mruby_interface_inc.cpp"
      else
        cmd_clang = "clang++ -Xclang -ast-dump -fsyntax-only -std=c++11 -pg -Wall -fno-color-diagnostics -DLINUX -DCC_STATIC #{includes} data_gen/#{option[:name]}_cor_mruby_interface_inc.cpp"
      end

      puts "cmd_clang #{cmd_clang}"

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

      enum_constants = tree.print_enum_constants
      Utility.file_write "log/#{option[:name]}/tree_enum_constants.log", enum_constants


      #require 'gen_info/mruby_interface'

      target_classes = @target_classes || []
      target_enums = @target_enums || []

      if @@use_default_assoc_table
        type_assoc_table = {
          "std::vector<char>" => "cor::RCharArray",
          "std::__1::vector<char, std::__1::allocator<char>>" => "cor::RCharArray",
          "_Bool" => "bool",
          "unsigned char" => "int",
          "const _Bool" => "const bool",
          "RBool" => "bool",
          "cinit" => "delete",
          "long" => "int",
          "short" => "int",
          "unsigned short" => "int",
          #"unsigned long long" => "cor::RSize",
          #"RSize" => "cor::RSize",
          "__va_list_tag *" => "delete",
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
          "float [16]" => "delete",
          "std::function<void (Sprite3D *, void *)>" => "mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D>, void *)>",
          "std::vector<Touch *>" => "std::vector<cocos2d::Touch *>",
          "std::vector<Touch*>" => "std::vector<cocos2d::Touch*>",
          "std::vector<Vec2 *>" => "delete",
          "std::vector<Vec2*>" => "delete",
          "std::vector<Vec2 *> *" => "delete",
          "std::vector<Vec2*>*" => "delete",
          "const std::vector<Vec2 *> *" => "delete",
          "const std::vector<Vec2*>*" => "delete",
          #"std::vector<Mesh*>" => "std::vector<cocos2d::Mesh*>",
          "cocos2d::Vec2 [4]" => "delete",
          #"Vector<cocos2d::AnimationFrame*>" => "delete",
          "tParticle *" => "delete",
          #"Node" => "cocos2d::Node",
          "Camera::Type" => "cocos2d::Camera::Type",
          "va_list" => "delete",
          "delete type" => "delete",
          "PhysicsContactData" => "cocos2d::PhysicsContactData",
          "const PhysicsContactData*" => "cocos2d::PhysicsContactData*",
          "TMXTileFlags *" => "delete",
          "cocos2d::Texture2D::PixelFormatInfoMap" => "delete",
          #"enum cocos2d::TextHAlignment" => "int",
          "experimental::Viewport" => "cocos2d::experimental::Viewport",
          "experimental::FrameBuffer" => "cocos2d::experimental::FrameBuffer",
          "experimental::FrameBuffer *" => "cocos2d::experimental::FrameBuffer *",
          "ListenerID" => "cocos2d::EventListener::ListenerID",
          "const ValueMap*" => "delete",
          "std::unordered_map<ssize_t, Texture2D*>" => "delete",
          "std::unordered_map<int, cocos2d::Texture2D*>" => "delete",
          "std::unordered_map<std::string, Curve*>" => "delete",
          "std::unordered_map<std::basic_string<char>, Curve*>" => "delete",
          "std::unordered_map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, Curve*>" => "delete",
          "std::hash<string>" => "std::hash<std::string>",
          "std::unordered_map<std::basic_string<char>, cocos2d::Value, std::hash<string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >" => "std::unordered_map<std::basic_string<char>, cocos2d::Value, std::hash<std::string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >",
          "std::unordered_map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, cocos2d::Value, std::hash<string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >" => "std::unordered_map<std::basic_string<char>, cocos2d::Value, std::hash<std::string>, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, cocos2d::Value> > >",
          "std::map<enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo, std::less<enum cocos2d::Texture2D::PixelFormat>, std::allocator<std::pair<const enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo> > >" => "delete",
          "std::__1::map<enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo, std::__1::less<enum cocos2d::Texture2D::PixelFormat>, std::__1::allocator<std::__1::pair<const enum cocos2d::Texture2D::PixelFormat, const cocos2d::Texture2D::PixelFormatInfo> > >" => "delete",
        }
      else
        type_assoc_table = {}
      end

      if @type_assoc_table
        type_assoc_table.merge! @type_assoc_table
      end

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

      name_space = @namespace || "mruby_interface"

      if cocos2dx

        #require 'gen_info/cocos2dx_mruby_interface'

        #target_classes = COCOS2DX_MRUBY_INTERFACE_TAGET_CLASSES
        #target_enums = COCOS2DX_MRUBY_INTERFACE_TAGET_ENUMS

        name_space = "cocos2dx_mruby_interface"
      end

      cor_name_space = @@use_cor_name_space

      code_header, code_cpp, code_sub_cpp, proto_header = ClangDumpTree.gen_code({
        :name => option[:name],
        :tree => tree,
        :path => option[:path],
        :name_space => name_space,
        :cor_name_space => cor_name_space,
        :target_classes => target_classes,
        :target_enums => target_enums,
        :type_assoc_table => type_assoc_table,
        :reject_method_table => reject_method_table,
      })

      source_filter = Proc.new do |src|
        src.gsub("std::basic_string<char, std::char_traits<char>, std::allocator<char> >", "std::string").
          gsub("std::basic_string<char>", "std::string").
          gsub("std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned short> >", "std::u16string").
          gsub("std::basic_string<unsigned short>", "std::u16string")
      end

      Utility.file_write "log/#{option[:name]}/tree_code_header.log", code_header
      Utility.file_write "log/#{option[:name]}/tree_code_cpp.log", src.gsub("../../", "") + source_filter.call(code_cpp)
      Utility.file_write "log/#{option[:name]}/tree_code_sub_binding_generated.h", src.gsub(/^..\/..\//, "") + source_filter.call(proto_header)

      code_sub_cpp.each_with_index do |v, i|
        Utility.file_write "log/#{option[:name]}/sub/cpp_#{i}.log", src.gsub("../../", "") + source_filter.call(v)
      end

      Utility.file_write "#{option[:path]}.h", code_header
      Utility.file_write "#{option[:path]}.cpp", src.gsub(/\"..\/..\//, "\"") + source_filter.call(code_cpp)
      Utility.file_write "#{option[:path]}/sub_binding_generated.h", src.gsub(/\"..\/..\//, "\"") + source_filter.call(proto_header)
      code_sub_cpp.each_with_index do |v, i|
        if v != ""
          Utility.file_write "#{option[:path]}/#{option[:name]}_sub_#{i}.cpp", src.gsub(/\"..\/..\//, "\"") + source_filter.call(v)
        else
          Utility.file_write "#{option[:path]}/#{option[:name]}_sub_#{i}.cpp", v
        end
      end
    end

  end

end
