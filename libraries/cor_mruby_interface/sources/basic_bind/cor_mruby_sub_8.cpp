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
#include "cor_mruby_interface/sources/import/external_code_importer.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        void BasicBind_cor__type__Vector4F_accessor_set_x(cor::type::Vector4F& c, float a)
        {

            c.x = a;
        }

        float BasicBind_cor__type__Vector4F_accessor_get_x(cor::type::Vector4F& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector4F_accessor_set_y(cor::type::Vector4F& c, float a)
        {

            c.y = a;
        }

        float BasicBind_cor__type__Vector4F_accessor_get_y(cor::type::Vector4F& c)
        {

            return c.y;
        }

        void BasicBind_cor__type__Vector4F_accessor_set_z(cor::type::Vector4F& c, float a)
        {

            c.z = a;
        }

        float BasicBind_cor__type__Vector4F_accessor_get_z(cor::type::Vector4F& c)
        {

            return c.z;
        }

        void BasicBind_cor__type__Vector4F_accessor_set_w(cor::type::Vector4F& c, float a)
        {

            c.w = a;
        }

        float BasicBind_cor__type__Vector4F_accessor_get_w(cor::type::Vector4F& c)
        {

            return c.w;
        }

        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__asterisk__0(cor::type::Vector4F & a0, float a1)
        {
            return a0*a1;
        }

        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__plus__0(cor::type::Vector4F & a0, cor::type::Vector4F a1)
        {
            return a0+a1;
        }

        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__minus__0(cor::type::Vector4F & a0, cor::type::Vector4F a1)
        {
            return a0-a1;
        }

        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__minus_self__0(cor::type::Vector4F & a0)
        {
            return -a0;
        }

        float BasicBind_cor__type__Vector4F_operator__brackets__0(cor::type::Vector4F & a0, int a1)
        {
            return a0[a1];
        }

        float BasicBind_cor__type__Vector4F_operator__brackets_equal__0(cor::type::Vector4F & a0, int a1, float a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Vector4I_set(cor::type::Vector4I& c, int a0, int a1, int a2, int a3)
        {

            c.set(a0, a1, a2, a3);
        }

        void BasicBind_cor__type__Vector4I_begin_1(cor::type::Vector4I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector4I_end_1(cor::type::Vector4I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector4I_begin_2(cor::type::Vector4I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector4I_end_2(cor::type::Vector4I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector4I_size(cor::type::Vector4I& c)
        {

            c.size();
        }

        int* BasicBind_cor__type__Vector4I_get_p_1(cor::type::Vector4I& c)
        {

            return c.get_p();
        }

        const int* BasicBind_cor__type__Vector4I_get_p_2(cor::type::Vector4I& c)
        {

            return const_cast<const int* >(c.get_p());
        }

        int BasicBind_cor__type__Vector4I_get_square_magnitude(cor::type::Vector4I& c)
        {

            return c.get_square_magnitude();
        }

        int BasicBind_cor__type__Vector4I_get_magnitude(cor::type::Vector4I& c)
        {

            return c.get_magnitude();
        }

        cor::type::Vector2I BasicBind_cor__type__Vector4I_xy(cor::type::Vector4I& c)
        {

            return c.xy();
        }

        cor::type::Vector3I BasicBind_cor__type__Vector4I_xyz(cor::type::Vector4I& c)
        {

            return c.xyz();
        }

        void BasicBind_cor__type__Vector4I_normalize(cor::type::Vector4I& c)
        {

            c.normalize();
        }

        int BasicBind_cor__type__Vector4I_dot(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.dot(a0);
        }

        int BasicBind_cor__type__Vector4I_distance(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.distance(a0);
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_zero()
        {

            return cor::type::Vector4I::zero();
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_one()
        {

            return cor::type::Vector4I::one();
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_max_vec(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.max_vec(a0);
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_min_vec(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector4I_all_less(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector4I_some_less(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector4I_all_greater(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector4I_some_greater(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector4I_all_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_some_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_all_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_some_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_greater_equal(a0);
        }



        
        cor::type::Sphere2I BasicBind_Sphere2I_create_0()
        {
            return cor::type::Sphere2I();
        }
        cor::type::Sphere2I BasicBind_Sphere2I_create_1(cor::type::Sphere2I a0)
        {
            return cor::type::Sphere2I(a0);
        }
        cor::type::Sphere2I BasicBind_Sphere2I_create_2(cor::type::Vector2I a0, int a1)
        {
            return cor::type::Sphere2I(a0, a1);
        }
        cor::type::OSphere2F BasicBind_OSphere2F_create()
        {
            return cor::type::OSphere2F();
        }
        cor::type::OSphere2I BasicBind_OSphere2I_create()
        {
            return cor::type::OSphere2I();
        }


        
          void BasicBind_bind_func_8(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "OBox2I", "is_cross", BasicBind_cor__type__OBox2I_is_cross);
            binder.bind_custom_method("CorType", "OBox2I", "is_include", BasicBind_cor__type__OBox2I_is_include);
            binder.bind_custom_method("CorType", "OBox2I", "get_distance", BasicBind_cor__type__OBox2I_get_distance);
            binder.bind_custom_method("CorType", "OBox2I", "get_vertices", BasicBind_cor__type__OBox2I_get_vertices);
            binder.bind_custom_method("CorType", "OBox2I", "get_aabb", BasicBind_cor__type__OBox2I_get_aabb);
            binder.bind_custom_method("CorType", "Sphere2F", "set", BasicBind_cor__type__Sphere2F_set);
            binder.bind_custom_method("CorType", "Sphere2F", "is_collide", BasicBind_cor__type__Sphere2F_is_collide);
            binder.bind_custom_method("CorType", "Sphere2F", "is_include_point", BasicBind_cor__type__Sphere2F_is_include_point);
            binder.bind_custom_method("CorType", "Sphere2F", "get_distance", BasicBind_cor__type__Sphere2F_get_distance);
            binder.bind_custom_method("CorType", "Sphere2F", "p=", BasicBind_cor__type__Sphere2F_accessor_set_p);
            binder.bind_custom_method("CorType", "Sphere2F", "p", BasicBind_cor__type__Sphere2F_accessor_get_p);
            binder.bind_custom_method("CorType", "Sphere2F", "r=", BasicBind_cor__type__Sphere2F_accessor_set_r);
            binder.bind_custom_method("CorType", "Sphere2F", "r", BasicBind_cor__type__Sphere2F_accessor_get_r);
            binder.bind_custom_method("CorType", "Sphere2I", "set", BasicBind_cor__type__Sphere2I_set);
            binder.bind_custom_method("CorType", "Sphere2I", "is_collide", BasicBind_cor__type__Sphere2I_is_collide);
            binder.bind_custom_method("CorType", "Sphere2I", "is_include_point", BasicBind_cor__type__Sphere2I_is_include_point);
            binder.bind_custom_method("CorType", "Sphere2I", "get_distance", BasicBind_cor__type__Sphere2I_get_distance);
            binder.bind_custom_method("CorType", "Sphere2I", "p=", BasicBind_cor__type__Sphere2I_accessor_set_p);
            binder.bind_custom_method("CorType", "Sphere2I", "p", BasicBind_cor__type__Sphere2I_accessor_get_p);
            binder.bind_custom_method("CorType", "Sphere2I", "r=", BasicBind_cor__type__Sphere2I_accessor_set_r);
            binder.bind_custom_method("CorType", "Sphere2I", "r", BasicBind_cor__type__Sphere2I_accessor_get_r);
            binder.bind_custom_method("CorType", "OSphere2F", "is_cross", BasicBind_cor__type__OSphere2F_is_cross);
            binder.bind_custom_method("CorType", "OSphere2F", "is_include", BasicBind_cor__type__OSphere2F_is_include);
            binder.bind_custom_method("CorType", "OSphere2F", "get_distance", BasicBind_cor__type__OSphere2F_get_distance);
            binder.bind_custom_method("CorType", "OSphere2F", "get_draw_vertices", BasicBind_cor__type__OSphere2F_get_draw_vertices);
            binder.bind_custom_method("CorType", "OSphere2F", "get_box", BasicBind_cor__type__OSphere2F_get_box);

          }

    }
}
