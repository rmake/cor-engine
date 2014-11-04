
MRuby::Build.new do |conf|
    toolchain :clang
    
    # include all core GEMs
    conf.gembox 'full-core'
    conf.cc.flags += %w(-Werror=declaration-after-statement)
    conf.compilers.each do |c|
        c.defines += %w(MRB_DEBUG MRB_GC_FIXED_ARENA)
    end
    enable_cxx_abi
end

builds = []


#builds << {
#    :name => 'ndk_debug',
#    :toolchain => :androideabi,
#    :is_debug => true,
#}
#builds << {
#    :name => 'ndk_release',
#    :toolchain => :androideabi,
#    :is_debug => false,
#}

#flags = "-arch arm64 -arch armv7 -arch armv7s"
flags = "-arch armv7"
flags_simulator = "-arch i386"

SDK_PATH = "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk"
SIMULATOR_SDK_PATH = "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk"

builds << {
  :name => 'ios_debug',
  :toolchain => :clang,
  :is_debug => true,
  :flags => flags
}
builds << {
  :name => 'ios_release',
  :toolchain => :clang,
  :is_debug => false,
  :flags => flags
}
builds << {
  :name => 'ios_sim_debug',
  :toolchain => :clang,
  :is_debug => true,
  :flags => flags_simulator
}
builds << {
  :name => 'ios_sim_release',
  :toolchain => :clang,
  :is_debug => false,
  :flags => flags_simulator
}




builds.each do |b|
  
  next

  MRuby::Build.new(b[:name]) do |conf|

    #conf.bins = []
    
    #toolchain b[:toolchain]
    #if b[:is_debug]
    #  enable_debug
    #end


    # include all core GEMs
    conf.gembox 'default'
    
    conf.cc do |cc|
      cc.command = 'xcrun'
      cc.flags = %W(-sdk iphoneos clang #{b[:flags]} -isysroot #{SDK_PATH} -g -O3 -Wall -Werror-implicit-function-declaration)
    end
    #conf.cc.flags += %w(-Werror=declaration-after-statement)
    
    
    conf.linker do |linker|
      linker.command = 'xcrun'
      linker.flags = %W(-sdk iphoneos clang #{b[:flags]} -isysroot #{SDK_PATH})
    end
    
    #conf.compilers.each do |c|
    #  if b[:is_debug]
    #    c.defines += %w(MRB_DEBUG MRB_GC_FIXED_ARENA)
    #  else
    #    c.defines += %w(MRB_GC_FIXED_ARENA)
    #  end
    #end

    #enable_cxx_abi
  end
end

MRuby::CrossBuild.new('ios_debug') do |conf|
    conf.bins = []

    conf.gembox 'default'

    conf.cc do |cc|
        cc.command = 'xcrun'
        cc.flags = %W(-sdk iphoneos clang -arch arm64 -arch armv7 -arch armv7s -isysroot #{SDK_PATH} -g -O3 -Wall -Werror-implicit-function-declaration)
    end

    conf.linker do |linker|
        linker.command = 'xcrun'
        linker.flags = %W(-sdk iphoneos clang -arch arm64 -arch armv7 -arch armv7s -isysroot #{SDK_PATH})
    end

    #enable_cxx_abi
end

MRuby::CrossBuild.new('ios_release') do |conf|
    conf.bins = []
    
    conf.gembox 'full-core'
    
    conf.cc do |cc|
        cc.command = 'xcrun'
        cc.flags = %W(-sdk iphoneos clang -arch arm64 -arch armv7 -arch armv7s -isysroot #{SDK_PATH} -g -O3 -Wall -Werror-implicit-function-declaration)
    end
    
    conf.linker do |linker|
        linker.command = 'xcrun'
        linker.flags = %W(-sdk iphoneos clang -arch arm64 -arch armv7 -arch armv7s -isysroot #{SDK_PATH})
    end
    
    #enable_cxx_abi
end

MRuby::CrossBuild.new('ios_sim_debug') do |conf|
    conf.bins = []
    
    conf.gembox 'default'
    
    conf.cc do |cc|
        cc.command = 'xcrun'
        cc.flags = %W(-sdk iphoneos clang -arch i386 -arch x86_64 -miphoneos-version-min=5.0 -isysroot #{SIMULATOR_SDK_PATH} -g -O3 -Wall -Werror-implicit-function-declaration)
    end
    
    conf.linker do |linker|
        linker.command = 'xcrun'
        linker.flags = %W(-sdk iphoneos clang -arch i386 -arch x86_64 -miphoneos-version-min=5.0 -isysroot #{SIMULATOR_SDK_PATH})
    end
    
    #enable_cxx_abi
end

MRuby::CrossBuild.new('ios_sim_release') do |conf|
    conf.bins = []
    
    conf.gembox 'default'
    
    conf.cc do |cc|
        cc.command = 'xcrun'
        cc.flags = %W(-sdk iphoneos clang -arch i386 -arch x86_64 -miphoneos-version-min=5.0 -isysroot #{SIMULATOR_SDK_PATH} -g -O3 -Wall -Werror-implicit-function-declaration)
    end
    
    conf.linker do |linker|
        linker.command = 'xcrun'
        linker.flags = %W(-sdk iphoneos clang -arch i386 -arch x86_64 -miphoneos-version-min=5.0 -isysroot #{SIMULATOR_SDK_PATH})
    end
    
    #enable_cxx_abi
end




