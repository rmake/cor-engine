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
        
        cor::system::Logger* BasicBind_cor__system__Logger_get_instance()
        {

            return cor::system::Logger::get_instance();
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c, int a)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->a = a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_toast(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->toast();
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c, int a)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->a = a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->a;
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyExperimentalBindTestClass::create());
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_2(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyExperimentalBindTestClass::create(a0));
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_get_null(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->get_null());
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_recieve(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->recieve(*a0.lock().get());
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_tmpl_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::RCharArray> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->tmpl_test(*a0.lock().get());
        }

        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyRefContainer::create());
        }

        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_2(mrubybind::MrubyRef a0)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyRefContainer::create(a0));
        }

        void BasicBind_cor__mruby_interface__MrubyRefContainer_set_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c, mrubybind::MrubyRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_value(a0);
        }

        mrubybind::MrubyRef BasicBind_cor__mruby_interface__MrubyRefContainer_get_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_value();
        }

        void BasicBind_cor__RCharArray_capacity(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->capacity();
        }

        void BasicBind_cor__RCharArray_begin_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->begin();
        }

        void BasicBind_cor__RCharArray_begin_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->begin();
        }

        void BasicBind_cor__RCharArray_end_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->end();
        }

        void BasicBind_cor__RCharArray_end_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->end();
        }

        void BasicBind_cor__RCharArray_rbegin_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rbegin();
        }

        void BasicBind_cor__RCharArray_rbegin_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rbegin();
        }

        void BasicBind_cor__RCharArray_rend_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rend();
        }

        void BasicBind_cor__RCharArray_rend_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rend();
        }

        void BasicBind_cor__RCharArray_cbegin(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->cbegin();
        }

        void BasicBind_cor__RCharArray_cend(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->cend();
        }

        void BasicBind_cor__RCharArray_crbegin(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->crbegin();
        }

        void BasicBind_cor__RCharArray_crend(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->crend();
        }



        
        bool BasicBind_MrubyExperimentalBindTestStruct_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> BasicBind_MrubyExperimentalBindTestStruct_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestStruct>());
        }
        bool BasicBind_MrubyExperimentalBindTestClassInherited_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> BasicBind_MrubyExperimentalBindTestClassInherited_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestClassInherited>());
        }
        bool BasicBind_MrubyExperimentalBindTestClass_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_MrubyExperimentalBindTestClass_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestClass>());
        }


        
          void BasicBind_bind_func_2(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::type::OSphere2I >("CorType", "OSphere2I");
            binder.bind_static_method("CorType", "OSphere2I", "create", BasicBind_OSphere2I_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> >("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "valid?", BasicBind_MrubyExperimentalTemplateStructRInt32_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "create", BasicBind_MrubyExperimentalTemplateStructRInt32_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> >("CorMrubyInterface", "MrubyExperimentalTemplateStructRString");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "valid?", BasicBind_MrubyExperimentalTemplateStructRString_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "create", BasicBind_MrubyExperimentalTemplateStructRString_create);
            binder.bind_class<cor::data_structure::CostGridSpaceItem >("CorDataStructure", "CostGridSpaceItem");
            binder.bind_static_method("CorDataStructure", "CostGridSpaceItem", "create_0", BasicBind_CostGridSpaceItem_create_0);
            binder.bind_class<cor::data_structure::CostGridSpacePath >("CorDataStructure", "CostGridSpacePath");
            binder.bind_static_method("CorDataStructure", "CostGridSpacePath", "create", BasicBind_CostGridSpacePath_create);

          }

    }
}
