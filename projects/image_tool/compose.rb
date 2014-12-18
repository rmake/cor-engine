
$LOAD_PATH.push('.')
$LOAD_PATH.push('../../libraries/scripts/lib')
require 'cor/utility'

require 'rubygems'
require 'RMagick'
require 'json'

source_path = ARGV[0] || "build_tmp/composite_source"
destination_path = ARGV[1] || "build_tmp/composite_destination"

output_name = ARGV[2] || "all"

img_sz = ARGV[3] || "2048"
img_sz = img_sz.to_i
img_sz_y = ARGV[4] || img_sz
img_sz_y = img_sz_y.to_i
remove_mode = ARGV[5] || false

a = Cor.u.file_list source_path

packed = Magick::Image.new img_sz, img_sz_y do
  self.background_color = "#00000000"
end

aw = packed.columns
ah = packed.rows
left_tops = [{:x => 1, :y => 1}]

images = []

def is_remove(fn)
  (fn.match(/right00/) || fn.match(/rightBack00/) || fn.match(/rightFront00/))
end

def is_left(fn)
  (fn.match(/left00/) || fn.match(/leftBack00/) || fn.match(/leftFront00/))
end

a.each do |fn|
  if File.extname(fn) != ".png"
    next
  end
  
  if remove_mode && is_remove(fn)
    next
  end

  puts "fn #{fn}"
  img = Magick::Image.read(fn).first
  
  #ofn = fn.gsub(/^#{source_path}\/.*?\//, "")
  ofn = fn.gsub(/^#{source_path}\//, "")
  
  
  iw = img.columns
  ih = img.rows
  
  ca = img.get_pixels 0, 0, img.columns, img.rows
  ca = ca.map do |pixel|
    if pixel.opacity > 65535 - 256 * 10
      pixel.opacity = 65535
    end
    pixel
  end
  img.store_pixels 0, 0, img.columns, img.rows, ca
  puts "ca.first #{ca.first}"
  
  px = img.get_pixels 0, 0, iw, ih
  
  
  mnx = iw
  mny = ih
  mxx = 0
  mxy = 0
  
  ip = 0
  i = 0
  while i < ih
    j = 0
    while j < iw
      
      p = px[ip]
      if p.opacity < 65535
        if mnx > j
          mnx = j
        end
        if mny > i
          mny = i
        end
        if mxx < j
          mxx = j
        end
        if mxy < i
          mxy = i
        end
      end
      
      ip += 1
      j += 1
    end
    i += 1
  end
  
  if mxx < mnx
    mnx = 0
    mny = 0
    mxx = 0
    mxy = 0
  end
  
  images << {
    :r => {
      :x => mnx,
      :y => mny,
      :w => mxx - mnx + 1,
      :h => mxy - mny + 1,
    },
    :img => img,
    :file_name => ofn,
  }
  
end

images.sort! do |a, b|
  b[:r][:h] <=> a[:r][:h]
end

mnl = 0

past_rects = []

frames = []

#begin
  images.each do |table|
    
    img = table[:img]
    r = table[:r]
    puts "h #{r[:h]}, w #{r[:w]}, len #{left_tops.length}"
    
    i = 0
    lt = left_tops[i]
    
    while lt[:x] + r[:w] >= aw || lt[:y] + r[:h] >= ah || 
        (past_rects.any?{|ra| 
          ra[:x] <= lt[:x] + r[:w] && 
          ra[:y] <= lt[:y] + r[:h] &&
          lt[:x] <= ra[:x] + ra[:w] && 
          lt[:y] <= ra[:y] + ra[:h]
        })
      i += 1
      lt = left_tops[i]
    end
      
    croped = img.crop r[:x], r[:y], r[:w], r[:h], true
    
    packed.composite! croped, lt[:x], lt[:y], Magick::OverCompositeOp
    
    past_rects << {
      :x => lt[:x],
      :y => lt[:y],
      :w => r[:w],
      :h => r[:h],
    }
    
    lh = {
      :x => lt[:x] + r[:w] + 1,
      :y => lt[:y],
    }
    5.times do |i|
      h = {
        :x => lt[:x] + r[:w] + 1,
        :y => lt[:y] - i * 8,
      }
      if left_tops.any? {|lt| lt[:x] <= h[:x] && lt[:y] <= h[:y]} &&
          !past_rects.any?{|ra| 
            ra[:x] <= h[:x] && 
            ra[:y] <= h[:y] &&
            h[:x] <= ra[:x] + ra[:w] && 
            h[:y] <= ra[:y] + ra[:h]
          }
        lh = h
      end
    end
    #puts " lh#{lh}"
    left_tops << lh
    
    lh = {
      :x => lt[:x],
      :y => lt[:y] + r[:h] + 1,
    }
    5.times do |i|
      h = {
        :x => lt[:x] - i * 8,
        :y => lt[:y] + r[:h] + 1,
      }
      if left_tops.any? {|lt| lt[:x] <= h[:x] && lt[:y] <= h[:y]} &&
          !past_rects.any?{|ra| 
            ra[:x] <= h[:x] && 
            ra[:y] <= h[:y] &&
            h[:x] <= ra[:x] + ra[:w] && 
            h[:y] <= ra[:y] + ra[:h]
          }
        lh = h
      end
    end
    5.times do |i|
      h = {
        :x => lt[:x] + r[:w] + i * 8,
        :y => lt[:y] - 8,
      }
      if left_tops.any? {|lt| lt[:x] <= h[:x] && lt[:y] <= h[:y]} &&
          !past_rects.any?{|ra| 
            ra[:x] <= h[:x] && 
            ra[:y] <= h[:y] &&
            h[:x] <= ra[:x] + ra[:w] && 
            h[:y] <= ra[:y] + ra[:h]
          }
        lh = h
      end
    end
    
    #puts " lh#{lh}"
    left_tops << lh
    
    left_tops.sort! do |a, b|
      b[:y] <=> a[:y]
    end
    
    left_tops.select! do |lt|
      !past_rects.any?{|ra| 
        ra[:x] <= lt[:x] && 
        ra[:y] <= lt[:y] &&
        lt[:x] <= ra[:x] + ra[:w] && 
        lt[:y] <= ra[:y] + ra[:h]
      }
    end
    
    left_tops.sort! do |a, b|
      (a[:x] * 0.1 + a[:y]) <=> (b[:x] * 0.1 + b[:y])
    end
    
    left_tops.uniq!
    
    #left_tops.select! do |lt|
    #  !left_tops.any?{|tlt| 
    #    dx = (tlt[:x] - lt[:x]).abs
    #    dy = (tlt[:y] - lt[:y]).abs
    #    next false if dx == 0 && dy == 0
    #    a = [dx, dy].min / [dx, dy].max
    #    tlt[:x] < lt[:x] - 10 &&
    #    tlt[:y] < lt[:y] - 10 &&
    #    a > 0.9
    #  }
    #end
    
    mnl = aw
    left_tops.each do |lt|
      if mnl < lt[:x]
        mnl = lt[:x]
      end
    end
    
    frames << {
      "filename" => table[:file_name],
      "frame" => {
        "x" => lt[:x],
        "y" => lt[:y],
        "w" => r[:w],
        "h" => r[:h],
      },
      "rotated" => false,
      "trimmed" => true,
      "spriteSourceSize" => {
        "x" => r[:x],
        "y" => r[:y],
        "w" => r[:w],
        "h" => r[:h],
      },
      "sourceSize" => {
        "w" => img.columns,
        "h" => img.rows,
      }
    }
    
  end

#rescue
#  puts "failed"
#end

FileUtils.mkpath destination_path
packed.write "#{destination_path}/#{output_name}.png"

if remove_mode
  frames.each do |f|
    fn = f["filename"]
    if is_left(fn)
      h = f.clone
      h["filename"] = f["filename"].gsub(/left/, "right")
      frames << h
    end
  end
end


data = {
  "frames" => frames,
}

json = JSON.unparse data

Cor.u.file_write "#{destination_path}/#{output_name}.json", json
