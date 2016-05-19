
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

    @log_result_count ||= 0

    Logger.info str
    error_log = RtsTestCase.get_error_log
    if error_log.length > 0
      Logger.info error_log
    end

    @log_result_count += 1

    str
  end

  def self.get_all_result
    all_results = (self.all_records.map do |v|
      "{\n" + (v.map do |k, v|
        "  #{k} -> #{v}\n"
      end).join + "},\n"
    end).join
    all_results
  end

  def self.get_error_log
    info_text = ""
    result = (self.all_records.select{|v| !v[:result] }.map do |v|
      "{\n" + (v.map do |k, v|
        if v.respond_to?(:map)
          ta = v.select{|v| !v[:result] }
          ta = ta.map do |v|
            [" {"] + (v.map do |k, v|
              "      #{k} -> #{v.respond_to?(:map) ? "\n" + v.map{|v| "        #{v}"}.join("\n") : v}"
            end) + ["    },"]
          end

          nv = ta.join("\n")

          "  #{k} -> #{nv}\n"
        else
          "  #{k} -> #{v}\n"
        end


      end).join + "},\n"
    end).join

    info_text += result
    info_text
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

  def self.run_end(name, &block)
    test = RtsTestCase.new name
    @@running_count += 1
    yield test
    test.do_end
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

