CorProject.target_project = "cor_cs_test"
CorProject.import_cpp = true
CorProject.import_cs = true
CorProject.add_include "#{CorProject.engine_path}/packages/cs/cor_swig_base_cs"
CorProject.add_include "#{CorProject.engine_path}/packages/cpp/cor_binding_test_cpp"
CorProject.add_binding_generation :type => "cs", :swig_interface => "swig/cs/cor_binding_test_cs.i"
