require "fileutils"
require "open3"

def init_build build_path, type

  if ARGV.include? "-f"
    puts "clean"
    FileUtils.rm_rf build_path
  end

  FileUtils.mkdir_p build_path
  FileUtils.chdir build_path

  system "cmake .. -G \"#{type}\""
end

@results = []

def do_build_output cmd
  o, e, s = Open3.capture3 cmd
  puts "cmd #{cmd} of o -> "
  puts "#{o.encode("UTF-8", "Shift_JIS")}"
  puts "cmd #{cmd} of e -> #{e.encode("UTF-8", "Shift_JIS")}"
  puts "#{e.encode("UTF-8", "Shift_JIS")}"
  @results << "cmd #{cmd} | success? -> #{debug_s.success?} | #{debug_s}"
end

def do_build

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
