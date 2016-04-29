
require 'fileutils'


FileUtils.chdir "#{File.dirname __FILE__}"
here = Dir::getwd

$LOAD_PATH.push(".")
$LOAD_PATH.push("../../libraries/scripts/lib")

require 'cor/utility'
require 'cor/gen_project'
require 'cor/cor_project'
require 'json'
require 'pathname'

key = "ak8tm.mj"
begin

CorProject = Cor::CorProject

source_path = "../small_experimental"
if File.exist? "project_source_path_local_conf.rb"
  load "project_source_path_local_conf.rb"
  source_path = SOURCE_PATH
end

def call_system(cmd)
  unless system(cmd)
    raise "call_system '#{cmd}' failed"
  end
end

ma = []
va = []

ARGV.each do |v|
  if v[0] == "-"
    ma << v
  else
    va << v
  end
end

resource_only = false
win32_copy = false
ignore_local_conf = false
force_update = false

ma.each do |v|
  if v == "--resource-only"
    resource_only = true
  elsif v == "--win32-copy"
    win32_copy = true
  elsif v == "--ignore-local-conf"
    ignore_local_conf = true
  elsif v == "-f"
    force_update = true
  end
end

past_copy = "past_copy.log"
if File.exist?(past_copy) && ignore_local_conf
  past_copy_json = Cor.u.file_read past_copy
  past_copy_data = JSON.parse past_copy_json
  source_path = past_copy_data["current_project"] || source_path
end
puts "source_path #{source_path}"
past_copy_data = {
  "current_project" => source_path,
  "past_crypt" => false,
  "past_win32_copy" => false,
  "file_table" => {},
  "past_cpps" => {},
}
past_copy_table = past_copy_data["file_table"]
if File.exist? past_copy
  past_copy_json = Cor.u.file_read past_copy
  past_copy_data = JSON.parse past_copy_json
  past_copy_table = past_copy_data["file_table"]
end

if va[0]
  source_path = va[0]
end

CorProject.source_path = source_path

source_absolute_path = Pathname(File.expand_path(source_path))
engine_base_path = Pathname(File.expand_path("../../"))
relative_engine_path = engine_base_path.relative_path_from source_absolute_path
CorProject.engine_path = relative_engine_path

puts "CorProject.engine_path #{CorProject.engine_path}"

list = []
import_cpp_infos = []

source_conf_path = "#{source_path}/conf.rb"

if File.exists? source_conf_path

  puts "load source conf #{source_conf_path}"
  load source_conf_path

  CorProject.current_target_project = CorProject.target_project

  import_cpp_infos << {
    "target_project" => CorProject.target_project,
    "entry" => CorProject.import_cpp_entry,
  }

  project_includes = CorProject.includes
  project_include_table = {}
  ct = 0
  while ct < project_includes.length
    project_include = project_includes[ct]
    next if project_include_table[project_include]
    if File.exists? "#{project_include}/conf.rb"
      CorProject.source_path = project_include
      source_absolute_path = Pathname(File.expand_path(project_include))
      relative_engine_path = engine_base_path.relative_path_from source_absolute_path
      CorProject.engine_path = relative_engine_path
      load "#{project_include}/conf.rb"

      import_cpp_infos << {
        "target_project" => CorProject.target_project,
        "entry" => CorProject.import_cpp_entry,
      }
    end
    project_include_table[project_include] = true
    ct += 1
  end

  puts "project_includes #{project_includes}"

  CorProject.source_path = source_path
  load source_conf_path

end

target_project = CorProject.target_project

#
# "cor_cpp_lib"
# "cor_mruby_lib"
# "cor_test"
# "cor_cpp_console"
# "cor_mruby_console"
# "cor_cocos2dx"

destination_resource_root_path = "../cor_lib_test_main/Resources"

case target_project
when "cor_test"
  destination_resource_root_path = "../../tests/unit/resources"
when "cor_cpp_console"
  destination_resource_root_path = "../cor_console_app/resources"
when "cor_mruby_console"
  destination_resource_root_path = "../cor_mruby_console_app/resources"
when "cor_cocos2dx"
  destination_resource_root_path = "../cor_lib_test_main/Resources"
