
$LOAD_PATH.push('.')
$LOAD_PATH.push('lib')

require 'cor/utility'

def package_gen base_path, name

  conf_rb = <<EOS
CorProject.import_cpp = true
CorProject.import_cpp_entry = "#{name}_import_initialize"
CorProject.add_include "../../../cor-engine/projects/common_resources"
EOS

  binding_conf = <<EOS
MrubyBindingGen.set_templated_binding __FILE__, :name => "#{name}"

MrubyBindingGen.add_taget_classes([
    \#{
    \#  :name => "cor::type::Vector3D",
    \#  :value => :value,
    \#  :create_function => "create",
    \#  :operator => [
    \#    { :name => "*", :args => [
    \#      {:ret => "cor::type::Vector3D", :arg => ["double"]},
    \#    ]},
    \#},
])
EOS

  start_rb = <<EOS
include Cor
Project.load_eval "lib/cor_all.rb"
EOS

  Cor.u.write_file "#{base_path}/conf.rb", conf_rb
  Cor.u.write_file "#{base_path}/binding_conf.rb", binding_conf
  Cor.u.write_file "#{base_path}/resouces/start.rb", start_rb

  import_setting_cpp = <<EOS
#include "import/external_code_importer.h"
#include "./generated_binding.h"

namespace cor
{
    namespace project_structure
    {
        void #{name}_import_initialize(mruby_interface::MrubyState& mrb)
        {
            #{name}_cpp_gen_binding::GeneratedBinding::bind(mrb);
        }
    }
}
EOS

  FileUtils.mkpath("#{base_path}/resouces/#{name}")
  FileUtils.mkpath("#{base_path}/resouces/licenses")
  FileUtils.mkpath("#{base_path}/cpp/#{name}/binding_interface")
  FileUtils.mkpath("#{base_path}/cpp/#{name}/src")

end

package_gen "tmp/#{ARGV[0]}", ARGV[0]

package_gen "tmp/#{ARGV[0]}/test", "#{ARGV[0]}_test"


