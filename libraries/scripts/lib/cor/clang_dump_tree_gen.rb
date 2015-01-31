require "cor/clang_dump_tree_parse"

module COR

  module ClangDumpTree
  
    OPERATOR_TABLE = {
      "*" => "_asterisk_",
      "/" => "_slash_",
      "+" => "_plus_",
      "-" => "_minus_",
      "-@" => "_minus_self_",
      "[]" => "_brackets_",
      "[]=" => "_brackets_equal_",
    }
  
    def self.typedef_assoc_base(base, type, option)
    
      @typedef_assoc_base ||= {}
      
      class_name = base
      class_name ||= ""
      
      type = type.gsub(/^ /, "")
      
      key = "#{class_name}::#{type}"
      if @typedef_assoc_base[key]
        return @typedef_assoc_base[key]
      end
      
      keys = []
      keys << key
      
      @tail_aster ||= /\*$/
      
      ct = 0
      
      while true
        old_type = type
        
        if ct > 20
          raise "test"
        end
        ct += 1
        
        is_pointer = false
        
        if type.match(@tail_aster)
          is_pointer = true
          type = type.gsub(@tail_aster, "")
        end
        
        class_layer = class_name.split('::')
        tree = option[:tree]
        typedef_table = tree.typedef_table
        
        (class_layer.length).downto(0) do |i|
          namespace = class_layer[0...i].join("::")
          assoc_type = (class_layer[0...i] + [type]).join("::")
          if typedef_table[assoc_type]
            type = typedef_table[assoc_type][:source][:val]
            class_name = assoc_type
            break
          end
          
        end
        
        if is_pointer
          type += "*"
        end
        
        if old_type == type
        
          ntp = option[:type_assoc_table][type]
          
          return nil if ntp == "delete"
          
          type = ntp if ntp
        end
        
        if old_type == type
          keys.each do |k|
            @typedef_assoc_base[k] = type
          end
          return type
        end
        
        key = "#{class_name}::#{type}"
        if @typedef_assoc_base[key]
          return @typedef_assoc_base[key]
        end
        keys << key
        
      end
    
    end
  
    def self.typedef_assoc m, type, option
      
      class_name = m[:class_name]
      
      self.typedef_assoc_base class_name, type, option
      
    end
  
    def self.type_filter(m, tp, option)
      type = tp[:val]
      
      return "void" unless type
      
      @tail_amp ||= /( \&$)|(\&$)/
      @top_const ||= /^const /
    
      if type.match(@top_const) && type.match(@tail_amp)
        type = type.gsub(@top_const, "").gsub(@tail_amp, "")
      end
      
      #if type.match(@top_const)
      #  type = type.gsub(@top_const, "")
      #end
      
      if (!type.match(@top_const) && type.match(/\&$/)) || type.match(/::\*/) #|| type.match(/std::vector/)
        return nil
      end
      
      direct_type = {
        "void" => true,
        "int" => true,
        "float" => true,
        "double" => true,
        "bool" => true,
        "std::string" => true,
        "std::basic_string<char>" => true,
        "RString" => true,
        "cor::RString" => true,
        "RBool" => true,
        "cor::RBool" => true,
      }
      
      type = self.typedef_assoc m, type, option
      
      return nil unless type
      
      type = type.gsub("<_Bool", "<bool")
      
      if direct_type[type] || tp[:is_enum] || type.match(/\*$/)
        return type
      elsif type.match(/^std\:\:function/)
        return type.gsub(/^std\:\:function/, "mrubybind::FuncPtr").gsub("(void)", "()")
      elsif type.match(/^const std\:\:function/)
        return type.gsub(/^const std\:\:function/, "mrubybind::FuncPtr").gsub("(void)", "()")
      end
      return type
    end
    
    def self.type_filter_base(base, tp, option)
      type = tp[:val]
      
      return "void" unless type
      
      @tail_amp ||= / \&$/
      @top_const ||= /^const /
    
      if type.match(@top_const) && type.match(@tail_amp)
        type = type.gsub(@top_const, "").gsub(@tail_amp, "")
      end
      
      if (!type.match(@top_const) && type.match(/\&$/)) || type.match(/::\*/) #|| type.match(/std::vector/)
        return nil
      end
      
      direct_type = {
        "void" => true,
        "int" => true,
        "float" => true,
        "double" => true,
        "bool" => true,
        "std::string" => true,
        "std::basic_string<char>" => true,
        "RString" => true,
        "cor::RString" => true,
        "RBool" => true,
        "cor::RBool" => true,
      }
      
      type = self.typedef_assoc_base base, type, option
      
      return nil unless type
      
      type = type.gsub("<_Bool", "<bool")
      
      if direct_type[type] || tp[:is_enum] || type.match(/\*$/)
        return type
      elsif type.match(/^std\:\:function/)
        return type.gsub(/^std\:\:function/, "mrubybind::FuncPtr").gsub("(void)", "()")
      elsif type.match(/^const std\:\:function/)
        return type.gsub(/^const std\:\:function/, "mrubybind::FuncPtr").gsub("(void)", "()")
      end
      return type
    end
    
    def self.gather_methods_super(c, reject_table)
      
      mths = []
      return mths unless c 
      
      c[:methods].select{|v| v[:public]}.each do |m|
        
        
        if !reject_table[m[:method_name]]
        
          mths << m
        
        end
      end
      
      c[:methods].each do |m|
        unless reject_table[m[:method_name]]
        
        
          um = c[:class_tree][:using_method] if c[:class_tree]
          if um
            if um.any? { |v| v.last == m[:method_name] }
              next
            end
          end
          
          
          reject_table[m[:method_name]] = m
          
        end
      end
      
      c[:super_classes].each do |sc|
        mths += self.gather_methods_super sc, reject_table
      end
      
      mths
    end
    
    def self.gether_methods(c)
      
      mths = []
      return mths unless c 
      
      reject_table = {}
      c[:methods].each do |m|
        
        um = c[:class_tree][:using_method] if c[:class_tree]
        if um
          if um.any? { |v| v.last == m[:method_name] }
            next
          end
        end
        
        reject_table[m[:method_name]] = m
      end
      
      mths += c[:methods].select{|v| v[:public]}
      c[:super_classes].each do |sc|
        mths += self.gather_methods_super sc, reject_table
      end
      
      table = {}
      mths.each do |m|
        table[m.object_id] = m
      end
      mths = table.values
      
      mths
    end
    
    def self.gether_fields_super(c, reject_table)
      
      fields = []
      return fields unless c 
      return fields unless c[:fields]
      
      c[:fields].each do |f|
        unless reject_table[f[:field_name]]
          fields << f
        end
      end
      
      c[:super_classes].each do |sc|
        self.gether_fields_super sc, reject_table
      end
      
      fields
    end
    
    
    def self.gether_fields(c)
      
      fields = []
      return fields unless c 
      return fields unless c[:fields]
      
      reject_table = {}
      c[:fields].each do |f|
        reject_table[f[:field_name]] = f
      end
      
      fields += c[:fields]
      c[:super_classes].each do |sc|
        fields += self.gether_fields_super sc, reject_table
      end
      
      fields
    end
    
    def self.convert_value(class_replace_table, is_nil, arg, tp, i)
    
      unless arg
        is_nil = true 
        return [is_nil, nil, nil]
      end
      
      arg = arg.gsub(/^ /, "")
    
      call_arg = nil
      
      if arg.match(/^mrubybind::FuncPtr/)
        func_args = arg.gsub(/^mrubybind::FuncPtr</, "").gsub(/>$/, "")
        ret = func_args.match(/^[^(]*\(/)[0].gsub(/\(/,"")
        func_args = func_args.gsub(/^[^(]*\(/, "").gsub(/\)$/, "")
        func_args = func_args.scan(/([^<^>^,]+(<[^<^>]*(<[^<^>]*(<[^<^>]*[^<^>]*>)*[^<^>]*>)*[^<^>]*>)*[^<^>^,]*)|([^<^>^,]+)/)
        cva = func_args.map do |v|
        
          is_nil, targ, call_arg = self.convert_value(class_replace_table, is_nil, v[0], {
            :val => v[0],
            :is_enum => v[0].match(/^enum /) || v[0].match(/^const enum /),
          }, i)
          [targ]
        end
        
        func_args_def = []
        func_args_list = []
        func_args.each_with_index do |b, j|
          tb = b[0].gsub(/^ /, "")
          
          
          if tb.match(/^enum /)
            arg = arg.gsub(tb, "int")
            func_args_def << "#{tb.gsub(/^enum /, "")} b#{j}"
            func_args_list << "(int)b#{j}"
          else
            rpl = class_replace_table[tb]
            func_args_def << "#{tb} b#{j}"
            
            
            if rpl
            
              t_arg = rpl[:class_type]
              t_access = rpl[:inv_access] || rpl[:access]
              
              
              if rpl[:value] == :cocos_ptr && tb.match(/\&$/)
                t_access = "#{t_arg}(&source)"
              elsif rpl[:value] == :cocos_ptr && tb.match(/\*$/)
                t_access = "#{t_arg}(source)"
              elsif rpl[:value] == :pointer && tb.match(/^const/) && tb.match(/\&$/)
                t_access = "const_cast<#{t_arg}>(&source)"
              elsif rpl[:value] == :pointer && tb.match(/\&$/)
                t_access = "&source"
              elsif rpl[:value] == :shared_ptr
                t_access = "source"
              end
              
              
              func_args_list << t_access.gsub("source", "b#{j}")
            else
              func_args_list << "b#{j}"
            end
          end
        end
        if ret.gsub(" ", "") == "void"
          call_arg = "[=](#{func_args_def.join(", ")}){ mrubybind::MrubyArenaStore mas(cor::mruby_interface::MrubyState::get_current()->get_mrb()); try { if(a#{i}.is_living()) { a#{i}.func()(#{func_args_list.join(", ")}); auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log(); } } catch(mrb_int e) { auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log(); } }"
        else
          call_arg = "[=](#{func_args_def.join(", ")}){ mrubybind::MrubyArenaStore mas(cor::mruby_interface::MrubyState::get_current()->get_mrb()); try { if(a#{i}.is_living()) { #{ret} r = a#{i}.func()(#{func_args_list.join(", ")}); auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log(); return r; } else return #{ret}() ; } catch(mrb_int e) { auto mrb = cor::mruby_interface::MrubyState::get_current(); mrb->exception_store_log(); return #{ret}(); }}"
        end
        arg = "mrubybind::FuncPtr<#{ret}(#{cva.map{|v| v[0]}.join(', ')})>"
      elsif tp[:is_enum]
        call_arg = "(#{arg})a#{i}"
        arg = "int"
      elsif class_replace_table[arg] == "reject"
        is_nil = true 
        return [is_nil, nil, nil]
      elsif class_replace_table[arg]
      
        rpl = class_replace_table[arg]
        
        arg = rpl[:class_type]
        access = rpl[:access]
        
        if access
          call_arg = access.gsub("source", "a#{i}")
        end
      else
        if arg.match "std::shared_ptr"
          arg = arg.gsub("std::shared_ptr", "std::weak_ptr")
          call_arg = "a#{i}.lock()"
        else
          call_arg = "a#{i}"
        end
      end
    
      [is_nil, arg, call_arg]
    end
    
    def self.get_args(class_replace_table, m, a, option)
      args = []
      call_args = []
      
      is_nil = false
      a.each_with_index do |arg, i|
        tp = arg
        arg = self.type_filter m, arg, option
        
        is_nil, arg, call_arg = self.convert_value(class_replace_table, is_nil, arg, tp, i)
        
        call_args << call_arg
        args << "#{arg} a#{i}"
      end
      
      [args, call_args, is_nil]
    end
    
    def self.gen_code(option)
    
    
      header = ""
      src = ""
      
      path = option[:path]
      header_path = path.gsub(/^\.\.\//, "")
      
      head_name = "_#{Utility.underscore(path).upcase.gsub("/", "_").gsub(".", "_")}_H_"
      name_space = option[:name_space]
      
      class_name = path.split('/').last
      class_name = Utility.camelize class_name
      
      method_selector = option[:method_selector]
      
      tree = option[:tree]
      target_classes = option[:target_classes]
      
      
      target_class_table = {}
      target_classes.each do |c|
        target_class_table[c[:name]] = c
      end
      
      reject_method_table = option[:reject_method_table]
      
      selected_methods = tree.methods.select do |m|
      
        
        next false if m[:is_constructor]
        next false if m[:method_name].match(/^operator/)
        next false if m[:deprecated] || m[:sentinel]
        
        reject_cls = reject_method_table[m[:class_name]]
        next false if reject_cls && reject_cls[m[:method_name]]
        
        target_class_table[m[:class_name]]
      end
      
      selected_constructor = tree.methods.select do |m|
        next false unless m[:is_constructor]
        next false if m[:method_name].match(/^operator/)
        next false if m[:deprecated] || m[:sentinel]
        target_class_table[m[:class_name]]
      end
      
      selected_methods.each do |m|
        if m[:method_name].match(/operator\W+/)
            m[:operator] = true
        end
        
      end
      
      class_table = {}
      
      tree.classes.each do |c|
        method_class = c[:class_name].gsub("::", "__")
        class_table[method_class] = c
        
      end
      
      
      selected_typedefs = []
      tree.typedefs.each do  |t|
        if target_class_table[t[:typedef_name]]
          h = {
            :typedef_name => t[:typedef_name],
            :source_type => t[:source][:val],
            :typedef_tree => t
          }
          
          h[:source_type] = self.typedef_assoc_base "", h[:source_type], option
        
          selected_typedefs << h
        end
      end
      
      class_template_table = {}
      
      tree.class_templates.each do |t|
        class_template_table[t[:template_name]] = t
      end
      
      selected_template_methods = []
      selected_typedefs_to_pattern = {}
      pattern_to_selected_typedefs = {}
      
      selected_typedefs.each do |t|
        mtch = t[:source_type].match(/^[^<]*</)
        next nil unless mtch
        s = mtch[0]
        next nil unless s
        tp = mtch[0].gsub(/<$/, "")
        tps = tp.split "::"
        pre = tps[0...-1]
        post = tps.last
        
        match = t[:source_type].match(/<([^<^>]*(<[^<^>]*(<[^<^>]*>)*>)*)*>/)
        if match
        
          tmpl = class_template_table[tp]
        
          tmpl_args = match[0]
          tmpl_args = tmpl_args.gsub(/^</, "").gsub(/>$/, "")
          tmpl_args = tmpl_args.scan(/([^<^>^,^ ]+(<[^<^>]*(<[^<^>]*>)*>)*)/)
          tmpl_args = tmpl_args.map{|t| t[0]}
          
          tmpl_args_table = {}
          
          tp_self_key = []
          tp_self_value = "#{t[:typedef_name]}"
          
          tmpl[:template_args].each_with_index do |tp, i|
            tmpl_args_table[tp] = tmpl_args[i]
            tmpl_args_table["const #{tp}&"] = "const #{tmpl_args[i]}&"
            tmpl_args_table["const #{tp}*"] = "const #{tmpl_args[i]}*"
            tmpl_args_table["#{tp}*"] = "#{tmpl_args[i]}*"
            tmpl_args_table["const #{tp} &"] = "const #{tmpl_args[i]} &"
            tmpl_args_table["const #{tp} *"] = "const #{tmpl_args[i]} *"
            tmpl_args_table["#{tp} *"] = "#{tmpl_args[i]} *"
            tp_self_key << tp
          end
          
          tp_self_keys = 
            [
              "#{tmpl[:template_name].gsub(/^.*::/, "")}<#{tp_self_key.join(",")}>",
              "#{tmpl[:template_name].gsub(/^.*::/, "")}",
            ]
            
          
          tp_self_keys.each do |tp_self_key|
            
            tmpl_args_table[tp_self_key] = tp_self_value
            tmpl_args_table["const #{tp_self_key}&"] = "const #{tp_self_value}&"
            tmpl_args_table["const #{tp_self_key}*"] = "const #{tp_self_value}*"
            tmpl_args_table["#{tp_self_key}*"] = "#{tp_self_value}*"
            tmpl_args_table["const #{tp_self_key} &"] = "const #{tp_self_value} &"
            tmpl_args_table["const #{tp_self_key} *"] = "const #{tp_self_value} *"
            tmpl_args_table["#{tp_self_key} *"] = "#{tp_self_value} *"
            
          end
          
          t[:tmpl_args_table] ||= {}
          t[:tmpl_args_table].merge! tmpl_args_table
          t[:tmpl] = tmpl
          
        end
        
        
        pattern = "(#{pre.join("::")}::\\[template->#{post}\\]::#{post})"
        selected_typedefs_to_pattern[t[:typedef_name]] = pattern
        pattern_to_selected_typedefs[pattern] ||= []
        pattern_to_selected_typedefs[pattern] << t
      end
      
      selected_typedefs_pattern = /#{pattern_to_selected_typedefs.keys.join("|")}/
      
      tmpl_methods = tree.methods.select do |m|
        m[:class_name].match(selected_typedefs_pattern)
      end
      
      tmpl_methods.each do |m|
        
        next false if m[:method_name].match(/^operator/)
        next false if m[:method_name].match(/^_/)
        next false if m[:deprecated] || m[:sentinel]
        
        ts = pattern_to_selected_typedefs["(#{m[:class_name].gsub("[", "\\[").gsub("]", "\\]")})"]
        
        next unless ts
        
        ts.each do |t|
          method_ret = m[:method_ret]
          
          tmpl_args_table = t[:tmpl_args_table]
          
          args = m[:args].map do |a|
            a = a.clone
            
            a[:val] = tmpl_args_table[a[:val]]
            a
          end
          
          next if args.find{|a| !a[:val]} 
          
          method_ret = method_ret.clone
          method_ret[:val] = tmpl_args_table[method_ret[:val]]
          
          nm = {
            :method_name => m[:method_name],
            :class_name => t[:typedef_name],
            :super_classes => [],
            :args => args,
            :method_ret => method_ret,
            :type => m[:type],
            :is_constructor => m[:is_constructor],
            :public => m[:public],
            :template => t,
          }
          
          if m[:is_constructor]
            selected_constructor << nm
          else
            selected_methods << nm
          end
        end
        
        
      end
      
      
      classes = {}
      
      (selected_methods + selected_constructor).each do |m|
        
        method_class_origin = m[:class_name]
        method_class = method_class_origin.gsub("::", "__")
        
        #
        
        if classes[method_class]
          m[:class] = classes[method_class]
          next 
        end
        
        match = m[:class_name].match(/::[^:]*$/)
        if match 
          method_class_name = match[0].gsub("::", "")
        else
          method_class_name = method_class_origin
        end
        
        module_name = Utility.camelize(method_class_origin.gsub(/#{method_class_name}$/, "").gsub("::", "_"))
        
        classes[method_class] = {
          :original_class_name => method_class_origin,
          :method_class => method_class,
          :module_name => module_name,
          :class_name => method_class_name,
          :class_tree => class_table[method_class],
          :super_classes => [],
          :methods => [],
          :constructors => [],
          :target_class => target_class_table[m[:class_name]],
          :template => m[:template],
        }
        
        m[:class] = classes[method_class]
        
      end
      
      
      classes.each do |k, v|
      
        unless v[:class_tree]
          if v[:template][:tmpl]
            
            fields = []
            t = v[:template]
            tmpl_args_table = t[:tmpl_args_table]
            t[:tmpl][:fields].each do |f|
              fields << {
                :field_name => f[:field_name],
                :field_type => {
                  :val => tmpl_args_table[f[:field_type][:val]],
                  :is_enum => f[:field_type][:is_enum],
                },
              }
            end
            v[:fields] = fields
          end
          
          
          
        end
      
        next unless v[:class_tree]
        
        v[:class_tree][:super_classes].each do |sc|
          cls = classes[sc[:val].gsub("::", "__")]
          v[:super_classes] << classes[sc[:val].gsub("::", "__")]
        end
        v[:fields] = v[:class_tree][:fields]
      end
      
      
      mruby_name_table = {}
      
      option[:mruby_name_table] = mruby_name_table
      
      selected_methods.each do |m|
        
        m[:class][:methods] << m
        
      end
      
      selected_constructor.each do |m|
        
        m[:class][:constructors] << m
        
      end
      
      classes.each do |k, c|
        
        mths = self.gether_methods c
        
        #
        
        overload_methods = {}
        c[:overload_methods] = overload_methods
        
        #cf = target_class_table[c[:original_class_name]][:create_function]
        #if cf
        #  mruby_name = "#{c[:module_name]}::#{c[:class_name]}::#{cf}_0"
        #  mruby_name_table[mruby_name] = "#{cf}_0"
        #  overload_methods[cf] ||= []
        #  overload_methods[cf] << {
        #      :method_name => mruby_name_table[mruby_name],
        #      :arg_num => 0,
        #    }
        #end
      
        mths.each do |m|
          
          method_class = m[:class_name].gsub("::", "__")
          method_name = Utility.underscore(m[:method_name])
          method_class_origin = m[:class_name]
          method_class = method_class_origin.gsub("::", "__")
          
          #
          original_method_name = [method_name, m[:type]]
          mruby_method_name = method_name
          mruby_name = "#{classes[method_class][:module_name]}::#{classes[method_class][:class_name]}::#{mruby_method_name}"
          
          count = 2
          
          while mruby_name_table[mruby_name]
            
            mruby_method_name = "#{method_name}_#{count}"
            count += 1
            
            mruby_name = "#{classes[method_class][:module_name]}::#{classes[method_class][:class_name]}::#{mruby_method_name}"
          end
          
          m[:mruby_name] = mruby_name
          m[:mruby_method_name] = mruby_method_name
          
          mruby_name_table[mruby_name] = m
          
          overload_methods[original_method_name] ||= []
          overload_methods[original_method_name] << {
              :method_name => mruby_method_name,
              :arg_num => m[:args].length,
              :method => m,
            }
          
          if overload_methods[original_method_name].length > 1 && 
            overload_methods[original_method_name][0][:method_name] == method_name
          
            mruby_method_name_1 = "#{method_name}_#{1}"
            mruby_name_1 = "#{classes[method_class][:module_name]}::#{classes[method_class][:class_name]}::#{mruby_method_name_1}"
          
            overload_methods[original_method_name][0][:method_name] = mruby_method_name_1
            m_tmp = overload_methods[original_method_name][0][:method]
            m_tmp[:mruby_name] = mruby_name_1
            m_tmp[:mruby_method_name] = mruby_method_name_1
            c_function_name_1 = "#{class_name}_#{method_class}_#{mruby_method_name_1}"
            m_tmp[:c_function_name] = c_function_name_1
          end
          
          c_function_name = "#{class_name}_#{method_class}_#{mruby_method_name}"
          
          m[:c_function_name] = c_function_name
          
        end
        
      end
      
      class_replace_table = {}
      
      classes.each do |k, v|
          #tp = option[:class_selector].call v
          tp = target_class_table[v[:original_class_name]][:value]
          
          class_type = v[:original_class_name]
          access = nil
          access_p = nil
          original_class_type = nil
          
          
          
          case tp
          when :value
            class_type = v[:original_class_name]
            access = "source"
            access_p = "source"
            if class_type == "cor::mruby_interface::AnyWP"
              access = "source.lock()"
            end
          when :pointer
            class_type = "#{v[:original_class_name]}*"
            access = "source"
            access_p = "source"
          when :shared_ptr
            #class_type = "std::shared_ptr<#{v[:original_class_name]}>"
            #access = "*source.get()"
            #access_p = "source.get()"
            class_type = "std::weak_ptr<#{v[:original_class_name]}>"
            access = "*source.lock().get()"
            access_p = "source.lock().get()"
          when :weak_ptr
            class_type = "std::weak_ptr<#{v[:original_class_name]}>"
            access = "*source.lock().get()"
            access_p = "source.lock().get()"
          when :cocos_ptr
            class_type = "cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<#{v[:original_class_name]}>"
            access = "*source.get()"
            access_p = "source.get()"
          when :cocos_value
            class_type = v[:original_class_name]
            original_class_type = v[:original_class_name]
            access = "source"
            access_p = "source"
            #access = "cor::cocos2dx_mruby_interface::CocosValue::convert_to_cocos_value(source)"
            #access_p = "cor::cocos2dx_mruby_interface::CocosValue::convert_to_cocos_value(source)"
          end
          
          assoced = self.typedef_assoc_base("", v[:original_class_name], option)
          h = {
            :value => tp,
            :class_type => class_type,
            :access => access,
            :original_class_type => original_class_type,
          }
          hp = {
            :value => tp,
            :class_type => class_type,
            :access => access_p,
            :original_class_type => original_class_type,
          }
          
          class_replace_table[assoced] = h
          class_replace_table[v[:original_class_name]] = h
          if tp != :value
            class_replace_table["#{assoced}*"] = hp
            class_replace_table["#{v[:original_class_name]}*"] = hp
            class_replace_table["#{assoced} *"] = hp
            class_replace_table["#{v[:original_class_name]} *"] = hp
          else
            class_replace_table["#{assoced}*"] = "reject"
            class_replace_table["#{v[:original_class_name]}*"] = "reject"
            class_replace_table["#{assoced} *"] = "reject"
            class_replace_table["#{v[:original_class_name]} *"] = "reject"
          end
          class_replace_table["#{assoced}&"] = h
          class_replace_table["#{v[:original_class_name]}&"] = h
          class_replace_table["#{assoced} &"] = h
          class_replace_table["#{v[:original_class_name]} &"] = h
          class_replace_table["const #{assoced}&"] = h
          class_replace_table["const #{v[:original_class_name]}&"] = h
          class_replace_table["const #{assoced} &"] = h
          class_replace_table["const #{v[:original_class_name]} &"] = h
          
          if tp == :shared_ptr
            ch = {
              :value => :value,
              :class_type => "std::weak_ptr<#{v[:original_class_name]}>",
              :access => "source.lock()",
              :inv_access => "source",
            }
            class_replace_table["std::shared_ptr<#{v[:original_class_name]}>"] = ch
          end

          
          if tp == :cocos_value
            
            ch = {
              :value => :value,
              :class_type => "MrubyRef",
              :access => "cor::cocos2dx_mruby_interface::CocosValue::convert_to_cocos_value_vec(source)",
              :is_cocos_value_array => true,
            }
            
            class_replace_table["const cocos2d::ValueVector&"] = ch
            class_replace_table["cocos2d::ValueVector&"] = ch
            class_replace_table["const cocos2d::ValueVector"] = ch
            class_replace_table["cocos2d::ValueVector"] = ch
            
          end
          
          if tp == :cocos_ptr
          
            ch = {
              :value => :value,
              :class_type => "MrubyRef",
              :access => "cor::cocos2dx_mruby_interface::CocosArray::convert_to_from_cocos_vec<#{v[:original_class_name]}>(source)",
              :inv_access => "cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby<#{v[:original_class_name]}>(source)",
              :is_cocos_array => true,
            }
            
            class_replace_table["const Vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["Vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["const Vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["Vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["const Vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["Vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["const Vector<#{v[:original_class_name]} *>"] = ch
            class_replace_table["Vector<#{v[:original_class_name]} *>"] = ch
            
            class_replace_table["const cocos2d::Vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["cocos2d::Vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["const cocos2d::Vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["cocos2d::Vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["const cocos2d::Vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["cocos2d::Vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["const cocos2d::Vector<#{v[:original_class_name]} *>"] = ch
            class_replace_table["cocos2d::Vector<#{v[:original_class_name]} *>"] = ch
            
            
            ch = {
              :value => :value,
              :class_type => "MrubyRef",
              :access => "cor::cocos2dx_mruby_interface::CocosArray::convert_to_from_std_vec<#{v[:original_class_name]}>(source)",
              :inv_access => "cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby<#{v[:original_class_name]}>(source)",
              :is_std_array => true,
            }
            
            class_replace_table["const std::vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]}*>&"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]}*>"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} *>&"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} *>"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} *>"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} *, std::allocator<#{v[:original_class_name]} *> >"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} *, std::allocator<#{v[:original_class_name]} *> >"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} *, std::allocator<#{v[:original_class_name]} *> > &"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} *, std::allocator<#{v[:original_class_name]} *> > &"] = ch
          
          end
          
          if tp == :value
            ch = {
              :value => :value,
              :class_type => "MrubyRef",
              :access => "cor::mruby_interface::MrubyArray::convert_to_from_std_vec<#{v[:original_class_name]}>(source)",
              :is_value_std_array => true,
            }
            
            class_replace_table["const std::vector<#{v[:original_class_name]}>&"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]}>&"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]}>"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]}>"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} >&"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} >&"] = ch
            class_replace_table["const std::vector<#{v[:original_class_name]} >"] = ch
            class_replace_table["std::vector<#{v[:original_class_name]} >"] = ch
            class_replace_table["const std::vector<#{assoced}, std::allocator<#{assoced} > >"] = ch
            class_replace_table["std::vector<#{assoced}, std::allocator<#{assoced} > >"] = ch
          
          end
          
                    
          v[:class_type] = class_type
          v[:this_type] = tp
        
          case tp
          when :value
            create_proc = "#{v[:original_class_name]}()"
          when :pointer
            create_proc = nil
          when :shared_ptr
            create_proc = "cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<#{v[:original_class_name]}>())"
          when :weak_ptr
            create_proc = "std::make_weak<#{v[:original_class_name]}>()"
          when :cocos_ptr
            create_proc = "new #{v[:original_class_name]}()"
          when :cocos_value
            create_proc = "#{v[:original_class_name]}()" #"cor::cocos2dx_mruby_interface::CocosValue::convert_from_cocos_value()"
          end
          
          if target_class_table[v[:original_class_name]][:create_function]
            v[:create_proc] = create_proc
            v[:create_function] = target_class_table[v[:original_class_name]][:create_function]
          end
          
          
      end
      
      cf_protos = []
      
      class_defines = classes.map do |k, v|
        
        class_type = v[:class_type]
        create_proc = v[:create_proc]
        create_function = v[:create_function]
        
        str = ""
        
        tp = v[:this_type]
        if tp == :cocos_ptr
        
          str += <<EOS
        bool #{class_name}_#{v[:class_name]}_valid_question(#{class_type} c)
        {
            return c.is_valid();
        }
EOS
          cf_protos << <<EOS
        bool #{class_name}_#{v[:class_name]}_valid_question(#{class_type} c);
EOS
        end
        
        if tp == :shared_ptr
            str += <<EOS
        bool #{class_name}_#{v[:class_name]}_valid_question(#{class_type} c)
        {
            return !c.expired();
        }
EOS
          cf_protos << <<EOS
        bool #{class_name}_#{v[:class_name]}_valid_question(#{class_type} c);
EOS
        end
        
        next str unless create_proc
        
        
        
        if v[:constructors].length > 1
          
          v[:constructors].each_with_index do |m, i|
          
            if m[:args_converted]
              args, call_args, is_nil = m[:args_converted]
            else
              args, call_args, is_nil = self.get_args(class_replace_table, m, m[:args], option)
              m[:args_converted] = [args, call_args, is_nil]
            end
          
            unless is_nil
              str += <<EOS
        #{class_type} #{class_name}_#{v[:class_name]}_#{create_function}_#{i}(#{args.join(", ")})
        {
            return #{create_proc.gsub("()", "(#{call_args.join(", ")})")};
        }
EOS

              cf_protos << <<EOS
        #{class_type} #{class_name}_#{v[:class_name]}_#{create_function}_#{i}(#{args.join(", ")});
EOS
            end
          end
        
          

        else
          
          str += <<EOS
        #{class_type} #{class_name}_#{v[:class_name]}_#{create_function}()
        {
            return #{create_proc};
        }
EOS
          cf_protos << <<EOS
        #{class_type} #{class_name}_#{v[:class_name]}_#{create_function}();
EOS
        end
        

        str
      end
      
      string_literals = {}
      string_literals_register = Proc.new do |str|
        string_literals[str] = {
          :name => "n_#{str}",
          :def => "            static const char * n_#{str} = \"#{str}\";\n"
        }
        string_literals[str] = {
          :name => "\"#{str}\"",
          :def => ""
        }
        
        string_literals[str][:name]
      end
      
      class_registrations = classes.map do |k, v|
        
        class_type = v[:class_type]
        
        str = ""
        
        
        str += <<EOS
            binder.bind_class<#{class_type} >(#{
              string_literals_register.call(v[:module_name])}, #{
              string_literals_register.call(v[:class_name])});
EOS
        
        
        tp = v[:this_type]
        if tp == :cocos_ptr
          str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(v[:module_name])
              }, #{
              string_literals_register.call(v[:class_name])
              }, "valid?", #{class_name}_#{v[:class_name]}_valid_question);
EOS
        end
        
        if tp == :shared_ptr
          str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(v[:module_name])
              }, #{
              string_literals_register.call(v[:class_name])
              }, "valid?", #{class_name}_#{v[:class_name]}_valid_question);
