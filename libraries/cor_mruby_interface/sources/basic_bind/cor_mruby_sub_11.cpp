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

        void BasicBind_cor__type__Box2I_accessor_set_p(cor::type::Box2I& c, cor::type::Vector2I a)
        {

            c.p = a;
        }

        cor::type::Vector2I BasicBind_cor__type__Box2I_accessor_get_p(cor::type::Box2I& c)
        {

            return c.p;
        }

        void BasicBind_cor__type__Box2I_accessor_set_w(cor::type::Box2I& c, cor::type::Vector2I a)
        {

            c.w = a;
        }

        cor::type::Vector2I BasicBind_cor__type__Box2I_accessor_get_w(cor::type::Box2I& c)
        {

            return c.w;
        }

        void BasicBind_cor__type__OBox2F_is_cross(cor::type::OBox2F& c, cor::type::OBox2F a0)
        {

            c.is_cross(a0);
        }

        void BasicBind_cor__type__OBox2F_is_include(cor::type::OBox2F& c, cor::type::Vector2F a0)
        {

            c.is_include(a0);
        }

        float BasicBind_cor__type__OBox2F_get_distance(cor::type::OBox2F& c, cor::type::Vector2F a0)
        {

            return c.get_distance(a0);
        }

        void BasicBind_cor__type__OBox2F_get_vertices(cor::type::OBox2F& c)
        {

            c.get_vertices();
        }

        void BasicBind_cor__type__OBox2F_get_aabb(cor::type::OBox2F& c)
        {

            c.get_aabb();
        }

        void BasicBind_cor__type__OBox2I_is_cross(cor::type::OBox2I& c, cor::type::OBox2I a0)
        {

            c.is_cross(a0);
        }

        void BasicBind_cor__type__OBox2I_is_include(cor::type::OBox2I& c, cor::type::Vector2I a0)
        {

            c.is_include(a0);
        }

        int BasicBind_cor__type__OBox2I_get_distance(cor::type::OBox2I& c, cor::type::Vector2I a0)
        {

            return c.get_distance(a0);
        }

        void BasicBind_cor__type__OBox2I_get_vertices(cor::type::OBox2I& c)
        {

            c.get_vertices();
        }

        void BasicBind_cor__type__OBox2I_get_aabb(cor::type::OBox2I& c)
        {

            c.get_aabb();
        }

        void BasicBind_cor__type__Sphere2F_set(cor::type::Sphere2F& c, cor::type::Vector2F a0, float a1)
        {

            c.set(a0, a1);
        }

        void BasicBind_cor__type__Sphere2F_is_collide(cor::type::Sphere2F& c, cor::type::Sphere2F a0)
        {

            c.is_collide(a0);
        }

        void BasicBind_cor__type__Sphere2F_is_include_point(cor::type::Sphere2F& c, cor::type::Vector2F a0)
        {

            c.is_include_point(a0);
        }

        float BasicBind_cor__type__Sphere2F_get_distance(cor::type::Sphere2F& c, cor::type::Vector2F a0)
        {

            return c.get_distance(a0);
        }

        void BasicBind_cor__type__Sphere2F_accessor_set_p(cor::type::Sphere2F& c, cor::type::Vector2F a)
        {

            c.p = a;
        }

        cor::type::Vector2F BasicBind_cor__type__Sphere2F_accessor_get_p(cor::type::Sphere2F& c)
        {

            return c.p;
        }

        void BasicBind_cor__type__Sphere2F_accessor_set_r(cor::type::Sphere2F& c, float a)
        {

            c.r = a;
        }

        float BasicBind_cor__type__Sphere2F_accessor_get_r(cor::type::Sphere2F& c)
        {

            return c.r;
        }

        void BasicBind_cor__type__Sphere2I_set(cor::type::Sphere2I& c, cor::type::Vector2I a0, int a1)
        {

            c.set(a0, a1);
        }

        void BasicBind_cor__type__Sphere2I_is_collide(cor::type::Sphere2I& c, cor::type::Sphere2I a0)
        {

            c.is_collide(a0);
        }

        void BasicBind_cor__type__Sphere2I_is_include_point(cor::type::Sphere2I& c, cor::type::Vector2I a0)
        {

            c.is_include_point(a0);
        }

        int BasicBind_cor__type__Sphere2I_get_distance(cor::type::Sphere2I& c, cor::type::Vector2I a0)
        {

            return c.get_distance(a0);
        }

        void BasicBind_cor__type__Sphere2I_accessor_set_p(cor::type::Sphere2I& c, cor::type::Vector2I a)
        {

            c.p = a;
        }

        cor::type::Vector2I BasicBind_cor__type__Sphere2I_accessor_get_p(cor::type::Sphere2I& c)
        {

            return c.p;
        }



        


        
          void BasicBind_bind_func_11(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                
          }

    }
}
