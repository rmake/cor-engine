# ruby select_file.rb
require 'fileutils'

mruby_path = "../../mruby"


def list path

  files = []

  Dir.foreach(path){ |fn|
    next if fn == "."
    next if fn == ".."
    next if fn.scan(/^\./).length > 0

    cpath = "#{path}/#{fn}"

    if File::ftype(cpath) == "directory"

      #print "dir #{cpath}\n"
      files += list cpath
    else

      if (fn.index(/(.*\.h)/) || fn.index(/(.*\.c)/)) && (cpath.index(/build\/mrbgems/) ||
          (cpath.index(/build\/host/) && !cpath.index(/build\/host-debug/)) ||
          !cpath.index(/build\//)) && !cpath.index(/test/) &&
          !cpath.index(/examples/) && !cpath.index(/mruby-bin-*/)
        print "added #{cpath}\n"
        files << cpath
      end

    end

  }

  files

end

files = list mruby_path

src_files = []
src_path = "build_src"

FileUtils.mkpath src_path

files.each do |fn|
  if false
    #fnb = File.basename fn
    #dn = File.dirname(fn).gsub("../../mruby/", "")
    #cpp_fn = fnb.gsub(/\.c/, ".cpp")
    #ddn = "#{cpp_path}/#{dn}"
    #cpp_fn_path = "#{ddn}/#{cpp_fn}"
    #FileUtils.mkpath ddn
    #FileUtils.copy fn, cpp_fn_path
    #cpp_files << cpp_fn_path
    #print "#{cpp_fn_path}\n"
  else

    next if fn.index("mrblib/init_mrblib.c")
    next if fn.index("tools/mrbc/mrbc.c")

    fnb = File.basename fn
    dn = File.dirname(fn).gsub("../../mruby/", "")
    ddn = "#{src_path}/#{dn}"
    dfn = "#{ddn}/#{fnb}"
    FileUtils.mkpath ddn
    FileUtils.copy fn, dfn

    src_files << dfn
    print "#{dfn}\n"
  end

end
files = src_files

files.select! {|v| File.extname(v) != ".h"}
files.map! {|v| "$(MRUBY_PATH)/" + v }

mksrc = ''

File.open 'Android.mk', 'rb' do |f|
  mksrc = f.read.to_s
end

src_str = <<EOF
# mruby_make_begin
LOCAL_SRC_FILES:= #{files.join(" \\\n  ")}
# mruby_make_end
EOF

mksrc = mksrc.gsub(/# mruby_make_begin\n.*# mruby_make_end\n/m, src_str)

print "#{mksrc}\n"

File.open 'Android.mk', 'wb' do |f|
  f.write mksrc
end

File.open 'FileList.mk', 'wb' do |f|
  f.write src_str
end



