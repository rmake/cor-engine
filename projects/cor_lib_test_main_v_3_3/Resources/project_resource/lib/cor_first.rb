
include CorType
include CorSystem
include CorDataStructure
include CorMrubyInterface
include CorCocos2dxConverter
include CorCocos2dxMrubyInterface
include Cocos2d
include Cocos2dExtension
include Cocosdenshion

module Cor
  
  def self.u=(v)
    @u = v
  end

  def self.u
    @u
  end
end

class Object
  @@inspect_table = {}
  alias :old_inspect :inspect
  def inspect
    unless @@inspect_table[self.object_id]
      @@inspect_table[self.object_id] = self
      r = self.old_inspect
      @@inspect_table.delete self.object_id
      r
    else
      "#<C:0x******** ...>"
    end
  end
end

class Hash
  @@inspect_table = {}
  alias :old_inspect :inspect
  def inspect
    unless @@inspect_table[self.object_id]
      @@inspect_table[self.object_id] = self
      r = self.old_inspect
      @@inspect_table.delete self.object_id
      r
    else
      "{...}"
    end
  end
end

class Array
  @@inspect_table = {}
  alias :old_inspect :inspect
  def inspect
    unless @@inspect_table[self.object_id]
      @@inspect_table[self.object_id] = self
      r = self.old_inspect
      @@inspect_table.delete self.object_id
      r
    else
      "[...]"
    end
  end
end


Rts = Cor

