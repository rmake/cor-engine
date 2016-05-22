CorProject.target_project = "cor_mruby_console"

if CorProject.current_target_project == "cor_mruby_console"
  CorProject.add_include "#{CorProject.engine_path}/packages/mruby/lib_load_eval"
end
CorProject.add_include "#{CorProject.engine_path}/packages/mruby/lib_test_mruby"