EOS
        end
        
        create_function = v[:create_function]
        
        if create_function
        
          if v[:constructors].length > 1
            
            
            v[:constructors].each_with_index do |m, i|
              
              if m[:args_converted]
                args, call_args, is_nil = m[:args_converted]
              else
                args, call_args, is_nil = self.get_args(class_replace_table, m, m[:args], option)
                m[:args_converted] = [args, call_args, is_nil]
              end
              
          
              unless is_nil
                str += <<EOS
            binder.bind_static_method(#{
              string_literals_register.call(v[:module_name])}, #{
              string_literals_register.call(v[:class_name])
              }, #{string_literals_register.call("#{create_function}_#{i}")}, #{class_name}_#{v[:class_name]}_#{create_function}_#{i});
EOS
              end
            end
        
          else
            str += <<EOS
            binder.bind_static_method(#{
              string_literals_register.call(v[:module_name])}, #{
              string_literals_register.call(v[:class_name])
              }, #{string_literals_register.call(create_function)}, #{class_name}_#{v[:class_name]}_#{create_function});
EOS
          end
          
          
        end
        
        
        str
      end
      
      class_convertables = []
      classes.each do |k, v|
        str = ""
        
        if v[:this_type] == :shared_ptr
          str += <<EOS
            binder.add_convertable("#{[v[:module_name], v[:class_name]].join("::")}", "CorMrubyInterface::AnyWP");
