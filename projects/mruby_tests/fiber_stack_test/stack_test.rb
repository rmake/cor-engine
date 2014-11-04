

class C
  attr_accessor :n
  def initialize n
    if n > 0
      c = C.new n - 1
      self.n = n + c.n
    else
      self.n = n
    end
  end
end

puts C.new(1000).n

f = Fiber.new do
  puts C.new(1000).n
end

f.resume

