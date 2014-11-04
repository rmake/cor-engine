
# ruby create_source.rb
$LOAD_PATH.push('.')

require 'fileutils'

list = [
  {
    :project => "cor_type",
    :path => "math/vector3",
    :namespace => ["cor", "type"],
    :action => [:sync, :force_create, :delete][0],
    :no_template => false,
  },
 # {
 #   :project => "cor_type",
 #   :path => "math/operator",
 #   :namespace => ["cor", "type"],
 #   :action => [:sync, :force_create, :delete][0],
 # },
  {
    :project => "cor_system",
    :path => "logger",
    :namespace => ["cor", "system"],
    :action => [:sync, :force_create, :delete][0],
  },
]

load "file_info/cor.rb"
list += cor_file_list

class String
  def underscore
    self.gsub(/::/, '/').
    gsub(/([A-Z]+)([A-Z][a-z])/,'\1_\2').
    gsub(/([a-z\d])([A-Z])/,'\1_\2').
    tr("-", "_").
    downcase
  end
  
  def camelize
    self.split('_').map{|s| s.capitalize}.join('')
  end
end

list.each do |v|
  print "#{v}\n"
  if [:sync, :force_create].include? v[:action]
    base = "../#{v[:project]}/sources/#{v[:path]}"
    th = "#{base}_tmpl.h"
    ti = "#{base}_tmpl_impl.h"
    
    ih = "#{base}.h"
    icpp = "#{base}.cpp"
    
    th_code = ""
    
    base_name = v[:path].split('/').last
    
    FileUtils.mkpath(File.dirname(base))
  
    if v[:action] == :force_create || (!File.exist?(th) &&  !File.exist?(ih))
      
      #
      head_name = "_#{th.underscore.upcase.gsub("/", "_").gsub(".", "_")}_"
      
      th_code = <<EOS   
#ifndef #{head_name}
#define #{head_name}

#include "cor_type/sources/basic_types.h"

namespace #{v[:namespace][0]}
{
    namespace #{v[:namespace][1]}
    {
        class #{base_name.camelize}Tmpl
        {
        public:
        };
    }
}

#endif
EOS
      
      unless v[:no_template]
        File.open th, "wb" do |f|
          f.write th_code
        end
      end
      
      #
      head_name = "_#{ti.underscore.upcase.gsub("/", "_").gsub(".", "_")}_"
      
      ti_code = <<EOS
#ifndef #{head_name}
#define #{head_name}

#include "#{base_name}_tmpl.h"

namespace #{v[:namespace][0]}
{
    namespace #{v[:namespace][1]}
    {
        
    }
}

#endif
EOS
      
      unless v[:no_template]
        File.open ti, "wb" do |f|
          f.write ti_code
        end
      end
      
      #
      head_name = "_#{ih.underscore.upcase.gsub("/", "_").gsub(".", "_")}_"
      
      if v[:no_template]
        inc_code = <<EOS
#include "cor_type/sources/basic_types.h"
EOS
      else
        inc_code = <<EOS
#include "#{base_name}_tmpl.h"
EOS
      end
      
      ih_code = <<EOS
#ifndef #{head_name}
#define #{head_name}

#{inc_code}

namespace #{v[:namespace][0]}
{
    namespace #{v[:namespace][1]}
    {
        struct #{base_name.camelize}Itnl;
    
        class #{base_name.camelize}
        {
            std::unique_ptr<#{base_name.camelize}Itnl> itnl;
        
        public:
        
            #{base_name.camelize}();
            virtual ~#{base_name.camelize}();
        };
    }
}

#endif
EOS
      
      File.open ih, "wb" do |f|
        f.write ih_code
      end
      
      #
      head_name = "_#{icpp.underscore.upcase.gsub("/", "_").gsub(".", "_")}_"
      
      if v[:no_template]
        inc_code = <<EOS
EOS
      else
        inc_code = <<EOS
#include "#{base_name}_tmpl_impl.h"
EOS
      end
      
      icpp_code = <<EOS
#{inc_code}
#include "#{base_name}.h"

namespace #{v[:namespace][0]}
{
    namespace #{v[:namespace][1]}
    {
        struct #{base_name.camelize}Itnl
        {
            
        };
        
        #{base_name.camelize}::#{base_name.camelize}() : itnl(new #{base_name.camelize}Itnl())
        {
            
        }
        
        #{base_name.camelize}::~#{base_name.camelize}()
        {
            
        }
    }
}
EOS
      
      File.open icpp, "wb" do |f|
        f.write icpp_code
      end
      
      
    end
    
    
  end

end

system("ruby filelist.rb")
