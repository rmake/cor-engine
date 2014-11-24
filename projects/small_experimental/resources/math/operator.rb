

class OperatorTest

  def initialize
  
    #
    v0 = Vector3F.create 1, 2, 3
    
    Logger.debug "v0 = #{v0.x}, #{v0.y}, #{v0.z}"
    
    #
    v1 = v0._asterisk__0 3
    
    Logger.debug "v1 = #{v1.x}, #{v1.y}, #{v1.z}"
  
    #
    v1 = v0 * 3
    
    Logger.debug "v1 = #{v1.x}, #{v1.y}, #{v1.z}"
    
    #
    v1 = v0 + Vector3F.create(2, 2, 3)
    
    Logger.debug "v1 = #{v1.x}, #{v1.y}, #{v1.z}"
    
    #
    v1 = v0 - Vector3F.create(2, 2, 3)
    
    Logger.debug "v1 = #{v1.x}, #{v1.y}, #{v1.z}"
    
    #
    v1 = -v0
    
    Logger.debug "v1 = #{v1.x}, #{v1.y}, #{v1.z}"
    
    #
    v1 = Vector3F.create
    v1[0] = 7
    v1[1] = 8
    v1[2] = 9
    
    Logger.debug "v1 #{v1[0]}, #{v1[1]}, #{v1[2]}"
  
  end

end

OperatorTest.new


