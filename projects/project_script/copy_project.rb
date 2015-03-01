
require 'fileutils'
FileUtils.chdir "#{File.dirname __FILE__}"

$LOAD_PATH.push(".")
$LOAD_PATH.push("../../libraries/scripts/lib")

require 'cor/utility'
require 'json'
require 'pathname'

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

ma.each do |v|
  if v == "--resource-only"
    #resource_only = true
  end
end

if va[0]
  source_path = va[0]
end

CorProject.source_path = source_path

destination_resource_path = "../cor_lib_test_main/Resources/project_resource"
source_conf_path = "#{source_path}/conf.rb"
source_resource_path = "#{source_path}/resources"


FileUtils.mkpath destination_resource_path

list = []

if File.exists? source_conf_path
  puts "load source conf #{source_conf_path}"
  load source_conf_path
end

cpp_list = []

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
      cpp_list += Cor.u.file_list("#{inc}/cpp")
    end
  end
  
  source_projects = "#{source_path}/project_file"
  puts "source_projects #{source_projects}"
  
  if Dir.exists? "#{source_path}/project_file"
    puts "project_file copy #{source_projects} -> #{destination_projects}"
    FileUtils.cp_r Dir.glob("#{source_projects}/*"), destination_projects
  end
  
  if CorProject.import_cpp && Dir.exists?("#{source_path}/cpp")
    cpp_list += Cor.u.file_list("#{source_path}/cpp")
  end
end

find_path = "../../licenses"
list += Cor.u.file_list(find_path).map{|fn|
  {
    :n => fn.gsub("#{find_path}", "licenses"),
    :fn => fn,
  }
}

CorProject.includes.each do |inc_path|
  find_path = "#{inc_path}/resources/"
  list += Cor.u.file_list("#{inc_path}/resources").map{|fn|
    {
      :n => fn.gsub("#{find_path}", ""),
      :fn => fn,
    }
  }
end

list += Cor.u.file_list(source_resource_path).map{|fn| 
  {
    :n => fn.gsub("#{source_resource_path}/", ""),
    :fn => fn,
  }
}
d_list = Cor.u.file_list destination_resource_path do |fn|
  !fn.include? ".gitignore"
end

d_table = {}
d_list.each do |fn|
  d_table[fn] = fn
end

past_copy = "past_copy.log"
past_copy_table = {}
if File.exist? past_copy
  past_copy_json = Cor.u.file_read past_copy
  past_copy_table = JSON.parse past_copy_json
end

puts "project copy"

list.each do |fn|
  dfn = "#{destination_resource_path}/#{fn[:n]}"
  
  if !File.exist?(dfn) || past_copy_table[fn[:fn]] != File.mtime(fn[:fn]).to_s  || File.size(fn[:fn]) != File.size(dfn)
    puts "do copy #{fn} -> #{dfn}"
    FileUtils.mkpath File.dirname(dfn)
    FileUtils.copy fn[:fn], dfn
  end
  
  past_copy_table[fn[:fn]] = File.mtime(fn[:fn]).to_s
  
  d_table.delete dfn
end

puts "cpp_list #{cpp_list}"
prject_structure_path = File.expand_path("../../libraries/cor_project_structure", File.dirname(__FILE__))
import_cpp_file = "#{prject_structure_path}/sources/import/external_code_import_local_conf.h"
puts "import_cpp_file #{import_cpp_file}"

if CorProject.import_cpp

  import_cpp_include_from = Pathname(File.dirname(import_cpp_file))
  import_cpp_includes = cpp_list.map do |v|
    import_cpp_include_to = Pathname(File.absolute_path(v))
    import_cpp_include_to.relative_path_from(import_cpp_include_from)
  end
  
  puts "import_cpp_includes #{import_cpp_includes}"
  
  import_cpp_includes = import_cpp_includes.map do |v|
    "#include \"#{v}\""
  end
  import_cpp_includes = import_cpp_includes.join "\n"

  import_cpp_code = <<EOS
#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace project_structure
    {
        static const char* imported_name = "copy source is #{source_path}";
    }
}

#{import_cpp_includes}

EOS

  Cor.u.file_write import_cpp_file, import_cpp_code
else
  FileUtils.remove import_cpp_file
  
end


past_copy_json = JSON.pretty_generate past_copy_table
Cor.u.file_write past_copy, past_copy_json

sleep 1

d_table.keys.each do |fn|
  FileUtils.remove fn
end

File.open "#{destination_resource_path}/copy_date.txt", "w" do |f|
  f.write Time.now.strftime("%Y-%m-%d %H:%M:%S")
end

FileUtils.copy "../../LICENSE", "#{destination_resource_path}/licenses/"

sleep 1

dir_list = Cor.u.dir_list destination_resource_path
dir_list.reverse.each do |d|
  fl = Cor.u.file_list d
  if fl.empty?
    FileUtils.rmdir d
  end
  
end