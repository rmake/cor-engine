
CorSprite = RtsSprite
CorUtilities = RtsUtilities
CorPanel = RtsButton
#CorListView = RtsListView
CorLabel = RtsLabel
CorMessageView = RtsMessageView
CorProfile = RtsProfile


class CorListView < RtsListView
  def initialize(list_data, options = {}, &item_block)
    super nil, list_data, options, &item_block
  end
end

module Cor
  def self.p
    CorProfile.instance
  end
end

class RtsMessageView
  def self.simple_show(text)
    view = RtsMessageView.new :text => text, :image => "lib/resources/sp9bg_dark.png"
    Project.get_current_scene.add_child view.node
  end

end