EOS
        end
        
        super_class_rec_call = Proc.new do |ca|
          ca[:super_classes].each do |sc|
            if sc
              str += <<EOS
            binder.add_convertable("#{[v[:module_name], v[:class_name]].join("::")
              }", "#{[sc[:module_name], sc[:class_name]].join("::")}");
EOS
              super_class_rec_call.call(sc)
            end
          end
        end
        
        super_class_rec_call.call v
        
        
        class_convertables << str
      end
      
      #
      method_defines = []
      classes.each do |k, c|
      
        mths = self.gether_methods c
      
        #method_name_table = {}
        mths.each do |m|
        
          
          if m[:args_converted]
            args, call_args, is_nil = m[:args_converted]
          else
            args, call_args, is_nil = self.get_args(class_replace_table, m, m[:args], option)
            m[:args_converted] = [args, call_args, is_nil]
          end
          
          ret = self.type_filter m, m[:method_ret], option
          if ret && ret.match(/FuncPtr/)
            m[:deleted] = true
            next ""
          end
          
          if ret
            ret = ret.gsub(/^ /, "")
          end
          crt = nil
          if class_replace_table[ret]
            crt = class_replace_table[ret]
            ret = crt[:class_type]
            is_cocos_array = crt[:is_cocos_array]
            is_std_array = crt[:is_std_array]
            is_cocos_value_array = crt[:is_cocos_value_array]
            is_value_std_array = crt[:is_value_std_array]
          end
          
          is_nil = true unless ret
          #is_nil = true if m[:is_const]
          
          if is_nil
            
            m[:deleted] = true
            next "" 
          end
          
          if m[:type] == 'static'
            if m[:class_name] != c[:original_class_name]
              #m[:deleted] = true
              next "" 
            end
          
            this_arg = []
            call_method = "#{m[:class_name]}::#{m[:method_name]}(#{call_args.join(", ")})"
          else
            this_arg = ["#{c[:class_type]} c"]
            
            if m[:class][:this_type] == :value
              this_arg = ["#{c[:class_type]}& c"]
            end
            
            #if c[:class_type] == "cocos2d::Value"
            #  this_arg = ["mrubybind::MrubyRef c"]
            #end
            
            ac = "->"
            ac = "." if m[:class][:this_type] == :value || m[:class][:this_type] == :cocos_value
            
            this_call = "c"
            
            #if c[:class_type] == "cocos2d::Value"
            #  this_call = "cor::cocos2dx_mruby_interface::CocosValue::convert_to_cocos_value(#{this_call})"
            #end
            
            pre_action = ""
            if c[:this_type] == :shared_ptr
              pre_action += <<EOS
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }
EOS
              this_call = "tmp_c"
              ac = "->"
            end
            
            call_method = "#{this_call}#{ac}#{m[:method_name]}(#{call_args.join(", ")})"
          end
          
          if m[:method_ret][:is_const] && ret != 'void' && ret.match(/\*$/)
            call_method = "const_cast<#{ret} >(#{call_method})"
          end
          
          if is_cocos_array
            call_method = "cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(#{call_method})"
          end
          
          if is_std_array
            call_method = "cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(#{call_method})"
          end
          
          if is_value_std_array
            call_method = "cor::mruby_interface::MrubyArray::convert_to_from_std_vec(#{call_method})"
          end
          
          if is_cocos_value_array
            call_method = "cor::cocos2dx_mruby_interface::CocosValue::convert_from_cocos_value_vec(#{call_method})"
          end
          
          if ret.match(/^std::shared_ptr/)
            call_method = "cor::mruby_interface::MrubyState::add_tmp_shared_and_return(#{call_method})"
          end
          if ret.match(/^std::weak_ptr/)
            call_method = "cor::mruby_interface::MrubyState::add_tmp_shared_and_return(#{call_method})"
          end
          
          if ret != "void"
            call_method = "return #{call_method}"
          end
          
          #if method_name_table[m[:mruby_method_name]]
          #  m[:deleted] = true
          #  next
          #end
          #method_name_table[m[:mruby_method_name]] = m
          
          c_function_name = "#{class_name}_#{c[:method_class]}_#{m[:mruby_method_name]}"
        
          str = <<EOS
        #{ret} #{c_function_name}(#{(this_arg + args).join(", ")})
        {
#{pre_action}
            #{call_method};
        }
        
