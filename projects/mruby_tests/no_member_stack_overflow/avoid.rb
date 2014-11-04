
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

class C
  attr_accessor :h
  attr_accessor :a
end

c = C.new
c.h = {:h => c}
c.a = [c]
puts c.inspect

th = {:c => c}
c.h[:th] = th
c.a << th
puts th.inspect

c.undefined_method


