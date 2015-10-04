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

        
          void BasicBind_bind_func_1(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::type::Vector2F >("CorType", "Vector2F");
            binder.bind_static_method("CorType", "Vector2F", "create_0", BasicBind_Vector2F_create_0);
            binder.bind_static_method("CorType", "Vector2F", "create_1", BasicBind_Vector2F_create_1);
            binder.bind_static_method("CorType", "Vector2F", "create_2", BasicBind_Vector2F_create_2);
            binder.bind_class<cor::type::Vector2I >("CorType", "Vector2I");
            binder.bind_static_method("CorType", "Vector2I", "create_0", BasicBind_Vector2I_create_0);
            binder.bind_static_method("CorType", "Vector2I", "create_1", BasicBind_Vector2I_create_1);
            binder.bind_static_method("CorType", "Vector2I", "create_2", BasicBind_Vector2I_create_2);
            binder.bind_class<cor::type::Vector3F >("CorType", "Vector3F");
            binder.bind_static_method("CorType", "Vector3F", "create_0", BasicBind_Vector3F_create_0);
            binder.bind_static_method("CorType", "Vector3F", "create_1", BasicBind_Vector3F_create_1);
            binder.bind_static_method("CorType", "Vector3F", "create_2", BasicBind_Vector3F_create_2);
            binder.bind_class<cor::type::Vector3I >("CorType", "Vector3I");
            binder.bind_static_method("CorType", "Vector3I", "create_0", BasicBind_Vector3I_create_0);
            binder.bind_static_method("CorType", "Vector3I", "create_1", BasicBind_Vector3I_create_1);
            binder.bind_static_method("CorType", "Vector3I", "create_2", BasicBind_Vector3I_create_2);
            binder.bind_class<cor::type::Vector4F >("CorType", "Vector4F");
            binder.bind_static_method("CorType", "Vector4F", "create_0", BasicBind_Vector4F_create_0);
            binder.bind_static_method("CorType", "Vector4F", "create_1", BasicBind_Vector4F_create_1);
            binder.bind_static_method("CorType", "Vector4F", "create_2", BasicBind_Vector4F_create_2);
            binder.bind_class<cor::type::Vector4I >("CorType", "Vector4I");
            binder.bind_static_method("CorType", "Vector4I", "create_0", BasicBind_Vector4I_create_0);
            binder.bind_static_method("CorType", "Vector4I", "create_1", BasicBind_Vector4I_create_1);
            binder.bind_static_method("CorType", "Vector4I", "create_2", BasicBind_Vector4I_create_2);
            binder.bind_class<cor::type::Matrix4x4F >("CorType", "Matrix4x4F");
            binder.bind_static_method("CorType", "Matrix4x4F", "create_0", BasicBind_Matrix4x4F_create_0);
            binder.bind_static_method("CorType", "Matrix4x4F", "create_1", BasicBind_Matrix4x4F_create_1);
            binder.bind_static_method("CorType", "Matrix4x4F", "create_2", BasicBind_Matrix4x4F_create_2);
            binder.bind_class<cor::type::Box2F >("CorType", "Box2F");
            binder.bind_static_method("CorType", "Box2F", "create_0", BasicBind_Box2F_create_0);
            binder.bind_static_method("CorType", "Box2F", "create_1", BasicBind_Box2F_create_1);
            binder.bind_static_method("CorType", "Box2F", "create_2", BasicBind_Box2F_create_2);
            binder.bind_class<cor::type::Box2I >("CorType", "Box2I");
            binder.bind_static_method("CorType", "Box2I", "create_0", BasicBind_Box2I_create_0);
            binder.bind_static_method("CorType", "Box2I", "create_1", BasicBind_Box2I_create_1);
            binder.bind_static_method("CorType", "Box2I", "create_2", BasicBind_Box2I_create_2);
            binder.bind_class<cor::type::OBox2F >("CorType", "OBox2F");
            binder.bind_static_method("CorType", "OBox2F", "create", BasicBind_OBox2F_create);
            binder.bind_class<cor::type::OBox2I >("CorType", "OBox2I");
            binder.bind_static_method("CorType", "OBox2I", "create", BasicBind_OBox2I_create);
            binder.bind_class<cor::type::Sphere2F >("CorType", "Sphere2F");
            binder.bind_static_method("CorType", "Sphere2F", "create_0", BasicBind_Sphere2F_create_0);
            binder.bind_static_method("CorType", "Sphere2F", "create_1", BasicBind_Sphere2F_create_1);

          }

    }
}
