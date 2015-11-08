$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'json'
require 'fileutils'

if ARGV[0]
  system "ruby ../project_script/copy_project.rb #{ARGV[0]}"
else
  system "ruby ../project_script/copy_project.rb"
end

system("ruby build_android.rb")
#system("sh package_android.sh")

FileUtils.mkpath "build_tmp/rts_test_android/"
FileUtils.copy "../cor_lib_test_main/proj.android/bin/cor_lib_test_main-release.apk", "build_tmp/rts_test_android/"

#if File.exist? "deploy_local_conf.rb"
#  #load "deploy_local_conf.rb"
#  #FileUtils.copy "../cor_lib_test_main/proj.android/bin/cor_lib_test_main-release.apk", OUTPUT_PATH_ANDROID
#end


