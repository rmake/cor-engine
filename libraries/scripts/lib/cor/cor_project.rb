
module Cor

  class CorProject

    def self.instance
      @instance ||= CorProject.new
      @instance
    end

    def self.clear_instance
      @instance = nil
    end

    def source_path=(v)
      @source_path = v
    end

    def source_path
      @source_path
    end

    def self.source_path=(v)
      self.instance.source_path = v
    end

    def self.source_path
      self.instance.source_path
    end

    def engine_path=(v)
      @engine_path = v
    end

    def engine_path
      @engine_path
    end

    def self.engine_path=(v)
      self.instance.engine_path = v
    end

    def self.engine_path
      self.instance.engine_path
    end

    def includes=(a)
      @includes = a
    end

    def includes
      @includes ||= []
      @includes
    end

    def self.includes=(a)
      self.instance.includes = a
    end

    def self.includes
      self.instance.includes
    end

    def add_include(v)
      self.includes << "#{self.source_path}/#{v}"
    end

    def self.add_include(v)
      self.instance.add_include v
    end

    #
    # "cor_cpp_lib"
    # "cor_mruby_lib"
    # "cor_test"
    # "cor_cpp_console"
    # "cor_mruby_console"
    # "cor_cocos2dx"
    # "cor_cs_console"
    # "cor_cs_test"
    # "cor_cs_dll"
    def target_project=(target_project)
      @target_project = target_project
    end

    def target_project
      @target_project ||= "cor_cocos2dx"
      @target_project
    end

    def self.target_project=(target_project)
      self.instance.target_project = target_project
    end

    def self.target_project
      self.instance.target_project
    end

    def current_target_project=(current_target_project)
      @current_target_project = current_target_project
    end

    def current_target_project
      @current_target_project ||= self.target_project
      @current_target_project
    end

    def self.current_target_project=(current_target_project)
      self.instance.current_target_project = current_target_project
    end

    def self.current_target_project
      self.instance.current_target_project
    end

    def import_cpp=(v)
      @import_cpp = v
    end

    def import_cpp
      @import_cpp
    end

    def self.import_cpp=(v)
      self.instance.import_cpp = v
    end

    def self.import_cpp
      self.instance.import_cpp
    end

    def import_cpp_entry=(v)
      @import_cpp_entry = v
    end

    def import_cpp_entry
      @import_cpp_entry
    end

    def self.import_cpp_entry=(v)
      self.instance.import_cpp_entry = v
    end

    def self.import_cpp_entry
      self.instance.import_cpp_entry
    end

    def crypt=(v)
      @crypt = v
    end

    def crypt
      @crypt
    end

    def self.crypt=(v)
      self.instance.crypt = v
    end

    def self.crypt
      self.instance.crypt
    end

    def administrator=(v)
      @administrator = v
    end

    def administrator
      @administrator
    end

    def self.administrator=(v)
      self.instance.administrator = v
    end

    def self.administrator
      self.instance.administrator
    end

    def set_import_cpp_filter(&block)
      @import_cpp_filter = block
    end

    def import_cpp_filter
      @import_cpp_filter
    end

    def self.set_import_cpp_filter(&block)
      self.instance.import_cpp_filter &block
    end

    def self.import_cpp_filter
      self.instance.import_cpp_filter
    end

    def binding_confs=(a)
      @binding_confs = a
    end

    def binding_confs
      @binding_confs
    end

    def self.binding_confs=(a)
      self.instance.binding_confs = a
    end

    def self.binding_confs
      self.instance.binding_confs
    end

    def current_project_path=(v)
      @current_project_path = v
    end

    def current_project_path
      @current_project_path
    end

    def self.current_project_path=(v)
      self.instance.current_project_path = v
    end

    def self.current_project_path
      self.instance.current_project_path
    end

    # {
    #  :type => "cs", # "cs", "mruby"
    # }
    def add_binding_generation(binding_data)
      @binding_generations ||= []
      @binding_generations << binding_data
    end

    def binding_generations
      @binding_generations ||= []
      @binding_generations
    end

    def self.add_binding_generation(binding_data)
      self.instance.add_binding_generation binding_data
    end

    def self.binding_generations
      self.instance.binding_generations
    end

    def on_build_end(&block)
      @build_end = block
    end

    def build_end_proc
      @build_end
    end

    def self.on_build_end(&block)
      self.instance.on_build_end &block
    end

    def self.build_end_proc
      self.instance.build_end_proc
    end

    #
    def import_cs=(v)
      @import_cs = v
    end

    def import_cs
      @import_cs
    end

    def self.import_cs=(v)
      self.instance.import_cs = v
    end

    def self.import_cs
      self.instance.import_cs
    end

    def import_cs_entry=(v)
      @import_cs_entry = v
    end

    def import_cs_entry
      @import_cs_entry
    end

    def self.import_cs_entry=(v)
      self.instance.import_cs_entry = v
    end

    def self.import_cs_entry
      self.instance.import_cs_entry
    end

    def output_cs_path=(v)
      @output_cs_path = v
    end

    def output_cs_path
      @output_cs_path
    end

    def self.output_cs_path=(v)
      self.instance.output_cs_path = v
    end

    def self.output_cs_path
      self.instance.output_cs_path
    end

    def output_dll_path=(v)
      @output_dll_path = v
    end

    def output_dll_path
      @output_dll_path
    end

    def self.output_dll_path=(v)
      self.instance.output_dll_path = v
    end

    def self.output_dll_path
      self.instance.output_dll_path
    end

    def output_resource_path=(v)
      @output_resource_path = v
    end

    def output_resource_path
      @output_resource_path
    end

    def self.output_resource_path=(v)
      self.instance.output_resource_path = v
    end

    def self.output_resource_path
      self.instance.output_resource_path
    end

  end

end

