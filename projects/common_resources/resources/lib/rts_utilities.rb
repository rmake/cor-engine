
class RtsUtilities

  attr_accessor :tile_x
  attr_accessor :tile_y
  attr_accessor :character_scale
  attr_accessor :tile_half_x
  attr_accessor :tile_half_y

  def initialize
  
    self.tile_x = 32
    self.tile_y = 32
    self.tile_half_x = self.tile_x / 2
    self.tile_half_y = self.tile_y / 2
    self.character_scale = 1
    
  end
  
  def tile_index p
    Vector2I.create (p.x) / self.tile_x + 20, (p.y) / self.tile_y + 20
  end
  
  def tile_position p
    v = tile_index p
    self.index_to_tile_position v
    #Vec2.create v.x * self.tile_x + self.tile_x / 2, v.y * self.tile_y + self.tile_y / 2
  end
  
  def index_to_tile_position p
    Vec2.create (p.x + 0.5 - 20) * self.tile_x, (p.y + 0.5 - 20) * self.tile_y
  end
  
  def index_to_tile_position_l x, y
    Vec2.create (x + 0.5) * self.tile_x, (y + 0.5) * self.tile_y
  end
  
  def each_node_itnl(n, depth, &block)
  
    block.call n, depth
  
    n.get_children.each do |cn|
      each_node_itnl(cn, depth + 1, &block)
    end
  end
  
  def each_node(n, &block)
    each_node_itnl(n, 0, &block)
  end
  
  def node_rect(n)
    RtsObjectSystem.node_rect n
  end
  
  def nodes_rect(ns)
    RtsObjectSystem.nodes_rect ns
  end
  
  def node_centering_x(n, w)
    r = RtsObjectSystem.node_rect n
    tw = w - r.size.width
    p = n.get_position
    p.x = tw / 2 - r.origin.x
    
    n.set_position p
  end
  
  def node_position_round(nd)
    self.each_node nd do |n|
      p = n.get_position
      p = Vec2.create(p.x.to_i, p.y.to_i)
      n.set_position p
    end
  end
  
  def now_time
    tm = Time.now
    tm.utc
    tm
  end
  
  def time_to_s(tm)
    "#{tm.year} #{tm.mon} #{tm.day} #{tm.hour} #{tm.min} #{tm.sec} #{tm.usec}"
  end
  
  def s_to_time(s)
    return self.now_time unless s
    a = s.split(' ').map{|v| v.to_i}
    tm = Time.utc a[0], a[1], a[2], a[3], a[4], a[5], a[6]
    tm
  end
  
  def recursive_merge(dh, sh)
    
    nh = dh
    
    sh.each do |k, v|
      if v.kind_of?(Hash) && nh[k].kind_of?(Hash)
        self.recursive_merge nh[k], v
        
      else
        nh[k] = v
      end
    end
    
  end

end

Rts.u = RtsUtilities.new

