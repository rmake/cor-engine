
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

