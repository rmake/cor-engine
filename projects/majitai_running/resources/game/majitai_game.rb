
class MajitaiGame
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :action_manager_fast
  attr_accessor :draw_node
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    @origin = director.get_visible_origin
  
    self.action_manager_fast = self.layer.get_action_manager
    
    sx = 0
    
    self.delay_call 0 do
      
      player = nil
      offset = Vec2.create
      
      self.draw_node = DrawNode.create
      self.draw_node.set_global_z_order 200.0
      self.scene.add_child self.draw_node
      darw_line_proc = Proc.new do
        self.draw_node.clear
        self.collision_system.render_to_draw_node self.draw_node
      end
      
      self.collision_system.set_collision_group_pair 0, 1, 1
      
      camera_action = ActionCamera.create
      camera_action.start_with_target layer
      camera_proc = Proc.new do
        p = player.get_position
        p.x += offset.x
        #p.y += offset.y
        p.y = -100
        pos = Vec3.create p.x, p.y, 1.0
        camera_action.set_eye pos
        center = Vec3.create p.x, p.y, 0.0
        camera_action.set_center center
      end
      
      player = self.create_player
      p = player.get_position
      offset.x = - p.x
      offset.y = - p.y
      
      self.layer.add_child player
      
      self.interval_call 0 do
      
        (0..1).each do |i| 
          self.collision_system.set_changed i
        end
        self.collision_system.all_pair_call
      
        wall = self.create_wall sx, 0
      
        self.layer.add_child wall
        
        camera_proc.call
        darw_line_proc.call
        
        
        sx += 1
      end
      
    end
    
  end
  
  def create_player
    n = Node.create
    s = Sprite.create "game/majitai.png"
    s.set_scale 0.5
    n.set_position 3 * 64, 1 * 64
    
    s.set_on_enter_callback do
    
      collision_ref = self.collision_system.add_o_box n, 
        0, Box2F.create(
          -32, 
          -32, 
          64, 
          64) do |n0, n1|
        
        cp = n.get_position
        p = n1.get_position
        if cp.y < p.y + 64 && cp.y > p.y + 32
          n.set_position cp.x, p.y + 64
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
      
      
      s.run_action(
        RepeatForever.create(
          Sequence.create([
            DelayTime.create(0.033),
            (CallFunc.create do
              p = n.get_position
              p.x += 2
              p.y -= 1
              
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
      button.on_tap do |t, e|
        p = n.get_position
        p.y += 32
        
        n.set_position p
      end
      
      self.scene.add_child button.sprite
  
    end
    
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
  
  def collision_system
    Project.get_collision_system
  end
  
  def delay_call(interval, &block)
    old_action = self.layer.run_action(
        RepeatForever.create(
          Sequence.create([
            DelayTime.create(interval),
            (CallFunc.create do
              self.layer.stop_action old_action
              yield
            end),
          ])
        )
      )
    cancel = Proc.new do
      self.layer.stop_action old_action
    end
    cancel
  end
  
  def interval_call(interval, &block)
    old_action = self.layer.run_action(
        RepeatForever.create(
          Sequence.create([
            DelayTime.create(interval),
            (CallFunc.create do
              yield
            end),
          ])
        )
      )
    cancel = Proc.new do
      self.layer.stop_action old_action
    end
    cancel
  end

end

MajitaiGame.new
