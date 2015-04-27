$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'json'
require 'fileutils'


system "ruby ../project_script/copy_project.rb"

system("sh build_android.sh")
#system("sh package_android.sh")

FileUtils.mkpath "build_tmp/rts_test_android/"
FileUtils.copy "../cor_lib_test_main/proj.android/bin/cor_lib_test_main-release.apk", "build_tmp/rts_test_android/"

#if File.exist? "deploy_local_conf.rb"
#  #load "deploy_local_conf.rb"
#  #FileUtils.copy "../cor_lib_test_main/proj.android/bin/cor_lib_test_main-release.apk", OUTPUT_PATH_ANDROID
#end


