
class RtsListView
  
  attr_accessor :world
  attr_accessor :list_data
  attr_accessor :list_items
  attr_accessor :node
  attr_accessor :container_node
  attr_accessor :size
  attr_accessor :direction
  attr_accessor :direction_type
  
  def initialize(world, list_data, options = {}, &item_block)
    self.world = world
    self.list_data = list_data
    self.list_items = []
    
    self.size = options[:size] || Size.create(100, 100)
    
    #self.container_node = Layer.create
    self.container_node = Node.create
    #self.container_node = RtsSprite.create_simple(options = {})
    scroll_view = ScrollView.create self.size, self.container_node
    
    self.direction = options[:direction] || :vertical
    self.direction_type = self.direction
    
    if self.direction_type == :vertical
      self.direction_type = ScrollViewDirection::VERTICAL
    elsif self.direction_type == :horizontal
      self.direction_type = ScrollViewDirection::HORIZONTAL
    #elsif self.direction_type == :both
    #  self.direction_type = ScrollViewDirection::BOTH
    end
    
    if self.direction == ScrollViewDirection::VERTICAL
      self.direction = :vertical
    elsif self.direction == ScrollViewDirection::HORIZONTAL
      self.direction = :horizontal
    #elsif self.direction == ScrollViewDirection::BOTH
    #  self.direction = :both
    end
    
    buttons = []
    
    y = 0
    list_data.each do |data|
      n = item_block.call data
      
      if n.kind_of? RtsButton
        buttons << n
        n = n.sprite
      end
      
      r = Rts.u.node_rect n
      p = n.get_position
      #bb = n.get_bounding_box
      bb = r
      if self.direction == :vertical
        n.set_position p.x - bb.origin.x, y + bb.origin.y
        y -= bb.size.height
      elsif self.direction == :horizontal
        n.set_position p.x - bb.origin.x - y, self.size.height + bb.origin.y 
        y -= bb.size.width
      end
      self.container_node.add_child n
      self.list_items << n
    end
    y = y.abs
    self.list_items.each do |n|
      p = n.get_position
      if self.direction == :vertical
        n.set_position p.x, p.y + y
      elsif self.direction == :horizontal
        n.set_position p.x, p.y
      end
    end
    if self.direction == :vertical
      scroll_view.set_content_size Size.create(self.size.width, y.abs)
    elsif self.direction == :horizontal
      scroll_view.set_content_size Size.create(y.abs, self.size.height)
    end
    scroll_view.set_view_size self.size
    scroll_view.set_direction self.direction_type
    if self.direction == :vertical
      scroll_view.set_content_offset Vec2.create(0, -y + self.size.height), false
    elsif self.direction == :horizontal
      scroll_view.set_content_offset Vec2.create(0, 0), false
    end
    
    clipping_node = ClippingNode.create
    drn = DrawNode.create
    drn.clear
    drn.draw_triangle(Vec2.create(0, 0), Vec2.create(self.size.width, 0), 
      Vec2.create(self.size.width, self.size.height), Color4F.create(0, 0, 0, 1))
    drn.draw_triangle(Vec2.create(0, 0), Vec2.create(self.size.width, self.size.height), 
      Vec2.create(0, self.size.height), Color4F.create(0, 0, 0, 1))
    #drn = RtsSprite.create_simple
    #drn.set_position 100, 200
    clipping_node.set_stencil drn
    clipping_node.set_inverted(false)
    
    clipping_node.add_child scroll_view
    
    Rts.u.each_node clipping_node do |n, depth|
      n.set_global_z_order 0.0
    end
    drn.set_global_z_order 0.0
    @drn = drn
    
    base_node = Node.create
    base_node.add_child clipping_node
    self.node = base_node
    
    if options[:parent]
      options[:parent].add_child self.node
    elsif self.world.class.method_defined?(:scene)
      self.world.scene.add_child self.node
    end
    if self.world.class.method_defined? :action_manager_fast
      scroll_view.set_action_manager self.world.action_manager_fast
      self.node.set_action_manager self.world.action_manager_fast
    end
    
    buttons.each do |btn|
      self.set_clipping_to_button btn
    
    end
    
    if self.direction == :vertical
      if y.abs > self.size.height
        scwa = 8
        schaa = self.size.height
        scha = self.size.height * [(self.size.height / y.abs).to_f, 1.0].min
        scroll_bar_base = LayerColor.create(Color4B.create(0, 0, 0, 64), scwa, schaa)
        scroll_bar_child = LayerColor.create(Color4B.create(255, 255, 255, 64), scwa - 2, scha - 2)
        scroll_bar_child.set_position 1, 1
        scroll_bar_base.add_child scroll_bar_child
        scroll_bar_base.set_position self.size.width - scwa, 0
        
        proc = Proc.new do
          if y.abs > self.size.height
            ofs = scroll_view.get_content_offset
            
            pos = ( - ofs.y / (y.abs - schaa))
            if pos < 0.0
              pos = 0.0
            end
            if pos > 1.0
              pos = 1.0
            end
            scroll_bar_child.set_position 1, ((schaa - scha - 2) * pos + 1)
          end
        end
        
        RtsObjectSystem.set_scroll_view_on_scroll scroll_view do
          proc.call
        end
        
        proc.call
      
        self.node.add_child scroll_bar_base
      
      end
    elsif self.direction == :horizontal
      if y.abs > self.size.width
        scwa = 8
        schaa = self.size.width
        scha = self.size.width * [(self.size.width / y.abs).to_f, 1.0].min
        scroll_bar_base = LayerColor.create(Color4B.create(0, 0, 0, 64), schaa, scwa)
        scroll_bar_child = LayerColor.create(Color4B.create(255, 255, 255, 64), scha - 2, scwa - 2)
        scroll_bar_child.set_position 1, 1
        scroll_bar_base.add_child scroll_bar_child
        scroll_bar_base.set_position 0, scwa
        
        proc = Proc.new do
          if y.abs > self.size.width
            ofs = scroll_view.get_content_offset
            
            pos = ( - ofs.x / (y.abs - schaa))
            if pos < 0.0
              pos = 0.0
            end
            if pos > 1.0
              pos = 1.0
            end
            scroll_bar_child.set_position ((schaa - scha - 2) * pos + 1), 1
          end
        end
        
        RtsObjectSystem.set_scroll_view_on_scroll scroll_view do
          proc.call
        end
        
        proc.call
      
        self.node.add_child scroll_bar_base
      
      end
    end
      
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
  
  def set_clipping_to_button(b)
    b.clipping_node = self.node
    b.clipping_rect = Rect.create(0, 0, size.width, size.height)
  end
  
  def remove
    self.node.remove_from_parent
  end
  
end


