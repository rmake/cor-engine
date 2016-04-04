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
#undef RELATIVE
#undef ABSOLUTE
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        int BasicBind_cor__type__Vector3I_distance(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            return c.distance(a0);
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_zero()
        {

            return cor::type::Vector3I::zero();
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_one()
        {

            return cor::type::Vector3I::one();
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_max_vec(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            return c.max_vec(a0);
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_min_vec(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector3I_all_less(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector3I_some_less(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector3I_all_greater(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector3I_some_greater(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector3I_all_less_equal(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector3I_some_less_equal(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector3I_all_greater_equal(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector3I_some_greater_equal(cor::type::Vector3I& c, cor::type::Vector3I a0)
        {

            c.some_greater_equal(a0);
        }

        int BasicBind_cor__type__Vector3I_sum(cor::type::Vector3I& c)
        {

            return c.sum();
        }

        void BasicBind_cor__type__Vector3I_accessor_set_x(cor::type::Vector3I& c, int a)
        {

            c.x = a;
        }

        int BasicBind_cor__type__Vector3I_accessor_get_x(cor::type::Vector3I& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector3I_accessor_set_y(cor::type::Vector3I& c, int a)
        {

            c.y = a;
        }

        int BasicBind_cor__type__Vector3I_accessor_get_y(cor::type::Vector3I& c)
        {

            return c.y;
        }

        void BasicBind_cor__type__Vector3I_accessor_set_z(cor::type::Vector3I& c, int a)
        {

            c.z = a;
        }

        int BasicBind_cor__type__Vector3I_accessor_get_z(cor::type::Vector3I& c)
        {

            return c.z;
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__asterisk__0(cor::type::Vector3I & a0, int a1)
        {
            return a0*a1;
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__plus__0(cor::type::Vector3I & a0, cor::type::Vector3I a1)
        {
            return a0+a1;
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__minus__0(cor::type::Vector3I & a0, cor::type::Vector3I a1)
        {
            return a0-a1;
        }

        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__minus_self__0(cor::type::Vector3I & a0)
        {
            return -a0;
        }

        int BasicBind_cor__type__Vector3I_operator__brackets__0(cor::type::Vector3I & a0, int a1)
        {
            return a0[a1];
        }

        int BasicBind_cor__type__Vector3I_operator__brackets_equal__0(cor::type::Vector3I & a0, int a1, int a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Vector4F_set(cor::type::Vector4F& c, float a0, float a1, float a2, float a3)
        {

            c.set(a0, a1, a2, a3);
        }

        void BasicBind_cor__type__Vector4F_begin_1(cor::type::Vector4F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector4F_end_1(cor::type::Vector4F& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector4F_begin_2(cor::type::Vector4F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector4F_end_2(cor::type::Vector4F& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector4F_size(cor::type::Vector4F& c)
        {

            c.size();
        }

        float* BasicBind_cor__type__Vector4F_get_p_1(cor::type::Vector4F& c)
        {

            return c.get_p();
        }

        const float* BasicBind_cor__type__Vector4F_get_p_2(cor::type::Vector4F& c)
        {

            return const_cast<const float* >(c.get_p());
        }

        float BasicBind_cor__type__Vector4F_get_square_magnitude(cor::type::Vector4F& c)
        {

            return c.get_square_magnitude();
        }

        float BasicBind_cor__type__Vector4F_get_magnitude(cor::type::Vector4F& c)
        {

            return c.get_magnitude();
        }

        cor::type::Vector2F BasicBind_cor__type__Vector4F_xy(cor::type::Vector4F& c)
        {

            return c.xy();
        }

        cor::type::Vector3F BasicBind_cor__type__Vector4F_xyz(cor::type::Vector4F& c)
        {

            return c.xyz();
        }



        
        cor::type::OBox2F BasicBind_OBox2F_create()
        {
            return cor::type::OBox2F();
        }
        cor::type::OBox2I BasicBind_OBox2I_create()
        {
            return cor::type::OBox2I();
        }
        cor::type::Sphere2F BasicBind_Sphere2F_create_0()
        {
            return cor::type::Sphere2F();
        }
        cor::type::Sphere2F BasicBind_Sphere2F_create_1(cor::type::Sphere2F a0)
        {
            return cor::type::Sphere2F(a0);
        }
        cor::type::Sphere2F BasicBind_Sphere2F_create_2(cor::type::Vector2F a0, float a1)
        {
            return cor::type::Sphere2F(a0, a1);
        }


        
          void BasicBind_bind_func_7(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
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
            binder.bind_static_method("CorType", "Box2F", "change_corner", BasicBind_cor__type__Box2F_change_corner);
            binder.bind_custom_method("CorType", "Box2F", "set_rect", BasicBind_cor__type__Box2F_set_rect);
            binder.bind_custom_method("CorType", "Box2F", "add_rect", BasicBind_cor__type__Box2F_add_rect);
            binder.bind_custom_method("CorType", "Box2F", "get_center", BasicBind_cor__type__Box2F_get_center);
            binder.bind_custom_method("CorType", "Box2F", "is_include", BasicBind_cor__type__Box2F_is_include);
            binder.bind_custom_method("CorType", "Box2F", "is_cross", BasicBind_cor__type__Box2F_is_cross);
            binder.bind_custom_method("CorType", "Box2F", "get_distance", BasicBind_cor__type__Box2F_get_distance);
            binder.bind_custom_method("CorType", "Box2F", "get_width_size", BasicBind_cor__type__Box2F_get_width_size);
            binder.bind_custom_method("CorType", "Box2F", "p=", BasicBind_cor__type__Box2F_accessor_set_p);
            binder.bind_custom_method("CorType", "Box2F", "p", BasicBind_cor__type__Box2F_accessor_get_p);
            binder.bind_custom_method("CorType", "Box2F", "w=", BasicBind_cor__type__Box2F_accessor_set_w);
            binder.bind_custom_method("CorType", "Box2F", "w", BasicBind_cor__type__Box2F_accessor_get_w);
            binder.bind_custom_method("CorType", "Box2I", "set_1", BasicBind_cor__type__Box2I_set_1);
            binder.bind_custom_method("CorType", "Box2I", "set_2", BasicBind_cor__type__Box2I_set_2);
            binder.bind_custom_method("CorType", "Box2I", "get_max", BasicBind_cor__type__Box2I_get_max);
            binder.bind_custom_method("CorType", "Box2I", "set_max", BasicBind_cor__type__Box2I_set_max);
            binder.bind_static_method("CorType", "Box2I", "change_corner", BasicBind_cor__type__Box2I_change_corner);
            binder.bind_custom_method("CorType", "Box2I", "set_rect", BasicBind_cor__type__Box2I_set_rect);
            binder.bind_custom_method("CorType", "Box2I", "add_rect", BasicBind_cor__type__Box2I_add_rect);
            binder.bind_custom_method("CorType", "Box2I", "get_center", BasicBind_cor__type__Box2I_get_center);
            binder.bind_custom_method("CorType", "Box2I", "is_include", BasicBind_cor__type__Box2I_is_include);
            binder.bind_custom_method("CorType", "Box2I", "is_cross", BasicBind_cor__type__Box2I_is_cross);
            binder.bind_custom_method("CorType", "Box2I", "get_distance", BasicBind_cor__type__Box2I_get_distance);
            binder.bind_custom_method("CorType", "Box2I", "get_width_size", BasicBind_cor__type__Box2I_get_width_size);
            binder.bind_custom_method("CorType", "Box2I", "p=", BasicBind_cor__type__Box2I_accessor_set_p);
            binder.bind_custom_method("CorType", "Box2I", "p", BasicBind_cor__type__Box2I_accessor_get_p);
            binder.bind_custom_method("CorType", "Box2I", "w=", BasicBind_cor__type__Box2I_accessor_set_w);
            binder.bind_custom_method("CorType", "Box2I", "w", BasicBind_cor__type__Box2I_accessor_get_w);
            binder.bind_custom_method("CorType", "OBox2F", "is_cross", BasicBind_cor__type__OBox2F_is_cross);
            binder.bind_custom_method("CorType", "OBox2F", "is_include", BasicBind_cor__type__OBox2F_is_include);
            binder.bind_custom_method("CorType", "OBox2F", "get_distance", BasicBind_cor__type__OBox2F_get_distance);
            binder.bind_custom_method("CorType", "OBox2F", "get_vertices", BasicBind_cor__type__OBox2F_get_vertices);
            binder.bind_custom_method("CorType", "OBox2F", "get_aabb", BasicBind_cor__type__OBox2F_get_aabb);

          }

    }
}
