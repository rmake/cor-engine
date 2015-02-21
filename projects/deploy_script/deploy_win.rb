
$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'json'

system "cmd /c build_win.bat"
system "ruby ../project_script/copy_project.rb"

FileUtils.mkpath "build_tmp/rts_test_win"
FileUtils.cp_r Dir.glob("../cor_lib_test_main/proj.win32/Release.win32/*.exe"), "build_tmp/rts_test_win/"
FileUtils.cp_r Dir.glob("../cor_lib_test_main/proj.win32/Release.win32/*.dll"), "build_tmp/rts_test_win/"
FileUtils.cp_r Dir.glob("../cor_lib_test_main/Resources/*"), "build_tmp/rts_test_win/"
if File.exist? "deploy_local_conf.rb"
  load "deploy_local_conf.rb"
  FileUtils.cp_r Dir.glob("build_tmp/rts_test_win/*"), OUTPUT_PATH_WIN
  FileUtils.copy "/c/Windows/System32/msvcp120.dll", OUTPUT_PATH_WIN
  FileUtils.copy "/c/Windows/System32/msvcr120.dll", OUTPUT_PATH_WIN
end


