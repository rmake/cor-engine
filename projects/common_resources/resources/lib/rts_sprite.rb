
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
      frame = RtsCharacterAnimationCurrent.get_frame nm
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
          r.size.width <= 1 ? r.size.width - 0.995 : r.size.width - 1.0, 
          r.size.height <= 1 ? r.size.height - 0.995 : r.size.height - 1.0
        s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
        RtsObjectSystem.setup_sprite_round s
        
        y = -(ty + (h / 2) - rect.size.height / 2)
        x = (tx + (w / 2) - rect.size.width / 2)
        
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
  
  def self.create_window_by_list(options = {})
    
    node = Node.create
    rect = options[:rect] || Rect.create(0, 0, 16, 16)
    
    file_names = options[:file_names]
    unless file_names
      file_names = [
        "bg_window/bg_leftTop.png",
        "bg_window/bg_top_center.png",
        "bg_window/bg_rightTop.png",
        "bg_window/bg_white_left.png",
        "bg_window/bg_white.png",
        "bg_window/bg_white_right.png",
        "bg_window/bg_leftBottom.png",
        "bg_window/bg_white_bottom.png",
        "bg_window/bg_rightBottom.png",
      ]
    end
    
    frames = file_names.map do |fn|
      next nil unless fn
      frame = RtsCharacterAnimationCurrent.get_frame fn
      frame
    end
    
    wp = 16
    
    csxa = [frames[3] ? frames[3].get_rect.size.width : 0]
    csxa << (rect.size.width - (frames[3] ? frames[3].get_rect.size.width : 0) - (frames[5] ? frames[5].get_rect.size.width : 0))
    csxa << (frames[5] ? frames[5].get_rect.size.width : 0)
    
    csya = [frames[1] ? frames[1].get_rect.size.height : 0]
    csya << (rect.size.height - (frames[1] ? frames[1].get_rect.size.height : 0) - (frames[7] ? frames[7].get_rect.size.height : 0))
    csya << (frames[7] ? frames[7].get_rect.size.height : 0)
    
    if csxa[1] < 0
      rate0 = csxa[0] / (csxa[0] + csxa[2])
      rate2 = csxa[2] / (csxa[0] + csxa[2])
      csxa[0] -= rate0 * csxa[1]
      csxa[2] -= rate2 * csxa[1]
      csxa[1] = 0
    end
    
    ct = 0
    
    ty = 0
    iy = 0
    csya.each do |h|
    
      tx = 0
      ix = 0
      csxa.each do |w|
        
        frame = frames[ct]
        if frame
          r = frame.get_rect
          ra = r
          r = Rect.create r.origin.x + 0.5, r.origin.y + 0.5, 
            r.size.width <= 1 ? r.size.width - 0.995 : r.size.width - 1.0, 
            r.size.height <= 1 ? r.size.height - 0.995 : r.size.height - 1.0
          s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
          RtsObjectSystem.setup_sprite_round s
          
          x = (tx + (w / 2) - rect.size.width / 2)
          y = -(ty + (h / 2) - rect.size.height / 2)
          
          s.set_position x, y
          s.set_scale ((w) / r.size.width), ((h) / r.size.height)
          
          node.add_child s
        end
        
        tx += w
        ix += 1
        
        ct += 1
      end
    
      ty += h
      iy += 1
    end
    
    node
  end
  
  def self.create_window_repeat_by_list(options = {})
    
    node = Node.create
    rect = options[:rect] || Rect.create(0, 0, 16, 16)
    
    file_names = options[:file_names]
    unless file_names
      file_names = [
        "stone_window/window_bg_lt.png",
        "stone_window/window_bg_ct.png",
        "stone_window/window_bg_rt.png",
        "stone_window/window_bg_lm.png",
        "stone_window/window_bg_cm.png",
        "stone_window/window_bg_rm.png",
        "stone_window/window_bg_lb.png",
        "stone_window/window_bg_cb.png",
        "stone_window/window_bg_rb.png",
      ]
    end
    
    frames = file_names.map do |fn|
      next nil unless fn
      frame = RtsCharacterAnimationCurrent.get_frame fn
      frame
    end
    
    wp = 16
    
    csxa = [frames[3] ? frames[3].get_rect.size.width : 0]
    csxa << (rect.size.width - (frames[3] ? frames[3].get_rect.size.width : 0) - (frames[5] ? frames[5].get_rect.size.width : 0))
    csxa << (frames[5] ? frames[5].get_rect.size.width : 0)
    
    csya = [frames[1] ? frames[1].get_rect.size.height : 0]
    csya << (rect.size.height - (frames[1] ? frames[1].get_rect.size.height : 0) - (frames[7] ? frames[7].get_rect.size.height : 0))
    csya << (frames[7] ? frames[7].get_rect.size.height : 0)
    
    if csxa[1] < 0
      rate0 = csxa[0] / (csxa[0] + csxa[2])
      rate2 = csxa[2] / (csxa[0] + csxa[2])
      csxa[0] -= rate0 * csxa[1]
      csxa[2] -= rate2 * csxa[1]
      csxa[1] = 0
    end
    
    nsxa = []
    nsxa << csxa[0]
    nsw = csxa[1]
    while nsw > 0
      if nsw > (frames[4].get_rect.size.width)
        nsxa << (frames[4].get_rect.size.width)
        nsw -= (frames[4].get_rect.size.width - 1)
      else
        nsxa << nsw
        nsw = 0
      end
    end
    nsxa << csxa[2]
    
    Logger.debug "csxa #{csxa}"
    Logger.debug "nsxa #{nsxa}"
    
    nsya = []
    nsya << csya[0]
    nsh = csya[1]
    while nsh > 0
      if nsh > (frames[4].get_rect.size.height)
        nsya << (frames[4].get_rect.size.height)
        nsh -= (frames[4].get_rect.size.height - 1)
      else
        nsya << nsh
        nsh = 0
      end
    end
    nsya << csya[2]
    
    Logger.debug "csya #{csya}"
    Logger.debug "nsya #{nsya}"
    
    ct = 0
    
    ty = 0
    iy = 0
    nsya.each_with_index do |h, yi|
    
      if yi == 0
        ct = 0
      elsif yi == nsya.length - 1
        ct = 6
      else
        ct = 3
      end
    
      tx = 0
      ix = 0
      nsxa.each_with_index do |w, xi|
        
        frame = frames[ct]
        if frame
          r = frame.get_rect
          ra = r
          Logger.debug "r.origin #{r.origin.x}, #{r.origin.y}"
          r = Rect.create r.origin.x + 0.5, r.origin.y + 0.5, 
            w <= 1 ? w - 0.995 : w - 1.0, 
            h <= 1 ? h - 0.995 : h - 1.0
          s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
          RtsObjectSystem.setup_sprite_round s
          
          x = (tx + (w / 2) - rect.size.width / 2)
          y = -(ty + (h / 2) - rect.size.height / 2)
          
          s.set_position x, y
          
          node.add_child s
        end
        
        tx += w - 1
        ix += 1
        
        if xi == 0 || xi == csxa.length - 2
          ct += 1
        end
      end
    
      ty += h - 1
      iy += 1
    end
    
    node
  end
  
  def self.create_sprite_from_all(name)
    frame = RtsCharacterAnimationCurrent.get_frame name
    r = frame.get_rect
    r = Rect.create r.origin.x, r.origin.y, r.size.width, r.size.height
    s = Sprite.create_with_sprite_frame SpriteFrame.create_with_texture(frame.get_texture, r)
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.get_sprite_frame_from_all(name)
    RtsCharacterAnimationCurrent.get_frame name
  end
  
  def self.create_sprite_from_all_origin(name)
    frame = RtsCharacterAnimationCurrent.get_frame name
    s = Sprite.create_with_sprite_frame frame
    RtsObjectSystem.setup_sprite_round s
    s
  end
  
  def self.create_num_bg(width)
    node = Node.create
    
    frames = 3.times.map do |i|
      nm = "num_bg/num_0#{i + 1}.png"
      frame = RtsCharacterAnimationCurrent.get_frame nm
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
        (RtsCharacterAnimationCurrent.create({:walk => animation})).walks[0])
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
  
  def self.create_star_view(num)
    
    node = Node.create
    
    if num <= 3
    
      w = 0
      
      sps = num.times.map do |i|
        sp = RtsSprite.create_sprite_from_all_origin "character_info/level_starMark.png"
        #sp.set_global_z_order Rts::Z_ORDER_OFFSET + 5252.0
        w += (sp.get_bounding_box.size.width + 1)
        node.add_child sp
        sp
      end
      
      sps.each_with_index do |sp, i|
        sp.set_position (w / 2 - sp.get_bounding_box.size.width / 2).to_i - i * (sp.get_bounding_box.size.width + 1), 0
      end
      
    else
    
      w = 0
      wa = []
      sps = []
      num.to_s.reverse.each_char do |s|
        sp = RtsSprite.create_sprite_from_all_origin "character_info/#{s}.png"
        #sp.set_global_z_order Rts::Z_ORDER_OFFSET + 5252.0
        wa << w
        w += (sp.get_bounding_box.size.width + 1)
        node.add_child sp
        sp.set_color Color3B.create(255, 255, 0)
        sps << sp
      end
      
      sp = RtsSprite.create_sprite_from_all_origin "character_info/level_starMark.png"
      #sp.set_global_z_order Rts::Z_ORDER_OFFSET + 5252.0
      wa << w
      w += (sp.get_bounding_box.size.width + 1)
      node.add_child sp
      sps << sp
      
      sps.each_with_index do |sp, i|
        sp.set_position (w / 2 - sp.get_bounding_box.size.width / 2).to_i - wa[i], 0
      end
      
    end
    
    node
  end
  
  def self.create_num_image(num)
    
    node = Node.create
    
    w = 0
    wa = []
    sps = []
    num.to_s.reverse.each_char do |s|
      sp = RtsSprite.create_sprite_from_all_origin "character_info/#{s}.png"
      #sp.set_global_z_order Rts::Z_ORDER_OFFSET + 5252.0
      wa << w
      w += (sp.get_bounding_box.size.width + 1)
      node.add_child sp
      #sp.set_color Color3B.create(255, 255, 0)
      sps << sp
    end
    
    sps.each_with_index do |sp, i|
      sp.set_position (w / 2 - sp.get_bounding_box.size.width / 2).to_i - wa[i], 0
    end
  
    node
  end
  
  def self.set_z_order_all(node, z)
    Rts.u.each_node node do |n|
      n.set_global_z_order z 
    end
  end
  
  
  def self.delay_action(node, interval, &callback)
    node.run_action(
        #RepeatForever.create(
          Sequence.create_with_two_actions(
            DelayTime.create(interval),
            (CallFunc.create do
              yield
            end)
          )
        #)
      )
  end
  
  def self.interval_action(node, interval, &callback)
    node.run_action(
        RepeatForever.create(
          Sequence.create_with_two_actions(
            DelayTime.create(interval),
            (CallFunc.create do
              yield
            end)
          )
        )
      )
  end

end