end
destination_resource_path = "#{destination_resource_root_path}/project_resource"
source_resource_path = "#{source_path}/resources"
win32_copy_destination = File.expand_path("../../proj.win32/Debug.win32/project_resource", destination_resource_path)
mruby_binging_generator_script_path = "../../libraries/scripts"

FileUtils.mkpath destination_resource_path

CorProject.includes.uniq!{|v| File::expand_path(v)}
puts "__CorProject.includes #{CorProject.includes}"

FileUtils.rm Dir.glob("#{destination_resource_root_path}/*.log")

cpp_list = []
import_cpp_props_includes = []

find_path = "../../licenses"
list += Cor.u.file_list(find_path).map{|fn|
  {
    :n => fn.gsub("#{find_path}", "licenses"),
    :fn => fn,
  }
}

CorProject.includes.each do |inc_path|
  find_path = "#{inc_path}/resources/"
  if Dir.exists? find_path
    list += Cor.u.file_list("#{inc_path}/resources").map{|fn|
      {
        :n => fn.gsub("#{find_path}", ""),
        :fn => fn,
      }
    }
  end
end

puts "source_resource_path #{source_resource_path}"

if Dir.exists? source_resource_path
  list += Cor.u.file_list(source_resource_path).map{|fn|
    {
      :n => fn.gsub("#{source_resource_path}/", ""),
      :fn => fn,
    }
  }
end
puts "list #{list.select{|v| v[:n].match(/start\.rb/)} }"

d_list = Cor.u.file_list destination_resource_path do |fn|
  !fn.include? ".gitignore"
end

d_table = {}
d_list.each do |fn|
  d_table[fn] = fn
end


if source_path != past_copy_data["current_project"]
  force_update = true
end

if win32_copy != past_copy_data["past_win32_copy"]
  force_update = true
end

if CorProject::crypt != past_copy_data["past_crypt"]
  force_update = true
end
past_copy_data["past_crypt"] = CorProject::crypt
past_copy_data["past_win32_copy"] = win32_copy
past_copy_data["current_project"] = source_path
past_copy_data["past_cpps"] ||= {}

if force_update
  past_copy_data["file_table"] = {}
  past_copy_table = past_copy_data["file_table"]
end


binding_gen = Proc.new do |path|
  CorProject.current_project_path = path
  binding_conf = "#{path}/binding_conf.rb"
  puts "binding_conf #{binding_conf}"
  if File.exists?(binding_conf)
    #FileUtils.chdir File.dirname(binding_conf)

    past_cpps = past_copy_data["past_cpps"]
    cpps = Cor.u.file_list("#{path}/cpp")

    is_run_gen = false

    cpps.each do |cpp_name|
      next unless cpp_name.match(/\.h$/)
      if !File.exist?(cpp_name) || past_cpps[cpp_name].to_s != File.mtime(cpp_name).to_s || force_update
        is_run_gen = true
      end
      past_cpps[cpp_name] = File.mtime(cpp_name)
    end

    next unless is_run_gen

    base_path = Pathname(File.expand_path(mruby_binging_generator_script_path))
    conf_path = Pathname(File.expand_path(path))
    conf_path_for_gen = conf_path.relative_path_from base_path

    puts "conf_path_for_gen #{conf_path_for_gen}"

    cmd = "ruby #{mruby_binging_generator_script_path}/generate_mruby_interface.rb #{conf_path_for_gen.to_s}/binding_conf.rb"
    puts "cmd #{cmd}"
    call_system(cmd)

    cpps.each do |cpp_name|
      next unless cpp_name.match(/\.h$/)
      past_cpps[cpp_name] = File.mtime(cpp_name).to_s
    end

    #FileUtils.chdir here
  end
end

puts "CorProject.includes #{CorProject.includes}"

