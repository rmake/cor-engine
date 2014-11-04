

$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'rubygems'
require 'RMagick'
require 'json'

FileUtils.mkpath "build_tmp/reduce_color_destination"

source_path = ARGV[0] || "build_tmp/reduce_color_source"
destination_path = ARGV[1] || "build_tmp/reduce_color_destination"

FileUtils.mkpath destination_path

a = Cor.u.file_list source_path
a.each do |fn|
  dfn = fn.gsub(source_path, destination_path)
  puts "fn #{fn}, dfn #{dfn}"
  
  cmd = "convert #{fn} -channel RGBA -separate \\( -dither FloydSteinberg -remap 16graycolor_ff.gif \\) -channel RGBA -combine #{dfn}"
  out = `#{cmd}`
end


