class BasicTest

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
        :text => "table_sp test",
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
        data[:proc].call
        #lv.node.remove_from_parent
      end
      
      button.sprite
    end
    
    lv.node.set_position 0, 0
    
    self.scene.add_child lv.node
    
  
  end
  
  def show_result_text(str)
    
    lv = CorListView.new [:one], {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
    
    
      r = Rect.create(-@visible_size.width * 0.8 / 2, -@visible_size.height / 2, @visible_size.width * 0.8, @visible_size.height)
      sp = CorSprite.create_sprite_9 :texture => "menu/sp9bg_dark.png", :rect => r
      button = CorPanel.new :text => "test", :rect => r, 
          :font_name => "fonts/MTLc3m.ttf", :align => :left,
          :text_scale => 0.5, :sprite => sp, :disable_swallow => true
      
      button.set_text str
      #button.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
      #self.scene.add_child button.sprite
      
      button.on_tap do
        lv.node.remove_from_parent
      end
      
      button.sprite
    end
    
    lv.node.set_position @visible_size.width * 0.2 / 2, 0
    
    self.scene.add_child lv.node
    
  end
  
  def test1
    
    sp = Project.get_table_sp
    
    sp.set "test", JobQueue.create
    
    str = "sp.get #{sp.get "test"}"
    
    self.show_result_text str
    
  end

end

