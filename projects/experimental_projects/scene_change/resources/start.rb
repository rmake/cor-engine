

Project.load_eval "lib/cor_all.rb"

def f

  director = Director.get_instance
  @visible_size = director.get_visible_size
  director.set_display_stats false

  allocation_state_label = Project::create_allocation_state_label
  allocation_state_label.set_global_z_order 300.0
  allocation_state_label.set_position @visible_size.width - 200, @visible_size.height - 20
  Project.get_current_scene.add_child allocation_state_label
  
  r = Rect.create(-96 * 6 / 2, -96 * 4 / 2, 96 * 6, 96 * 4)
  sp = CorSprite.create_sprite_9 :texture => "sp9bg_dark.png", :rect => r
  #sp = Node.create 
  #sp.add_child Sprite.create "sp9bg_dark.png"
  #sp.add_child Sprite.create "sp9bg_dark.png"
  
  button = CorPanel.new :rect => r, #:text => "Dead!", 
    :font_name => "fonts/MTLc3m.ttf",
    :text_scale => 1.0, :sprite => sp, 
    :disable_swallow => true
  button.sprite.set_scale 1.0
  button.sprite.set_position @visible_size.width / 2, @visible_size.height / 2
  
  button.on_tap do |t, e|
  
  end
  
  Project.get_current_scene.add_child button.sprite
  

  Project.delay_call 1.0 do
    Project.start_ruby_project_proc do
      f
    end
  end

end

f


error = <<EOS
proc = nil
proc = Proc.new do

  director = Director.get_instance
  @visible_size = director.get_visible_size
  director.set_display_stats false

  allocation_state_label = Project::create_allocation_state_label
  allocation_state_label.set_global_z_order 300.0
  allocation_state_label.set_position @visible_size.width - 200, @visible_size.height - 20
  Project.get_current_scene.add_child allocation_state_label

  Project.delay_call 1.0 do
    Project.start_ruby_project_proc do
      Logger.debug "proc #{proc.inspect}"
      proc.call
    end
  end

end

proc.call

EOS