EOS
          method_defines << str
          
          cf_protos << <<EOS
        #{ret} #{c_function_name}(#{(this_arg + args).join(", ")});
EOS
        end
        
        fields = self.gether_fields c
        
        fields.each do |f|
          
          this_arg = ["#{c[:class_type]} c"]
          if c[:this_type] == :value
            this_arg = ["#{c[:class_type]}& c"]
          end
          
          ac = "->"
          ac = "." if c[:this_type] == :value
        
          pre_action = ""
          this_call = "c"
        
          if c[:this_type] == :shared_ptr
            pre_action += <<EOS
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }
EOS
            this_call = "tmp_c"
            ac = "->"
          end
        
          c_set_function_name = "#{class_name}_#{c[:method_class]}_accessor_set_#{Utility.underscore f[:field_name]}"
          c_get_function_name = "#{class_name}_#{c[:method_class]}_accessor_get_#{Utility.underscore f[:field_name]}"
          
          tp = f[:field_type]
          type = self.type_filter_base c[:original_class_name], tp, option
          
          source_type = type
          
          if class_replace_table[type]
            crt = class_replace_table[type]
            type = class_replace_table[type][:class_type]
            is_cocos_array = crt[:is_cocos_array]
            is_std_array = crt[:is_std_array]
            is_cocos_value_array = crt[:is_cocos_value_array]
            is_value_std_array = crt[:is_value_std_array]
          end
          
          unless type
            f[:deleted] = true
            next
          end
          
          unless tp
            f[:deleted] = true
            next
          end
          
          unless tp[:val]
            f[:deleted] = true
            next
          end
          
          reject_cls = reject_method_table[c[:original_class_name]]
          if reject_cls && reject_cls[f[:field_name]]
            f[:deleted] = true
            next
          end
          
          is_nil, v, cv = self.convert_value(class_replace_table, false, type, tp, "")

          type = v
          
          unless type
            f[:deleted] = true
            next
          end
          
          f[:type] = type
          
          va = cv.gsub("source", "a")
          vb = "#{this_call}#{ac}#{f[:field_name]}"
          
          if tp[:val].match(/.*$/) && type.match(/^cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl</)
            va = "#{va}.get()"
            vb = "#{type}(#{vb})"
          end
          
          
          
          
          if is_value_std_array
            va = "cor::mruby_interface::MrubyArray::convert_to_from_std_vec<#{source_type.gsub(/^std::vector</, "").gsub(/, std::allocator<.*>$/, "")} >(#{va})"
            vb = "cor::mruby_interface::MrubyArray::convert_std_vec_to_mruby(#{vb})"
          end
          
          
          str = <<EOS
        void #{c_set_function_name}(#{(this_arg + [type + " a"]).join(", ")})
        {
#{pre_action}
            #{this_call}#{ac}#{f[:field_name]} = #{va};
        }
        
