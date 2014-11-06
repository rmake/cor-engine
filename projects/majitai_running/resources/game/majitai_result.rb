

class MajitaiResult
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :draw_node
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    
    r = Rect.create(-96 * 4 / 2, -96 * 4 / 2, 96 * 4, 96 * 4)
    sp = CorSprite.create_sprite_9 :texture => "game/sp9bg_dark.png", :rect => r
    button = CorPanel.new :text => "Dead!", :rect => r, 
      :font_name => "fonts/MTLc3m.ttf",
      :text_scale => 1.0, :sprite => sp, :disable_swallow => true
    button.sprite.set_scale 1.0
    button.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
    
    button.on_tap do |t, e|
      Project.start_ruby_project "game/majitai_menu.rb"
    end
    
    Logger.debug "Result"
    
    self.scene.add_child button.sprite
  end
  
end

MajitaiResult.new
