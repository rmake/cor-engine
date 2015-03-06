
$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'json'

#system "cmd /c build_win.bat"

class DeployListWin
  
  def self.list=(a)
    @list = a
  end
  
  def self.list
    @list
  end
end

load "list_conf.rb"

if Dir.exists? "build_tmp/cor_engine_release_win"
  FileUtils.rm_rf "build_tmp/cor_engine_release_win"
end

if File.exists? "build_tmp/cor_engine_release_win.zip"
  FileUtils.remove "build_tmp/cor_engine_release_win.zip"
end

DeployListWin.list.each do |v|
  system "ruby ../project_script/copy_project.rb #{v[:source]}"
  system "cmd /c build_win.bat"
  FileUtils.mkpath "build_tmp/#{v[:out_path]}"
  FileUtils.cp_r Dir.glob("../cor_lib_test_main/proj.win32/Release.win32/*.exe"), "build_tmp/#{v[:out_path]}/"
  FileUtils.cp_r Dir.glob("../cor_lib_test_main/proj.win32/Release.win32/*.dll"), "build_tmp/#{v[:out_path]}/"
  FileUtils.cp_r Dir.glob("../cor_lib_test_main/Resources/*"), "build_tmp/#{v[:out_path]}/"
  
  if File.exist? "deploy_local_conf.rb"
    load "deploy_local_conf.rb"
    #FileUtils.copy "#{OUTPUT_PATH_WIN}/msvcp120.dll", "build_tmp/#{v[:out_path]}/"
    #FileUtils.copy "#{OUTPUT_PATH_WIN}/msvcr120.dll", "build_tmp/#{v[:out_path]}/"
    FileUtils.copy "C:\\Windows\\System32\\msvcp120.dll", "build_tmp/#{v[:out_path]}/"
    FileUtils.copy "C:\\Windows\\System32\\msvcr120.dll", "build_tmp/#{v[:out_path]}/"
  end

end

FileUtils.chdir "build_tmp" do
  system "zip -r cor_engine_release_win.zip cor_engine_release_win/"
end