unless resource_only

  destination_projects = "../cor_lib_test_main/"

  source_projects = "default_copy_source/project_file"
  puts "source_projects #{source_projects}"
  if Dir.exists? "default_copy_source/project_file"
    puts "project_file copy #{source_projects} -> #{destination_projects}"
    FileUtils.cp_r Dir.glob("#{source_projects}/*"), destination_projects
  end

  CorProject.includes.each do |inc|
    source_projects = "#{inc}/project_file"
    puts "source_projects #{source_projects}"

    if Dir.exists? "#{inc}/project_file"
      puts "project_file copy #{source_projects} -> #{destination_projects}"
      FileUtils.cp_r Dir.glob("#{source_projects}/*"), destination_projects
    end

    if CorProject.import_cpp && Dir.exists?("#{inc}/cpp")
      puts "pre_gen #{inc}"

      binding_gen.call inc

      import_cpp_props_includes << "#{inc}/cpp"
      tmpcpp_list = Cor.u.file_list("#{inc}/cpp") do |v|
        next CorProject.import_cpp_filter.call v if CorProject.import_cpp_filter
        true
      end
      tmpcpp_list = tmpcpp_list.map do |v|
        {:fn => v, :base => "#{inc}/cpp"}
      end
      cpp_list += tmpcpp_list
    end
  end

  source_projects = "#{source_path}/project_file"
  puts "source_projects #{source_projects}"

  if Dir.exists? "#{source_path}/project_file"
    puts "project_file copy #{source_projects} -> #{destination_projects}"
    FileUtils.cp_r Dir.glob("#{source_projects}/*"), destination_projects
  end

  if CorProject.import_cpp && Dir.exists?("#{source_path}/cpp")

    binding_gen.call source_path

    import_cpp_props_includes << "#{source_path}/cpp"

    tmpcpp_list = Cor.u.file_list("#{source_path}/cpp") do |v|
      next CorProject.import_cpp_filter.call v if CorProject.import_cpp_filter
      true
    end
    tmpcpp_list = tmpcpp_list.map do |v|
      {:fn => v, :base => "#{source_path}/cpp"}
    end
    cpp_list += tmpcpp_list

  end
end

puts "project copy"

if win32_copy && force_update
  FileUtils.rm_r win32_copy_destination
end

def resource_file_copy key, src, dst
  ext = File.extname(src)

  if CorProject::crypt && ([".rb", ".png"].index ext)
    ley_len = key.length
    File.open src, "rb" do |f|
      d = f.read
      1024.times do |i|
        if d.getbyte(i)
          d.setbyte i, d.getbyte(i) ^ key.getbyte(i % ley_len)
        end
      end
      File.open dst, "wb" do |f|
        f.write d
      end
    end
  else
    FileUtils.copy src, dst
  end
end

list.each do |fn|
  dfn = "#{destination_resource_path}/#{fn[:n]}"

  if !File.exist?(dfn) || past_copy_table[fn[:fn]] != File.mtime(fn[:fn]).to_s  || File.size(fn[:fn]) != File.size(dfn) || force_update
    puts "do copy #{fn} -> #{dfn}"
    FileUtils.mkpath File.dirname(dfn)
    resource_file_copy key, fn[:fn], dfn

    if win32_copy
      dfn2 = "#{win32_copy_destination}/#{fn[:n]}"
      FileUtils.mkpath File.dirname(dfn2)
      resource_file_copy key, fn[:fn], dfn2
    end
  end

  past_copy_table[fn[:fn]] = File.mtime(fn[:fn]).to_s

  d_table.delete dfn
end

target_project_name = "project_structure"
target_project_path = File.expand_path("../../libraries/cor_project_structure", File.dirname(File.absolute_path(__FILE__)))

#
# cpp
# mruby

def get_taget_interface_type(target_project)
  target_interface_type = "mruby"
  case target_project
  when "cor_test"
    target_interface_type = "mruby"
  when "cor_cpp_console"
    target_interface_type = "cpp"
  when "cor_mruby_console"
    target_interface_type = "mruby"
  when "cor_cocos2dx"
    target_interface_type = "mruby"
  end
  target_interface_type
end

case target_project
when "cor_test"
  target_project_name = "mruby_interface"
  target_project_path = File.expand_path("../../libraries/cor_mruby_import", File.dirname(File.absolute_path(__FILE__)))
when "cor_cpp_console"
  target_project_name = "cpp_interface"
  target_project_path = File.expand_path("../../libraries/cor_cpp_import", File.dirname(File.absolute_path(__FILE__)))
when "cor_mruby_console"
  target_project_name = "mruby_interface"
  target_project_path = File.expand_path("../../libraries/cor_mruby_import", File.dirname(File.absolute_path(__FILE__)))
when "cor_cocos2dx"
  target_project_name = "project_structure"
  target_project_path = File.expand_path("../../libraries/cor_project_structure", File.dirname(File.absolute_path(__FILE__)))
end

FileUtils.mkdir_p "#{target_project_path}/proj.common/"

