echo start
rm -rf build_tmp/rts_test_android
mkdir -p build_tmp/rts_test_android
cp ../cor_lib_test_main/proj.android/bin/cor_lib_test_main-release-unsigned.apk build_tmp/rts_test_android/
cd build_tmp/rts_test_android/
while read password
do
  echo line
  echo $password
  PATH=$PATH:"C:\Program Files\Java\jdk1.8.0_05\bin" jarsigner -verbose -keystore ../key/rts_game.keystore -keypass $password -storepass $password cor_lib_test_main-release-unsigned.apk rts_game -digestalg SHA1 -sigalg MD5withRSA
done < ../key/password.txt
rm -f cor_lib_test_main-release.apk
echo zipalign
PATH=$PATH:"C:\Program Files (x86)\Android\android-sdk\tools" zipalign -v -f 4 cor_lib_test_main-release-unsigned.apk cor_lib_test_main-release.apk
