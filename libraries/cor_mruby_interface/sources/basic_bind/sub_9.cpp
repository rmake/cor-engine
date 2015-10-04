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

        
          void BasicBind_bind_func_9(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "Sphere2I", "set", BasicBind_cor__type__Sphere2I_set);
            binder.bind_custom_method("CorType", "Sphere2I", "is_include_point", BasicBind_cor__type__Sphere2I_is_include_point);
            binder.bind_custom_method("CorType", "Sphere2I", "get_distance", BasicBind_cor__type__Sphere2I_get_distance);
            binder.bind_custom_method("CorType", "Sphere2I", "p=", BasicBind_cor__type__Sphere2I_accessor_set_p);
            binder.bind_custom_method("CorType", "Sphere2I", "p", BasicBind_cor__type__Sphere2I_accessor_get_p);
            binder.bind_custom_method("CorType", "Sphere2I", "r=", BasicBind_cor__type__Sphere2I_accessor_set_r);
            binder.bind_custom_method("CorType", "Sphere2I", "r", BasicBind_cor__type__Sphere2I_accessor_get_r);
            binder.bind_custom_method("CorType", "OSphere2F", "is_include", BasicBind_cor__type__OSphere2F_is_include);
            binder.bind_custom_method("CorType", "OSphere2F", "get_distance", BasicBind_cor__type__OSphere2F_get_distance);
            binder.bind_custom_method("CorType", "OSphere2F", "get_draw_vertices", BasicBind_cor__type__OSphere2F_get_draw_vertices);
            binder.bind_custom_method("CorType", "OSphere2F", "get_box", BasicBind_cor__type__OSphere2F_get_box);
            binder.bind_custom_method("CorType", "OSphere2I", "is_include", BasicBind_cor__type__OSphere2I_is_include);
            binder.bind_custom_method("CorType", "OSphere2I", "get_distance", BasicBind_cor__type__OSphere2I_get_distance);
            binder.bind_custom_method("CorType", "OSphere2I", "get_draw_vertices", BasicBind_cor__type__OSphere2I_get_draw_vertices);
            binder.bind_custom_method("CorType", "OSphere2I", "get_box", BasicBind_cor__type__OSphere2I_get_box);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "add", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "add2", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "set_n", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_set_n);

          }

    }
}
