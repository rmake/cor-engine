
def f

  director = Director.get_instance
  @visible_size = director.get_visible_size
  director.set_display_stats false

  allocation_state_label = Project::create_allocation_state_label
  allocation_state_label.set_global_z_order 300.0
  allocation_state_label.set_position @visible_size.width - 200, @visible_size.height - 20
  Project.get_current_scene.add_child allocation_state_label

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

