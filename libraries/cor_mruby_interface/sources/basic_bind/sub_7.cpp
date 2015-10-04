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

        
          void BasicBind_bind_func_7(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "Vector4F", "set", BasicBind_cor__type__Vector4F_set);
            binder.bind_custom_method("CorType", "Vector4F", "begin_1", BasicBind_cor__type__Vector4F_begin_1);
            binder.bind_custom_method("CorType", "Vector4F", "end_1", BasicBind_cor__type__Vector4F_end_1);
            binder.bind_custom_method("CorType", "Vector4F", "begin_2", BasicBind_cor__type__Vector4F_begin_2);
            binder.bind_custom_method("CorType", "Vector4F", "end_2", BasicBind_cor__type__Vector4F_end_2);
            binder.bind_custom_method("CorType", "Vector4F", "size", BasicBind_cor__type__Vector4F_size);
            binder.bind_custom_method("CorType", "Vector4F", "get_p_1", BasicBind_cor__type__Vector4F_get_p_1);
            binder.bind_custom_method("CorType", "Vector4F", "get_p_2", BasicBind_cor__type__Vector4F_get_p_2);
            binder.bind_custom_method("CorType", "Vector4F", "get_square_magnitude", BasicBind_cor__type__Vector4F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector4F", "get_magnitude", BasicBind_cor__type__Vector4F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector4F", "xy", BasicBind_cor__type__Vector4F_xy);
            binder.bind_custom_method("CorType", "Vector4F", "xyz", BasicBind_cor__type__Vector4F_xyz);
            binder.bind_custom_method("CorType", "Vector4F", "normalize", BasicBind_cor__type__Vector4F_normalize);
            binder.bind_custom_method("CorType", "Vector4F", "dot", BasicBind_cor__type__Vector4F_dot);
            binder.bind_custom_method("CorType", "Vector4F", "distance", BasicBind_cor__type__Vector4F_distance);
            binder.bind_static_method("CorType", "Vector4F", "zero", BasicBind_cor__type__Vector4F_zero);
            binder.bind_static_method("CorType", "Vector4F", "one", BasicBind_cor__type__Vector4F_one);
            binder.bind_custom_method("CorType", "Vector4F", "max_vec", BasicBind_cor__type__Vector4F_max_vec);
            binder.bind_custom_method("CorType", "Vector4F", "min_vec", BasicBind_cor__type__Vector4F_min_vec);
            binder.bind_custom_method("CorType", "Vector4F", "all_less", BasicBind_cor__type__Vector4F_all_less);
            binder.bind_custom_method("CorType", "Vector4F", "some_less", BasicBind_cor__type__Vector4F_some_less);
            binder.bind_custom_method("CorType", "Vector4F", "all_greater", BasicBind_cor__type__Vector4F_all_greater);
            binder.bind_custom_method("CorType", "Vector4F", "some_greater", BasicBind_cor__type__Vector4F_some_greater);
            binder.bind_custom_method("CorType", "Vector4F", "all_less_equal", BasicBind_cor__type__Vector4F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector4F", "some_less_equal", BasicBind_cor__type__Vector4F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector4F", "all_greater_equal", BasicBind_cor__type__Vector4F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector4F", "some_greater_equal", BasicBind_cor__type__Vector4F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector4F", "sum", BasicBind_cor__type__Vector4F_sum);
            binder.bind_custom_method("CorType", "Vector4F", "x=", BasicBind_cor__type__Vector4F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector4F", "x", BasicBind_cor__type__Vector4F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector4F", "y=", BasicBind_cor__type__Vector4F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector4F", "y", BasicBind_cor__type__Vector4F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector4F", "z=", BasicBind_cor__type__Vector4F_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector4F", "z", BasicBind_cor__type__Vector4F_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector4F", "w=", BasicBind_cor__type__Vector4F_accessor_set_w);
            binder.bind_custom_method("CorType", "Vector4F", "w", BasicBind_cor__type__Vector4F_accessor_get_w);
            binder.bind_custom_method("CorType", "Vector4F", "_asterisk__0", BasicBind_cor__type__Vector4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4F", "*", BasicBind_cor__type__Vector4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4F", "_plus__0", BasicBind_cor__type__Vector4F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4F", "+", BasicBind_cor__type__Vector4F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4F", "_minus__0", BasicBind_cor__type__Vector4F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4F", "-", BasicBind_cor__type__Vector4F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4F", "_minus_self__0", BasicBind_cor__type__Vector4F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4F", "-@", BasicBind_cor__type__Vector4F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4F", "_brackets__0", BasicBind_cor__type__Vector4F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4F", "[]", BasicBind_cor__type__Vector4F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4F", "_brackets_equal__0", BasicBind_cor__type__Vector4F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4F", "[]=", BasicBind_cor__type__Vector4F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4I", "set", BasicBind_cor__type__Vector4I_set);
            binder.bind_custom_method("CorType", "Vector4I", "begin_1", BasicBind_cor__type__Vector4I_begin_1);
            binder.bind_custom_method("CorType", "Vector4I", "end_1", BasicBind_cor__type__Vector4I_end_1);
            binder.bind_custom_method("CorType", "Vector4I", "begin_2", BasicBind_cor__type__Vector4I_begin_2);
            binder.bind_custom_method("CorType", "Vector4I", "end_2", BasicBind_cor__type__Vector4I_end_2);
            binder.bind_custom_method("CorType", "Vector4I", "size", BasicBind_cor__type__Vector4I_size);
            binder.bind_custom_method("CorType", "Vector4I", "get_p_1", BasicBind_cor__type__Vector4I_get_p_1);
            binder.bind_custom_method("CorType", "Vector4I", "get_p_2", BasicBind_cor__type__Vector4I_get_p_2);
            binder.bind_custom_method("CorType", "Vector4I", "get_square_magnitude", BasicBind_cor__type__Vector4I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector4I", "get_magnitude", BasicBind_cor__type__Vector4I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector4I", "xy", BasicBind_cor__type__Vector4I_xy);
            binder.bind_custom_method("CorType", "Vector4I", "xyz", BasicBind_cor__type__Vector4I_xyz);
            binder.bind_custom_method("CorType", "Vector4I", "normalize", BasicBind_cor__type__Vector4I_normalize);
            binder.bind_custom_method("CorType", "Vector4I", "dot", BasicBind_cor__type__Vector4I_dot);
            binder.bind_custom_method("CorType", "Vector4I", "distance", BasicBind_cor__type__Vector4I_distance);
            binder.bind_static_method("CorType", "Vector4I", "zero", BasicBind_cor__type__Vector4I_zero);
            binder.bind_static_method("CorType", "Vector4I", "one", BasicBind_cor__type__Vector4I_one);
            binder.bind_custom_method("CorType", "Vector4I", "max_vec", BasicBind_cor__type__Vector4I_max_vec);
            binder.bind_custom_method("CorType", "Vector4I", "min_vec", BasicBind_cor__type__Vector4I_min_vec);
            binder.bind_custom_method("CorType", "Vector4I", "all_less", BasicBind_cor__type__Vector4I_all_less);
            binder.bind_custom_method("CorType", "Vector4I", "some_less", BasicBind_cor__type__Vector4I_some_less);
            binder.bind_custom_method("CorType", "Vector4I", "all_greater", BasicBind_cor__type__Vector4I_all_greater);
            binder.bind_custom_method("CorType", "Vector4I", "some_greater", BasicBind_cor__type__Vector4I_some_greater);
            binder.bind_custom_method("CorType", "Vector4I", "all_less_equal", BasicBind_cor__type__Vector4I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector4I", "some_less_equal", BasicBind_cor__type__Vector4I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector4I", "all_greater_equal", BasicBind_cor__type__Vector4I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector4I", "some_greater_equal", BasicBind_cor__type__Vector4I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector4I", "sum", BasicBind_cor__type__Vector4I_sum);
            binder.bind_custom_method("CorType", "Vector4I", "x=", BasicBind_cor__type__Vector4I_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector4I", "x", BasicBind_cor__type__Vector4I_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector4I", "y=", BasicBind_cor__type__Vector4I_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector4I", "y", BasicBind_cor__type__Vector4I_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector4I", "z=", BasicBind_cor__type__Vector4I_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector4I", "z", BasicBind_cor__type__Vector4I_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector4I", "w=", BasicBind_cor__type__Vector4I_accessor_set_w);
            binder.bind_custom_method("CorType", "Vector4I", "w", BasicBind_cor__type__Vector4I_accessor_get_w);
            binder.bind_custom_method("CorType", "Vector4I", "_asterisk__0", BasicBind_cor__type__Vector4I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4I", "*", BasicBind_cor__type__Vector4I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4I", "_plus__0", BasicBind_cor__type__Vector4I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4I", "+", BasicBind_cor__type__Vector4I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4I", "_minus__0", BasicBind_cor__type__Vector4I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4I", "-", BasicBind_cor__type__Vector4I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4I", "_minus_self__0", BasicBind_cor__type__Vector4I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4I", "-@", BasicBind_cor__type__Vector4I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4I", "_brackets__0", BasicBind_cor__type__Vector4I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4I", "[]", BasicBind_cor__type__Vector4I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4I", "_brackets_equal__0", BasicBind_cor__type__Vector4I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4I", "[]=", BasicBind_cor__type__Vector4I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Matrix4x4F", "begin_1", BasicBind_cor__type__Matrix4x4F_begin_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "end_1", BasicBind_cor__type__Matrix4x4F_end_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "begin_2", BasicBind_cor__type__Matrix4x4F_begin_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "end_2", BasicBind_cor__type__Matrix4x4F_end_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_array", BasicBind_cor__type__Matrix4x4F_get_array);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_x_vec_1", BasicBind_cor__type__Matrix4x4F_get_x_vec_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_x_vec_2", BasicBind_cor__type__Matrix4x4F_get_x_vec_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "set_x_vec", BasicBind_cor__type__Matrix4x4F_set_x_vec);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_y_vec_1", BasicBind_cor__type__Matrix4x4F_get_y_vec_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_y_vec_2", BasicBind_cor__type__Matrix4x4F_get_y_vec_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "set_y_vec", BasicBind_cor__type__Matrix4x4F_set_y_vec);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_z_vec_1", BasicBind_cor__type__Matrix4x4F_get_z_vec_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_z_vec_2", BasicBind_cor__type__Matrix4x4F_get_z_vec_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "set_z_vec", BasicBind_cor__type__Matrix4x4F_set_z_vec);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_o_vec_1", BasicBind_cor__type__Matrix4x4F_get_o_vec_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "get_o_vec_2", BasicBind_cor__type__Matrix4x4F_get_o_vec_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "set_o_vec", BasicBind_cor__type__Matrix4x4F_set_o_vec);
            binder.bind_static_method("CorType", "Matrix4x4F", "rot_x", BasicBind_cor__type__Matrix4x4F_rot_x);
            binder.bind_static_method("CorType", "Matrix4x4F", "rot_y", BasicBind_cor__type__Matrix4x4F_rot_y);
            binder.bind_static_method("CorType", "Matrix4x4F", "rot_z", BasicBind_cor__type__Matrix4x4F_rot_z);
            binder.bind_static_method("CorType", "Matrix4x4F", "translate", BasicBind_cor__type__Matrix4x4F_translate);
            binder.bind_static_method("CorType", "Matrix4x4F", "scale", BasicBind_cor__type__Matrix4x4F_scale);
            binder.bind_static_method("CorType", "Matrix4x4F", "ortho_matrix", BasicBind_cor__type__Matrix4x4F_ortho_matrix);
            binder.bind_static_method("CorType", "Matrix4x4F", "transform_1", BasicBind_cor__type__Matrix4x4F_transform_1);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_2", BasicBind_cor__type__Matrix4x4F_transform_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_3", BasicBind_cor__type__Matrix4x4F_transform_3);
            binder.bind_static_method("CorType", "Matrix4x4F", "transform_4", BasicBind_cor__type__Matrix4x4F_transform_4);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_5", BasicBind_cor__type__Matrix4x4F_transform_5);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_6", BasicBind_cor__type__Matrix4x4F_transform_6);
            binder.bind_static_method("CorType", "Matrix4x4F", "transform_7", BasicBind_cor__type__Matrix4x4F_transform_7);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_8", BasicBind_cor__type__Matrix4x4F_transform_8);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transform_9", BasicBind_cor__type__Matrix4x4F_transform_9);
            binder.bind_static_method("CorType", "Matrix4x4F", "transpose_inverse", BasicBind_cor__type__Matrix4x4F_transpose_inverse);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transpose_inverse_2", BasicBind_cor__type__Matrix4x4F_transpose_inverse_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transpose_inverse_3", BasicBind_cor__type__Matrix4x4F_transpose_inverse_3);
            binder.bind_static_method("CorType", "Matrix4x4F", "affine_inverse", BasicBind_cor__type__Matrix4x4F_affine_inverse);
            binder.bind_custom_method("CorType", "Matrix4x4F", "affine_inverse_2", BasicBind_cor__type__Matrix4x4F_affine_inverse_2);
            binder.bind_custom_method("CorType", "Matrix4x4F", "affine_inverse_3", BasicBind_cor__type__Matrix4x4F_affine_inverse_3);
            binder.bind_custom_method("CorType", "Matrix4x4F", "transpose", BasicBind_cor__type__Matrix4x4F_transpose);
            binder.bind_custom_method("CorType", "Matrix4x4F", "equal", BasicBind_cor__type__Matrix4x4F_equal);
            binder.bind_custom_method("CorType", "Matrix4x4F", "_asterisk__0", BasicBind_cor__type__Matrix4x4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Matrix4x4F", "*", BasicBind_cor__type__Matrix4x4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Box2F", "set_1", BasicBind_cor__type__Box2F_set_1);
            binder.bind_custom_method("CorType", "Box2F", "set_2", BasicBind_cor__type__Box2F_set_2);
            binder.bind_custom_method("CorType", "Box2F", "get_max", BasicBind_cor__type__Box2F_get_max);
            binder.bind_custom_method("CorType", "Box2F", "set_max", BasicBind_cor__type__Box2F_set_max);
            binder.bind_custom_method("CorType", "Box2F", "get_center", BasicBind_cor__type__Box2F_get_center);
            binder.bind_custom_method("CorType", "Box2F", "is_include", BasicBind_cor__type__Box2F_is_include);
            binder.bind_custom_method("CorType", "Box2F", "get_distance", BasicBind_cor__type__Box2F_get_distance);
            binder.bind_custom_method("CorType", "Box2F", "get_width_size", BasicBind_cor__type__Box2F_get_width_size);
            binder.bind_custom_method("CorType", "Box2F", "p=", BasicBind_cor__type__Box2F_accessor_set_p);
            binder.bind_custom_method("CorType", "Box2F", "p", BasicBind_cor__type__Box2F_accessor_get_p);
            binder.bind_custom_method("CorType", "Box2F", "w=", BasicBind_cor__type__Box2F_accessor_set_w);
            binder.bind_custom_method("CorType", "Box2F", "w", BasicBind_cor__type__Box2F_accessor_get_w);

          }

    }
}
