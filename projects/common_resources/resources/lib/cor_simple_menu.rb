
class CorSimpleMenu

  attr_accessor :node

  def initialize(list)
    
    #self.layer = Project.get_current_layer
    #self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    @origin = director.get_visible_origin
    
    w = 96 * 6
    lv = CorListView.new list, {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
      r = Rect.create(-w / 2, -96 / 2, w, 96)
      sp = CorSprite.create_sprite_9 :texture => "lib/resources/sp9bg_dark.png", :rect => r
      button = CorPanel.new :text => data[:text], :rect => r, 
        :font_name => "fonts/MTLc3m.ttf",
        :text_scale => 1.0, :sprite => sp, :disable_swallow => true
      button.sprite.set_scale 1.0
      button.on_tap do |t, e|
        Project.start_ruby_project_proc &data[:proc]
      end
      
      button.sprite
    end
    
    lv.node.set_position 0, 0
    
    self.node = lv.node
  end
  
  def self.create_and_show(list)
    menu = self.new list
    Project.get_current_scene.add_child menu.node
    
  end


end



