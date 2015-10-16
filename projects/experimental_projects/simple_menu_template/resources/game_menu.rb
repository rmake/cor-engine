
class GameMenu

  def initialize

    list = []
    list << {
      :text => "start_game",
      :proc => (Proc.new do
        GameScene1.new
      end),
    }

    CorSimpleMenuScene.new list

  end


end


