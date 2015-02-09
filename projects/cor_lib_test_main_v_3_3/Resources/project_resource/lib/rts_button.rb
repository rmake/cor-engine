
class RtsButton

  attr_accessor :name
  attr_accessor :sprite
  attr_accessor :arg_sprite
  attr_accessor :texture_all_sprite
  attr_accessor :texture_all_sprite_parent
  attr_accessor :text_labels
  attr_accessor :font_name
  attr_accessor :font_color
  attr_accessor :all_nodes
  attr_accessor :rect
  attr_accessor :text_scale
  attr_accessor :align
  
  TAP_RANGE = 3.0 * 8  
  
  def initialize(options = {})
    
    texture_name = options[:texture]# || "data_test_2/button_bg.png"
    text = options[:text]
    rect = options[:rect]
    self.rect = rect
    
    self.align = options[:align] || :center
    
    texture = nil
    if texture_name
      texture = RtsSprite.get_texture texture_name
    end
    
    self.name = options[:name]
    
    self.font_name = options[:font_name] || "fonts/MTLc3m.ttf"
    self.font_color = options[:font_color] || Color3B.create(255, 255, 255)
    
    spa = nil
    if options[:texture_all]
      spa = Node.create
      tspa = RtsSprite.create_sprite_from_all options[:texture_all]
      RtsObjectSystem.setup_sprite_round tspa
      self.texture_all_sprite = tspa
      self.texture_all_sprite_parent = spa
      spa.add_child tspa
    elsif options[:texture]
      spa = Sprite.create_with_texture(texture)
    end
    
    self.all_nodes = []
    s = options[:sprite]
    if s
      self.arg_sprite = s
    end
    if s && spa
      s.add_child spa
    elsif !s && spa
      s = spa
    elsif !s
      s = Node.create
    end
    
    @on_tap = nil
    
    listener = EventListenerTouchOneByOne::create
    unless options[:disable_swallow]
      listener.set_swallow_touches true
    end
    
    old_l = nil
    
    containing = false
    
    listener.on_touch_began = Proc.new do |t, e|
      lp = t.get_location
      
      
      prnt = s.get_parent
      unless rect
        rect = Rts.u.node_rect s
        self.rect = rect
      end
      if rect
        prnt = s
      end
      clp = prnt.convert_to_node_space lp
      bb = rect || s.get_bounding_box
      
      if @on_tap && bb.contains_point(clp)
      
        if @on_touch_began
          containing = true
          @on_touch_began.call t, e
        end
        
      
        old_l = lp
      end
    end
    
    listener.on_touch_moved = Proc.new do |t, e|
      l = t.get_location
      
      if @on_touch_moved && containing
        @on_touch_moved.call t, e
      end
      
      
      if old_l && l.get_distance(old_l) > TAP_RANGE
        old_l = nil
      end
    end
    
    listener.on_touch_ended = Proc.new do |t, e|
      
      if @on_touch_ended && containing
        @on_touch_ended.call t, e
      end
      
      if old_l && @on_tap
        @on_tap.call t, e
      end
      
      old_l = nil
    end
    
    ed = s.get_event_dispatcher
    ed.add_event_listener_with_scene_graph_priority listener, s
    
    Rts.u.each_node s do |n, level|
      ed = n.get_event_dispatcher
      l = listener.clone
      ed.add_event_listener_with_scene_graph_priority l, n
    end
    
    self.text_scale = options[:text_scale] || 0.7
    
    self.sprite = s
    self.all_nodes << s
    if s
      s.get_children.each do |cs|
        self.all_nodes << cs
      end
    end
    
    unless rect
      rect = Rts.u.node_rect s
      self.rect = rect
    end
    
    ref = CocosMrubyRef.create
    ref.set_value self
    self.sprite.set_user_object ref
    
    self.text_labels = []
    self.set_text text
  end
  
  def set_texture_all(name)
    if self.texture_all_sprite
      self.texture_all_sprite.remove_from_parent
      tspa = RtsSprite.create_sprite_from_all name
      self.texture_all_sprite = tspa
      self.texture_all_sprite_parent.add_child tspa
      return self.texture_all_sprite_parent
    else
      spa = Node.create
      tspa = RtsSprite.create_sprite_from_all options[:texture_all]
      self.texture_all_sprite = tspa
      self.texture_all_sprite_parent = spa
      spa.add_child tspa
      self.sprite.add_child spa
      return spa
    end
  end
  
  def set_text(text)
  
    s = self.sprite
    rect = self.rect
    align = self.align
    
    self.text_labels.each do |l|
      self.all_nodes.delete l
      l.remove_from_parent
    end
    self.text_labels = []
    if text
      text = text.to_s
      texts = text.split("\n")
    
      sb = rect || s.get_bounding_box
      sc = self.text_scale
      
      line_height = nil
      
      tbs = []
    
      texts.each do |text|
        #t = RtsSprite.create_label_atlas text
        #t = RtsSprite.create_label_ttf text
        t = RtsLabel.new :font_name => self.font_name, :font_size => 34, :text => text, :edge_size => 2, 
          :color => self.font_color
        line_height = t.line_height * sc
        
        #tb = t.get_bounding_box
        tb = Rts.u.node_rect t.node
        tbs << tb
        
        p = Vec2.create
        p.x = sb.origin.x + (sb.size.width - tb.size.width * sc) / 2
        p.y = sb.origin.y + (sb.size.height - tb.size.height * sc) / 2
        
        t.node.set_position p
        t.node.set_scale sc
        
        s.add_child t.node
        self.text_labels << t.node
        self.all_nodes << t.node
      end
      
      h = 0
      aw = 0
      self.text_labels.each_with_index do |t, i|
        #tb = t.get_bounding_box
        tb = tbs[i]
        
        h = [h, tb.size.height].max
        aw = [aw, tb.size.width].max
      end
      
      h = line_height if line_height
      
      ah = self.text_labels.length * h
      
      self.text_labels.each_with_index do |t, i|
        #tb = t.get_bounding_box
        tb = tbs[i]
        p = Vec2.create
        if align == :left
          p.x = sb.origin.x
        elsif align == :center
          p.x = sb.origin.x + (sb.size.width - tb.size.width * sc) / 2
        elsif align == :right
          p.x = sb.origin.x + sb.size.width - tb.size.width * sc
        end
        p.y = sb.origin.y + (sb.size.height - ah) / 2 + ((self.text_labels.length - i - 1) * h) + h / 2
        
        t.set_position p
      end
      
    end
    
  end
  
  def self.create_default_sp9(texture_sp9, r, options = {})
    sp = RtsSprite.create_sprite_9 :texture => texture_sp9 || "data_test_2/sp9bg.png", :rect => r
    options[:sprite] = sp
    RtsButton.new options
  end
  
  def self.create_empty(options = {})
    options[:sprite] = Node.create
    RtsButton.new options
  end
  
  def set_z_order z
    ct = 0
    self.all_nodes.each do |n|
      n.set_global_z_order z #+ ct
      #n.set_global_z_order 0.0
      ct += 1
    end
    Rts.u.each_node self.sprite do |n|
      n.set_global_z_order z 
    end
  end
  
  def on_tap(&block)
    @on_tap = block
  end
  
  def call_on_tap
    @on_tap.call
  end
  
  def on_touch_began(&block)
    @on_touch_began = block
  end
  
  def call_on_touch_began
    @on_touch_began.call
  end
  
  def on_touch_moved(&block)
    @on_touch_moved = block
  end
  
  def call_on_touch_moved
    @on_touch_moved.call
  end
  
  def on_touch_ended(&block)
    @on_touch_ended = block
  end
  
  def call_on_touch_ended
    @on_touch_ended.call
  end
  
  def add_child button
    self.sprite.add_child button.sprite
  end
  
  def remove
    self.sprite.remove_from_parent
  end

end


