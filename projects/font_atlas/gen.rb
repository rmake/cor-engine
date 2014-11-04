
require "rubygems"
require "RMagick"

def set_option(d)
  #font_file = File.dirname(__FILE__) + "/migmix-1p-regular.ttf"
  font_file = File.dirname(__FILE__) + "/MTLc3m.ttf"
  
  point_size = 28.to_f
  interline_spacing = 2.to_f
  kerning = 0.to_f
  stroke_color = "transparent"
  fill_color = "#ffffff"
  text_align = "center"
  
  d.font = font_file
  d.pointsize = point_size
  #d.interline_spacing = interline_spacing
  #d.stroke = "#ff0000"
  #d.stroke_width = 1
  d.fill = fill_color
  d.font_weight = Magick::AnyWeight
  d.kerning = kerning
  d.text_antialias = true
  d.gravity = Magick::CenterGravity
  #d.text_align(Magick::CenterAlign)
  
  if text_align == "left"
    d.gravity = Magick::WestGravity
    #d.text_align(Magick::LeftAlign)
  elsif text_align == "center"
    d.gravity = Magick::CenterGravity
    #d.text_align(Magick::CenterAlign)
  elsif text_align == "right"
    d.gravity = Magick::EastGravity
    #d.text_align(Magick::RightAlign)
  end
end

def text_rect(text)
    
  d = Magick::Draw.new
  
  set_option(d)
  
  metrics = d.get_multiline_type_metrics(text)

  return {:x => 0, :y => 0, :width => metrics.width.to_i + 5, :height => metrics.height.to_i + 4}
end

def draw_text_image(text)
  text_rect = text_rect(text)
  
  d = Magick::Draw.new
  
  set_option(d)
  
  image = Magick::Image.new(text_rect[:width], text_rect[:height]){
    self.background_color = "transparent"
  }
  
  image_bg = Magick::Image.new(text_rect[:width], text_rect[:height]){
    self.background_color = "transparent"
  }
  
  d = Magick::Draw.new
  set_option(d)
  d.fill = "#000000ff"
  d.stroke_width = 0
  d.stroke = "#00000000"
  d.text(0, 0, text)
  d.draw(image_bg)

  3.times do |i|
    3.times do |j|
      image = image.composite! image_bg, j + 0, i + 0, Magick::OverCompositeOp
      
    end
  end
  
  image_bg = Magick::Image.new(text_rect[:width], text_rect[:height]){
    self.background_color = "transparent"
  }
  d = Magick::Draw.new
  set_option(d)
  d.fill = "#ffffffff"
  d.stroke_width = 0
  d.stroke = "#00000000"
  d.text(0, 0, text)
  d.draw(image_bg)
  
  3.times do |i|
    3.times do |j|
      if i == 0 || i == 2 || j == 0 || j == 2
        
      else
        image = image.composite! image_bg, j + 0, i + 0, Magick::OverCompositeOp
      end
    end
  end
  
  #d.text(0, 0, text)
  
  #d.stroke = "#ff0000"
  #d.stroke_width = 2
  #d.fill = "#00000000"
  #d.rectangle(0, 0, text_rect[:width], text_rect[:height])
  
  
  image
end


str = <<EOS
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!"#$%&'()=~|-^\`{@[+*};:]<>?_,./
EOS

image = draw_text_image str
image.write "out.png"

str = ""
offset = " ".getbyte 0

mxw = 0
mxh = 0

sz = 95

sz.times do |i|
  puts "i #{i}"
  s = " "
  s.setbyte 0, offset + i
  str += s
  if (i % 16) == 16 - 1
    str += "\n"
  end
  
  begin
    r = text_rect(s)
    if r[:width] > mxw
      mxw = r[:width]
    end
    
    if r[:height] > mxh
      mxh = r[:height]
    end
  rescue
  
  end
  
end

str = ""

puts "w = #{mxw}, h = #{mxh}"

x = 0
y = 0

image = Magick::Image.new(mxw * 16, mxh * ((sz + 15) / 16)){
  self.background_color = "transparent"
}

sz.times do |i|
  s = " "
  s.setbyte 0, offset + i
  str += s
  
  
  begin
    img = draw_text_image(s)
    
    image.composite! img, x + (mxw - img.columns) / 2, y, Magick::OverCompositeOp
  rescue
    
  end
  
  x += mxw
  if (i % 16) == 16 - 1
    str += "\n"
    x = 0
    y += mxh
  end
end

puts "str #{str}"

#image = draw_text_image str
image.write "out2.png"
    
    
    


