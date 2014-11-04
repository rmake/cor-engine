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


oi = 1000

10.times do |i|
  n = i * 100 + 17

  [93, 121, 127].each do |j|
    m = j + 1

    a = []

    n.times do |j|
      p = delay_call do
        if j % oi == 0
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
            if j % oi == 0
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

  end

end

puts "succeeded!"
