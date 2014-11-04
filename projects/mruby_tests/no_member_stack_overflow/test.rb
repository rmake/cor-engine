
class C
  attr_accessor :h
end

c = C.new
c.h = {:h => c}
puts c.inspect

