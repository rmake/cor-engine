require "cor/cmake_builder"
require "cor/cor_project"
require "cor/gen_cpp"
require "fileutils"
require "open3"
require "pathname"
require "benchmark"
require "json"

CorProject = Cor::CorProject

module Cor
  class CorBuilder

    def initialize
      @all_success ||= true
      @results ||= []
      @cs_path = Dir.glob("C:/Windows/Microsoft.NET/Framework64/v*").find do |v|
        v.match(/4\.0[^\\]*$/)
      end
      @nunit_path = 'C:\Program Files (x86)\NUnit.org\nunit-console\nunit3-console.exe'
      @nunit_dll_path = 'C:\Program Files (x86)\NUnit.org\framework\3.2.1.0\net-4.0\nunit.framework.dll'
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
  ruby make.rb --gen-cpp=cpp/some --namespace=cor::example
  ruby make.rb --gen-cpp-tmpl=cpp/some --namespace=cor::example
  ruby make.rb win64 debug run --run-option=--log_level=test_suite
EOS
        return
      end

      if ARGV.grep(/--gen-cpp=\S+/).length > 0 || ARGV.grep(/--gen-cpp-tmpl=\S+/).length > 0
        GenCpp.gen ARGV
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

        env = ENV.clone

        env.delete "tmp"
        env.delete "temp"

        Open3.popen3(env, cmd) do |i, o, e, w|
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
        end
      else
        result = self.call_system cmd
        @all_success &&= result
        @results << "cmd '#{cmd}' | success? -> #{result} | #{$?}"
      end
      unless @all_success
        raise "do_build_output '#{cmd}' failed"
      end
      result
    end

    def call_on_windows(cmds)
      cmd = "cmd /c \"" + cmds.split("\n").map{|v| "#{v.gsub("\\", "\\\\\\\\")}"}.join("&") + "\""
      do_build_output cmd
    end

    def run_build(type, args)

      @base_path = File.expand_path(File.dirname(__FILE__))
      @cor_path = File.expand_path("#{@base_path}/../../../../")
      @copy_project_path = File.expand_path("#{@cor_path}/projects/project_script/copy_project.rb")

      @here = File.expand_path(File.dirname($0))

      relative_here = Pathname.new(@here).relative_path_from(Pathname.new((File.dirname(@copy_project_path))))

      flags = []
      if args.include? "-f"
        flags << "-f"
      end

      #puts_flush Benchmark::CAPTION + " copy_project\n" + (Benchmark.measure do
        cmd = "ruby #{@copy_project_path} #{relative_here.to_s} #{flags.join " "}"
        puts_flush "cmd #{cmd}"
        self.call_system cmd
      #end).to_s

      #puts_flush Benchmark::CAPTION + " build\n" + (Benchmark.measure do

        if File.exists? "conf.rb"
          load "conf.rb"
        end

        puts_flush "CorProject.target_project #{CorProject.target_project}"

        target_project = CorProject.target_project

        FileUtils.chdir @base_path

        case target_project
        when "cor_test"
          FileUtils.chdir "#{@cor_path}/tests/unit/proj.cmake"
        when "cor_cpp_console"
          FileUtils.chdir "#{@cor_path}/projects/cor_console_app/proj.cmake"
        when "cor_mruby_console"
          FileUtils.chdir "#{@cor_path}/projects/cor_mruby_console_app/proj.cmake"
        when "cor_cocos2dx"
          #FileUtils.chdir "#{@cor_path}/projects/cor_lib_test_main/proj.cmake"
        when "cor_cs_console", "cor_cs_test"
          FileUtils.chdir "#{@cor_path}/libraries/cor_cpp_dll/proj.cmake"
        end

        if ["cor_cs_console","cor_cs_test"].include? target_project
          old_args = args
          args = args.clone
          args.delete "run"
        end

        if target_project != "cor_cocos2dx"
          CmakeBuilder.build_type(type, args)

          if target_project == "cor_cs_console"
            args = old_args
            FileUtils.mkdir_p "#{@cor_path}/projects/cor_cs_console_app/proj.cs/build"
            FileUtils.chdir "#{@cor_path}/projects/cor_cs_console_app/proj.cs/build"
            source_directories = JSON.parse(File.read "#{@cor_path}/libraries/cor_cs_import/proj.cs/source_directories_local_conf.txt")
            source_directories_option = source_directories["source_directories"].
              map{|v| "/recurse:#{v.gsub(File::SEPARATOR, File::ALT_SEPARATOR || File::SEPARATOR)}\\*.cs"}.join(" ")
            importer_source_directory_option = "/recurse:#{@cor_path.gsub(File::SEPARATOR, File::ALT_SEPARATOR || File::SEPARATOR
              )}\\libraries\\cor_cs_import\\sources\\*.cs"

            configurations = ["Release", "Debug"]
            if ARGV.include? "release"
              configurations = ["Release"]
            elsif ARGV.include? "debug"
              configurations = ["Debug"]
            end

            if type == "win32" || type == "win64"
              @is_vc = true
            end

            configurations.each do |configuration|
              FileUtils.mkdir_p "./#{type}/#{configuration}"
              self.do_build_output "#{@cs_path}\\csc /debug /out:#{"./#{type}/#{configuration}/cor_cs_console_app.exe"} #{importer_source_directory_option} #{source_directories_option} /recurse:..\\..\\sources\\*.cs"

              FileUtils.install Dir.glob(
                "#{@cor_path}/libraries/cor_cpp_dll/proj.cmake/build/#{type}/#{configuration}/*",
                ), "./#{type}/#{configuration}"
            end

            if @all_success && args.include?("run")
              puts_flush "==> run ==>"
              configuration = "Debug"
              if args.include?("debug")
                configuration = "Debug"
              elsif args.include?("release")
                configuration = "Release"
              end
              if type == "win32" || type == "win64"
                exes = Dir.glob("./#{type}/#{configuration}/*.exe")
                self.do_build_output "#{exes[0]}"
              end
            end
          elsif target_project == "cor_cs_test"
            args = old_args
            FileUtils.mkdir_p "#{@cor_path}/tests/cs/proj.cs/build"
            FileUtils.chdir "#{@cor_path}/tests/cs/proj.cs/build"
            source_directories = JSON.parse(File.read "#{@cor_path}/libraries/cor_cs_import/proj.cs/source_directories_local_conf.txt")
            source_directories_option = source_directories["source_directories"].
              map{|v| "/recurse:#{v.gsub(File::SEPARATOR, File::ALT_SEPARATOR || File::SEPARATOR)}\\*.cs"}.join(" ")
            importer_source_directory_option = "/recurse:#{@cor_path.gsub(File::SEPARATOR, File::ALT_SEPARATOR || File::SEPARATOR
              )}\\libraries\\cor_cs_import\\sources\\*.cs"

            configurations = ["Release", "Debug"]
            if ARGV.include? "release"
              configurations = ["Release"]
            elsif ARGV.include? "debug"
              configurations = ["Debug"]
            end

            if type == "win32" || type == "win64"
              @is_vc = true
            end

            configurations.each do |configuration|
              FileUtils.mkdir_p "./#{type}/#{configuration}"
              self.do_build_output "#{@cs_path}\\csc /debug /target:library /r:\"#{@nunit_dll_path}\" /out:#{"./#{type}/#{configuration}/cor_cs_test.dll"} #{importer_source_directory_option} #{source_directories_option}"

              FileUtils.install Dir.glob(
                "#{@cor_path}/libraries/cor_cpp_dll/proj.cmake/build/#{type}/#{configuration}/*",
                ), "./#{type}/#{configuration}"
            end

            if @all_success && args.include?("run")
              puts_flush "==> run ==>"
              configuration = "Debug"
              if args.include?("debug")
                configuration = "Debug"
              elsif args.include?("release")
                configuration = "Release"
              end
              if type == "win32" || type == "win64"
                FileUtils.cp @nunit_dll_path, "./#{type}/#{configuration}/"
                self.do_build_output "\"#{@nunit_path}\" ./#{type}/#{configuration}/cor_cs_test.dll"
              end
            end
          end
        else
          FileUtils.chdir "#{@cor_path}/libraries/cor_all_cocos2dx/proj.cmake"
          CmakeBuilder.build_type(type, args.select{|v| v != "run"})

          if type == "android"
            FileUtils.chdir "#{@cor_path}/projects/cor_lib_test_main/proj.android"
            if args.include? "run"
              self.call_system "cocos run -p android -j 6 --ndk-mode release"
            else
              if args.include? "--for-ci"
                self.call_system "cocos compile -p android -j 2 --ndk-mode release --app-abi=armeabi-v7a"
              else
                self.call_system "cocos compile -p android -m release -j 6 --ndk-mode release"
              end
            end

          elsif type == "win32"
            @all_success = true
            @is_vc = true
            @results = []

            FileUtils.chdir "#{@cor_path}/projects/cor_lib_test_main/proj.win32.cmake_lib"

            if type == "win32"
              cmds = <<EOS
