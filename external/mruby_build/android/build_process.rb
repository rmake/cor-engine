
abis = ['armeabi', 'armeabi-v7a', 'x86', 'mips']

ts = []

abis.each do |abi|
  ts << Thread.new do
    print "Start build\n"
    system("ndk-build NDK_DEBUG=0 NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_ABI=#{abi} obj/local/#{abi}/libmruby.a")
    print "End build\n"
  end
end

ts.each do |t|
  t.join
end




