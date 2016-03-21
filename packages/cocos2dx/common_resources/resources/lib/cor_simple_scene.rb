
module CorSimpleScene

  def layer
    @layer ||= Project.get_current_layer
    @layer
  end

  def scene
    @scene ||= Project.get_current_scene
    @scene
  end

  def visible_size
    unless @visible_size
      director = Director.get_instance
      @visible_size ||= director.get_visible_size
    end
    @visible_size
  end

end

