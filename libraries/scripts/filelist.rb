# ruby filelist.rb

$LOAD_PATH.push('.')

require 'rexml/document'
require 'fileutils'

libnames = [
    'cor_type',
    'cor_data_structure',
    'cor_algorithm',
    'cor_system',
    'cor_cocos2dx_converter',
    'cor_world',
    'cor_project_structure',
    'cor_mruby_interface',
    'cor_cocos2dx_mruby_interface'
]


NEED_MRUBY = [
    'cor_project_structure',
    'cor_mruby_interface',
    'cor_cocos2dx_mruby_interface'
]

NEED_COCOS2DX = [
    'cor_cocos2dx_converter', 
    'cor_world', 
    'cor_project_structure', 
    'cor_cocos2dx_mruby_interface',
]

require 'inc_path.rb'

HOST_GCC_LIB_MAKE_TEMPLATE = <<EOS

INCDIRFLAGS = %INCDIRFLAGS%
TARGET = %LIBFILENAME%

OUTPUTDIR = ./lib

#CC := clang
#CXX := clang++ -Xclang -ast-dump -fsyntax-only -DLINUX
CC := gcc
CXX := g++
AR := ar
MKDIR := mkdir -p

ifneq ($(WINDOWS), )
    CC := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\\Mingw64\\mingw64_4_8_1_5\\bin\\x86_64-w64-mingw32-gcc.exe" -m32 -static 
    CXX := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\\Mingw64\\mingw64_4_8_1_5\\bin\\x86_64-w64-mingw32-g++.exe" -m32 -static 
    AR := PATH=/c/Mingw64/mingw64_4_8_1_5/bin:$$PATH "C:\\Mingw64\\mingw64_4_8_1_5\\bin\\ar.exe"
    MKDIR := mkdir -p
endif

ifneq ($(CLANG), )
    INCDIRFLAGS += -I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/
    INCDIRFLAGS += -I/opt/rh/devtoolset-2/root/usr/include/c++/4.8.2/x86_64-redhat-linux/
    CC := clang
    CXX := clang++ 
    AR := ar
    MKDIR := mkdir -p
endif


#ifneq ($(WINDOWS), )
#    CC := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\\TDM-GCC-64\\bin\\gcc.exe" -m32 -static 
#    CXX := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\\TDM-GCC-64\\bin\\g++.exe" -m32 -static 
#    AR := PATH=/c/TDM-GCC-64/bin:$$PATH "C:\\TDM-GCC-64\\bin\\ar.exe"
#    MKDIR := mkdir -p
#endif


CPPFLAGS = -std=c++11 -pg -Wall -O2 -DRMAKE_CUSTOM_NEW_OPERATOR \\
    -I. -I.. -I../../ -I../../../ \\
    $(INCDIRFLAGS)

ifneq ($(CLANG), )
  CPPFLAGS += -stdlib=libstdc++
endif

ifneq ($(DEBUG), )
    CPPFLAGS += -g
endif

CCFLAGS = $(CPPFLAGS)

LDFLAGS =
ARFLAGS = crsv

ifneq ($(PROFILING), )
    CPPFLAGS += -pg
    LDFLAGS += -pg
endif

-include ../proj.common/file_list.mk

DIRS = $(SRCDIRS)
SRCS = $(PRJSRCS)
OBJS = $(patsubst %.cc,%.$(TARGET).o, $(patsubst %.cpp,%.$(TARGET).o,$(SRCS)))
DEPENDS = $(patsubst %.cc,%.$(TARGET).d, $(patsubst %.cpp,%.$(TARGET).d,$(SRCS)))



all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJS)
	
%.$(TARGET).o: %.cpp
	$(CXX) $(CPPFLAGS) $< -c -o $@

#%.$(TARGET).o: %.cc
#	$(CXX) $(CPPFLAGS) $< -c -o $@

%.$(TARGET).o: %.c
	$(CC) $(CCFLAGS) $< -c -o $@
	
%.$(TARGET).d: %.cpp
	$(CXX) $(CPPFLAGS) -M $<  >  $@

#%.$(TARGET).d: %.cc
#	$(CXX) $(CPPFLAGS) -M $<  >  $@

clean : 
	-$(RM) $(TARGET) $(OBJS) $(DEPENDS)

