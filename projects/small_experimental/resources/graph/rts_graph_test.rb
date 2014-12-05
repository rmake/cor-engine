
class RtsEasyCharacter

  def initialize(x, y, color)
    
  end

end

class RtsGraphTest

  def initialize(graph_test, draw_node)
    
    @draw_node = draw_node
    @graph_test = graph_test
    
    collision_system = Project.get_collision_system
    rts_object_group = Project.get_rts_object_group
    grid_space = CostGridSpace.create
    sz = Size.create 200, 200 #21, 21
    grid_space.set_neighbor_mode 1
    grid_space.set_max_cost 20.0
    grid_space.resize sz.width, sz.height
    
    Cor.p.output
    
    Cor.p.st :graph_run1
    str = RtsObjectCostGridSpaceExperimental.run2 Project.get_current_scene, 
      @draw_node, collision_system, grid_space, rts_object_group
    Cor.p.ed :graph_run1
    
    Cor.p.output
    
    
    graph_test.show_result_text str
    
  end


end

