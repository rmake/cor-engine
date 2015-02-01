
class RtsMessageView
  
  attr_accessor :node
  attr_accessor :base_button
  
  def initialize(options = {})
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    @origin = director.get_visible_origin
    
    label = Label.create_with_ttf options[:text], "fonts/MTLc3m.ttf", 24, Size.create(0, 0), 0, 0
    bb = label.get_bounding_box
    label.set_alignment 1
    
    @on_close = Proc.new do
    
    end
    
    w = bb.size.width + 32
    h = bb.size.height + 32 + 10
    
    r = Rect.create(-w / 2, -h / 2, w, h)
    sp = RtsSprite.create_sprite_9 :texture => "data_test_2/sp9bg_dark.png", :rect => r
    b = RtsButton.new :text => "", :sprite => sp
    #b.set_z_order 0.0
    b.on_tap do |t, e|
      @on_close.call
      self.base_button.remove
    end
    label.set_position 0, 5
    
    drn = DrawNode.create
    drn.clear
    drn.draw_triangle(Vec2.create(0, 0), Vec2.create(10, -10), 
      Vec2.create(20, 0), Color4F.create(1, 1, 1, 1))
    drn.set_position 0, - h / 2 + 20
    
    a = []
    a << DelayTime.create(0.5)
    a << ToggleVisibility.create
    
    drn.set_on_enter_callback do
      drn.run_action(
          RepeatForever.create(
            Sequence.create(a)
          )
        )
    end
    
    b.sprite.add_child drn
    b.sprite.add_child label
    
    self.base_button = self.make_dark_bg
    self.base_button.add_child b
    self.node = self.base_button.sprite
    
  end
  
  def on_close(&block)
    @on_close = block
  end
  
  def set_z_order z
    Rts.u.each_node self.node do |n|
      n.set_global_z_order z 
    end
  end
  
  def make_dark_bg
    
    b2 = nil
    
    sp = LayerColor.create(Color4B.create(0, 0, 0, 127), 
      @visible_size.width, @visible_size.height)
    b = RtsButton.new :sprite => sp, :text => ""
    b.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
    b.sprite.set_scale 20000.0
    #b.set_z_order 0.0
    b.on_tap do |t, e|
      @on_close.call
      self.base_button.remove
    end
    
    b2 = RtsButton.new :text => ""
    b2.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
    b2.on_tap do |t, e|
      @on_close.call
      self.base_button.remove
    end
    
    b2.add_child b
    
    b2
  end
  
end
