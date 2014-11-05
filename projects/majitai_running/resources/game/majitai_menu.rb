
class MajitaiMenu
  
  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :action_manager_fast
  
  def initialize
    
    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene
    
    director = Director.get_instance
    @visible_size = director.get_visible_size
    @origin = director.get_visible_origin
  
    self.action_manager_fast = self.layer.get_action_manager
    
    self.delay_call 0 do
      #self.scene.add_child label
      list = []
      list << {
        :text => "start_game",
        :file => "game/majitai_game.rb",
      }
      
      lv = CorListView.new self, list, {:size => Size.create(@visible_size.width - 100, @visible_size.height)} do |data|
        r = Rect.create(-96 * 4 / 2, -96 / 2, 96 * 4, 96)
        sp = CorSprite.create_sprite_9 :texture => "game/sp9bg_dark.png", :rect => r
        button = CorPanel.new :text => data[:text], :rect => r, 
          :font_name => "fonts/MTLc3m.ttf",
          :text_scale => 1.0, :sprite => sp, :disable_swallow => true
        button.sprite.set_scale 1.0
        button.on_tap do |t, e|
          Project.start_ruby_project data[:file]
        end
        
        button.sprite
      end
      
      lv.node.set_position 0, 0
      
    end
    
    
    
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

end