EOS
          cf_protos << <<EOS
        void #{c_set_function_name}(#{(this_arg + [type + " a"]).join(", ")});
EOS

          unless type.match(/^mrubybind::FuncPtr/)
            str += <<EOS
        #{type} #{c_get_function_name}(#{(this_arg).join(", ")})
        {
#{pre_action}
            return #{vb};
        }
        
EOS

            cf_protos << <<EOS
        #{type} #{c_get_function_name}(#{(this_arg).join(", ")});
EOS
          end
        
          method_defines << str
        end
        
        if c[:target_class][:operator]
          
          ops = c[:target_class][:operator]
          
          str = ""
          
          ops.each do |op|
            
            ct = 0
            
            operator_name = OPERATOR_TABLE[op[:name]]
            op[:operator_name] = operator_name
            op[:args].each do |arg|
              
              arg[:operator_name] = "#{operator_name}_#{ct}"
              
              c_function_name = "#{class_name}_#{c[:method_class]}_operator_#{arg[:operator_name]}"
              
              ct2 = 0
              av = []
              type = arg[:ret]
              an = ([c[:class_type] + " &"] + arg[:arg]).map do |a|
                s = "#{a} a#{ct2}"
                av << "a#{ct2}"
                ct2 += 1
                s
              end
              
              arg[:c_function_name] = c_function_name
              
              if op[:name] == "[]"
                vb = "#{av[0]}[#{av[1]}]"
              elsif op[:name] == "[]="
                vb = "#{av[0]}[#{av[1]}] = #{av[2]}"
              elsif av.length <= 1
                vb = "#{op[:name].gsub("@", "")}#{av[0]}"
              else
                vb = av.join(op[:name])
              end
              
              str += <<EOS
        #{type} #{c_function_name}(#{(an).join(", ")})
        {
            return #{vb};
        }
        
