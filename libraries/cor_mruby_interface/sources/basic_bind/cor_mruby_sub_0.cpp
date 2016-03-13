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
        
        void BasicBind_cor__data_structure__CostGridSpace_set_max_cost(std::weak_ptr<cor::data_structure::CostGridSpace> c, float a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_max_cost(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_set_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_neighbor_mode((cor::data_structure::CostGridSpaceNeighborMode::Enum)a0);
        }

        cor::data_structure::CostGridSpaceNeighborMode::Enum BasicBind_cor__data_structure__CostGridSpace_get_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_neighbor_mode();
        }

        void BasicBind_cor__data_structure__CostGridSpace_resize_1(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->resize(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_resize_2(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0, int a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->resize(a0, a1);
        }

        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_size(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_size();
        }

        int BasicBind_cor__data_structure__CostGridSpace_get_width(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_width();
        }

        int BasicBind_cor__data_structure__CostGridSpace_get_height(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_height();
        }

        bool BasicBind_cor__data_structure__CostGridSpace_is_valid(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_valid(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_set(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0, cor::data_structure::CostGridSpaceItem a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set(a0, a1);
        }

        cor::data_structure::CostGridSpaceItem BasicBind_cor__data_structure__CostGridSpace_get(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get(a0);
        }

        cor::data_structure::CostGridSpacePath BasicBind_cor__data_structure__CostGridSpace_search_nearest_path(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->search_nearest_path(a0);
        }

        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_first_corner(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::data_structure::CostGridSpacePath a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_first_corner(a0);
        }

        std::weak_ptr<cor::data_structure::SharedPtrTable> BasicBind_cor__data_structure__SharedPtrTable_create()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::data_structure::SharedPtrTable::create());
        }

        void BasicBind_cor__data_structure__SharedPtrTable_set(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::string a0, cor::mruby_interface::AnyWP a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set(a0, a1.lock());
        }

        cor::mruby_interface::AnyWP BasicBind_cor__data_structure__SharedPtrTable_get(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::string a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get(a0);
        }

        unsigned long long BasicBind_cor__system__AllocationMonitor_get_new_count(cor::system::AllocationMonitor* c)
        {

            return c->get_new_count();
        }

        unsigned long long BasicBind_cor__system__AllocationMonitor_get_delete_count(cor::system::AllocationMonitor* c)
        {

            return c->get_delete_count();
        }

        unsigned long long BasicBind_cor__system__AllocationMonitor_get_alloc_count(cor::system::AllocationMonitor* c)
        {

            return c->get_alloc_count();
        }

        unsigned long long BasicBind_cor__system__AllocationMonitor_get_alloc_size(cor::system::AllocationMonitor* c)
        {

            return c->get_alloc_size();
        }

        RString BasicBind_cor__system__AllocationMonitor_get_status_text(cor::system::AllocationMonitor* c)
        {

            return c->get_status_text();
        }

        void BasicBind_cor__system__AllocationMonitor_set_enable(cor::system::AllocationMonitor* c, int a0)
        {

            c->set_enable(a0);
        }

        void BasicBind_cor__system__AllocationMonitor_set_captured_status(cor::system::AllocationMonitor* c, int a0)
        {

            c->set_captured_status(a0);
        }

        int BasicBind_cor__system__AllocationMonitor_get_captured_status(cor::system::AllocationMonitor* c)
        {

            return c->get_captured_status();
        }

        RString BasicBind_cor__system__AllocationMonitor_get_captured_data(cor::system::AllocationMonitor* c)
        {

            return c->get_captured_data();
        }

        void BasicBind_cor__system__AllocationMonitor_clear_caputred_data(cor::system::AllocationMonitor* c)
        {

            c->clear_caputred_data();
        }

        cor::system::AllocationMonitor* BasicBind_cor__system__AllocationMonitor_get_instance()
        {

            return cor::system::AllocationMonitor::get_instance();
        }

        void* BasicBind_cor__system__AllocationMonitor_alloc(unsigned long long a0)
        {

            return cor::system::AllocationMonitor::alloc(a0);
        }

        void BasicBind_cor__system__AllocationMonitor_al_free(void * a0)
        {

            cor::system::AllocationMonitor::al_free(a0);
        }

        void* BasicBind_cor__system__AllocationMonitor_al_realloc(void * a0, unsigned long long a1)
        {

            return cor::system::AllocationMonitor::al_realloc(a0, a1);
        }



        
        bool BasicBind_CostGridSpace_valid_question(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::data_structure::CostGridSpace> BasicBind_CostGridSpace_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::data_structure::CostGridSpace>());
        }
        bool BasicBind_SharedPtrTable_valid_question(std::weak_ptr<cor::data_structure::SharedPtrTable> c)
        {
            return !c.expired();
        }


        
          void BasicBind_bind_func_0(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<std::weak_ptr<cor::data_structure::CostGridSpace> >("CorDataStructure", "CostGridSpace");
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "valid?", BasicBind_CostGridSpace_valid_question);
            binder.bind_static_method("CorDataStructure", "CostGridSpace", "create", BasicBind_CostGridSpace_create);
            binder.bind_class<std::weak_ptr<cor::data_structure::SharedPtrTable> >("CorDataStructure", "SharedPtrTable");
            binder.bind_custom_method("CorDataStructure", "SharedPtrTable", "valid?", BasicBind_SharedPtrTable_valid_question);
            binder.bind_class<cor::system::AllocationMonitor* >("CorSystem", "AllocationMonitor");
            binder.bind_class<cor::system::CorCrypt* >("CorSystem", "CorCrypt");
            binder.bind_class<std::weak_ptr<cor::system::JobQueue> >("CorSystem", "JobQueue");
            binder.bind_custom_method("CorSystem", "JobQueue", "valid?", BasicBind_JobQueue_valid_question);
            binder.bind_static_method("CorSystem", "JobQueue", "create", BasicBind_JobQueue_create);
            binder.bind_class<cor::system::Logger* >("CorSystem", "Logger");
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> >("CorMrubyInterface", "MrubyExperimentalBindTestStruct");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "valid?", BasicBind_MrubyExperimentalBindTestStruct_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "create", BasicBind_MrubyExperimentalBindTestStruct_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> >("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "valid?", BasicBind_MrubyExperimentalBindTestClassInherited_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "create", BasicBind_MrubyExperimentalBindTestClassInherited_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> >("CorMrubyInterface", "MrubyExperimentalBindTestClass");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "valid?", BasicBind_MrubyExperimentalBindTestClass_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create", BasicBind_MrubyExperimentalBindTestClass_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyRefContainer> >("CorMrubyInterface", "MrubyRefContainer");
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "valid?", BasicBind_MrubyRefContainer_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_0", BasicBind_MrubyRefContainer_create_0);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_1", BasicBind_MrubyRefContainer_create_1);
            binder.bind_class<std::weak_ptr<cor::RCharArray> >("Cor", "RCharArray");
            binder.bind_custom_method("Cor", "RCharArray", "valid?", BasicBind_RCharArray_valid_question);
            binder.bind_static_method("Cor", "RCharArray", "create_0", BasicBind_RCharArray_create_0);
            binder.bind_static_method("Cor", "RCharArray", "create_1", BasicBind_RCharArray_create_1);
            binder.bind_class<cor::mruby_interface::AnyWP >("CorMrubyInterface", "AnyWP");
            binder.bind_class<cor::type::Vector2F >("CorType", "Vector2F");
            binder.bind_static_method("CorType", "Vector2F", "create_0", BasicBind_Vector2F_create_0);
            binder.bind_static_method("CorType", "Vector2F", "create_1", BasicBind_Vector2F_create_1);
            binder.bind_static_method("CorType", "Vector2F", "create_2", BasicBind_Vector2F_create_2);

          }

    }
}
