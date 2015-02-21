
class GameScene
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :draw_node
  
  @@distance = 0
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    
    @camera_base = Node.create
    
    camera = Camera.create_perspective(60, @visible_size.width / @visible_size.height, 0.1, 1000);

    camera.set_position3_d(Vec3.create(0, 5, 10));
    camera.look_at(Vec3.create(0, 3, 0), Vec3.create(0, 1, 0));
    camera.set_camera_flag 2
    @camera_base.add_child camera
    
    
    l0 = AmbientLight.create Color3B.create(200, 200, 200)
    l0.set_light_flag 2
    self.layer.add_child l0
    
    l1 = DirectionLight.create Vec3.create(0.0, -1.0, 0.0), Color3B.create(55, 55, 55)
    l1.set_light_flag 2
    self.layer.add_child l1
    
    l2 = AmbientLight.create Color3B.create(55, 55, 55)
    l2.set_light_flag 4
    self.layer.add_child l2
    
    #
    self.create_player
    
    @player.add_child @camera_base
    
    #
    self.create_field
    
    self.create_sky
    
    #
    label = Label.create_with_ttf "move by 'w, s, d, a' or cursor keys", "fonts/MTLc3m.ttf", 24, Size.create(0, 0), 0, 0
    label.set_position @visible_size.width / 2, @visible_size.height - 40
    self.scene.add_child label

    
  end
  
  def create_player
  
    s = Sprite3D.create "game/walk/testmirror_bonetest2.c3b"
    s.set_position3_d Vec3.create(0.0, 0.0, 0.0)
    s.set_scale 1.0
    self.layer.add_child s
    #s.run_action(
    #  RepeatForever.create(
    #    RotateBy.create(1.0, Vec3.create(0.0, 120.0, 0.0))
    #  )
    #)
    s.run_action(
      RepeatForever.create(
        Animate3D.create(
          Animation3D.create("game/walk/testmirror_bonetest2.c3b", ""),
          100/60, 80/60
        )
      )
    )
    
    move_x = 0
    move_z = 0
    move_v = 0.1
    rot_v = 0.01 * Math::PI
    rot = 0.0
    
    Project.interval_call 0.033 do
      p = s.get_position3_d
      p.x += -Math.sin(rot) * move_z * move_v
      p.z += -Math.cos(rot) * move_z * move_v
      rot += -move_x * rot_v
      s.set_rotation3_d Vec3.create(0, rot * 180/ Math::PI, 0)
      s.set_position3_d p
    end
    
    ed = self.layer.get_event_dispatcher
    listener = EventListenerKeyboard.create
    listener.on_key_pressed = Proc.new do |c, e|
      if c == 149
        if contacting > 0
          pressed = 16
        end
      end
      
      if c == 146 || c == 28
        move_z = 1
      end
      if c == 142 || c == 29
        move_z = -1
      end
      if c == 124 || c == 26
        move_x = -1
      end
      if c == 127 || c == 27
        move_x = 1
      end
    end
    
    listener.on_key_released = Proc.new do |c, e|
      if c == 149
        pressed = 0
      end
      
      if c == 146 || c == 28
        move_z = 0
      end
      if c == 142 || c == 29
        move_z = 0
      end
      if c == 124 || c == 26
        move_x = 0
      end
      if c == 127 || c == 27
        move_x = 0
      end
    end
    ed.add_event_listener_with_scene_graph_priority(listener, self.layer);
    
    s.set_camera_mask 2, true
    s.set_light_mask 2
 
    @player = s
    s
  end
  
  def create_field
  
    s = Sprite3D.create "game/grass/field.c3b"
    s.set_position3_d Vec3.create(0.0, 0.0, 0.0)
    s.set_scale 10.0
    self.layer.add_child s
    s.set_camera_mask 2, true
    s.set_light_mask 2
    
    @field = s
    
    s
  end
  
  def create_sky
    Texture2D.set_default_alpha_pixel_format 1
  
    #s = Sprite3D.create "game/sky/sky.c3b"
    s = Sprite3D.create "game/sky/sphere.obj"
    s.set_position3_d Vec3.create(0.0, 0.0, 0.0)
    s.set_scale 80.0
    self.layer.add_child s
    s.set_camera_mask 2, true
    s.set_light_mask 2
    
    @sky = s
    
    Texture2D.set_default_alpha_pixel_format 8
    
    s
  end
  
end
