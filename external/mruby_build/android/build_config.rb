
MRuby::Build.new do |conf|
  toolchain :gcc

  # include all core GEMs
  conf.gembox 'my'
  conf.cc.flags += %w(-Werror=declaration-after-statement)
  conf.compilers.each do |c|
    c.defines += %w(MRB_GC_FIXED_ARENA)
  end
  conf.enable_bintest = false
end

