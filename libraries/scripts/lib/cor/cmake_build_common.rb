require "fileutils"
require "open3"
require "rexml/document"

@current_type = nil
@is_vc = false

@vs_path = "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0"

def build type

  build_path = "build/#{type}"

  if ARGV.include? "-f"
    puts "clean"
    FileUtils.rm_rf build_path
  end

  FileUtils.mkdir_p build_path
  FileUtils.chdir build_path

  cmd = ""

  @current_type = type

  case type
  when "win32"
    @is_vc = true
    system "cmake ../.. -G \"Visual Studio 14 2015\" -DCOR_BUILD_TYPE=#{type}"
    do_win_build
  when "win64"
    @is_vc = true
    system "cmake ../.. -G \"Visual Studio 14 2015 Win64\" -DCOR_BUILD_TYPE=#{type}"
    do_win_build
  when "android"
    configurations = ["Release", "Debug"]
    #configurations = ["Release"]
    archs = ["armeabi", "armeabi-v7a", "x86"]
    #archs = ["x86"]
    configurations.each do |configuration|
      archs.each do |arch|
        FileUtils.mkdir_p "#{arch}/#{configuration}"
        FileUtils.chdir "#{arch}/#{configuration}"
        cmd = [
          "cmake ../../../.. ",
          "-DCOR_BUILD_TYPE=#{type}",
          "-DCMAKE_TOOLCHAIN_FILE=../../../external/android_cmake/android.toolchain.cmake",
          "-DANDROID_NDK=#{ENV["NDK_ROOT"]}",
          "-DCMAKE_BUILD_TYPE=#{configuration}",
          "-DANDROID_NATIVE_API_LEVEL=14",
          "-DANDROID_ABI=\"#{arch}\"",
          "-G\"Unix Makefiles\""
          ].join(" ")
        do_build_output cmd
        do_build_output "which make"
        if ARGV.include? "--for-ci"
          do_build_output "make -j 2"
        elsif ARGV.select{|v| v.match(/-j\d+/)}.length > 0
          do_build_output "make -j #{ARGV.select{|v| v.match(/-j\d+/)}[0].scan(/\d+/)[0]}"
        else
          do_build_output "make -j 4"
        end
        FileUtils.chdir "../.."
      end
    end
  when "osx"
    system "cmake ../.. -G\"Unix Makefiles\" -DCOR_BUILD_TYPE=#{type}"
    do_default_build
  when "ios"
    system "cmake ../.. -G\"Unix Makefiles\""
    build_ios type
  end

  puts "build ended!"
end

@results = []

def cvt_string str
  if @is_vc
    return str.encode("UTF-8", "Shift_JIS")
  else
    str
  end
end

def do_build_output cmd
  puts "cmd srart #{cmd}"
  STDOUT.flush
  if @is_vc
    o, e, s = Open3.capture3 cmd
    puts "cmd '#{cmd}' of o ->"
    puts "#{cvt_string o}"
    puts "cmd '#{cmd}' of e ->"
    puts "#{cvt_string e}"
    result = s.success?
    @results << "cmd '#{cmd}' | success? -> #{s.success?} | #{s}"
  else
    result = system cmd
    @results << "cmd '#{cmd}' | success? -> #{result} | #{$?}"
  end
  result
end

def do_default_build

  if ARGV.include? "release"
    do_build_output "cmake --build . --config Release"
  elsif ARGV.include? "debug"
    do_build_output "cmake --build . --config Debug"
  else
    do_build_output "cmake --build . --config Release"
    do_build_output "cmake --build . --config Debug"
  end
  @results.each do |v|
    puts "#{v}"
  end
end

def call_on_windows(cmds)
  cmd = "cmd /c \"" + cmds.split("\n").map{|v| "#{v.gsub("\\", "\\\\\\\\")}"}.join("&") + "\""
  do_build_output cmd
end

def do_win_build

  projects = Dir.glob("**/*.vcxproj")
  projects.each do |project|
    doc = nil
    File.open(project, "r") do |f|
      doc = REXML::Document.new(f)
    end

    doc.root.elements.each do |e|
      if e.name == "ItemDefinitionGroup"
        e.elements.each do |e|
          if e.name == "ClCompile"
            ne = REXML::Element.new("MultiProcessorCompilation")
            ne.text = "true"
            e.elements.add ne
          end
        end
      end
    end
    File.open(project, "w") do |f|
      doc.write f
    end
  end


  if @current_type == "win32"
    cmds = <<EOS
call "#{@vs_path}\\VC\\vcvarsall.bat" x86
EOS
  else
    cmds = <<EOS
call "#{@vs_path}\\VC\\vcvarsall.bat" x64
EOS
  end

  if ARGV.include? "release"
    call_on_windows cmds + <<EOS
msbuild.exe #{Dir.glob("*.sln")[0]} /p:configuration=release /maxcpucount:4 /p:BuildInParallel=true
EOS
  elsif ARGV.include? "debug"
    call_on_windows cmds + <<EOS
msbuild.exe #{Dir.glob("*.sln")[0]} /p:configuration=debug /maxcpucount:4 /p:BuildInParallel=true
EOS
  else
    call_on_windows cmds + <<EOS
msbuild.exe #{Dir.glob("*.sln")[0]} /p:configuration=debug /maxcpucount:4 /p:BuildInParallel=true
EOS
    call_on_windows cmds + <<EOS
msbuild.exe #{Dir.glob("*.sln")[0]} /p:configuration=release /maxcpucount:4 /p:BuildInParallel=true
EOS
  end
  @results.each do |v|
    puts "#{v}"
  end
end

def build_ios(type)
  #configurations = ["Release", "Debug"]
  configurations = ["Release"]
  archs = {
    "iPhoneOS" => ["armv7", "armv7s", "arm64"],
    "iPhoneSimulator" => ["i386"],
  }
  #platforms = ["iPhoneSimulator", "iPhoneOS"]
  platforms = ["iPhoneSimulator"]
  platforms.each do |platform|
    configurations.each do |configuration|
      archs[platform].each do |arch|
        FileUtils.mkdir_p "#{platform}/#{arch}/#{configuration}"
        FileUtils.chdir "#{platform}/#{arch}/#{configuration}"
        cmd = [
          "cmake ../../../../.. ",
          "-DCOR_BUILD_TYPE=#{type}",
          "-DCMAKE_TOOLCHAIN_FILE=../../../external/ios_cmake/ios.cmake",
          "-DPLATFORM=#{platform}",
          "-DARCH=#{arch}",
          "-G\"Unix Makefiles\""
          ].join(" ")
        do_build_output cmd
        do_build_output "which make"
        if ARGV.include? "--for-ci"
          do_build_output "make -j 2"
        elsif ARGV.select{|v| v.match(/-j\d+/)}.length > 0
          do_build_output "make -j #{ARGV.select{|v| v.match(/-j\d+/)}[0].scan(/\d+/)[0]}"
        else
          do_build_output "make -j 4"
        end
        FileUtils.chdir "../../.."
      end
      if platform == "iPhoneOS"
        source_a_list = Dir.glob("#{platform}/*/#{configuration}/*.a")
        a_name = File.basename source_a_list[0]

        do_build_output "lipo -create #{source_a_list.join(" ")} -output #{platform}/#{a_name}"
      end
    end
  end
end