import_cpp_props_file = "#{target_project_path}/proj.vc/cor_#{target_project_name}/cor_#{target_project_name}_local_conf.props"
import_cpp_local_conf_mk = "#{target_project_path}/proj.common/cor_#{target_project_name}_local_conf.mk"
import_cpp_local_cmake_conf_mk = "#{target_project_path}/proj.common/cor_#{target_project_name}_cmake_local_conf.txt"
import_cpp_local_conf_txt = "#{target_project_path}/proj.common/cor_#{target_project_name}_local_conf.txt"
import_cpp_file = "#{target_project_path}/sources/import/external_code_import_local_conf.h"
import_cpp_importer_file = "#{target_project_path}/sources/import/external_code_importer.cpp"
import_cpp_copy_dest = "#{target_project_path}/sources/import/cpp"
FileUtils.rmtree import_cpp_copy_dest

puts "import_cpp_file #{import_cpp_file}"

unless resource_only

  cpp_list_changed = false
  if File.exists? import_cpp_local_conf_txt
    old_import_cpp_local_conf_txt_data = Cor.u.file_read import_cpp_local_conf_txt
  else
    old_import_cpp_local_conf_txt_data = nil
    cpp_list_changed = true
  end

  if CorProject.import_cpp

    import_cpp_include_from = Pathname(File.dirname(import_cpp_file))
    import_cpp_includes = cpp_list.map do |v|
      puts "v #{v}"
      import_cpp_include_to = Pathname(File.absolute_path(v[:fn]))
      puts "import_cpp_include_to #{import_cpp_include_to.to_s}"
      puts "import_cpp_include_from #{import_cpp_include_from.to_s}"
      r = import_cpp_include_to.relative_path_from(import_cpp_include_from)
      r.to_s
    end

    import_cpp_list = import_cpp_includes.select do |v| v.match(/\.cpp$/) end
    import_h_list = import_cpp_includes.select do |v| v.match(/\.h$/) end

    import_cpp_list = import_cpp_list.uniq
    import_h_list = import_h_list.uniq

    #import_cpp_includes = import_cpp_includes.map do |v|
    #  "#include \"#{v}\""
    #end
    #import_cpp_includes = import_cpp_includes.join "\n"

    puts "import_cpp_infos #{import_cpp_infos}"

    case get_taget_interface_type(target_project)
    when "cpp"
      cpp_initialize_argument = ""
    when "mruby"
      cpp_initialize_argument = "mruby_interface::MrubyState& mrb"
    end

    prototype_defs = import_cpp_infos.map{|v|
      next nil unless v["entry"]
      case get_taget_interface_type(v["target_project"])
      when "cpp"
        arg = ""
      when "mruby"
        arg = "mruby_interface::MrubyState& mrb"
      end
      "        void #{v["entry"]}(#{arg});\n" }.compact.join
    call_entry_functions = import_cpp_infos.map{|v|
      next nil unless v["entry"]
      case get_taget_interface_type(v["target_project"])
      when "cpp"
        arg = ""
      when "mruby"
        arg = "mrb"
      end
      "            external_initializer::#{v["entry"]}(#{arg});\n" }.compact.join

    import_cpp_code = <<EOS
#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace external_initializer
    {
#{prototype_defs}
    }
}

namespace cor
{
    namespace #{target_project_name}
    {
        static const char* imported_name = "copy source is #{source_path}";

        void ExternalCodeImporter::initialize(#{cpp_initialize_argument})
        {
#{call_entry_functions}
        }
    }
}

//#{import_cpp_includes}

EOS

    import_h_list_xml = import_h_list.map do |v|
      <<EOS
        <ClInclude Include='#{v}'/>
EOS
    end.join

    import_cpp_list_xml = import_cpp_list.map do |v|
      <<EOS
        <ClCompile Include='#{v}'/>
EOS
    end.join

    imporer_txt = Cor.u.file_read import_cpp_importer_file
    Cor.u.file_write import_cpp_importer_file, imporer_txt

    Cor.u.file_write import_cpp_file, import_cpp_code

