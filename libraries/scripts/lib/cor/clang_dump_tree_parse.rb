
require "cor/utility_impl"

module COR

  module ClangDumpTree
  
    class TreeData
    
      attr_accessor :tree
      attr_accessor :classes
      attr_accessor :class_templates
      attr_accessor :typedefs
      attr_accessor :methods
      
      attr_accessor :typedef_table
      
      def print_tree
        ClangDumpTree::print_tree self.tree
      end
      
      def print_classes
        str = []
        self.classes.each do |c|
          s = ""
          s += "[\n"
          s += "  class_name = #{c[:class_name]}\n"
          s += "  super_classes = [#{c[:super_classes].join(", ")}]\n"
          s += "  public_start = #{c[:public_start]}\n"
          s += "  fields = #{c[:fields].map{|v| v[:field_name] + ':' + v[:field_type][:val] }.join(',')}\n"
          s += "]\n"
          str << s
        end
        str.join('')
      end
      
      def print_typedefs
        str = []
        self.typedefs.each do |t|
          s = ""
          s += "[\n"
          s += "  typedef_name = #{t[:typedef_name]}\n"
          s += "  source = #{t[:source]}\n"
          s += "]\n"
          str << s
        end
        str.join('')
      end
      
      def print_methods
        str = []
        self.methods.each do |m|
          s = ""
          s += "[\n"
          s += "  method_name = #{m[:method_name]}\n"
          s += "  class_name = #{m[:class_name]}\n"
          s += "  super_classes = [#{m[:super_classes].join(", ")}]\n"
          s += "  args = [#{m[:args].join(", ")}]\n"
          s += "  method_ret = #{m[:method_ret]}\n"
          s += "  type = #{m[:type]}\n"
          s += "  is_const = #{m[:is_const]}\n"
          s += "  is_final = #{m[:is_final]}\n"
          s += "  public = #{m[:public]}\n"
          s += "]\n"
          str << s
        end
        str.join('')
      end
      
      def print_class_templates
        str = []
        
        self.class_templates.each do |t|
          s = ""
          s += "[\n"
          s += "  template_name = #{t[:template_name]}\n"
          s += "  template_args = [#{t[:template_args].join(", ")}]\n"
          s += "  template_public_start = #{t[:public_start]}\n"
          s += "  template_fields = #{t[:fields].map{|v| v[:field_name] + ':' + v[:field_type][:val] }.join(',')}\n"
          s += "]\n"
          str << s
        end
        str.join('')
      end
      
      def gen_typedef_table
        typedef_table = {}
        self.typedefs.each do |t|
          typedef_table[t[:typedef_name]] = t
        end
        self.typedef_table = typedef_table
      end
    
    end
  
    def self.traverse_tree(tree, depth = 0, &block)
      if yield tree, depth
        tree[:children].each do |c|
          traverse_tree c, depth + 1, &block
        end
      end
    end
  
    def self.print_tree(tree)
      str = []
      traverse_tree tree do |v, depth|
        str << ("  " * depth + v[:line].to_s)
        true
      end
      str.join ""
    end
    
    def self.construct_tree(a, tree = [], index = 0, depth = 0)
      
      len = a.length
      
      t = nil
      
      while index < len
        
        line = a[index]
        
        d = line.scan(/^ */)[0].length / 2
        
        if d == depth
          t = {
            :line => line[(d * 2)..line.length],
            :children => [],
          }
        
          tree << t
          index += 1
        else
          if d > depth
            ch, index = self.construct_tree a, [], index, depth + 1
            index += 1
            t[:children] += ch
            
            ch.each do |c|
              c[:parent] = t
            end
            
          else
            index -= 1
            break
          end
        end
        
      end
      
      [tree, index]
    end
    

    def self.parse_token(line)
      line = line.gsub(/col\:\d* used /, "").gsub(/line\:\d*:\d* used /, "")
      line = line.gsub(/col\:\d* implicit (used )?/, "").gsub(/line\:\d*:\d* implicit (used )?/, "")      
      line = line.gsub(/col\:\d* referenced /, "").gsub(/line\:\d*:\d* referenced /, "")
      line = line.gsub(/col\:\d* /, "").gsub(/line\:\d*:\d* /, "")
      
      a = line.scan(/(('[^']*':'[^']*')|('[^']*')|(<[^<^>]*([^<^>]*<[^<^>]*>[^<^>]*)*[^<^>]*>)|(\S+))/)
      a.map{|v| v[0]}
    end

    def self.get_name_layer(t)
      nm = ""
      t = t[:parent]
      while t
        match = parse_token t[:line]
        if match[0] ==  "NamespaceDecl"
          nm = match.last + '::' + nm
        elsif match[0] ==  "CXXRecordDecl"
          if match.last == "definition"
            nm = match[-2] + '::' + nm
          else
            nm = match.last + '::' + nm
          end
        elsif match[0] == "ClassTemplateDecl"
          nm = "[template->#{match.last}]" + '::' + nm
        end
        t = t[:parent]
      end
      nm
    end
    
    def self.get_current_template(t)
      t = t[:parent]
      while t
        match = parse_token t[:line]
        if match[0] == "ClassTemplateDecl"
          break
        end
        if match[0] == "FunctionTemplateDecl"
          return nil
        end
        t = t[:parent]
      end
      t
    end

    def self.parse_separated(v)
      spl = v.split "':'"
      
      
      if spl.first == "\'va_list"
        return {
          :val => "delete type",
          :is_enum => spl.first.match(/^enum /) || spl.first.match(/^const enum /),
        }
      end
      
      spl = spl.last.gsub("'", '')
      sp = spl.gsub(/(class )|(^enum )|(struct )/, '').gsub(/^const enum /, "const ")
      {
        :val => sp,
        :is_enum => spl.match(/^enum /) || spl.match(/^const enum /),
      }
    end

    def self.parse_method_return(v)
      vl = v.gsub(/\(.*$/, '').gsub(/'/, '')
      if vl.match(/^class CostGridSpaceNeighborMode::Enum/)
        vl = "enum cor::data_structure::CostGridSpaceNeighborMode::Enum"
      end
      v = vl.gsub(/(class )|(^enum )|(struct )/, '').gsub(/^const enum /, "const ").
        gsub(/^const /, "const___").
        gsub(/unsigned /, "unsigned___").
        gsub(' ', '').
        gsub(/^const___/, "const ").
        gsub(/unsigned___/, "unsigned ")
      {
        :val => v,
        :is_enum => vl.match(/^enum /) || vl.match(/^const enum /),
        :is_const => vl.match(/^const /),
      }
    end
  
    def self.parse_tree(str)

      str = str.gsub(/(\|)|(\`)|(\-)/, ' ')

      #
      a = str.scan /.*?\n/m

      #
      

      tree, index = construct_tree(a)
      tree = tree[0]

      #
      str = print_tree tree
      

      #
      

      selected = []
      classes = []
      typedefs = []
      class_pattern = /(class (\S+) definition)|(struct (\S+) definition)/
      namespace = []
      class_templates = []
      traverse_tree tree do |t|
        match = t[:line].match(class_pattern)
        a = parse_token t[:line]
        mta = match.to_a
        class_name = nil
        public_start = false
        if mta[2]
          class_name = mta[2]
        elsif mta[4]
          public_start = true
          class_name = mta[4]
        end
        
        if a[0] == "NamespaceDecl"
          
        elsif a[0] == "public"
          if t[:parent][:class_name]
            t[:parent][:super_classes] << self.parse_separated(a[1])
          end
          
        elsif a[0] == "CXXRecordDecl" && match #&& (class_name == 'Utilities' || class_name == 'Child' || class_name == 'RootClass')
          class_name = get_name_layer(t) + class_name
          t[:class_name] = class_name
          t[:public_start] = public_start
          t[:super_classes] = [] 
          t[:fields] = []
          selected << t
          classes << class_name
        elsif a[0] == "TypedefDecl"
          tp = {}
          tp[:typedef_name] = get_name_layer(t) + a[3]
          tp[:source] = self.parse_separated(a[4])
          typedefs << tp
          
        elsif a[0] == "ClassTemplateDecl"
          t[:template_name] = get_name_layer(t) + a.last
          t[:template_args] = []
          t[:public_start] = public_start
          t[:super_classes] = [] 
          t[:fields] = []
          class_templates << t
          
        elsif a[0] == "TemplateTypeParmDecl"
          
          tmpl = self.get_current_template t
          if tmpl && tmpl
            if a.last[-1] != "'"
              tmpl[:template_args] << a.last
            else
              tmpl[:template_args] << a[-2]
            end
          end
        elsif a[0] == "DeprecatedAttr"
          t[:parent][:deprecated] = true
        elsif a[0] == "SentinelAttr"
          t[:parent][:sentinel] = true
        elsif a[0] == "UsingDecl"
          using_method = a.last.split '::'
          t[:parent][:using_method] ||= []
          t[:parent][:using_method] << using_method
        end
        
        true
      end

      #
      a = selected.map{|v| print_tree v}  

      #

      methods = []

      selected.each do |t|

        pbl = t[:public_start]
        t[:children].each do |c|
          a = parse_token c[:line]
          if a[0] == 'AccessSpecDecl'
            pbl = a.last == 'public'
          elsif a[0] == 'CXXMethodDecl'
            #next unless pbl
            method_name = a[3]
            c[:method_name] = method_name
            args = []
            method_ret = self.parse_method_return a[4]
            f = {
              :class_name => t[:class_name],
              :super_classes => t[:super_classes],
              :method_name => method_name,
              :method_ret => method_ret,
              :deprecated => c[:deprecated],
              :sentinel => c[:sentinel],
              :args => args,
              :type => a[5],
              :is_const => (a[4].match(/const'$/) ? true : false),
              :is_final => false,
              :public => pbl,
            }
            methods << f
            c[:method] = f
            c[:children].each do |c|
              a = parse_token c[:line]
              if a[0] == 'ParmVarDecl'
                arg_type = self.parse_separated(a.last)
                if arg_type[:val] == 'cinit'
                  arg_type = self.parse_separated(a[-2])
                end
                args << arg_type
              elsif a[0] == 'FinalAttr'
                f[:is_final] = true
              end
            end
          elsif a[0] == 'CXXConstructorDecl'
            next unless pbl
            method_name = a[3]
            c[:method_name] = method_name
            args = []
            method_ret = self.parse_method_return a[4]
            f = {
              :class_name => t[:class_name],
              :super_classes => t[:super_classes],
              :method_name => method_name,
              :method_ret => method_ret,
              :args => args,
              :type => a[5],
              :is_const => (a[4].match(/const'$/) ? true : false),
              :is_constructor => true,
            }
            methods << f
            c[:method] = f
            c[:children].each do |c|
              a = parse_token c[:line]
              if a[0] == 'ParmVarDecl'
                arg_type = self.parse_separated(a.last)
                if arg_type[:val] == 'cinit'
                  arg_type = self.parse_separated(a[-2])
                end
                args << arg_type
              end
            end
          elsif a[0] == 'FieldDecl'
            next unless pbl
            next if a.length <= 4
            t[:fields] << {
              :field_name => a[3],
              :field_type => self.parse_separated(a[4]),
            }
          end
        end
      end
      
      class_templates.each do |t|
        
        pbl = t[:public_start]
        t[:children].each do |c|
          a = parse_token c[:line]
          
          if a[0] == 'CXXRecordDecl'
          
            c[:children].each do |c|
              a = parse_token c[:line]
              
              if a[0] == 'AccessSpecDecl'
                pbl = a.last == 'public'
              elsif a[0] == 'CXXMethodDecl'
                #next unless pbl
                method_name = a[3]
                c[:method_name] = method_name
                args = []
                method_ret = self.parse_method_return a[4]
                f = {
                  :class_name => t[:class_name],
                  :super_classes => t[:super_classes],
                  :method_name => method_name,
                  :method_ret => method_ret,
                  :deprecated => c[:deprecated],
                  :sentinel => c[:sentinel],
                  :args => args,
                  :type => a[5],
                  :public => pbl,
                  :is_const => (a[4].match(/const'$/) ? true : false),
                }
                #methods << f
                c[:method] = f
                c[:children].each do |c|
                  a = parse_token c[:line]
                  if a[0] == 'ParmVarDecl'
                    arg_type = self.parse_separated(a.last)
                    if arg_type[:val] == 'cinit'
                      arg_type = self.parse_separated(a[-2])
                    end
                    args << arg_type
                  end
                end
              elsif a[0] == 'CXXConstructorDecl'
                next unless pbl
                method_name = a[3]
                c[:method_name] = method_name
                args = []
                method_ret = self.parse_method_return a[4]
                f = {
                  :class_name => t[:class_name],
                  :super_classes => t[:super_classes],
                  :method_name => method_name,
                  :method_ret => method_ret,
                  :args => args,
                  :type => a[5],
                  :is_const => (a[4].match(/const'$/) ? true : false),
                  :is_constructor => true,
                }
                #methods << f
                c[:method] = f
                c[:children].each do |c|
                  a = parse_token c[:line]
                  if a[0] == 'ParmVarDecl'
                    arg_type = self.parse_separated(a.last)
                    if arg_type[:val] == 'cinit'
                      arg_type = self.parse_separated(a[-2])
                    end
                    args << arg_type
                  end
                end
              elsif a[0] == 'FieldDecl'
              
                next unless pbl
                next if a.length <= 4
                t[:fields] << {
                  :field_name => a[3],
                  :field_type => self.parse_separated(a[4]),
                }
              end
              
            end
          end
          
        end
      end

      td = TreeData.new
      
      td.tree = tree
      td.classes = selected
      td.typedefs = typedefs
      td.methods = methods
      td.class_templates = class_templates
      
      td.gen_typedef_table
      
      td
    end
    
  
  end

end

