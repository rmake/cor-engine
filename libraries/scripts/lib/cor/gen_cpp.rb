require 'optparse'
require 'cor/utility'

module Cor
  class GenCpp

    def self.gen(args)

      #
      opt = OptionParser.new

      namespace = nil

      opt.on "--namespace=VAL" do |v|
        puts v
        namespace = v
      end

      opt.on "--gen-cpp=VAL" do |v|
      end

      opt.on "--gen-cpp-tmpl=VAL" do |v|
      end

      opt.parse args

      #
      opt = OptionParser.new

      opt.on "--namespace=VAL" do |v|
      end

      opt.on "--gen-cpp=VAL" do |v|
        puts v
        self.gen_cpp v, namespace
      end

      opt.on "--gen-cpp-tmpl=VAL" do |v|
        puts v
        self.gen_cpp_template v, namespace
      end

      opt.parse args


    end

    def self.add_namespace(namespace, code)
      splited_namespace = namespace.split "::"

      splited_namespace.reverse.each do |name|
        code = <<EOS
namespace #{name}
{
#{code.split("\n").map{|v|  "    #{v}\n"}.join}
}
EOS
      end
      code
    end

    def self.gen_cpp(path, namespace)
      base_name = path.split('/').last
      head_name = "_#{Utility.underscore(path).upcase.gsub("/", "_").gsub(".", "_")}_"

      puts "base_name #{base_name}"

      header_def = <<EOS
struct #{Utility.camelize(base_name)}Itnl;

class #{Utility.camelize(base_name)}
{
    std::unique_ptr<#{Utility.camelize(base_name)}Itnl> itnl;
public:

    #{Utility.camelize(base_name)}();
    virtual ~#{Utility.camelize(base_name)}();
};
EOS

      header = <<EOS
#ifndef #{head_name}
#define #{head_name}

#include "cor_type/sources/basic_types.h"

#{self.add_namespace namespace, header_def}

#endif
EOS

      puts "header"
      puts "#{header}"

      source_def = <<EOS
struct #{Utility.camelize(base_name)}Itnl
{

};

#{Utility.camelize(base_name)}::#{Utility.camelize(base_name)}() : itnl(new #{Utility.camelize(base_name)}Itnl())
{

}

#{Utility.camelize(base_name)}::~#{Utility.camelize(base_name)}()
{

}
EOS

      source = <<EOS
#include "#{base_name}.h"

#{self.add_namespace namespace, source_def}
EOS

      puts "source"
      puts "#{source}"

      Utility.write_file "#{path}.h", header
      Utility.write_file "#{path}.cpp", source

    end

    def self.gen_cpp_template(path, namespace)



      base_name = path.split('/').last
      tmpl_head_name = "_#{Utility.underscore(path + "_tmpl").upcase.gsub("/", "_").gsub(".", "_")}_"
      tmpl_impl_head_name = "_#{Utility.underscore(path + "_tmpl_impl").upcase.gsub("/", "_").gsub(".", "_")}_"
      head_name = "_#{Utility.underscore(path).upcase.gsub("/", "_").gsub(".", "_")}_"

      puts "base_name #{base_name}"

      tmpl_header_def = <<EOS

class #{Utility.camelize(base_name)}Tmpl
{
public:
};
EOS

      tmpl_header = <<EOS
#ifndef #{tmpl_head_name}
#define #{tmpl_head_name}

#include "cor_type/sources/basic_types.h"

#{self.add_namespace namespace, tmpl_header_def}

#endif
EOS

      puts "tmpl_header"
      puts "#{tmpl_header}"

      tmpl_source = <<EOS
#ifndef #{tmpl_impl_head_name}
#define #{tmpl_impl_head_name}
#include "#{base_name}_tmpl.h"

#{self.add_namespace namespace, ""}
#endif
EOS

      puts "tmpl_source"
      puts "#{tmpl_source}"


      header_def = <<EOS
struct #{Utility.camelize(base_name)}Itnl;

class #{Utility.camelize(base_name)}
{
    std::unique_ptr<#{Utility.camelize(base_name)}Itnl> itnl;
public:

    #{Utility.camelize(base_name)}();
    virtual ~#{Utility.camelize(base_name)}();
};
EOS

      header = <<EOS
#ifndef #{head_name}
#define #{head_name}

#include "#{base_name}_tmpl.h"

#{self.add_namespace namespace, header_def}

#endif
EOS

      puts "header"
      puts "#{header}"

      source_def = <<EOS
struct #{Utility.camelize(base_name)}Itnl
{

};

#{Utility.camelize(base_name)}::#{Utility.camelize(base_name)}() : itnl(new #{Utility.camelize(base_name)}Itnl())
{

}

#{Utility.camelize(base_name)}::~#{Utility.camelize(base_name)}()
{

}
EOS

      source = <<EOS
#include "#{base_name}_tmpl_impl.h"
#include "#{base_name}.h"

#{self.add_namespace namespace, source_def}
EOS

      puts "source"
      puts "#{source}"

      Utility.write_file "#{path}_tmpl.h", tmpl_header
      Utility.write_file "#{path}_tmpl_impl.h", tmpl_source
      Utility.write_file "#{path}.h", header
      Utility.write_file "#{path}.cpp", source
    end

  end
end
