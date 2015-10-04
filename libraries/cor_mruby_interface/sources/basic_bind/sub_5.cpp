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

        
          void BasicBind_bind_func_5(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create_1", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_1);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "get_null", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_get_null);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "recieve", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_recieve);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "test", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_test);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "tmpl_test", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_tmpl_test);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_1", BasicBind_cor__mruby_interface__MrubyRefContainer_create_1);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_2", BasicBind_cor__mruby_interface__MrubyRefContainer_create_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "set_value", BasicBind_cor__mruby_interface__MrubyRefContainer_set_value);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "get_value", BasicBind_cor__mruby_interface__MrubyRefContainer_get_value);
            binder.bind_custom_method("Cor", "RCharArray", "capacity", BasicBind_cor__RCharArray_capacity);
            binder.bind_custom_method("Cor", "RCharArray", "begin_1", BasicBind_cor__RCharArray_begin_1);
            binder.bind_custom_method("Cor", "RCharArray", "begin_2", BasicBind_cor__RCharArray_begin_2);
            binder.bind_custom_method("Cor", "RCharArray", "end_1", BasicBind_cor__RCharArray_end_1);
            binder.bind_custom_method("Cor", "RCharArray", "end_2", BasicBind_cor__RCharArray_end_2);
            binder.bind_custom_method("Cor", "RCharArray", "rbegin_1", BasicBind_cor__RCharArray_rbegin_1);
            binder.bind_custom_method("Cor", "RCharArray", "rbegin_2", BasicBind_cor__RCharArray_rbegin_2);
            binder.bind_custom_method("Cor", "RCharArray", "rend_1", BasicBind_cor__RCharArray_rend_1);
            binder.bind_custom_method("Cor", "RCharArray", "rend_2", BasicBind_cor__RCharArray_rend_2);
            binder.bind_custom_method("Cor", "RCharArray", "cbegin", BasicBind_cor__RCharArray_cbegin);
            binder.bind_custom_method("Cor", "RCharArray", "cend", BasicBind_cor__RCharArray_cend);
            binder.bind_custom_method("Cor", "RCharArray", "crbegin", BasicBind_cor__RCharArray_crbegin);
            binder.bind_custom_method("Cor", "RCharArray", "crend", BasicBind_cor__RCharArray_crend);
            binder.bind_custom_method("Cor", "RCharArray", "shrink_to_fit", BasicBind_cor__RCharArray_shrink_to_fit);
            binder.bind_custom_method("Cor", "RCharArray", "size", BasicBind_cor__RCharArray_size);
            binder.bind_custom_method("Cor", "RCharArray", "max_size", BasicBind_cor__RCharArray_max_size);
            binder.bind_custom_method("Cor", "RCharArray", "empty", BasicBind_cor__RCharArray_empty);
            binder.bind_custom_method("Cor", "RCharArray", "get_allocator", BasicBind_cor__RCharArray_get_allocator);
            binder.bind_custom_method("Cor", "RCharArray", "data_1", BasicBind_cor__RCharArray_data_1);
            binder.bind_custom_method("Cor", "RCharArray", "data_2", BasicBind_cor__RCharArray_data_2);
            binder.bind_custom_method("Cor", "RCharArray", "front_1", BasicBind_cor__RCharArray_front_1);
            binder.bind_custom_method("Cor", "RCharArray", "front_2", BasicBind_cor__RCharArray_front_2);
            binder.bind_custom_method("Cor", "RCharArray", "back_1", BasicBind_cor__RCharArray_back_1);
            binder.bind_custom_method("Cor", "RCharArray", "back_2", BasicBind_cor__RCharArray_back_2);
            binder.bind_custom_method("Cor", "RCharArray", "pop_back", BasicBind_cor__RCharArray_pop_back);
            binder.bind_custom_method("Cor", "RCharArray", "clear", BasicBind_cor__RCharArray_clear);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "reset", BasicBind_cor__mruby_interface__AnyWP_reset);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "expired", BasicBind_cor__mruby_interface__AnyWP_expired);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "lock", BasicBind_cor__mruby_interface__AnyWP_lock);

          }

    }
}
