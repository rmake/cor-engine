MRuby::Build.new do |conf|
  toolchain :gcc

  # include all core GEMs
  #conf.gembox 'full-core'
  conf.gembox 'default'
  conf.cc.flags += %w(-Werror=declaration-after-statement)
  conf.compilers.each do |c|
    #c.defines += %w(MRB_DEBUG MRB_GC_FIXED_ARENA)
  end
  conf.enable_bintest = true
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

#builds << {
#  :name => 'mingw_debug',
#  :toolchain => :gcc,
#  :is_debug => true,
#}
#builds << {
#    :name => 'mingw_release',
#    :toolchain => :gcc,
#    :is_debug => false,
#}

builds << {
  :name => 'default_debug',
  :toolchain => :gcc,
  :is_debug => true,
}
builds << {
    :name => 'default_release',
    :toolchain => :gcc,
    :is_debug => false,
}


builds.each do |b|

  MRuby::Build.new(b[:name]) do |conf|
    toolchain b[:toolchain]
    if b[:is_debug]
      enable_debug
    end


    # include all core GEMs
    #conf.gembox 'full-core'
    conf.gembox 'default'
    conf.cc.flags += %w(-Werror=declaration-after-statement)
    conf.compilers.each do |c|
      c.defines += %w(MRB_ENABLE_CXX_EXCEPTION)
    end

    enable_cxx_abi
  end
end


