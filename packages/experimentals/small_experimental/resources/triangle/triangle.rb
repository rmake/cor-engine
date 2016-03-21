
class TriangleTest

  attr_accessor :layer
  attr_accessor :scene
  

  def initialize
  
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    @origin = director.get_visible_origin
    
    list = [
      {
        :text => "triangle test",
        :proc => (Proc.new do
          self.test1
        end),
      },
    ]
    
    lv = CorListView.new list, {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
      r = Rect.create(-96 * 4 / 2, -96 / 2, 96 * 4, 96)
      sp = CorSprite.create_sprite_9 :texture => "menu/sp9bg_dark.png", :rect => r
      button = CorPanel.new :text => data[:text], :rect => r, 
        :font_name => "fonts/MTLc3m.ttf",
        :text_scale => 1.0, :sprite => sp, :disable_swallow => true
      button.sprite.set_scale 1.0
      button.on_tap do |t, e|
        @draw_node.clear
        data[:proc].call
        #lv.node.remove_from_parent
      end
      
      button.sprite
    end
    
    lv.node.set_position 0, 0
    
    self.scene.add_child lv.node
    
    @draw_node = DrawNode.create
    @draw_node.set_global_z_order 1.0
    self.scene.add_child @draw_node
  
  end
  
  def show_result_text(str)
    
    Cor.p.st :result_set_text
    
    lv = CorListView.new [:one], {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
    
      Cor.p.st :internal_list_view
    
      ct = 0
      str.each_line{|v| ct += 1}
      h = (ct * 19) + 10
      r = Rect.create(-@visible_size.width * 0.8 / 2, -h / 2, @visible_size.width * 0.8, h)
      sp = CorSprite.create_sprite_9 :texture => "menu/sp9bg_dark.png", :rect => r
      button = CorPanel.new :rect => r, 
          :font_name => "fonts/MTLc3m.ttf", :align => :left,
          :text_scale => 0.5, :sprite => sp, :disable_swallow => true
      
      button.set_text str
      
      #button.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
      #self.scene.add_child button.sprite
      
      button.on_tap do
        Cor.p.output
    
        Cor.p.st :close_output
        @draw_node.clear
        lv.node.remove_from_parent
        Cor.p.ed :close_output
        
        Cor.p.output
        
        Project.start_ruby_project_proc do
          GraphTest.new
        end
    
      end
      
      Cor.p.ed :internal_list_view
      
      button.sprite
    end
    
    lv.node.set_position @visible_size.width * 0.2 / 2, 0
    
    self.scene.add_child lv.node
    
    Cor.p.ed :result_set_text
      
    
  end
  
  def test1
    
    director = Director.get_instance
    texture_cache = director.get_texture_cache
    texture = texture_cache.add_image("menu/sp9bg.png")
    node = TexturedTriangleNode.create texture
    
    node.add_triangle Vec2.create(100, 100), Color4B.create(255, 255, 255, 255), Tex2F.create(0, 0),
      Vec2.create(200, 100), Color4B.create(255, 255, 255, 255), Tex2F.create(1, 0),
      Vec2.create(100, 200), Color4B.create(255, 255, 255, 255), Tex2F.create(0, 1)
      
    self.scene.add_child node
  end

end
