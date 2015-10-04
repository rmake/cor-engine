

class CorSimpleMenuScene

  attr_accessor :layer
  attr_accessor :scene
  attr_accessor :action_manager_fast

  def initialize(list)

    self.layer = Project.get_current_layer
    self.scene = Project.get_current_scene


    director = Director.get_instance
    @visible_size = director.get_visible_size
    director.set_display_stats false

    Logger.debug "module #{Project.get_import_name}"

    old_list = list

    list = list.map do |v|

      nv = v.clone

      proc = v[:proc]

      nv[:proc] = Proc.new do
        proc.call
        layer = Project.get_current_layer

        r = Rect.create(-96 / 2, -96 / 2, 96, 96)
        sp = RtsSprite.create_sprite_9 :texture => "lib/resources/sp9bg_dark.png", :rect => r
        b = RtsButton.new :text => "menu", :text_scale => 0.6 , :sprite => sp, :rect => r
        b.sprite.set_position @visible_size.width - 96 / 2, 96 / 2
        b.on_tap do
          Project.start_ruby_project_proc do
            CorSimpleMenuScene.new old_list
          end
        end
        layer.add_child b.sprite

      end

      nv
    end

    CorSimpleMenu.create_and_show list

  end


end


