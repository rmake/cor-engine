
class OperatorSample
  
  def initialize
    
    
    v0 = Vec2.create(10, 20)
    v1 = Vec2.create(20, 30)
    
    v2 = v0 + v1
    
    CorMessageView.simple_show "v2 #{v2.x}, #{v2.y}"
    
    
  end

end


