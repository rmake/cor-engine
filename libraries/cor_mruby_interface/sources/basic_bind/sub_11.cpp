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
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_affine_inverse_3(cor::type::Matrix4x4F& c)
        {

            return c.affine_inverse();
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose(cor::type::Matrix4x4F& c)
        {

            return c.transpose();
        }

        void BasicBind_cor__type__Matrix4x4F_equal(cor::type::Matrix4x4F& c, cor::type::Matrix4x4F a0, float a1)
        {

            c.equal(a0, a1);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_operator__asterisk__0(cor::type::Matrix4x4F & a0, cor::type::Matrix4x4F a1)
        {
            return a0*a1;
        }

        void BasicBind_cor__type__Box2F_set_1(cor::type::Box2F& c, cor::type::Vector2F a0, cor::type::Vector2F a1)
        {

            c.set(a0, a1);
        }

        void BasicBind_cor__type__Box2F_set_2(cor::type::Box2F& c, float a0, float a1, float a2, float a3)
        {

            c.set(a0, a1, a2, a3);
        }

        cor::type::Vector2F BasicBind_cor__type__Box2F_get_max(cor::type::Box2F& c)
        {

            return c.get_max();
        }

        void BasicBind_cor__type__Box2F_set_max(cor::type::Box2F& c, cor::type::Vector2F a0)
        {

            c.set_max(a0);
        }

        void BasicBind_cor__type__Box2F_change_corner(cor::type::Vector2F a0, cor::type::Box2F a1)
        {

            cor::type::Box2F::change_corner(a0, a1);
        }

        void BasicBind_cor__type__Box2F_set_rect(cor::type::Box2F& c, cor::type::Box2F a0)
        {

            c.set_rect(a0);
        }

        void BasicBind_cor__type__Box2F_add_rect(cor::type::Box2F& c, cor::type::Box2F a0)
        {

            c.add_rect(a0);
        }

        cor::type::Vector2F BasicBind_cor__type__Box2F_get_center(cor::type::Box2F& c)
        {

            return c.get_center();
        }

        void BasicBind_cor__type__Box2F_is_include(cor::type::Box2F& c, cor::type::Vector2F a0)
        {

            c.is_include(a0);
        }

        void BasicBind_cor__type__Box2F_is_cross(cor::type::Box2F& c, cor::type::Box2F a0)
        {

            c.is_cross(a0);
        }

        float BasicBind_cor__type__Box2F_get_distance(cor::type::Box2F& c, cor::type::Vector2F a0)
        {

            return c.get_distance(a0);
        }

        float BasicBind_cor__type__Box2F_get_width_size(cor::type::Box2F& c)
        {

            return c.get_width_size();
        }

        void BasicBind_cor__type__Box2F_accessor_set_p(cor::type::Box2F& c, cor::type::Vector2F a)
        {

            c.p = a;
        }

        cor::type::Vector2F BasicBind_cor__type__Box2F_accessor_get_p(cor::type::Box2F& c)
        {

            return c.p;
        }

        void BasicBind_cor__type__Box2F_accessor_set_w(cor::type::Box2F& c, cor::type::Vector2F a)
        {

            c.w = a;
        }

        cor::type::Vector2F BasicBind_cor__type__Box2F_accessor_get_w(cor::type::Box2F& c)
        {

            return c.w;
        }

        void BasicBind_cor__type__Box2I_set_1(cor::type::Box2I& c, cor::type::Vector2I a0, cor::type::Vector2I a1)
        {

            c.set(a0, a1);
        }

        void BasicBind_cor__type__Box2I_set_2(cor::type::Box2I& c, int a0, int a1, int a2, int a3)
        {

            c.set(a0, a1, a2, a3);
        }

        cor::type::Vector2I BasicBind_cor__type__Box2I_get_max(cor::type::Box2I& c)
        {

            return c.get_max();
        }

        void BasicBind_cor__type__Box2I_set_max(cor::type::Box2I& c, cor::type::Vector2I a0)
        {

            c.set_max(a0);
        }

        void BasicBind_cor__type__Box2I_change_corner(cor::type::Vector2I a0, cor::type::Box2I a1)
        {

            cor::type::Box2I::change_corner(a0, a1);
        }

        void BasicBind_cor__type__Box2I_set_rect(cor::type::Box2I& c, cor::type::Box2I a0)
        {

            c.set_rect(a0);
        }

        void BasicBind_cor__type__Box2I_add_rect(cor::type::Box2I& c, cor::type::Box2I a0)
        {

            c.add_rect(a0);
        }

        cor::type::Vector2I BasicBind_cor__type__Box2I_get_center(cor::type::Box2I& c)
        {

            return c.get_center();
        }

        void BasicBind_cor__type__Box2I_is_include(cor::type::Box2I& c, cor::type::Vector2I a0)
        {

            c.is_include(a0);
        }

        void BasicBind_cor__type__Box2I_is_cross(cor::type::Box2I& c, cor::type::Box2I a0)
        {

            c.is_cross(a0);
        }

        int BasicBind_cor__type__Box2I_get_distance(cor::type::Box2I& c, cor::type::Vector2I a0)
        {

            return c.get_distance(a0);
        }

        int BasicBind_cor__type__Box2I_get_width_size(cor::type::Box2I& c)
        {

            return c.get_width_size();
        }



        


        
          void BasicBind_bind_func_11(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("CorDataStructure::CostGridSpace", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorDataStructure::SharedPtrTable", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorSystem::JobQueue", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorMrubyInterface::MrubyExperimentalBindTestStruct", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorMrubyInterface::MrubyExperimentalBindTestClassInherited", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorMrubyInterface::MrubyExperimentalBindTestClassInherited", "CorMrubyInterface::MrubyExperimentalBindTestStruct");
            binder.add_convertable("CorMrubyInterface::MrubyExperimentalBindTestClass", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorMrubyInterface::MrubyRefContainer", "CorMrubyInterface::AnyWP");
            binder.add_convertable("Cor::RCharArray", "CorMrubyInterface::AnyWP");

          }

    }
}