call "#{CmakeBuilder::VS_PATH}\\VC\\vcvarsall.bat" x86
EOS
            else
              cmds = <<EOS
call "#{CmakeBuilder::VS_PATH}\\VC\\vcvarsall.bat" x64
EOS
            end

            if args.include? "release"
              call_on_windows cmds + <<EOS
msbuild.exe cor_lib_test_main.sln /p:configuration=release /maxcpucount:4 /p:BuildInParallel=true
EOS
            elsif args.include? "debug"
              call_on_windows cmds + <<EOS
msbuild.exe cor_lib_test_main.sln /p:configuration=debug /maxcpucount:4 /p:BuildInParallel=true
EOS
            else
              call_on_windows cmds + <<EOS
msbuild.exe cor_lib_test_main.sln /p:configuration=debug /maxcpucount:4 /p:BuildInParallel=true
EOS
              call_on_windows cmds + <<EOS
msbuild.exe cor_lib_test_main.sln /p:configuration=release /maxcpucount:4 /p:BuildInParallel=true
EOS
            end

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
                exes = Dir.glob("**/Debug.win32/*.exe")
                Dir.chdir File.dirname(exes[0])
                exes = Dir.glob("*.exe")
                self.call_system "#{exes[0]}"
              when "win64"
                exes = Dir.glob("**/Debug.win32/*.exe")
                Dir.chdir File.dirname(exes[0])
                exes = Dir.glob("*.exe")
                self.call_system "#{exes[0]}"
              end
            end
          end

        end


      #end).to_s

    end

  end
end
