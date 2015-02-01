
class CorMenu
  
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
    
    #label = CorSprite.create_label_atlas "test"
    #label.set_position 100, 100
    
    
    #self.scene.add_child label
    list = [
      {
        :text => "graph/graph.rb",
        :proc => (Proc.new do
          GraphTest.new
        end),
      },
      {
        :text => "release_sample",
        :proc => (Proc.new do
          ReleaseSampleMenu.new
        end),
      },
      {
        :text => "basic/basic.rb",
        :proc => (Proc.new do
          BasicTest.new
        end),
      },
      {
        :text => "math/operator.rb",
        :proc => (Proc.new do
          OperatorTest.new
        end),
      },
      {
        :text => "triangle.rb",
        :proc => (Proc.new do
          TriangleTest.new
        end),
      },
      {
        :text => "sound/sound.rb",
        :proc => (Proc.new do
          SoundTest.new
        end),
      },
      
    ]
    
    CorSimpleMenu.create_and_show list
    
  end

end

