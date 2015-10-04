
class RtsTestCase

  attr_accessor :name
  attr_accessor :result
  attr_accessor :records
  attr_accessor :error_count
  attr_accessor :fatal_count

  @@running_count = 0

  def initialize(name)
    self.name = name
    self.result = true
    self.records = []
    self.error_count = Logger.get_error_count
    self.fatal_count = Logger.get_fatal_count
  end

  def self.all_records=(v)
    @all_records = v
  end

  def self.all_records
    @all_records ||= []
    @all_records
  end

  def self.all_test_passed
    r = true
    self.all_records.each do |v|
      r &&= v[:result]
    end
    if @@running_count > 0
      r = false
    end
    r
  end

  def self.output_result
    a = []
    a << "all_test_passed #{self.all_test_passed.inspect}"

    self.all_records.each do |v|
      a << "  #{v[:name]} #{v[:result]}"
    end

    a << "all_test_passed #{self.all_test_passed.inspect}"

    a
  end

  def self.log_result
    str = self.output_result.join("\n")
    Logger.info str

    @log_result_count ||= 0
    all_results = (self.all_records.map do |v|
      "{\n" + (v.map do |k, v|
        "  #{k} -> #{v}\n"
      end).join + "},\n"
    end).join
    Project.write_text_to_file_direct "log_result_#{@log_result_count}.log", all_results
    @log_result_count += 1


    str
  end

  def back_trace
    bt = []
    begin
      raise ""
    rescue => e
      bt = e.backtrace[2..-1]
    end
    bt
  end

  def check(b)
    r = b
    self.result &= r
    records << {
      :type => :check,
      :arguments => b,
      :back_trace => self.back_trace,
      :result => r,
    }
  end

  def check_equal(a, b)
    r = a == b
    self.result &= r
    records << {
      :type => :check_equal,
      :arguments => [a, b],
      :back_trace => self.back_trace,
      :result => r,
    }
  end

  def check_not_equal(a, b)
    r = a != b
    self.result &= r
    records << {
      :type => :check_equal,
      :arguments => [a, b],
      :back_trace => self.back_trace,
      :result => r,
    }
  end

  def self.run(name, &block)
    test = RtsTestCase.new name
    @@running_count += 1
    yield test

  end

  def do_end
    self.check_equal(self.error_count, Logger.get_error_count)
    self.check_equal(self.fatal_count, Logger.get_fatal_count)
    self.class.all_records << {
      :name => self.name,
      :result => self.result,
      :records => self.records,
    }
    @@running_count -= 1
  end

end