-include $(DEPENDS)

EOS

MAC_MACROS = [
    "USE_FILE32API",
    "CC_TARGET_OS_MAC",
    "COCOS2D_DEBUG=1",
    "CC_ENABLE_CHIPMUNK_INTEGRATION=1",
]

MAC_COCOS2DX_INCPATH = [
    "#{COCOS2DX_PATH}/external/glfw3/include/mac"
]

MAC_OSX_LIB_MAKE_TEMPLATE = <<EOS

INCDIRFLAGS = %INCDIRFLAGS%
TARGET = %LIBFILENAME%
MACROS = %MACROS%
ADDITIONALFLAGS = %ADDITIONALFLAGS%

OUTPUTDIR = ./

CC = clang
CXX = clang++
AR = ar
MKDIR = mkdir -p

CPPFLAGS = -std=c++11 -stdlib=libc++ -Wall -O2 -DRMAKE_CUSTOM_NEW_OPERATOR \
    -I. -I../.. -I../../../ -I../../../../ \
    $(INCDIRFLAGS) $(MACROS) $(ADDITIONALFLAGS)

ifneq ($(DEBUG), )
    CPPFLAGS += -g
endif

CCFLAGS = $(CPPFLAGS)

LDFLAGS =
ARFLAGS = crsv

ifneq ($(PROFILING), )
    CPPFLAGS += -pg
    LDFLAGS += -pg
endif

-include ../../proj.common/file_list.mk

DIRS = $(SRCDIRS)
SRCS = $(addprefix ../,$(PRJSRCS))
OBJS = $(patsubst %.cc,%.$(TARGET).o, $(patsubst %.cpp,%.$(TARGET).o,$(SRCS)))
DEPENDS = $(patsubst %.cc,%.$(TARGET).d, $(patsubst %.cpp,%.$(TARGET).$(TARGET).d,$(SRCS)))

all: $(TARGET)
	echo "DEBUG = $(DEBUG), $(CPPFLAGS)"

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJS)

%.$(TARGET).o: %.cpp
	$(CXX) $(CPPFLAGS) $< -c -o $@

#%.$(TARGET).o: %.cc
#	$(CXX) $(CPPFLAGS) $< -c -o $@

%.$(TARGET).o: %.c
	$(CC) $(CCFLAGS) $< -c -o $@

%.$(TARGET).d: %.cpp
	$(CXX) $(CPPFLAGS) -M $<  >  $@

#%.$(TARGET).d: %.cc
#	$(CXX) $(CPPFLAGS) -M $<  >  $@

clean :
	-$(RM) $(TARGET) $(OBJS) $(DEPENDS)

-include $(DEPENDS)

EOS


IOS_MACROS = [
    "USE_FILE32API",
    "CC_TARGET_OS_IPHONE"
]

MAKE_IOS_COMBINE = <<EOS

all:
	%LIBMAKES%
	lipo -create %LIBDEVFILENAMES% %LIBSIMFILENAMES% -output %LIBFILENAME%

clean:
	%LIBCLEANS%
	rm %LIBFILENAME%

EOS


MAKE_ALL_GCC = <<EOS

paths = [%PATHS%]

ts = []

flag = ""
if RUBY_PLATFORM.include? "mswin32"
  flag = "WINDOWS=TRUE"
else
  flag = "-j 4"
  #flag = "-j 4 CLANG=TRUE"
end

paths.each do |path|
  ts << Thread.new do
    print "Start build\\n"
    system("make -C \#{path}/proj.gcc \#{flag}")
    print "End build\\n"
  end
end

ts.each do |t|
  t.join
end


EOS

MAKE_ALL_CLEAN_GCC = <<EOS

paths = [%PATHS%]

ts = []

flag = ""
if RUBY_PLATFORM.include? "mswin32"
    flag = "WINDOWS=TRUE"
else
    flag = "-j 4"
    #flag = "-j 4 CLANG=TRUE"
end

paths.each do |path|
  ts << Thread.new do
    print "Start build\\n"
    system("make -C \#{path}/proj.gcc \#{flag} clean")
    print "End build\\n"
  end
end

ts.each do |t|
  t.join
end


EOS


