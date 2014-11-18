
class MajitaiMenu
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :action_manager_fast
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    director.set_display_stats false
    
    list = []
    list << {
      :text => "start_game",
      :file => "game/majitai_game.rb",
    }
    
    lv = CorListView.new list, {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
      r = Rect.create(-96 * 4 / 2, -96 / 2, 96 * 4, 96)
      sp = CorSprite.create_sprite_9 :texture => "game/sp9bg_dark.png", :rect => r
      button = CorPanel.new :rect => r, 
        :font_name => "fonts/MTLc3m.ttf", :text => data[:text], 
        :text_scale => 1.0, :sprite => sp, :disable_swallow => true
      button.sprite.set_scale 1.0
      button.on_tap do |t, e|
        Project.start_ruby_project data[:file]
      end
      
      button.sprite
    end
    
    lv.node.set_position 0, 0
    
    self.layer.add_child lv.node
    
  end
  

end

MajitaiMenu.new

