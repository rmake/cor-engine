
class RtsListView
  
  attr_accessor :world
  attr_accessor :list_data
  attr_accessor :list_items
  attr_accessor :node
  attr_accessor :container_node
  attr_accessor :size
  
  def initialize(world, list_data, options = {}, &item_block)
    self.world = world
    self.list_data = list_data
    self.list_items = []
    
    self.size = options[:size] || Size.create(100, 100)
    
    #self.container_node = Layer.create
    self.container_node = Node.create
    #self.container_node = RtsSprite.create_simple(options = {})
    self.node = ScrollView.create self.size, self.container_node
    #self.node.set_bounceable false
    
    y = 0
    list_data.each do |data|
      n = item_block.call data
      r = Rts.u.node_rect n
      p = n.get_position
      #bb = n.get_bounding_box
      bb = r
      n.set_position p.x - bb.origin.x, y + bb.origin.y
      y -= bb.size.height
      self.container_node.add_child n
      self.list_items << n
    end
    y = y.abs
    self.list_items.each do |n|
      p = n.get_position
      n.set_position p.x, p.y + y
    end
    self.node.set_content_size Size.create(self.size.width, y.abs)
    self.node.set_view_size self.size
    self.node.set_direction 1
    self.node.set_content_offset Vec2.create(0, -y + self.size.height), false
    
    nd = self.node
    self.node = ClippingNode.create
    drn = DrawNode.create
    drn.clear
    drn.draw_triangle(Vec2.create(0, 0), Vec2.create(self.size.width, 0), 
      Vec2.create(self.size.width, self.size.height), Color4F.create(0, 0, 0, 1))
    drn.draw_triangle(Vec2.create(0, 0), Vec2.create(self.size.width, self.size.height), 
      Vec2.create(0, self.size.height), Color4F.create(0, 0, 0, 1))
    #drn = RtsSprite.create_simple
    #drn.set_position 100, 200
    self.node.set_anchor_point Vec2.create(0.5, 0.5)
    self.node.set_position Size.create(100 / 2, 100 / 2)
    self.node.set_stencil drn
    self.node.set_inverted(false)
    #self.node.set_alpha_threshold(0.0)
    
    
    self.node.add_child nd
    
    Rts.u.each_node self.node do |n, depth|
      n.set_global_z_order 0.0
    end
    drn.set_global_z_order 0.0
    @drn = drn
    
    self.world.scene.add_child self.node
    self.node.set_action_manager self.world.action_manager_fast
    
    #drn = DrawNode.create
    #drn.draw_triangle(Vec2.create(0, 0), Vec2.create(100, 0), Vec2.create(100, 100), Color4F.create(1, 1, 1, 1))
    #
    #drn.draw_segment Vec2.create(-100, -100), Vec2.create(200, 200), 1, Color4F.create(1, 1, 1, 1)
    #self.world.scene.add_child drn
    
  end
  
  def set_z_order(z)
    ct = 0
    Rts.u.each_node self.node do |n, level|
      #n.set_global_z_order Rts::Z_ORDER_OFFSET + z + ct / 100
      #ct += 1
      n.set_global_z_order z
    end
    Rts.u.each_node self.container_node do |n, level|
      #n.set_global_z_order Rts::Z_ORDER_OFFSET + z + ct / 100
      #ct += 1
      n.set_global_z_order z
    end
    @drn.set_global_z_order z
  end
  
  def remove
    self.node.remove_from_parent
  end
  
end