EOS

              cf_protos << <<EOS
        #{type} #{c_function_name}(#{(an).join(", ")});
EOS
              ct += 1
            end
            
          end
          
          method_defines << str
          
        end
      
      end
      
      
      
      
      method_registrations = []
      classes.each do |k, c|
        
        mths = self.gether_methods c
      
        str = ""
      
        mths.each do |m|
      
          if m[:deleted]
            next ""
          end
          
          if m[:type] == 'static'
            if m[:class_name] != c[:original_class_name]
              next "" 
            end
          end
          
          method_class = m[:class_name].gsub("::", "__")
          method_name = m[:mruby_method_name]
          
          mruby_method_name = method_name
          if m[:operator]
            mruby_method_name = method_name.gsub("operator", "")
          end
          
          c_function_name = "#{class_name}_#{c[:method_class]}_#{m[:mruby_method_name]}"
          
          if m[:type] == 'static'
            str += <<EOS
            binder.bind_static_method(#{
              string_literals_register.call(c[:module_name])
              }, #{
              string_literals_register.call(c[:class_name])
              }, #{
              string_literals_register.call(mruby_method_name)
              }, #{c_function_name});
EOS
          else
            str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(c[:module_name])
              }, #{
              string_literals_register.call(c[:class_name])
              }, #{mruby_method_name
              string_literals_register.call(mruby_method_name)
              }, #{c_function_name});
