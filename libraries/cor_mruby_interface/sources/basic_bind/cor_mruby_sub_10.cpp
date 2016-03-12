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
        
        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_x_vec_2(cor::type::Matrix4x4F& c)
        {

            return c.get_x_vec();
        }

        void BasicBind_cor__type__Matrix4x4F_set_x_vec(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            c.set_x_vec(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_y_vec_1(cor::type::Matrix4x4F& c)
        {

            return c.get_y_vec();
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_y_vec_2(cor::type::Matrix4x4F& c)
        {

            return c.get_y_vec();
        }

        void BasicBind_cor__type__Matrix4x4F_set_y_vec(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            c.set_y_vec(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_z_vec_1(cor::type::Matrix4x4F& c)
        {

            return c.get_z_vec();
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_z_vec_2(cor::type::Matrix4x4F& c)
        {

            return c.get_z_vec();
        }

        void BasicBind_cor__type__Matrix4x4F_set_z_vec(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            c.set_z_vec(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_o_vec_1(cor::type::Matrix4x4F& c)
        {

            return c.get_o_vec();
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_o_vec_2(cor::type::Matrix4x4F& c)
        {

            return c.get_o_vec();
        }

        void BasicBind_cor__type__Matrix4x4F_set_o_vec(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            c.set_o_vec(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_x(float a0)
        {

            return cor::type::Matrix4x4F::rot_x(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_y(float a0)
        {

            return cor::type::Matrix4x4F::rot_y(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_z(float a0)
        {

            return cor::type::Matrix4x4F::rot_z(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_translate(float a0, float a1, float a2)
        {

            return cor::type::Matrix4x4F::translate(a0, a1, a2);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_scale(float a0, float a1, float a2)
        {

            return cor::type::Matrix4x4F::scale(a0, a1, a2);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_ortho_matrix(float a0, float a1, float a2, float a3, float a4, float a5)
        {

            return cor::type::Matrix4x4F::ortho_matrix(a0, a1, a2, a3, a4, a5);
        }

        cor::type::Vector2F BasicBind_cor__type__Matrix4x4F_transform_1(cor::type::Matrix4x4F a0, cor::type::Vector2F a1)
        {

            return cor::type::Matrix4x4F::transform(a0, a1);
        }

        cor::type::Vector2F BasicBind_cor__type__Matrix4x4F_transform_2(cor::type::Matrix4x4F& c, cor::type::Vector2F a0)
        {

            return c.transform(a0);
        }

        cor::type::Vector2F BasicBind_cor__type__Matrix4x4F_transform_3(cor::type::Matrix4x4F& c, cor::type::Vector2F a0)
        {

            return c.transform(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_transform_4(cor::type::Matrix4x4F a0, cor::type::Vector3F a1)
        {

            return cor::type::Matrix4x4F::transform(a0, a1);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_transform_5(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            return c.transform(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_transform_6(cor::type::Matrix4x4F& c, cor::type::Vector3F a0)
        {

            return c.transform(a0);
        }

        cor::type::Vector4F BasicBind_cor__type__Matrix4x4F_transform_7(cor::type::Matrix4x4F a0, cor::type::Vector4F a1)
        {

            return cor::type::Matrix4x4F::transform(a0, a1);
        }

        cor::type::Vector4F BasicBind_cor__type__Matrix4x4F_transform_8(cor::type::Matrix4x4F& c, cor::type::Vector4F a0)
        {

            return c.transform(a0);
        }

        cor::type::Vector4F BasicBind_cor__type__Matrix4x4F_transform_9(cor::type::Matrix4x4F& c, cor::type::Vector4F a0)
        {

            return c.transform(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse(cor::type::Matrix4x4F a0)
        {

            return cor::type::Matrix4x4F::transpose_inverse(a0);
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse_2(cor::type::Matrix4x4F& c)
        {

            return c.transpose_inverse();
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse_3(cor::type::Matrix4x4F& c)
        {

            return c.transpose_inverse();
        }

        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_affine_inverse(cor::type::Matrix4x4F a0)
        {

            return cor::type::Matrix4x4F::affine_inverse(a0);
        }



        
        cor::data_structure::CostGridSpacePath BasicBind_CostGridSpacePath_create()
        {
            return cor::data_structure::CostGridSpacePath();
        }


        
          void BasicBind_bind_func_10(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "cost=", BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "cost", BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "path=", BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_path);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "path", BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_path);

          }

    }
}
