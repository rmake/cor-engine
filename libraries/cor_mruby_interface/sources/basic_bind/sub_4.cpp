#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/collision/collision_2d.h"
#include "cor_type/sources/collision/collision_2d_tmpl.h"
#include "cor_type/sources/cor_type.h"
#include "cor_type/sources/math/matrix4x4.h"
#include "cor_type/sources/math/matrix4x4_tmpl.h"
#include "cor_type/sources/math/vector2.h"
#include "cor_type/sources/math/vector2_tmpl.h"
#include "cor_type/sources/math/vector3.h"
#include "cor_type/sources/math/vector3_tmpl.h"
#include "cor_type/sources/math/vector4.h"
#include "cor_type/sources/math/vector4_tmpl.h"
#include "cor_type/sources/primitive/box.h"
#include "cor_type/sources/primitive/box_tmpl.h"
#include "cor_type/sources/primitive/o_box.h"
#include "cor_type/sources/primitive/o_box_tmpl.h"
#include "cor_type/sources/primitive/o_sphere.h"
#include "cor_type/sources/primitive/o_sphere_tmpl.h"
#include "cor_type/sources/primitive/sphere.h"
#include "cor_type/sources/primitive/sphere_tmpl.h"
#include "cor_data_structure/sources/ai/cost_grid_space.h"
#include "cor_data_structure/sources/ai/cost_grid_space_tmpl.h"
#include "cor_data_structure/sources/ai/priority_queue.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl.h"
#include "cor_data_structure/sources/ai/stack_decoder.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl.h"
#include "cor_data_structure/sources/array_pool.h"
#include "cor_data_structure/sources/array_pool_tmpl.h"
#include "cor_data_structure/sources/basic/shared_ptr_table.h"
#include "cor_data_structure/sources/geometry/r_tree_pool.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl.h"
#include "cor_data_structure/sources/geometry/uniform_grid.h"
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl.h"
#include "cor_data_structure/sources/tree_pool.h"
#include "cor_data_structure/sources/tree_pool_tmpl.h"
#include "cor_algorithm/sources/bit_operation.h"
#include "cor_algorithm/sources/bit_operation_tmpl.h"
#include "cor_algorithm/sources/utilities.h"
#include "cor_algorithm/sources/utilities_tmpl.h"
#include "cor_system/sources/allocation_monitor.h"
#include "cor_system/sources/cor_crypt.h"
#include "cor_system/sources/cor_time.h"
#include "cor_system/sources/job_queue.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/parallel_processor.h"
#include "cor_system/sources/thread_pool.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"

namespace cor
{
    namespace mruby_interface
    {

        
          void BasicBind_bind_func_4(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorSystem", "JobQueue", "empty", BasicBind_cor__system__JobQueue_empty);
            binder.bind_custom_method("CorSystem", "JobQueue", "add_job", BasicBind_cor__system__JobQueue_add_job);
            binder.bind_custom_method("CorSystem", "JobQueue", "step", BasicBind_cor__system__JobQueue_step);
            binder.bind_custom_method("CorSystem", "Logger", "add_print_func_1", BasicBind_cor__system__Logger_add_print_func_1);
            binder.bind_custom_method("CorSystem", "Logger", "add_print_func_2", BasicBind_cor__system__Logger_add_print_func_2);
            binder.bind_custom_method("CorSystem", "Logger", "pop_print_func", BasicBind_cor__system__Logger_pop_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "clear_print_func", BasicBind_cor__system__Logger_clear_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "call_print_func", BasicBind_cor__system__Logger_call_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_count", BasicBind_cor__system__Logger_get_local_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_debug_count", BasicBind_cor__system__Logger_get_local_debug_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_info_count", BasicBind_cor__system__Logger_get_local_info_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_warn_count", BasicBind_cor__system__Logger_get_local_warn_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_error_count", BasicBind_cor__system__Logger_get_local_error_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_fatal_count", BasicBind_cor__system__Logger_get_local_fatal_count);
            binder.bind_static_method("CorSystem", "Logger", "get_count", BasicBind_cor__system__Logger_get_count);
            binder.bind_static_method("CorSystem", "Logger", "get_debug_count", BasicBind_cor__system__Logger_get_debug_count);
            binder.bind_static_method("CorSystem", "Logger", "get_info_count", BasicBind_cor__system__Logger_get_info_count);
            binder.bind_static_method("CorSystem", "Logger", "get_warn_count", BasicBind_cor__system__Logger_get_warn_count);
            binder.bind_static_method("CorSystem", "Logger", "get_error_count", BasicBind_cor__system__Logger_get_error_count);
            binder.bind_static_method("CorSystem", "Logger", "get_fatal_count", BasicBind_cor__system__Logger_get_fatal_count);
            binder.bind_static_method("CorSystem", "Logger", "info", BasicBind_cor__system__Logger_info);
            binder.bind_static_method("CorSystem", "Logger", "debug", BasicBind_cor__system__Logger_debug);
            binder.bind_static_method("CorSystem", "Logger", "warn", BasicBind_cor__system__Logger_warn);
            binder.bind_static_method("CorSystem", "Logger", "error", BasicBind_cor__system__Logger_error);
            binder.bind_static_method("CorSystem", "Logger", "fatal", BasicBind_cor__system__Logger_fatal);
            binder.bind_static_method("CorSystem", "Logger", "get_instance", BasicBind_cor__system__Logger_get_instance);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "test_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_test_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "a=", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_set_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "a", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_get_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "toast", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_toast);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "test_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_test_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "a=", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_set_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "a", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_get_a);

          }

    }
}