def file_list_path(path)
  file_list = []
  Dir.foreach(path) do |fn|
    next if fn == "."
    next if fn == ".."

    fpath = "#{path}/#{fn}"

    if File::ftype(fpath) == "directory"

      print "dir #{fpath}\n"
      file_list += file_list_path(fpath)
    else
      if File.extname(fpath) == ".cpp"
        print "file #{fpath}\n"
        file_list << fpath
      end

    end

  end
  
  file_list
end

def file_list_all_path(path)
  file_list = []
  Dir.foreach(path) do |fn|
    next if fn == "."
    next if fn == ".."

    fpath = "#{path}/#{fn}"

    if File::ftype(fpath) == "directory"

      print "dir #{fpath}\n"
      file_list += file_list_all_path(fpath)
    else
      if File.extname(fpath) == ".cpp" || File.extname(fpath) == ".h"
        print "file #{fpath}\n"
        file_list << fpath
      end

    end

  end
  
  file_list
end

def vc_project_filter(libname, project_path, proj_vc_path, file_list_all)
  
  proj_file = "#{proj_vc_path}/#{libname}/#{libname}.vcxproj"
  filter_file = "#{proj_vc_path}/#{libname}/#{libname}.vcxproj.filters"
  
  print "vcproj #{proj_file}\n"
  
  if File.exist? proj_file
    print "exist\n"
    
    doc = nil
    e_inc = nil
    e_src = nil
    
    File.open proj_file, "r" do |f|
      doc = REXML::Document.new(f)
      doc.root.elements.each do |e|
        if e.name == "ItemGroup"
          e_inc = e if e.elements.first && e.elements.first.name == "ClInclude"
          e_src = e if e.elements.first && e.elements.first.name == "ClCompile"
        end
        
      end
      
    end
    
    unless e_inc
      e_inc = REXML::Element.new("ItemGroup")
      doc.root.add e_inc
    end
    
    unless e_src
      e_src = REXML::Element.new("ItemGroup")
      doc.root.add e_src
    end
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    
    e_inc.elements.delete_all "*"
    e_src.elements.delete_all "*"
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    
    file_list_all.each do |fn|
      if File.extname(fn) == ".h"
        e = e_inc << REXML::Element.new("ClInclude")
        nfn = fn.gsub project_path, "../.."
        e.add_attribute("Include", nfn)
      end
    end
    
    file_list_all.each do |fn|
      if File.extname(fn) == ".cpp"
        e = e_src << REXML::Element.new("ClCompile")
        nfn = fn.gsub project_path, "../.."
        e.add_attribute("Include", nfn)
      end
    end
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    
    #print "doc #{doc}\n"
    
    File.open proj_file, "w" do |f|
      doc.write f
    end
    
    #
    
    doc = nil
    e_inc = nil
    e_src = nil
    e_filter = nil
    
    File.open filter_file, "r" do |f|
      doc = REXML::Document.new(f)
      doc.root.elements.each do |e|
        if e.name == "ItemGroup" && e.elements.first
          e_inc = e if e.elements.first.name == "ClInclude"
          e_src = e if e.elements.first.name == "ClCompile"
          e_filter = e if e.elements.first.name == "Filter"
        end
        
      end
      
    end
    
    unless e_inc
      e_inc = REXML::Element.new("ItemGroup")
      doc.root.add e_inc
    end
    
    unless e_src
      e_src = REXML::Element.new("ItemGroup")
      doc.root.add e_src
    end
    
    unless e_filter
      e_filter = REXML::Element.new("ItemGroup")
      doc.root.add e_filter
    end
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    #print "e_filter #{e_filter.to_s}\n"
    
    e_inc.elements.delete_all "*"
    e_src.elements.delete_all "*"
    e_filter.elements.delete_all "*"
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    #print "e_filter #{e_filter.to_s}\n"
    
    dirs = {}
    
    file_list_all.each do |fn|
      if File.extname(fn) == ".h"
        e = e_inc << REXML::Element.new("ClInclude")
        nfn = fn.gsub project_path, "../.."
        e.add_attribute("Include", nfn)
        dir = File.dirname(nfn).gsub("../../", "")
        unless dir.empty?
          fe = e << REXML::Element.new("Filter")
          dirs[dir] = dir
          fe << REXML::Text.new(dir.gsub('/', "\\"))
        end
      end
    end
    
    file_list_all.each do |fn|
      if File.extname(fn) == ".cpp"
        e = e_src << REXML::Element.new("ClCompile")
        nfn = fn.gsub project_path, "../.."
        e.add_attribute("Include", nfn)
        dir = File.dirname(nfn).gsub("../../", "")
        unless dir.empty?
          fe = e << REXML::Element.new("Filter")
          dirs[dir] = dir
          fe << REXML::Text.new(dir.gsub('/', "\\"))
        end
      end
    end
    
    dirs.each_key do |k|
      fe = e_filter << REXML::Element.new("Filter")
      fe.add_attribute("Include", k.gsub('/', "\\"))
    end
    
    #print "e_inc #{e_inc.to_s}\n"
    #print "e_src #{e_src.to_s}\n"
    
    #print "doc #{doc}\n"
    
    File.open filter_file, "w" do |f|
      doc.write f
    end
    
  end
  
  
  
