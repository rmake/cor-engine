#ruby rec_copy.rb ../resources /cygdrive/c/Dycoon/tmp/dest_files (.*\.h)|(.*\.cpp)
require 'fileutils'

src_path = ARGV[0]
dst_path = ARGV[1]

pattern = Regexp.new(ARGV[2]) || /.*/

def copy_files(src_path, dst_path, pattern)

  Dir.foreach(src_path){ |fn|
    next if fn == "."
    next if fn == ".."
    next if fn.scan(/^\./).length > 0

    spath = "#{src_path}/#{fn}"
    dpath = "#{dst_path}/#{fn}"

    #if FileTest::directory?(spath)
    if File::ftype(spath) == "directory"

      begin
        #Dir.mkdir(dpath)
      rescue

      end
      copy_files(spath, dpath, pattern)
    else
      if (!File.exist?(dpath) || !FileUtils.cmp(spath, dpath)) && fn.index(pattern)
        FileUtils.mkpath dst_path
        FileUtils.cp(spath, dst_path)
      end

    end

  }


end

copy_files(src_path, dst_path, pattern)


