
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
    
    allocation_state_label = Project::create_allocation_state_label
    allocation_state_label.set_global_z_order 300.0
    self.layer.add_child allocation_state_label
    
    list = []
    list << {
      :text => "start_game",
      :proc => (Proc.new do
        Project.start_ruby_project_proc do
          MajitaiGame.new
        end
      end),
    }
    
    lv = CorListView.new list, {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
      r = Rect.create(-96 * 4 / 2, -96 / 2, 96 * 4, 96)
      sp = CorSprite.create_sprite_9 :texture => "game/sp9bg_dark.png", :rect => r
      button = CorPanel.new :text => data[:text], :rect => r, 
        :font_name => "fonts/MTLc3m.ttf",
        :text_scale => 1.0, :sprite => sp, :disable_swallow => true
      button.sprite.set_scale 1.0
      button.on_tap do |t, e|
        data[:proc].call
      end
      
      button.sprite
    end
    
    lv.node.set_position 0, 0
    
    self.layer.add_child lv.node
    
  end
  

end



