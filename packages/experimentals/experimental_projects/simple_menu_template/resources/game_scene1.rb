
class GameScene1

  include CorSimpleScene

  def initialize
    label = CorPanel.new :text => "GameScene1"
    label.sprite.set_position self.visible_size.width / 2, self.visible_size.height / 2
    self.layer.add_child label.sprite

  end


end
