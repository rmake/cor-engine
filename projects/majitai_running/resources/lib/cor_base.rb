
CorSprite = RtsSprite
CorUtilities = RtsUtilities
CorPanel = RtsButton
#CorListView = RtsListView
CorLabel = RtsLabel


class CorListView < RtsListView
  def initialize(list_data, options = {}, &item_block)
    super nil, list_data, options, &item_block
  end
end

