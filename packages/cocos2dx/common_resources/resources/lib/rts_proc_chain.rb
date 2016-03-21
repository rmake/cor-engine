
class RtsProcChain

  def initialize(&block)
    @proc_list = []
  
    yield self
  end
  
  def self.run(&block)
    p = RtsProcChain.new &block
    p.do_next
  end
  
  def push(&block)
    @proc_list << block
  end
  
  def do_next
    p = @proc_list.shift
    if p
      p.call
    end
  end


end



