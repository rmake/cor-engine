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

        
          void BasicBind_bind_func_6(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "Vector2F", "set", BasicBind_cor__type__Vector2F_set);
            binder.bind_custom_method("CorType", "Vector2F", "begin_1", BasicBind_cor__type__Vector2F_begin_1);
            binder.bind_custom_method("CorType", "Vector2F", "end_1", BasicBind_cor__type__Vector2F_end_1);
            binder.bind_custom_method("CorType", "Vector2F", "begin_2", BasicBind_cor__type__Vector2F_begin_2);
            binder.bind_custom_method("CorType", "Vector2F", "end_2", BasicBind_cor__type__Vector2F_end_2);
            binder.bind_custom_method("CorType", "Vector2F", "size", BasicBind_cor__type__Vector2F_size);
            binder.bind_custom_method("CorType", "Vector2F", "get_p_1", BasicBind_cor__type__Vector2F_get_p_1);
            binder.bind_custom_method("CorType", "Vector2F", "get_p_2", BasicBind_cor__type__Vector2F_get_p_2);
            binder.bind_custom_method("CorType", "Vector2F", "get_square_magnitude", BasicBind_cor__type__Vector2F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector2F", "get_magnitude", BasicBind_cor__type__Vector2F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector2F", "normalize", BasicBind_cor__type__Vector2F_normalize);
            binder.bind_custom_method("CorType", "Vector2F", "dot", BasicBind_cor__type__Vector2F_dot);
            binder.bind_custom_method("CorType", "Vector2F", "cross", BasicBind_cor__type__Vector2F_cross);
            binder.bind_custom_method("CorType", "Vector2F", "distance", BasicBind_cor__type__Vector2F_distance);
            binder.bind_static_method("CorType", "Vector2F", "zero", BasicBind_cor__type__Vector2F_zero);
            binder.bind_static_method("CorType", "Vector2F", "one", BasicBind_cor__type__Vector2F_one);
            binder.bind_custom_method("CorType", "Vector2F", "max_vec", BasicBind_cor__type__Vector2F_max_vec);
            binder.bind_custom_method("CorType", "Vector2F", "min_vec", BasicBind_cor__type__Vector2F_min_vec);
            binder.bind_custom_method("CorType", "Vector2F", "all_less", BasicBind_cor__type__Vector2F_all_less);
            binder.bind_custom_method("CorType", "Vector2F", "some_less", BasicBind_cor__type__Vector2F_some_less);
            binder.bind_custom_method("CorType", "Vector2F", "all_greater", BasicBind_cor__type__Vector2F_all_greater);
            binder.bind_custom_method("CorType", "Vector2F", "some_greater", BasicBind_cor__type__Vector2F_some_greater);
            binder.bind_custom_method("CorType", "Vector2F", "all_less_equal", BasicBind_cor__type__Vector2F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector2F", "some_less_equal", BasicBind_cor__type__Vector2F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector2F", "all_greater_equal", BasicBind_cor__type__Vector2F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector2F", "some_greater_equal", BasicBind_cor__type__Vector2F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector2F", "sum", BasicBind_cor__type__Vector2F_sum);
            binder.bind_custom_method("CorType", "Vector2F", "x=", BasicBind_cor__type__Vector2F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector2F", "x", BasicBind_cor__type__Vector2F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector2F", "y=", BasicBind_cor__type__Vector2F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector2F", "y", BasicBind_cor__type__Vector2F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector2F", "_asterisk__0", BasicBind_cor__type__Vector2F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2F", "*", BasicBind_cor__type__Vector2F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2F", "_plus__0", BasicBind_cor__type__Vector2F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2F", "+", BasicBind_cor__type__Vector2F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2F", "_minus__0", BasicBind_cor__type__Vector2F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2F", "-", BasicBind_cor__type__Vector2F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2F", "_minus_self__0", BasicBind_cor__type__Vector2F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2F", "-@", BasicBind_cor__type__Vector2F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2F", "_brackets__0", BasicBind_cor__type__Vector2F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2F", "[]", BasicBind_cor__type__Vector2F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2F", "_brackets_equal__0", BasicBind_cor__type__Vector2F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector2F", "[]=", BasicBind_cor__type__Vector2F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector2I", "set", BasicBind_cor__type__Vector2I_set);
            binder.bind_custom_method("CorType", "Vector2I", "begin_1", BasicBind_cor__type__Vector2I_begin_1);
            binder.bind_custom_method("CorType", "Vector2I", "end_1", BasicBind_cor__type__Vector2I_end_1);
            binder.bind_custom_method("CorType", "Vector2I", "begin_2", BasicBind_cor__type__Vector2I_begin_2);
            binder.bind_custom_method("CorType", "Vector2I", "end_2", BasicBind_cor__type__Vector2I_end_2);
            binder.bind_custom_method("CorType", "Vector2I", "size", BasicBind_cor__type__Vector2I_size);
            binder.bind_custom_method("CorType", "Vector2I", "get_p_1", BasicBind_cor__type__Vector2I_get_p_1);
            binder.bind_custom_method("CorType", "Vector2I", "get_p_2", BasicBind_cor__type__Vector2I_get_p_2);
            binder.bind_custom_method("CorType", "Vector2I", "get_square_magnitude", BasicBind_cor__type__Vector2I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector2I", "get_magnitude", BasicBind_cor__type__Vector2I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector2I", "normalize", BasicBind_cor__type__Vector2I_normalize);
            binder.bind_custom_method("CorType", "Vector2I", "dot", BasicBind_cor__type__Vector2I_dot);
            binder.bind_custom_method("CorType", "Vector2I", "cross", BasicBind_cor__type__Vector2I_cross);
            binder.bind_custom_method("CorType", "Vector2I", "distance", BasicBind_cor__type__Vector2I_distance);
            binder.bind_static_method("CorType", "Vector2I", "zero", BasicBind_cor__type__Vector2I_zero);
            binder.bind_static_method("CorType", "Vector2I", "one", BasicBind_cor__type__Vector2I_one);
            binder.bind_custom_method("CorType", "Vector2I", "max_vec", BasicBind_cor__type__Vector2I_max_vec);
            binder.bind_custom_method("CorType", "Vector2I", "min_vec", BasicBind_cor__type__Vector2I_min_vec);
            binder.bind_custom_method("CorType", "Vector2I", "all_less", BasicBind_cor__type__Vector2I_all_less);
            binder.bind_custom_method("CorType", "Vector2I", "some_less", BasicBind_cor__type__Vector2I_some_less);
            binder.bind_custom_method("CorType", "Vector2I", "all_greater", BasicBind_cor__type__Vector2I_all_greater);
            binder.bind_custom_method("CorType", "Vector2I", "some_greater", BasicBind_cor__type__Vector2I_some_greater);
            binder.bind_custom_method("CorType", "Vector2I", "all_less_equal", BasicBind_cor__type__Vector2I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector2I", "some_less_equal", BasicBind_cor__type__Vector2I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector2I", "all_greater_equal", BasicBind_cor__type__Vector2I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector2I", "some_greater_equal", BasicBind_cor__type__Vector2I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector2I", "sum", BasicBind_cor__type__Vector2I_sum);
            binder.bind_custom_method("CorType", "Vector2I", "x=", BasicBind_cor__type__Vector2I_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector2I", "x", BasicBind_cor__type__Vector2I_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector2I", "y=", BasicBind_cor__type__Vector2I_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector2I", "y", BasicBind_cor__type__Vector2I_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector2I", "_asterisk__0", BasicBind_cor__type__Vector2I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2I", "*", BasicBind_cor__type__Vector2I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2I", "_plus__0", BasicBind_cor__type__Vector2I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2I", "+", BasicBind_cor__type__Vector2I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2I", "_minus__0", BasicBind_cor__type__Vector2I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2I", "-", BasicBind_cor__type__Vector2I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2I", "_minus_self__0", BasicBind_cor__type__Vector2I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2I", "-@", BasicBind_cor__type__Vector2I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2I", "_brackets__0", BasicBind_cor__type__Vector2I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2I", "[]", BasicBind_cor__type__Vector2I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2I", "_brackets_equal__0", BasicBind_cor__type__Vector2I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector2I", "[]=", BasicBind_cor__type__Vector2I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3F", "set", BasicBind_cor__type__Vector3F_set);
            binder.bind_custom_method("CorType", "Vector3F", "begin_1", BasicBind_cor__type__Vector3F_begin_1);
            binder.bind_custom_method("CorType", "Vector3F", "end_1", BasicBind_cor__type__Vector3F_end_1);
            binder.bind_custom_method("CorType", "Vector3F", "begin_2", BasicBind_cor__type__Vector3F_begin_2);
            binder.bind_custom_method("CorType", "Vector3F", "end_2", BasicBind_cor__type__Vector3F_end_2);
            binder.bind_custom_method("CorType", "Vector3F", "size", BasicBind_cor__type__Vector3F_size);
            binder.bind_custom_method("CorType", "Vector3F", "get_p_1", BasicBind_cor__type__Vector3F_get_p_1);
            binder.bind_custom_method("CorType", "Vector3F", "get_p_2", BasicBind_cor__type__Vector3F_get_p_2);
            binder.bind_custom_method("CorType", "Vector3F", "get_square_magnitude", BasicBind_cor__type__Vector3F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector3F", "get_magnitude", BasicBind_cor__type__Vector3F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector3F", "xy", BasicBind_cor__type__Vector3F_xy);
            binder.bind_custom_method("CorType", "Vector3F", "normalize", BasicBind_cor__type__Vector3F_normalize);
            binder.bind_custom_method("CorType", "Vector3F", "dot", BasicBind_cor__type__Vector3F_dot);
            binder.bind_custom_method("CorType", "Vector3F", "cross", BasicBind_cor__type__Vector3F_cross);
            binder.bind_custom_method("CorType", "Vector3F", "distance", BasicBind_cor__type__Vector3F_distance);
            binder.bind_static_method("CorType", "Vector3F", "zero", BasicBind_cor__type__Vector3F_zero);
            binder.bind_static_method("CorType", "Vector3F", "one", BasicBind_cor__type__Vector3F_one);
            binder.bind_custom_method("CorType", "Vector3F", "max_vec", BasicBind_cor__type__Vector3F_max_vec);
            binder.bind_custom_method("CorType", "Vector3F", "min_vec", BasicBind_cor__type__Vector3F_min_vec);
            binder.bind_custom_method("CorType", "Vector3F", "all_less", BasicBind_cor__type__Vector3F_all_less);
            binder.bind_custom_method("CorType", "Vector3F", "some_less", BasicBind_cor__type__Vector3F_some_less);
            binder.bind_custom_method("CorType", "Vector3F", "all_greater", BasicBind_cor__type__Vector3F_all_greater);
            binder.bind_custom_method("CorType", "Vector3F", "some_greater", BasicBind_cor__type__Vector3F_some_greater);
            binder.bind_custom_method("CorType", "Vector3F", "all_less_equal", BasicBind_cor__type__Vector3F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector3F", "some_less_equal", BasicBind_cor__type__Vector3F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector3F", "all_greater_equal", BasicBind_cor__type__Vector3F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector3F", "some_greater_equal", BasicBind_cor__type__Vector3F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector3F", "sum", BasicBind_cor__type__Vector3F_sum);
            binder.bind_custom_method("CorType", "Vector3F", "x=", BasicBind_cor__type__Vector3F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector3F", "x", BasicBind_cor__type__Vector3F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector3F", "y=", BasicBind_cor__type__Vector3F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector3F", "y", BasicBind_cor__type__Vector3F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector3F", "z=", BasicBind_cor__type__Vector3F_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector3F", "z", BasicBind_cor__type__Vector3F_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector3F", "_asterisk__0", BasicBind_cor__type__Vector3F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3F", "*", BasicBind_cor__type__Vector3F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3F", "_plus__0", BasicBind_cor__type__Vector3F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3F", "+", BasicBind_cor__type__Vector3F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3F", "_minus__0", BasicBind_cor__type__Vector3F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3F", "-", BasicBind_cor__type__Vector3F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3F", "_minus_self__0", BasicBind_cor__type__Vector3F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3F", "-@", BasicBind_cor__type__Vector3F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3F", "_brackets__0", BasicBind_cor__type__Vector3F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3F", "[]", BasicBind_cor__type__Vector3F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3F", "_brackets_equal__0", BasicBind_cor__type__Vector3F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3F", "[]=", BasicBind_cor__type__Vector3F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3I", "set", BasicBind_cor__type__Vector3I_set);
            binder.bind_custom_method("CorType", "Vector3I", "begin_1", BasicBind_cor__type__Vector3I_begin_1);
            binder.bind_custom_method("CorType", "Vector3I", "end_1", BasicBind_cor__type__Vector3I_end_1);
            binder.bind_custom_method("CorType", "Vector3I", "begin_2", BasicBind_cor__type__Vector3I_begin_2);
            binder.bind_custom_method("CorType", "Vector3I", "end_2", BasicBind_cor__type__Vector3I_end_2);
            binder.bind_custom_method("CorType", "Vector3I", "size", BasicBind_cor__type__Vector3I_size);
            binder.bind_custom_method("CorType", "Vector3I", "get_p_1", BasicBind_cor__type__Vector3I_get_p_1);
            binder.bind_custom_method("CorType", "Vector3I", "get_p_2", BasicBind_cor__type__Vector3I_get_p_2);
            binder.bind_custom_method("CorType", "Vector3I", "get_square_magnitude", BasicBind_cor__type__Vector3I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector3I", "get_magnitude", BasicBind_cor__type__Vector3I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector3I", "xy", BasicBind_cor__type__Vector3I_xy);
            binder.bind_custom_method("CorType", "Vector3I", "normalize", BasicBind_cor__type__Vector3I_normalize);
            binder.bind_custom_method("CorType", "Vector3I", "dot", BasicBind_cor__type__Vector3I_dot);
            binder.bind_custom_method("CorType", "Vector3I", "cross", BasicBind_cor__type__Vector3I_cross);
            binder.bind_custom_method("CorType", "Vector3I", "distance", BasicBind_cor__type__Vector3I_distance);
            binder.bind_static_method("CorType", "Vector3I", "zero", BasicBind_cor__type__Vector3I_zero);
            binder.bind_static_method("CorType", "Vector3I", "one", BasicBind_cor__type__Vector3I_one);
            binder.bind_custom_method("CorType", "Vector3I", "max_vec", BasicBind_cor__type__Vector3I_max_vec);
            binder.bind_custom_method("CorType", "Vector3I", "min_vec", BasicBind_cor__type__Vector3I_min_vec);
            binder.bind_custom_method("CorType", "Vector3I", "all_less", BasicBind_cor__type__Vector3I_all_less);
            binder.bind_custom_method("CorType", "Vector3I", "some_less", BasicBind_cor__type__Vector3I_some_less);
            binder.bind_custom_method("CorType", "Vector3I", "all_greater", BasicBind_cor__type__Vector3I_all_greater);
            binder.bind_custom_method("CorType", "Vector3I", "some_greater", BasicBind_cor__type__Vector3I_some_greater);
            binder.bind_custom_method("CorType", "Vector3I", "all_less_equal", BasicBind_cor__type__Vector3I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector3I", "some_less_equal", BasicBind_cor__type__Vector3I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector3I", "all_greater_equal", BasicBind_cor__type__Vector3I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector3I", "some_greater_equal", BasicBind_cor__type__Vector3I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector3I", "sum", BasicBind_cor__type__Vector3I_sum);
            binder.bind_custom_method("CorType", "Vector3I", "x=", BasicBind_cor__type__Vector3I_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector3I", "x", BasicBind_cor__type__Vector3I_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector3I", "y=", BasicBind_cor__type__Vector3I_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector3I", "y", BasicBind_cor__type__Vector3I_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector3I", "z=", BasicBind_cor__type__Vector3I_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector3I", "z", BasicBind_cor__type__Vector3I_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector3I", "_asterisk__0", BasicBind_cor__type__Vector3I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3I", "*", BasicBind_cor__type__Vector3I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3I", "_plus__0", BasicBind_cor__type__Vector3I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3I", "+", BasicBind_cor__type__Vector3I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3I", "_minus__0", BasicBind_cor__type__Vector3I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3I", "-", BasicBind_cor__type__Vector3I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3I", "_minus_self__0", BasicBind_cor__type__Vector3I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3I", "-@", BasicBind_cor__type__Vector3I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3I", "_brackets__0", BasicBind_cor__type__Vector3I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3I", "[]", BasicBind_cor__type__Vector3I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3I", "_brackets_equal__0", BasicBind_cor__type__Vector3I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3I", "[]=", BasicBind_cor__type__Vector3I_operator__brackets_equal__0);

          }

    }
}
