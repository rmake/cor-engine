

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

# game sample

class Character
  attr_accessor :hp
  attr_accessor :group
  
  @@character_table = {}
  
  def self.character_table
    @@character_table
  end
  
  def initialize
    self.hp = 10
    @@character_table[self.object_id] = self
  end
  
  def multi_heal
    self.group.characters.each do |ci|
      c = @@character_table[ci]
      c.hp += 10
    end
  end
  
end

class Group
  attr_accessor :characters
  
  def initialize
    self.characters = []
  end
  
  def add_character c
    c.group = self
    self.characters << c.object_id
  end
end

group = Group.new
me = Character.new
group.add_character me
group.add_character Character.new
group.add_character Character.new

group.characters.each do |ci|
  c = Character.character_table[ci]
  puts "hp = #{c.hp}"
end

puts "Multi Heal!"
me.multi_heal

group.characters.each do |ci|
  c = Character.character_table[ci]
  puts "hp = #{c.hp}"
end






