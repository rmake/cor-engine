CorProject.target_project = "cor_mruby_console"
CorProject.import_cpp = true
CorProject.import_cpp_entry = "cor_eigen_mruby_test_import_initialize"
CorProject.add_include ".."
CorProject.add_include "#{CorProject.engine_path}/packages/mruby/lib_common_mruby"