end

def file_list_project(libname, project_path)

    FileUtils.mkpath project_path
    
    sources_path = "#{project_path}/sources"
    FileUtils.mkpath sources_path
    proj_common_path = "#{project_path}/proj.common"
    FileUtils.mkpath proj_common_path
    file_list_file_name = "#{proj_common_path}/file_list.mk"
    
    print "project #{libname}\n"
    
    print "file list\n"
    file_list = file_list_path sources_path
    
    print "file list all\n"
    file_list_all = file_list_all_path sources_path
    
    File.open file_list_file_name, "wb" do |f|
        f.write "PRJSRCS=#{file_list.map{|n| "../#{n}"}.join "\\\n    "}\n"
    end
    
    #old_proj_host_gcc_path = "#{project_path}/proj.host.gcc"
    #FileUtils.remove_dir old_proj_host_gcc_path, true
    
    proj_host_gcc_path = "#{project_path}/proj.gcc"
    FileUtils.mkpath proj_host_gcc_path
    
    make_host_gcc_path = "#{proj_host_gcc_path}/Makefile"
    
    incpath = ALL_INCPATH
    mac_incpath = incpath.clone
    
    if NEED_MRUBY.include? libname
      incpath += MRUBY_INCPATH
      mac_incpath += MRUBY_INCPATH
    end
    
    if NEED_COCOS2DX.include? libname
      incpath += COCOS2DX_INCPATH
      mac_incpath += COCOS2DX_INCPATH + MAC_COCOS2DX_INCPATH
    end
    
    macros = []
    
    File.open make_host_gcc_path, "wb" do |f|
        str = HOST_GCC_LIB_MAKE_TEMPLATE.gsub('%INCDIRFLAGS%', incpath.map{|p| '-I../' + p }.join(" \\\n"))
        str = str.gsub('%LIBFILENAME%', "lib#{libname}.a")
        str = str.gsub('%MACROS%', macros.map{|p| '-D' + p}.join(" \\\n"))
        str = str.gsub('%ADDITIONALFLAGS%', '')
        f.write str
    end
    
    proj_vc_path = "#{project_path}/proj.vc"
    FileUtils.mkpath proj_vc_path
    vc_project_filter libname, project_path, proj_vc_path, file_list_all
    
    proj_ios_mac_path = "#{project_path}/proj.ios_mac"
    FileUtils.mkpath proj_ios_mac_path
    
    mac_path = "#{proj_ios_mac_path}/osx"
    FileUtils.mkpath mac_path
    mac_macros = macros + MAC_MACROS
    mac_make_path = "#{mac_path}/Makefile"
    File.open mac_make_path, "wb" do |f|
        str = MAC_OSX_LIB_MAKE_TEMPLATE.gsub('%INCDIRFLAGS%', mac_incpath.map{|p| '-I../../' + p.gsub('linux', 'mac') }.join(" \\\n"))
        str = str.gsub('%LIBFILENAME%', "lib#{libname}.a")
        str = str.gsub('%MACROS%', mac_macros.map{|p| '-D' + p}.join(" \\\n"))
        str = str.gsub('%ADDITIONALFLAGS%','')
        f.write str
    end
    ios_path = "#{proj_ios_mac_path}/ios"
    FileUtils.mkpath ios_path
    ios_macros = macros + IOS_MACROS
    
    ios_sim_archs = ['i386', 'x86_64']
    ios_sim_archs.each do |arch|
        ios_sim_make_path = "#{ios_path}/Makefile.sim.#{arch}.ios"
        ios_sim_flags = " -arch #{arch} -miphoneos-version-min=5.0 -isysroot " +
        '/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk ' +
        '-g -O3 -Wall -Werror-implicit-function-declaration'
        File.open ios_sim_make_path, "wb" do |f|
            str = MAC_OSX_LIB_MAKE_TEMPLATE.gsub('%INCDIRFLAGS%', mac_incpath.map{|p| '-I../../' + p.gsub('linux', 'ios') }.join(" \\\n"))
            str = str.gsub('%LIBFILENAME%',"lib#{libname}_sim_#{arch}.a")
            str = str.gsub('%MACROS%', ios_macros.map{|p| '-D' + p}.join(" \\\n"))
            str = str.gsub('%ADDITIONALFLAGS%', ios_sim_flags)
            f.write str
        end
    end
    
    ios_dev_archs = ['arm64', 'armv7', 'armv7s']
    ios_dev_archs.each do |arch|
        ios_dev_make_path = "#{ios_path}/Makefile.dev.#{arch}.ios"
        ios_dev_flags = " -arch #{arch} -miphoneos-version-min=5.0 -isysroot " +
        '/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk ' +
        '-g -O3 -Wall -Werror-implicit-function-declaration'
        File.open ios_dev_make_path, "wb" do |f|
            str = MAC_OSX_LIB_MAKE_TEMPLATE.gsub('%INCDIRFLAGS%', mac_incpath.map{|p| '-I../../' + p.gsub('linux', 'ios') }.join(" \\\n"))
            str = str.gsub('%LIBFILENAME%', "lib#{libname}_dev_#{arch}.a")
            str = str.gsub('%MACROS%', ios_macros.map{|p| '-D' + p}.join(" \\\n"))
            str = str.gsub('%ADDITIONALFLAGS%', ios_dev_flags)
            f.write str
        end

    end
    
    
    ios_make_path = "#{ios_path}/Makefile"
    File.open ios_make_path, "wb" do |f|
        str = MAKE_IOS_COMBINE.gsub('%LIBFILENAME%',"lib#{libname}.a")
        str = str.gsub('%LIBDEVFILENAMES%', ios_dev_archs.map{|v| "lib#{libname}_dev_#{v}.a"}.join(' '))
        str = str.gsub('%LIBSIMFILENAMES%', ios_sim_archs.map{|v| "lib#{libname}_sim_#{v}.a"}.join(' '))
        make_commands = ios_dev_archs.map{|v| "make -C . -f Makefile.dev.#{v}.ios -j 8"}
        make_commands += ios_sim_archs.map{|v| "make -C . -f Makefile.sim.#{v}.ios -j 8"}
        str = str.gsub('%LIBMAKES%', make_commands.join("\n\t"))
        make_clean_commands = ios_dev_archs.map{|v| "make -C . -f Makefile.dev.#{v}.ios clean"}
        make_clean_commands += ios_sim_archs.map{|v| "make -C . -f Makefile.sim.#{v}.ios clean"}
        str = str.gsub('%LIBCLEANS%', make_clean_commands.join("\n\t"))
        f.write str
    end

end


FileUtils.copy '../../external/mrubybind/mrubybind.cc', '../cor_mruby_interface/sources/'
FileUtils.move '../cor_mruby_interface/sources/mrubybind.cc', '../cor_mruby_interface/sources/mrubybind.cpp'


lib_paths = []

libnames.each do |libname|
    lib_path = "../#{libname}"
    file_list_project libname, lib_path
    unless NEED_COCOS2DX.include? libname
        lib_paths << lib_path
    end
end

File.open "make_all_gcc.rb", "wb" do |f|
    str = MAKE_ALL_GCC.gsub '%PATHS%', lib_paths.map{|path| "\"#{path}\"" }.join(',')
    f.write str
end

File.open "make_all_clean_gcc.rb", "wb" do |f|
    str = MAKE_ALL_CLEAN_GCC.gsub '%PATHS%', lib_paths.map{|path| "\"#{path}\"" }.join(',')
    f.write str
end



