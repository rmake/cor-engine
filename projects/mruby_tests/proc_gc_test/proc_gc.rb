def delay_call(&block)

  p = Proc.new do
    yield
  end
  p

end

class C

  attr_accessor :v
  attr_accessor :t

  def initialize iv
    self.v = iv
  end

end

n = 7187
m = (n / 121).floor

a = []

n.times do |j|
  p = delay_call do
    if j % m == 0
      puts "test init #{j}"
    end
  end
  c = C.new(
    delay_call do
      p.call
    end
  )
  a[j] = c
end

n.times do |i|
  n.times do |j|
    if (i + j) % m == 0
      p = delay_call do
        if j % m == 0
          puts "test m #{i} #{j}"
        end
      end
      c = C.new(
        delay_call do
          p.call
        end
      )
      a[j] = c
    end
    a[j].t = nil
  end

  a.each do |c|
    c.t = nil
    p = c.v.call
  end


end