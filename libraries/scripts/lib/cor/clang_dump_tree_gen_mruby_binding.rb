
module Cor

  module ClangDumpTree

    def self.gen_mruby_binding(class_name, classes, class_replace_table, reject_method_table, tree, option)

      header = ""
      src = ""

      path = option[:path]
      header_path = path.gsub(/^\.\.\//, "")

      head_name = "_#{Utility.underscore(path).upcase.gsub("/", "_").gsub(".", "_")}_H_"
      name_space = option[:name_space]


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
            is_value_std_array_2_dim = crt[:is_value_std_array_2_dim]
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
            call_method = "cor::mruby_interface::MrubyArray::convert_std_vec_to_mruby(#{call_method})"
          end

          if is_value_std_array_2_dim
            call_method = "cor::mruby_interface::MrubyArray::convert_std_vec_to_mruby(#{call_method})"
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
            is_value_std_array_2_dim = crt[:is_value_std_array_2_dim]
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

          if tp[:is_enum]
            #va = "(#{type})#{va}"
            vb = "(int)#{vb}"
          end


          if is_value_std_array
            va = "cor::mruby_interface::MrubyArray::convert_mruby_to_std_vec<#{source_type.gsub(/^std::vector</, "").gsub(/, std::allocator<.*>$/, "")} >(#{va})"
            vb = "cor::mruby_interface::MrubyArray::convert_std_vec_to_mruby(#{vb})"
          end

          if is_value_std_array_2_dim
            va = "cor::mruby_interface::MrubyArray::convert_mruby_to_std_vec<#{source_type.gsub(/^std::vector<\s*std::vector<\s*/, "").gsub(/>\s*, std::allocator<.*>$/, "")} >(#{va})"
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

      if RUBY_PLATFORM.downcase =~ /mswin(?!ce)|mingw|cygwin|bccwin/
        #`../../external/mruby/build/host/bin/mrbc.exe -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`
        `../../external/mruby_build/builded/vc_debug_32/bin/mrbc.exe -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`;

      else
        `../../external/mruby/build/host/bin/mrbc -B#{class_name}_mruby_code -o log/#{option[:name]}/code.c.log log/#{option[:name]}/code.rb.log`;
      end
      method_overload_define = Utility.file_read("log/#{option[:name]}/code.c.log").gsub(/#include.*?\n/m, "static ")

      string_literals = string_literals.map{|k, v| v[:def]}.join

      method_registrations_length = method_registrations.length + class_registrations.length + class_convertables.length + constant_registrations.length

      l = [(method_registrations_length / (12.0)).ceil, 1].max

      method_registrations = Utility.interval_slice(method_registrations, l).map{|v| v.join}
      class_registrations = Utility.interval_slice(class_registrations, l).map{|v| v.join}
      class_convertables = Utility.interval_slice(class_convertables, l).map{|v| v.join}
      constant_registrations = Utility.interval_slice(constant_registrations, l).map{|v| v.join}

      total_length = method_registrations.length +
        class_registrations.length + class_convertables.length +
        constant_registrations.length

      puts "total_length #{total_length}"

      method_defines_length = [(method_defines.length / total_length.to_f).ceil, 1].max
      class_defines_length = [(class_defines.length / total_length.to_f).ceil, 1].max
      method_defines = Utility.interval_slice(method_defines, method_defines_length).map{|v| v.join}
      class_defines = Utility.interval_slice(class_defines, class_defines_length).map{|v| v.join}

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

#{
if option[:cor_name_space]
"namespace cor
{"
end
}
    namespace #{name_space}
    {
        class #{class_name}
        {
        public:

            static void bind(mruby_interface::MrubyState& mrb);

        };


    }

#{
if option[:cor_name_space]
"}"
end
}


#endif
EOS

      proto_header = <<EOS
#include "#{header_path}.h"

#{
if option[:cor_name_space]
"namespace cor
{"
end
}
    namespace #{name_space}
    {
        #{"\n" + call_protos.to_s}
        #{"\n" + cf_protos.join}
    }
#{
if option[:cor_name_space]
"}"
end
}

EOS

      src = <<EOS
#include "#{header_path}.h"
#include "#{header_path}/sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

#{
if option[:cor_name_space]
"namespace cor
{"
end
}
    namespace #{name_space}
    {

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
#{
if option[:cor_name_space]
"}"
end
}

EOS

      sub_index = 0
      sub_src = call_defs.map do |cd|
        tsrc = <<EOS
#include "#{header_path}.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

#{
if option[:cor_name_space]
"namespace cor
{"
end
}
    namespace #{name_space}
    {
        #{"\n" + method_defines[sub_index].to_s}

        #{"\n" + class_defines[sub_index].to_s}

        #{"\n" + cd.to_s}
    }
#{
if option[:cor_name_space]
"}"
end
}
EOS
        sub_index += 1
        tsrc
      end

      while sub_src.length > 12
        sub_src[1] += sub_src[0]
        sub_src.shift
      end

      while sub_src.length < 12
        sub_src << ""
      end


      [header, src, sub_src, proto_header]

    end

  end

end
