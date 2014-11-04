
require 'fileutils'
require 'uri'



run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir


Dir.chdir '../../libraries/scripts/'

`ruby make_all_clean_gcc.rb`

Dir.chdir run_dir

print "run_dir #{run_dir}\n"

`ruby run.rb with_clean`

def search_files(src_path, pattern)
  
  a = []
  
  Dir.foreach(src_path){ |fn|
    next if fn == "."
    next if fn == ".."
    next if fn.scan(/^\./).length > 0

    spath = "#{src_path}/#{fn}"

    #if FileTest::directory?(spath)
    if File::ftype(spath) == "directory"

      #print "dir #{spath}\n"
      
      a += search_files(spath, pattern)
    else
      #print "file #{spath}\n"
      if fn.index(pattern)
        print "file #{spath}\n"
        a << spath
      end

    end

  }
  a
end

a = search_files("..", "test_result.log")

is_success = true

strs = a.map do |fn|
  s = "__"
  File.open fn, "r" do |f|
    s = f.read
  end
  sa = s.scan(/.*?\n/m)
  is_success = false if sa[0] != "succeeded\n"
  [sa[0], fn + ' -> ' + sa[0], fn + ' -> ' + sa[1..sa.length].join('')]
end

strs = strs.map do |v|
  if v[0] == "succeeded\n"
    v[1]
  else
    v[2]
  end
end
str = strs.join("<br />").gsub("\n", '')

if is_success
  str = '<span class="label label-success">succeeded!</span><br />' + str
else
  str = '<span class="label label-important">failed!</span><br />' + str
end

str = str.gsub("\"", '\"')

#str = URI.encode_www_form_component "#{str}"

call = "sh -c \"curl --data-urlencode 'source=#{str}' -d format=html https://idobata.io/hook/generic/eeb150db-9169-4fab-a275-44d68c61ce8f\""
print "#{call}"
`#{call}`
