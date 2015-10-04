
require 'fileutils'

project_structure_path = File.expand_path("../../libraries/cor_project_structure", File.dirname(File.absolute_path(__FILE__)))

FileUtils.chdir "#{File.dirname __FILE__}"
here = Dir::getwd

$LOAD_PATH.push(".")
$LOAD_PATH.push("../../libraries/scripts/lib")

require 'cor/utility'
require 'cor/gen_project'
require 'json'
require 'pathname'

key = "ak8tm.mj"
begin

class CorProject

  def self.source_path=(v)
    @source_path = v
  end

  def self.source_path
    @source_path
  end

  def self.includes=(a)
    @includes = a
  end

  def self.includes
    @includes ||= []
    @includes
  end

  def self.add_include(v)
    self.includes << "#{self.source_path}/#{v}"
  end

  def self.import_cpp=(v)
    @import_cpp = v
  end

  def self.import_cpp
    @import_cpp
  end

  def self.crypt=(v)
    @crypt = v
  end

  def self.crypt
    @crypt
  end

  def self.administrator=(v)
    @administrator = v
  end

  def self.administrator
    @administrator
  end

  def self.set_import_cpp_filter(&block)
    @import_cpp_filter = block
  end

  def self.import_cpp_filter
    @import_cpp_filter
  end

  def self.binding_confs=(a)
    @binding_confs = a
  end

  def self.binding_confs
    @binding_confs
  end

  def self.current_project_path=(v)
    @current_project_path = v
  end

  def self.current_project_path
    @current_project_path
  end

end


source_path = "../small_experimental"
if File.exist? "project_source_path_local_conf.rb"
  load "project_source_path_local_conf.rb"
  source_path = SOURCE_PATH
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

ma.each do |v|
  if v == "--resource-only"
    resource_only = true
  elsif v == "--win32-copy"
    win32_copy = true
  end
end

if va[0]
  source_path = va[0]
end

CorProject.source_path = source_path

destination_resource_root_path = "../cor_lib_test_main/Resources"
destination_resource_path = "#{destination_resource_root_path}/project_resource"
source_conf_path = "#{source_path}/conf.rb"
source_resource_path = "#{source_path}/resources"
win32_copy_destination = File.expand_path("../../proj.win32/Debug.win32/project_resource", destination_resource_path)
mruby_binging_generator_script_path = "../../libraries/scripts"

FileUtils.mkpath destination_resource_path

list = []

if File.exists? source_conf_path
  puts "load source conf #{source_conf_path}"
  load source_conf_path
end

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

if Dir.exists? source_resource_path
  list += Cor.u.file_list(source_resource_path).map{|fn|
    {
      :n => fn.gsub("#{source_resource_path}/", ""),
      :fn => fn,
    }
  }
end
d_list = Cor.u.file_list destination_resource_path do |fn|
  !fn.include? ".gitignore"
end

d_table = {}
d_list.each do |fn|
  d_table[fn] = fn
end

past_copy = "past_copy.log"
past_copy_data = {
  "current_project" => source_path,
  "past_crypt" => false,
  "past_win32_copy" => false,
  "file_table" => {},
  "past_cpps" => {},
}
past_copy_table = past_copy_data["file_table"]
force_update = false
if File.exist? past_copy
  past_copy_json = Cor.u.file_read past_copy
  past_copy_data = JSON.parse past_copy_json
  past_copy_table = past_copy_data["file_table"]
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


binding_gen = Proc.new do |path|
  CorProject.current_project_path = path
  binding_conf = "#{path}/binding_conf.rb"
  if File.exists?(binding_conf)
    #FileUtils.chdir File.dirname(binding_conf)

    past_cpps = past_copy_data["past_cpps"]
    cpps = Cor.u.file_list("#{path}/cpp")

    is_run_gen = false

    cpps.each do |cpp_name|
      next unless cpp_name.match(/\.h$/)
      if !File.exist?(cpp_name) || past_cpps[cpp_name] != File.mtime(cpp_name).to_s || force_update
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
    system(cmd)

    cpps.each do |cpp_name|
      next unless cpp_name.match(/\.h$/)
      past_cpps[cpp_name] = File.mtime(cpp_name).to_s
    end

    #FileUtils.chdir here
  end
end

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

import_cpp_props_file = "#{project_structure_path}/proj.vc/cor_project_structure/cor_project_structure_local_conf.props"
import_cpp_local_conf_mk = "#{project_structure_path}/proj.common/cor_project_structure_local_conf.mk"
import_cpp_local_conf_txt = "#{project_structure_path}/proj.common/cor_project_structure_local_conf.txt"
import_cpp_file = "#{project_structure_path}/sources/import/external_code_import_local_conf.h"
import_cpp_importer_file = "#{project_structure_path}/sources/import/external_code_importer.cpp"
import_cpp_copy_dest = "#{project_structure_path}/sources/import/cpp"
FileUtils.rmtree import_cpp_copy_dest

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
      import_cpp_include_to = Pathname(File.absolute_path(v[:fn]))
      r = import_cpp_include_to.relative_path_from(import_cpp_include_from)
      r.to_s
    end

    import_cpp_list = import_cpp_includes.select do |v| v.match(/\.cpp$/) end
    import_h_list = import_cpp_includes.select do |v| !v.match(/\.cpp$/) end

    #import_cpp_includes = import_cpp_includes.map do |v|
    #  "#include \"#{v}\""
    #end
    #import_cpp_includes = import_cpp_includes.join "\n"

    import_cpp_code = <<EOS
#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace project_structure
    {
        static const char* imported_name = "copy source is #{source_path}";
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

    FileUtils.chdir project_structure_path

    proj_file_list = Cor.u.file_list("../cor_project_structure/sources").select{ |v|
      v.match(/(\.h$)|(\.cpp$)/)
    }
    GenProject.vc_project_filter "cor_project_structure", "../cor_project_structure",
      "../cor_project_structure/proj.vc", proj_file_list + import_cpp_includes, true

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
    system(cmd)
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
  puts "e #{e}"
  puts "#{e.backtrace}"

  sleep 100

  raise e
end
