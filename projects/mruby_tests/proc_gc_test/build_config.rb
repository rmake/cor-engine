MRuby::Build.new do |conf|
  toolchain :gcc

  # include all core GEMs
  #conf.gembox 'full-core'
  conf.gembox 'default'
  conf.cc.flags += %w(-Werror=declaration-after-statement)
  conf.compilers.each do |c|
    c.defines += %w(MRB_DEBUG GC_TEST GC_DEBUG)
  end
  conf.enable_bintest = true
end


builds = []
