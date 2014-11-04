
$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'rubygems'
require 'RMagick'
require 'json'

a = Cor.u.file_list 'build_tmp/decomposite_source'
h = {}
a.each do |fn|
  puts "fn #{fn}"
  
  base = File.basename fn, ".*"
  k = "#{File.dirname fn}/#{base}"
  h[k] = base
end

h.each do |k, v|
  puts "k #{k}, v #{v}"
  
  img = Magick::Image.read("#{k}.png").first
  str = Cor.u.file_read "#{k}.json" 
  o = JSON.parse str
  
  
  puts "o #{o.keys}"
  o["frames"].each do |f|
    frame = f["frame"]
    croped = img.crop(frame["x"], frame["y"], frame["w"], frame["h"], true)
    ca = croped.get_pixels 0, 0, croped.columns, croped.rows
    ca = ca.map do |pixel|
      if pixel.opacity > 65535 - 256 * 10
        pixel.opacity = 65535
      end
      pixel
    end
    croped.store_pixels 0, 0, croped.columns, croped.rows, ca
    puts "ca.first #{ca.first}"
    
    path = "build_tmp/composite_source/#{v}"
    FileUtils.mkpath path
    croped.write "#{path}/#{f["filename"]}"
  end
  
end