    Cor.u.file_write import_cpp_props_file, <<EOS
<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup>
    <ClCompile>
      <AdditionalIncludeDirectories>../../sources;#{import_cpp_props_includes.map{|v| "../../#{v}"}.join(';')}</AdditionalIncludeDirectories>
    </ClCompile>
  </ItemDefinitionGroup>
  <ItemGroup />
  <ItemGroup>
    #{import_h_list_xml}
  </ItemGroup>
  <ItemGroup>
    #{import_cpp_list_xml}
  </ItemGroup>
</Project>
EOS

    Cor.u.file_write import_cpp_local_conf_mk, <<EOS
PRJINCS += ../sources #{import_cpp_props_includes.map{|v| "../#{v}"}.join(' ')}
PRJSRCS += #{import_cpp_list.map{|v| "#{v.gsub(/^..\//, "")}"}.join(' ')}
EOS

    Cor.u.file_write import_cpp_local_cmake_conf_mk, <<EOS
#{import_cpp_props_includes.map{|v| "include_directories(../#{v})"}.join("\n")}
set(cor_#{target_project_name}_sources
#{import_cpp_list.map{|v| "  #{v.gsub(/^..\//, "")}"}.join("\n")})
EOS

    FileUtils.chdir target_project_path

    proj_file_list = Cor.u.file_list("../cor_project_structure/sources").select{ |v|
      v.match(/(\.h$)|(\.cpp$)/)
    }
    GenProject.vc_project_filter "cor_#{target_project_name}", "../cor_#{target_project_name}",
      "../cor_#{target_project_name}/proj.vc", proj_file_list + import_cpp_includes, true

    new_import_cpp_local_conf_txt_data = import_cpp_includes.map{|v| v.gsub(/^\.\.\//, "")}.join(";")
    Cor.u.file_write import_cpp_local_conf_txt, import_cpp_includes.map{|v| v.gsub(/^\.\.\//, "")}.join(";")

    FileUtils.chdir here

  else
    if File.exist? import_cpp_file
      FileUtils.remove import_cpp_file
    end

    Cor.u.file_write import_cpp_props_file, <<EOS
<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
</Project>
EOS

    Cor.u.file_write import_cpp_local_conf_mk, <<EOS
PRJINCS +=
PRJSRCS +=
EOS

    FileUtils.rm_f import_cpp_local_cmake_conf_mk

    new_import_cpp_local_conf_txt_data = ""
    Cor.u.file_write import_cpp_local_conf_txt, new_import_cpp_local_conf_txt_data

  end

  if old_import_cpp_local_conf_txt_data != new_import_cpp_local_conf_txt_data
    cpp_list_changed = true
  end

  if cpp_list_changed || force_update
    Dir.chdir mruby_binging_generator_script_path
    cmd = "ruby filelist.rb"
    puts "cmd #{cmd}"
    call_system(cmd)
    Dir.chdir here
  end

end


past_copy_json = JSON.pretty_generate past_copy_data
Cor.u.file_write past_copy, past_copy_json

sleep 1

d_table.keys.each do |fn|
  FileUtils.remove fn
end

date_str = Time.now.strftime("%Y-%m-%d %H:%M:%S")
File.open "#{destination_resource_path}/copy_date.txt", "w" do |f|
  f.write date_str
end

if win32_copy
  File.open "#{win32_copy_destination}/copy_date.txt", "w" do |f|
    f.write date_str
  end
end

crypted_str = CorProject::crypt ? "1" : "0"

File.open "#{destination_resource_path}/crypted.txt", "w" do |f|
  f.write crypted_str
end

if win32_copy
  File.open "#{win32_copy_destination}/crypted.txt", "w" do |f|
    f.write crypted_str
  end
end

administrator_str = CorProject::administrator ? "1" : "0"

File.open "#{destination_resource_path}/administrator.txt", "w" do |f|
  f.write administrator_str
end

if win32_copy
  File.open "#{win32_copy_destination}/administrator.txt", "w" do |f|
    f.write administrator_str
  end
end

resource_file_copy key, "../../LICENSE", "#{destination_resource_path}/licenses/LICENSE"

sleep 1

dir_list = Cor.u.dir_list destination_resource_path
dir_list.reverse.each do |d|
  fl = Cor.u.file_list d
  if fl.empty?
    FileUtils.rmdir d
  end

end

rescue => e
  unless resource_only
    raise e
  else
    puts "e #{e}"
    puts "#{e.backtrace}"

    STDOUT.flush

    sleep 100

    raise e
  end
end
