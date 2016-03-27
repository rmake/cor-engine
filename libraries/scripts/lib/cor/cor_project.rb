
module Cor

  class CorProject

    def self.source_path=(v)
      @source_path = v
    end

    def self.source_path
      @source_path
    end

    def self.engine_path=(v)
      @engine_path = v
    end

    def self.engine_path
      @engine_path
    end

    def self.includes=(a)
      @includes = a
    end

    def self.includes
      @includes ||= []
      @includes
    end

    def self.add_include(v)
      self.includes << "#{self.source_path}/#{v}"
    end

    #
    # "cor_cpp_lib"
    # "cor_mruby_lib"
    # "cor_test"
    # "cor_cpp_console"
    # "cor_mruby_console"
    # "cor_cocos2dx"
    def self.target_project=(target_project)
      @target_project = target_project
    end

    def self.target_project
      @target_project ||= "cor_cocos2dx"
      @target_project
    end

    def self.current_target_project=(current_target_project)
      @current_target_project = current_target_project
    end

    def self.current_target_project
      @current_target_project ||= self.target_project
      @current_target_project
    end

    def self.import_cpp=(v)
      @import_cpp = v
    end

    def self.import_cpp
      @import_cpp
    end

    def self.import_cpp_entry=(v)
      @import_cpp_entry = v
    end

    def self.import_cpp_entry
      @import_cpp_entry
    end

    def self.crypt=(v)
      @crypt = v
    end

    def self.crypt
      @crypt
    end

    def self.administrator=(v)
      @administrator = v
    end

    def self.administrator
      @administrator
    end

    def self.set_import_cpp_filter(&block)
      @import_cpp_filter = block
    end

    def self.import_cpp_filter
      @import_cpp_filter
    end

    def self.binding_confs=(a)
      @binding_confs = a
    end

    def self.binding_confs
      @binding_confs
    end

    def self.current_project_path=(v)
      @current_project_path = v
    end

    def self.current_project_path
      @current_project_path
    end

  end

end

