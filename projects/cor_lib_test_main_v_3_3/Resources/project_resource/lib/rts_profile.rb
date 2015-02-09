
class RtsProfile

  ENABLED = false

  attr_accessor :interval

  def initialize
    @enabled = ENABLED
    @table = {}
    @counter = 0
    @past_time = Project.get_time_ms
    self.interval = 300
  end
  
  def self.instance
    @instalce ||= RtsProfile.new
    @instalce
  end
  
  def st(name)
    return unless @enabled
    @table[name] ||= {
      :max_time => 0,
      :min_time => 1000 * 1000 * 1000,
      :time => 0,
      :start_time => 0,
      :sum_time => 0,
    }
    v = @table[name]
    v[:start_time] = Time.new
    #v[:start_time] = Project.get_time_ms
  end
  
  def ed(name)
    return unless @enabled
    v = @table[name]
    tm = ((Time.new - v[:start_time]) * 1000).to_f
    #tm = Project.get_time_ms - v[:start_time]
    v[:time] = tm
    if tm > v[:max_time]
      v[:max_time] = tm
    end
    if tm < v[:min_time]
      v[:min_time] = tm
    end
    v[:sum_time] += tm
  end
  
  def output
    nw = Project.get_time_ms
    sum_all = 0
    @table.each do |k, v|
      #Logger.debug "profile #{k} max #{(v[:max_time] * 1000).floor}"
      Logger.debug "profile #{k}: max #{sprintf "%.03f", v[:max_time]}" +
        ", min #{sprintf "%.03f", v[:min_time]}, sum #{sprintf "%.03f", v[:sum_time]}"
      sum_all += v[:sum_time]
    end
    Logger.debug "sum all #{sprintf "%.03f", sum_all} / #{sprintf "%.03f", (nw - @past_time)}"
    @table = {}
    @past_time = Project.get_time_ms
  end
  
  def poll
    return unless @enabled
    @counter += 1
    if @counter >= self.interval
      @counter = 0
      self.output
    end
    
  end


end

class RtsGlobal
  def self.p
    RtsProfile.instance
  end
end

