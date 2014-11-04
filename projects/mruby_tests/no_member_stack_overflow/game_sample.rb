
# game sample

class Character
  attr_accessor :hp
  attr_accessor :group
  
  def initialize
    self.hp = 10
  end
  
  def multi_heal
    self.group.characters.each do |c|
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
    self.characters << c
  end
end

group = Group.new
me = Character.new
group.add_character me
group.add_character Character.new
group.add_character Character.new

group.characters.each do |c|
  puts "hp = #{c.hp}"
end

puts "Multi Heal!"
me.multi_heal

group.characters.each do |c|
  puts "hp = #{c.hp}"
end

puts "group #{group.inspect}"




