MRuby::Build.new do |conf|
  if ENV['VisualStudioVersion']
    toolchain :visualcpp
  else
    toolchain :gcc
  end

  enable_debug

  # include all core GEMs
  #conf.gembox 'full-core'
  conf.gembox 'default'
end

builds = []

builds << {
    :name => 'vc_debug_32',
    :toolchain => :visualcpp,
    :is_debug => true,
}
builds << {
    :name => 'vc_release_32',
    :toolchain => :visualcpp,
    :is_debug => false,
}

builds.each do |b|

  MRuby::Build.new(b[:name]) do |conf|
    toolchain b[:toolchain]
    if b[:is_debug]
      enable_debug
      conf.linker do |linker|
        linker.flags += %w(/DEBUG)
      end
    end

    # include all core GEMs
    #conf.gembox 'full-core'
    conf.gembox 'default'
    conf.compilers.each do |c|
      c.defines = %w(MRB_ENABLE_CXX_EXCEPTION)
    end
    
    old_linkder_command = linker.command
    enable_cxx_abi
    linker.command = old_linkder_command

    #linker.flags += ["/MACHINE:X86"]
    #archiver.archive_options += " /MACHINE:X86"
  end
end

