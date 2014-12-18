
class MajitaiGame
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :draw_node
  
  @@distance = 0
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    
    @sx = 0
    @@distance = 0
    
    @player = nil
    offset = Vec2.create
    
    self.draw_node = DrawNode.create
    self.draw_node.set_global_z_order 200.0
    self.scene.add_child self.draw_node
    darw_line_proc = Proc.new do
      self.draw_node.clear
      #self.collision_system.render_to_draw_node self.draw_node
    end
    
    self.collision_system.set_collision_group_pair 0, 1, 1
    
    camera_action = ActionCamera.create
    camera_action.start_with_target layer
    camera_proc = Proc.new do
      p = @player.get_position
      p.x += offset.x
      #p.y += offset.y
      p.y = -32
      pos = Vec3.create p.x, p.y, 1.0
      camera_action.set_eye pos
      center = Vec3.create p.x, p.y, 0.0
      camera_action.set_center center
    end
    
    @player = self.create_player
    p = @player.get_position
    offset.x = - p.x
    offset.y = - p.y
    
    self.layer.add_child @player
    
    Project.interval_call 0 do
    
      (0..1).each do |i| 
        self.collision_system.set_changed i
      end
      self.collision_system.all_pair_call
    
      self.generate_wall
      
      
      camera_proc.call
      darw_line_proc.call
      
    end
    
    
  end
  
  def create_player
    n = Node.create
    s = Sprite.create "game/majitai.png"
    s.set_scale 0.5
    n.set_position 3 * 64, 1 * 64
    
    vx = 6
    vy = 0 
    
    contacting = 0
    
    collision_ref = self.collision_system.add_o_box n, 
      0, Box2F.create(
        -16, 
        -32, 
        32, 
        64) do |n0, n1|
      
      cp = n.get_position
      p = n1.get_position
      if cp.y < p.y + 64 && cp.y > p.y + -4
        n.set_position cp.x, [cp.y + 8, p.y + 64].min
        if vy < 0
          vy = 0
        end
        contacting = 2
      end
    end
  
    a = []
    a << ScaleTo.create(0.125, 0.5, 0.5)
    a << ScaleTo.create(0.125, 0.5, 0.5 / 1.1)
    ac = RepeatForever.create(Sequence.create(a))
    s.run_action ac

    a = []
    a << MoveTo.create(0.125, Vec2.create(0, 0))
    a << MoveTo.create(0.125, Vec2.create(0, -8 * 0.5 / 1.1))
    ac = RepeatForever.create(Sequence.create(a))
    s.run_action ac
    
    pressed = 0
    
    s.run_action(
      RepeatForever.create(
        Sequence.create([
          DelayTime.create(0.033),
          (CallFunc.create do
            p = n.get_position
            p.x += vx
            if pressed > 0
              vy = 8.0
              pressed -= 1
            else
              vy -= 1
            end
            p.y += vy
            
            if p.y < -64
              Project.start_ruby_project_proc do
                MajitaiResult.new
              end
              n.remove_from_parent
              next
            end
            
            
            @@distance = p.x / 64
            @label.set_text "#{sprintf "%6.2f", @@distance}m"
            
            contacting -= 1
            
            n.set_position p
          end),
        ])
      )
    )
    
    r = Rect.create(-96 / 2, -96 / 2, 96, 96)
    sp = CorSprite.create_sprite_9 :texture => "game/sp9bg_dark.png", :rect => r
    button = CorPanel.new :text => "jump", :rect => r, 
      :font_name => "fonts/MTLc3m.ttf",
      :text_scale => 1.0, :sprite => sp, :disable_swallow => true
    button.sprite.set_scale 1.0
    button.sprite.set_position 48, 48
    
    self.scene.add_child button.sprite
    
    r = Rect.create(-@visible_size.width / 2, -@visible_size.height / 2, @visible_size.width, @visible_size.height)
    all_screen = CorPanel.new :rect => r
    all_screen.sprite.set_position(@visible_size.width / 2, @visible_size.height / 2)
    all_screen.on_touch_began do |t, e|
      if contacting > 0
        pressed = 16
      end
    end
    
    all_screen.on_touch_ended do |t, e|
      pressed = 0
    end
    
    all_screen.on_tap do
    
    end
    
    self.scene.add_child all_screen.sprite
    
    @label = self.create_distance_label
    self.scene.add_child @label.sprite
    
    ed = self.layer.get_event_dispatcher
    listener = EventListenerKeyboard.create
    listener.on_key_pressed = Proc.new do |c, e|
      if c == 146
        if contacting > 0
          pressed = 16
        end
      end
    end
    
    listener.on_key_released = Proc.new do |c, e|
      if c == 146
        pressed = 0
      end
    end
    ed.add_event_listener_with_scene_graph_priority(listener, self.layer);
 
    n.add_child s
    n
  end
  
  def create_wall x, y
    s = Sprite.create "game/wall.png"
    s.set_scale 0.5
    s.set_position x * 64, y * 64
    
    collision_ref = self.collision_system.add_o_box s, 
      1, Box2F.create(
        0, 
        0, 
        128, 
        128) do |n0, n1|
      
    end
  
    s
  end
  
  def get_y
    
    if @sx < 10
      return 0
    end
    
    if @sx < 50
      return rand(4)
    end
    
    if @sx < 100
      return rand(6)
    end
    
    if @sx < 150
      return rand(8)
    end
    
    rand(10)
  end
  
  def generate_wall
    
    while !@wall || @wall.get_position.x < @player.get_position.x + 800
    
      @wall = create_wall @sx, self.get_y
      
      self.layer.add_child @wall
      
      @sx += 1
    end
    
  end
  
  def self.distance
    @@distance
  end
  
  def create_distance_label
    r = Rect.create(- 96 * 2 / 2, - 96 / 2, 96 * 2, 96)
    label = CorPanel.new :text => "0m", :rect => r, 
          :font_name => "fonts/MTLc3m.ttf",
          :text_scale => 1.0, :disable_swallow => true
    label.sprite.set_scale 1.0
    label.sprite.set_position @visible_size.width - 96 * 2, @visible_size.height - 96 / 2
    
    label
  end
  
  def collision_system
    Project.get_collision_system
  end
  
  
end
