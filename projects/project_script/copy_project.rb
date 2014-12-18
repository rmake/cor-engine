
require 'fileutils'
FileUtils.chdir "#{File.dirname __FILE__}"

$LOAD_PATH.push(".")
$LOAD_PATH.push("../../libraries/scripts/lib")

require 'cor/utility'
require 'json'

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
  
end



source_path = "../small_experimental"
if File.exist? "project_source_path_local_conf.rb"
  load "project_source_path_local_conf.rb"
  source_path = SOURCE_PATH
end

if ARGV[0]
  source_path = ARGV[0]
end

CorProject.source_path = source_path

destination_resource_path = "../cor_lib_test_main/Resources"
source_conf_path = "#{source_path}/conf.rb"
source_resource_path = "#{source_path}/resources"

FileUtils.mkpath destination_resource_path

list = []

if File.exists? source_conf_path
  puts "load source conf #{source_conf_path}"
  load source_conf_path
end

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



past_copy_json = JSON.pretty_generate past_copy_table
Cor.u.file_write past_copy, past_copy_json

File.open "#{destination_resource_path}/copy_date.txt", "w" do |f|
  f.write Time.now.strftime("%Y-%m-%d %H:%M:%S")
end

sleep 1

d_table.keys.each do |fn|
  FileUtils.remove fn
end

sleep 1

dir_list = Cor.u.dir_list destination_resource_path
dir_list.reverse.each do |d|
  fl = Cor.u.file_list d
  if fl.empty?
    FileUtils.rmdir d
  end
  
end