EOS
          end
          
        end
        

        method_registrations << str
        

        #
        str = ""
        
        fields = self.gether_fields c
        
        fields.each do |f|
        
          next if f[:deleted]
        
          c_set_function_name = "#{class_name}_#{c[:method_class]}_accessor_set_#{Utility.underscore f[:field_name]}"
          c_get_function_name = "#{class_name}_#{c[:method_class]}_accessor_get_#{Utility.underscore f[:field_name]}"
          
          type = f[:type]
          
          next unless type
          
          str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(c[:module_name])
              }, #{
              string_literals_register.call(c[:class_name])
              }, "#{Utility.underscore f[:field_name]}=", #{c_set_function_name});
EOS
          unless type.match(/^mrubybind::FuncPtr/)
            str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(c[:module_name])
              }, #{
              string_literals_register.call(c[:class_name])
              }, "#{Utility.underscore f[:field_name]}", #{c_get_function_name});
EOS
          end
          
          
        end
        
        method_registrations << str
        
        #
        str = ""
        if c[:target_class][:operator]
          
          ops = c[:target_class][:operator]
          
          str = ""
          
          ops.each do |op|
          
            
            ct = 0
            
            operator_name = OPERATOR_TABLE[op[:name]]
            op[:operator_name] = operator_name
            op[:args].each do |arg|
              
              
              
              first_arg_class = c[:class_type].gsub("::", "__")
              ca = classes[first_arg_class]
              unless ca
              
                arg_class_name = {"float" => "Float"}[first_arg_class]
              
                str += <<EOS
            binder.bind_custom_method("#{arg_class_name}", "#{arg[:operator_name]}", #{arg[:c_function_name]});
EOS
                next
                
              end
              

              str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(ca[:module_name])
              }, #{
              string_literals_register.call(ca[:class_name])
              }, "#{arg[:operator_name]}", #{arg[:c_function_name]});
EOS
              
              c[:overload_operators] ||= {}
              overload_operators = c[:overload_operators]
              mruby_method_name = arg[:operator_name]
              original_method_name = op[:name]
              
              overload_operators[original_method_name] ||= []
              overload_operators[original_method_name] << {
                  :method_name => mruby_method_name,
                  :arg_num => arg[:arg].length,
                }
              
              ct += 1
            end
            
            if op[:args].length == 1
              
              arg = op[:args][0]
              first_arg_class = c[:class_type].gsub("::", "__")
              ca = classes[first_arg_class]
              str += <<EOS
            binder.bind_custom_method(#{
              string_literals_register.call(ca[:module_name])
              }, #{
              string_literals_register.call(ca[:class_name])
              }, "#{op[:name]}", #{arg[:c_function_name]});
EOS

            
            end
            
          end
          
        end
        
        method_registrations << str
        
      end
      
      constant_registrations = []
      
      target_enums = option[:target_enums]
      
      target_enums_table = {}
      
      target_enums.each do |te|
        target_enums_table[te[:enum_name]] = te
      end
      
      tree.enum_constants.each do |cst|
        
        
        te = target_enums_table[cst[:type][:val]]
        
        next unless te
        
        
        name = Cor.u.underscore(cst[:name]).upcase
        val = cst[:type][:val].split('::')
        unless cst[:is_class]
          val.pop
        end
        
        type_name = val
        
        val << cst[:name]
        val = val.join('::')
        
        #
        
        mruby_module_name = string_literals_register.call(te[:mruby_module])
        mruby_class_name = string_literals_register.call(te[:mruby_class])
        
        str = <<EOS
            binder.bind_const(#{
                mruby_module_name
              }, #{
                mruby_class_name
              }, "#{name}", (int)#{val});
EOS
        constant_registrations << str
      
      end
      
      
      method_overload_define = []
      
      classes.each do |k, c|
      
        
        mruby_code = []
        
        create_function = c[:create_function]
        
        if create_function
        
          if c[:constructors].length > 1
            
            a = []
            a << <<EOS
            #{c[:module_name]}::#{c[:class_name]}.class_eval do
                def self.#{create_function}(*args, &block)
                  a = args
                  a << block if block
                  argc = a.length
                  exs = []
                  case argc
EOS
        
            arg_count_table = {}
            c[:constructors].each_with_index do |m, i|
          
              if m[:args_converted]
                args, call_args, is_nil = m[:args_converted]
              else
                args, call_args, is_nil = self.get_args(class_replace_table, m, m[:args], option)
                m[:args_converted] = [args, call_args, is_nil]
              end
                
              unless is_nil
                arg_count_table[args.length] ||= []
                arg_count_table[args.length] << {
                  :args => args,
                  :call_args => call_args,
                  :is_nil => is_nil,
                  :func => <<EOS
                    return self.#{create_function}_#{i}(*a)
EOS
                }
                
                
              end

            end
            
            arg_count_table.each do |k, v|
              
              code = ""
              
              v.each do |h|
                code += <<EOS
                    begin
