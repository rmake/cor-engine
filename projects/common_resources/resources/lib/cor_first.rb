
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

class Exception

  alias_method :old_initialize, :initialize
  alias_method :old_backtrace, :backtrace

  @@initializing = false
  @@current_backtrace = nil

  def initialize(*args)
    old_initialize(*args)

    unless @@initializing
      # not thread safe
      @@initializing = true
      begin
        raise ""
      rescue => e
        @stored_backtrace = e.backtrace[2..-1]
      end
      @@initializing = false
    else

    end
  end

  def backtrace
    if @stored_backtrace
      @stored_backtrace
    else
      self.old_backtrace
    end
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

