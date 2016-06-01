require "fileutils"
require "open3"
require "rexml/document"

module Cor
  class CmakeBuilder

    VS_PATH = "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0"

    def initialize
      @current_type = nil
      @is_vc = false

      @vs_path = VS_PATH

      @results = []
      @all_success = true
    end

    def call_system(cmd)
      unless system(cmd)
        raise "call_system '#{cmd}' failed"
      end
    end

    def self.build

      if ARGV.include?("-h") || ARGV.length < 1
        puts <<EOS
build example:
  ruby make.rb win32
  ruby make.rb win64
  ruby make.rb android
  ruby make.rb osx
  ruby make.rb ios
  ruby make.rb default

  ruby make.rb win32 -f
  ruby make.rb win32 clean
  ruby make.rb win32 debug run
  ruby make.rb win32 release
EOS
        return
      end

      self.build_type ARGV[0], ARGV[1..-1]
    end

    def self.build_type(type, args)
      self.new.run_build(type, args)
    end

    def puts_flush(*a)
      puts *a
      STDOUT.flush
    end

    def run_build(type, args)
      build_path = "build/#{type}"

      if args.include?("-f") || args.include?("clean")
        puts_flush "clean"
        FileUtils.rm_rf build_path
        if args.include? "clean"
          return
        end
      end

      FileUtils.mkdir_p build_path
      FileUtils.chdir build_path

      cmd = ""

      @current_type = type

      case type
      when "win32"
        @is_vc = true
        self.call_system "cmake ../.. -G \"Visual Studio 14 2015\" -DCOR_BUILD_TYPE=#{type} #{get_cmake_option}"
        do_win_build
      when "win64"
        @is_vc = true
        do_build_output "cmake ../.. -G \"Visual Studio 14 2015 Win64\" -DCOR_BUILD_TYPE=#{type} #{get_cmake_option}"
        do_win_build
      when "android"
        build_android type
      when "osx"
        self.call_system "cmake ../.. -G\"Unix Makefiles\" -DCOR_BUILD_TYPE=#{type} #{get_cmake_option}"
        if args.include? "--gen-only"
          return
        end
        do_default_build
      when "ios"
        build_ios type
      when "default"
        if RUBY_PLATFORM.downcase =~ /mswin(?!ce)|mingw|cygwin|bccwin/
          #self.call_system "cmake ../.. -G\"Visual Studio 14 2015 Win64\" -DCOR_BUILD_TYPE=#{type}"
          #do_win_build
          #self.call_system "cmake ../.. -G\"MSYS Makefiles\" -DCOR_BUILD_TYPE=#{type}"
          self.call_system "cmake ../.. -G\"Unix Makefiles\" -DCOR_BUILD_TYPE=#{type} #{get_cmake_option}"
        else
          self.call_system "cmake ../.. -G\"Unix Makefiles\" -DCOR_BUILD_TYPE=#{type} #{get_cmake_option}"
        end
        if args.include? "--gen-only"
          return
        end
        self.call_system "make -j 4"
      end

      if @all_success
        puts_flush "all success!"
      else
        puts_flush "some failed!"
      end
      puts_flush "build ended!"

      if @all_success && args.include?("run")
        puts_flush "==> run ==>"
        config = "Debug"
        if args.include?("debug")
          config = "Debug"
        elsif args.include?("release")
          config = "Release"
        end
        case type
        when "win32"
          exes = Dir.glob("**/Debug/*.exe")
          Dir.chdir File.dirname(exes[0])
          exes = Dir.glob("*.exe")
          self.call_system "#{exes[0]} #{get_run_option}"
        when "win64"
          exes = Dir.glob("**/Debug/*.exe")
          Dir.chdir File.dirname(exes[0])
          exes = Dir.glob("*.exe")
          self.call_system "#{exes[0]} #{get_run_option}"
        end
      end
    end

    def get_cmake_option
      if ARGV.select{|v| v.match(/--cmake-option=\S+/)}.length > 0
        puts_flush "get_cmake_option #{ARGV.select{|v| v.match(/--cmake-option=\S+/)}}"
        return ARGV.select{|v| v.match(/--cmake-option=\S+/)}.map{|v| v.gsub(/--cmake-option=/, "")}.join(" ")
      end
      ""
    end

    def get_run_option
      if ARGV.select{|v| v.match(/--run-option=\S+/)}.length > 0
        puts_flush "get_cmake_option #{ARGV.select{|v| v.match(/--run-option=\S+/)}}"
        return ARGV.select{|v| v.match(/--run-option=\S+/)}.map{|v| v.gsub(/--run-option=/, "")}.join(" ")
      end
      ""
    end

    def cvt_string str
      if @is_vc
        return str.encode("UTF-8", "Shift_JIS")
      else
        str
      end
    end

    def do_build_output cmd
      puts_flush "cmd srart #{cmd}"
      STDOUT.flush
      if @is_vc

        Open3.popen3(cmd) do |i, o, e, w|
          i.close
          o.each do |line|
            puts_flush "#{cvt_string line}"
          end
          e.each do |line|
            puts_flush "#{cvt_string line}"
          end
          result = w.value.success?
          @all_success &&= result
          @results << "cmd '#{cmd}' | success? -> #{w.value.success?} | #{w}"
          unless @all_success
            raise "call_system '#{cmd}' failed"
          end
        end
      else
        result = self.call_system cmd
        @all_success &&= result
        @results << "cmd '#{cmd}' | success? -> #{result} | #{$?}"
        unless @all_success
          raise "call_system '#{cmd}' failed"
        end
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
        puts_flush "#{v}"
      end
    end

    def call_on_windows(cmds)
      cmd = "cmd /c \"" + cmds.split("\n").map{|v| "#{v.gsub("\\", "\\\\\\\\")}"}.join("&") + "\""
      do_build_output cmd
    end

    def do_win_build

      projects = Dir.glob("**/*.vcxproj")
      projects.each do |project|
        puts_flush "project #{project}"
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

      if ARGV.include? "--gen-only"
        return
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
        puts_flush "#{v}"
      end
    end

    def build_android(type)
      configurations = ["Release", "Debug"]
      archs = ["armeabi", "armeabi-v7a", "x86"]
      if ARGV.include? "release"
        configurations = ["Release"]
      elsif ARGV.include? "debug"
        configurations = ["Debug"]
      end
      if ARGV.select{|v| v.match(/--arch=\S+/)}.length > 0
        archs = ARGV.select{|v| v.match(/--arch=\S+/)}.map{|v| v.gsub(/--arch=/, "")}
      end
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
            "-G\"Unix Makefiles\"",
            "#{get_cmake_option}"
            ].join(" ")
          do_build_output cmd
          unless ARGV.include? "--gen-only"
            do_build_output "which make"
            if ARGV.include? "--for-ci"
              do_build_output "make -j 2"
            elsif ARGV.select{|v| v.match(/-j\d+/)}.length > 0
              do_build_output "make -j #{ARGV.select{|v| v.match(/-j\d+/)}[0].scan(/\d+/)[0]}"
            else
              do_build_output "make -j 4"
            end
          end
          FileUtils.chdir "../.."
        end
      end
    end

    def build_ios(type)
      configurations = ["Release", "Debug"]
      archs = {
        "OS" => ["armv7", "armv7s", "arm64"],
        "SIMULATOR" => ["i386", "x86_64"],
        "SIMULATOR64" => ["i386", "x86_64"],
      }
      #platforms = ["SIMULATOR64", "SIMULATOR", "OS"]
      platforms = ["SIMULATOR64", "OS"]
      if ARGV.include? "release"
        configurations = ["Release"]
      elsif ARGV.include? "debug"
        configurations = ["Debug"]
      end
      if ARGV.select{|v| v.match(/--arch=\S+/)}.length > 0
        archs = ARGV.select{|v| v.match(/--arch=\S+/)}.map{|v| v.gsub(/--arch=/, "")}
      end
      if ARGV.select{|v| v.match(/--platform=\S+/)}.length > 0
        platforms = ARGV.select{|v| v.match(/--platform=\S+/)}.map{|v| v.gsub(/--platform=/, "")}
      end
      puts_flush "platforms #{platforms}"
      platforms.each do |platform|
        configurations.each do |configuration|

          FileUtils.mkdir_p "#{platform}/#{configuration}"
          FileUtils.chdir "#{platform}/#{configuration}"
          cmd = [
            "cmake ../../../.. ",
            "-DCOR_BUILD_TYPE=#{type}",
            "-DCOR_CMAKE_OSX_ARCHITECTURES=\"#{archs[platform].join ";"}\"",
            "-DCMAKE_TOOLCHAIN_FILE=../../../external/ios_cmake/ios.cmake",
            "-DIOS_PLATFORM=#{platform}",
            "#{get_cmake_option}"
            ].join(" ")
          do_build_output cmd
          unless ARGV.include? "--gen-only"
            do_build_output "which make"
            if ARGV.include? "--for-ci"
              do_build_output "make -j 2"
            elsif ARGV.select{|v| v.match(/-j\d+/)}.length > 0
              do_build_output "make -j #{ARGV.select{|v| v.match(/-j\d+/)}[0].scan(/\d+/)[0]}"
            else
              do_build_output "make -j 4"
            end
          end
          FileUtils.chdir "../.."

        end
      end

      if ARGV.include? "--gen-only"
         return
      end

      configurations.each do |configuration|
        FileUtils.mkdir_p "#{configuration}"
        FileUtils.chdir "#{configuration}"

        source_a_list = Dir.glob("../*/#{configuration}/*.a")
        puts_flush "pwd #{Dir.pwd}"
        puts_flush "source_a_list #{source_a_list}"
        a_name = File.basename source_a_list[0]
        if File.exists? a_name
          FileUtils.rm a_name
        end
        do_build_output "lipo -create #{source_a_list.join(" ")} -output #{a_name}"

        FileUtils.chdir ".."
      end
    end

  end

end








