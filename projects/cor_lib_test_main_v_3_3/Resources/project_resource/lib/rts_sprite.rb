
class RtsSprite

  def self.get_texture(texture_name)
    director = Director.get_instance
    texture_cached = director.get_texture_cache
    
    texture = texture_cached.add_image(texture_name)
    texture
  end

  def self.create_simple(options = {})
  
    texture = self.get_texture options[:texture] || "data_test_2/nd3_32x32_2.png"
    
    s = Sprite.create_with_texture texture
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.create_texture_animation(a)
    sfs = []
    animation = Animation.create
    animation.retain
    a.each do |v|
      animation.add_sprite_frame_with_file v
    end
    animation.set_delay_per_unit 0.033
    s = self.create_simple :texture => a.first
    s.set_on_enter_callback do
      action = s.run_action RepeatForever.create(Animate.create(animation))
      animation.release
    end
    s
  end
  
  def self.create_simple_rect(options = {})
  
    texture = self.get_texture options[:texture] || "data_test_2/nd3_32x32_2.png"
    rect = options[:rect] || Rect.create(16, 0, 16, 16)
    frame = SpriteFrame.create_with_texture(texture, rect)
    
    s = Sprite.create_with_sprite_frame frame
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.create_label_atlas(text)
    LabelAtlas.create text, "fonts/fast2.png", 19, 33, " ".getbyte(0)
    
  end
  
  def self.create_label_ttf(text)
    label = RtsLabel.new :font_name => "fonts/MTLc3m.ttf", :font_size => 32, :text => text, :edge_size => 2
    label
  end
  
  def self.create_sprite_9(options = {})
    
    node = Node.create
    texture = self.get_texture options[:texture] || "data_test_2/nd3_32x32_2.png"
    rect = options[:rect] || Rect.create(0, 0, 16, 16)
    wp = 16
    
    csxa = [wp]
    csxa << (rect.size.width - wp * 2)
    csxa << wp
    
    csya = [wp]
    csya << (rect.size.height - wp * 2)
    csya << wp
    
    ty = 0
    iy = 0
    csya.each do |h|
    
      tx = 0
      ix = 0
      csxa.each do |w|
        
        y = -(ty + h / 2 - rect.size.height / 2)
        x = (tx + w / 2 - rect.size.width / 2)
        
        
        r = Rect.create(ix * wp, iy * wp, wp, wp)
        
        frame = SpriteFrame.create_with_texture(texture, r)
    
        s = Sprite.create_with_sprite_frame frame
        RtsObjectSystem.setup_sprite_round s
        
        s.set_position x, y
        s.set_scale w / wp, h / wp
        
        node.add_child s
        
        tx += w
        ix += 1
      end
    
      ty += h
      iy += 1
    end
    
    
    node
  end
  
  def self.create_window_sprite_9(options = {})
    
    node = Node.create
    rect = options[:rect] || Rect.create(0, 0, 16, 16)
    
    frames = 9.times.map do |i|
      nm = "grid9/grid9_0#{i + 1}.png"
      frame = RtsCharacterAnimationPool.get_frame nm
      frame
    end
    
    wp = 16
    
    csxa = [frames[0].get_rect.size.width]
    csxa << (rect.size.width - frames[0].get_rect.size.width * 2)
    csxa << frames[0].get_rect.size.width
    
    csya = [frames[0].get_rect.size.height]
    csya << (rect.size.height - frames[0].get_rect.size.height - frames[6].get_rect.size.height)
    csya << frames[6].get_rect.size.height
    
    ct = 0
    
    ty = 0
    iy = 0
    csya.each do |h|
    
      tx = 0
      ix = 0
      csxa.each do |w|
        
        frame = frames[ct]
        r = frame.get_rect
        ra = r
        r = Rect.create r.origin.x + 0.5, r.origin.y + 0.5, 
          r.size.width <= 1 ? r.size.width - 0.95 : r.size.width - 1.0, 
          r.size.height <= 1 ? r.size.height - 0.95 : r.size.height - 1.0
        s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
        RtsObjectSystem.setup_sprite_round s
        
        y = -(ty + (h / 2) - rect.size.height / 2)
        x = (tx + (w / 2) - rect.size.width / 2)
        
        #if ix >= 1
        #  x -= 1
        #end
        #if iy >= 1
        #  y += 0.5
        #end
        
        s.set_position x, y
        s.set_scale ((w) / r.size.width), ((h) / r.size.height)
        
        node.add_child s
        
        tx += w
        ix += 1
        
        ct += 1
      end
    
      ty += h
      iy += 1
    end
    
    
    node
  end
  
  def self.create_sprite_from_all(name)
    frame = RtsCharacterAnimationPool.get_frame name
    r = frame.get_rect
    r = Rect.create r.origin.x, r.origin.y, r.size.width, r.size.height
    s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.get_sprite_frame_from_all(name)
    RtsCharacterAnimationPool.get_frame name
  end
  
  def self.create_sprite_from_all_origin(name)
    frame = RtsCharacterAnimationPool.get_frame name
    s = Sprite.create_with_sprite_frame frame
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.create_num_bg(width)
    node = Node.create
    
    frames = 3.times.map do |i|
      nm = "num_bg/num_0#{i + 1}.png"
      frame = RtsCharacterAnimationPool.get_frame nm
      frame
    end
    
    w = width + 10 * 2
    h = frames[0].get_rect.size.height
    
    rect = Rect.create(0, 0, w, h)
    
    csxa = [frames[0].get_rect.size.width]
    csxa << (rect.size.width - frames[0].get_rect.size.width - frames[2].get_rect.size.width)
    csxa << frames[2].get_rect.size.width
    
    ct = 0
    
    tx = 0
    ix = 0
    csxa.each do |w|
      
      frame = frames[ct]
      r = frame.get_rect
      ra = r
      r = Rect.create r.origin.x + 0.5, r.origin.y + 0.5, 
        r.size.width <= 1 ? r.size.width - 0.95 : r.size.width - 1.0, 
        r.size.height <= 1 ? r.size.height - 0.95 : r.size.height - 1.0
      s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
      RtsObjectSystem.setup_sprite_round s
      
      y = -((h / 2) - rect.size.height / 2)
      x = (tx + (w / 2) - rect.size.width / 2)
      
      x -= ix
      
      s.set_position x, y
      s.set_scale ((w) / r.size.width), ((h) / r.size.height)
      
      node.add_child s
      
      tx += w
      ix += 1
      
      ct += 1
    end
    
    node
  end
  
  
  def self.set_simple_animation(s, animation = nil)
    animation ||= "explosion_128"
    a = s.run_action( 
      Animate.create(
        (RtsCharacterAnimationPool.create({:walk => animation})).walks[0])
    )
    a
  end
  
  def self.include_point?(node, p)
    lp = p
    prnt = node.get_parent
    clp = prnt.convert_to_node_space lp
    bb = node.get_bounding_box
    bb.contains_point(clp)
  end
  
  def self.include_point_half_space?(node, p)
    lp = p
    prnt = node.get_parent
    clp = prnt.convert_to_node_space lp
    bb = node.get_bounding_box
    w = bb.size.width
    h = bb.size.height
    bb.size = Size.create(w / 2, h / 2)
    bb.origin = Vec2.create(bb.origin.x + w / 4, bb.origin.y + h / 4)
    bb.contains_point(clp)
  end
  
  def self.include_point_character?(node, p)
    lp = p
    prnt = node.get_parent
    clp = prnt.convert_to_node_space lp
    bb = Rect.create
    bb.size = Size.create(32, 32)
    bb.origin = Vec2.create(-16, -16)
    bb.contains_point(clp)
  end
  
  def self.create_simple_label_button(text, &callback)
    
    #label = Label.create_with_ttf text, "fonts/MTLc3m.ttf", 24, Size.create(0, 0), 0, 0
    label = self.create_label_atlas text
    
    unless @first
      label.retain
      @first = true
    end
    
    listener = EventListenerTouchOneByOne::create
    listener.set_swallow_touches true
    
    listener.on_touch_began = Proc.new do |t, e|
    
      lp = t.get_location
      
      prnt = label.get_parent
      clp = prnt.convert_to_node_space lp
      bb = label.get_bounding_box
      
      if callback && bb.contains_point(clp)
        
        callback.call t, e
      end
    end
    
    ed = label.get_event_dispatcher
    ed.add_event_listener_with_scene_graph_priority listener, label
    
    label
  end
  
  def self.delay_action(node, interval, &callback)
    node.run_action(
        #RepeatForever.create(
          Sequence.create([
            DelayTime.create(interval),
            (CallFunc.create do
              yield
            end),
          ])
        #)
      )
  end
  
  def self.interval_action(node, interval, &callback)
    node.run_action(
        RepeatForever.create(
          Sequence.create([
            DelayTime.create(interval),
            (CallFunc.create do
              yield
            end),
          ])
        )
      )
  end

end