#{h[:func]}                    rescue TypeError => e
                      exs << e
                    end
EOS
              end
              
              a << <<EOS
                  when #{k}
#{code}                    raise exs.to_s
EOS
            end
            
            
            a << <<EOS
                  else
                    raise "not match arg count \#{argc}"
                  end
                end
            end
EOS
            
            mruby_code << a.join
          end
        end
        
        overload_methods = c[:overload_methods]
        
        overload_methods.each do |k, mths|
        
          next if mths.length <= 0
          next if mths.length <= 1 && mths[0][:method][:mruby_method_name] == k[0]
        
          a = []
            a << <<EOS
            #{c[:module_name]}::#{c[:class_name]}.class_eval do
                def #{(!mths[0][:method] || mths[0][:method][:type] == 'static') ? 'self.' : ''}#{k[0]}(*args, &block)
                  a = args
                  a << block if block
                  argc = a.length
                  exs = []
                  case argc
EOS
          ct = 0
          
          arg_count_table = {}
          mths.each do |om|
            
            next if om[:method][:deleted]
            
            arg_count_table[om[:arg_num]] ||= []
            arg_count_table[om[:arg_num]] << om
            
            ct += 1
          end
          
          arg_count_table.each do |k, v|
          
            code = <<EOS
                  when #{k}
EOS
          
            v.each do |om|
            
              code += <<EOS
                    begin
                      return self.#{om[:method][:mruby_method_name]}(*a)
                    rescue TypeError => e
                      exs << e
                    end
EOS
            end
            
            code += <<EOS
                    raise exs.to_s
EOS
            
            a << code
            
            
          end
          
          next if ct == 0
          
          a << <<EOS
                  else
                    raise "not match arg count \#{argc}"
                  end
                end
            end
EOS
          
          mruby_code << a.join
        end
        
        method_overload_define << mruby_code
        
        mruby_code = []
        
        overload_operators = c[:overload_operators] 
        if overload_operators
          overload_operators.each do |k, oo|
          
            next if overload_operators.length <= 1
          
            a = []
            a << <<EOS
            #{c[:module_name]}::#{c[:class_name]}.class_eval do
                def #{k}(*args, &block)
                  a = args
                  a << block if block
                  argc = a.length
                  exs = []
                  case argc
EOS
            ct = 0
            
            arg_count_table = {}
            oo.each do |om|
              
              arg_count_table[om[:arg_num]] ||= []
              arg_count_table[om[:arg_num]] << om
              
              ct += 1
            end
        
            arg_count_table.each do |k, v|
        
              code = <<EOS
                  when #{k}
EOS
          
              v.each do |om|
              
                code += <<EOS
                    begin
                      return self.#{om[:method_name]}(*a)
                    rescue TypeError => e
                      exs << e
                    end
EOS
              end
              
              code += <<EOS
                    raise exs.to_s
EOS
              
              a << code
              
            end
        
            #next if ct == 0
        
            a << <<EOS
                  else
                    raise "not match arg count \#{argc}"
                  end
                end
            end
EOS
              
            mruby_code << a.join
          end
          
          method_overload_define << mruby_code
        end
        
        
      end
      
      Utility.file_write "log/#{option[:name]}/code.rb.log", method_overload_define.join
      
      if RUBY_PLATFORM.include? "mswin32"
        #`../../external/mruby/build/host/bin/mrbc.exe -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`
        `../../external/mruby_build/builded/vc_debug_32/bin/mrbc.exe -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`
      
      else
        `../../external/mruby/build/host/bin/mrbc -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`
      end
      method_overload_define = Utility.file_read("log/#{option[:name]}/code.c.log").gsub(/#include.*?\n/m, "static ")
      
      string_literals = string_literals.map{|k, v| v[:def]}.join
      method_defines = method_defines.join
      
      class_defines = class_defines.join
      
      
      l = method_registrations.length + class_registrations.length + class_convertables.length + constant_registrations.length
      
      l = [l / (12), 1].max
      
      method_registrations = Utility.interval_slice(method_registrations, l).map{|v| v.join}
      class_registrations = Utility.interval_slice(class_registrations, l).map{|v| v.join}
      class_convertables = Utility.interval_slice(class_convertables, l).map{|v| v.join}
      constant_registrations = Utility.interval_slice(constant_registrations, l).map{|v| v.join}
      
      
      calls_a = []
      (class_registrations + method_registrations + class_convertables + constant_registrations).each_with_index do |s, ct|
        calls_a << {
          :fname => "#{class_name}_bind_func_#{ct}",
          :def => <<EOS,
          void #{class_name}_bind_func_#{ct}(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                #{s}
          }
EOS
          :proto => <<EOS,
          void #{class_name}_bind_func_#{ct}(mruby_interface::MrubyState& mrb);
EOS
          :call => "                #{class_name}_bind_func_#{ct}(mrb);\n",
        }
      end
      
      method_registrations = method_registrations.join
      class_registrations = class_registrations.join
      class_convertables = class_convertables.join
      constant_registrations = constant_registrations.join
      
      call_defs = calls_a.map{|v| v[:def] }
      call_calls = calls_a.map{|v| v[:call] }.join
      call_protos = calls_a.map{|v| v[:proto] }.join
      
      header = <<EOS
#ifndef #{head_name}
#define #{head_name}

#include "cor_mruby_interface/sources/mruby_state.h"

namespace cor
{
    namespace #{name_space}
    {
        class #{class_name}
        {
        public:
            
            static void bind(mruby_interface::MrubyState& mrb);
        
        };
        
        
    }
}

#endif
EOS

      src = <<EOS
#include "#{header_path}.h"

namespace cor
{
    namespace #{name_space}
    {
        #{"\n" + class_defines.to_s}
    
        #{"\n" + method_defines.to_s}
        
        #{"\n" + call_protos.to_s}
    
        void #{class_name}::bind(mruby_interface::MrubyState& mrb)
        {
            auto& binder = mrb.ref_binder();
            (void)binder;
            
            #{"\n" + string_literals.to_s}
            
            /*
            # {"\n" + class_registrations.to_s}
            
            # {"\n" + class_convertables.to_s}
            
            # {"\n" + method_registrations.to_s}
            */
            
            #{"\n" + call_calls.to_s}
            
            #{"\n" + method_overload_define.to_s}
            
            
            mrb_load_irep(mrb.get_mrb(), #{class_name}_mruby_code);
            
            
        }
    }
}

EOS
      sub_src = call_defs.map do |cd|
        tsrc = <<EOS
#include "#{header_path}.h"

namespace cor
{
    namespace #{name_space}
    {
        #{"\n" + cf_protos.join}
    
        #{"\n" + cd.to_s}
    }
}
EOS
        tsrc
      end
      
      while sub_src.length < 30
        sub_src << ""
      end

    
      [header, src, sub_src]
    end
    
    
  end

end