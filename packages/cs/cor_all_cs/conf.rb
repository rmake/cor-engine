CorProject.target_project = "cor_cs_console"
CorProject.import_cpp = true
CorProject.import_cs = true
CorProject.add_include "#{CorProject.engine_path}/packages/cs/cor_swig_base_cs"
CorProject.add_binding_generation :type => "cs", :swig_interface => "swig/cs/cor_all_cs.i"
