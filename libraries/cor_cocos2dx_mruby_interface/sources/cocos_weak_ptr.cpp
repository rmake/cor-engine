#include "cocos_weak_ptr.h"
#include "mruby_script_engine.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        Cocos2dRef::Cocos2dRef(cocos2d::Ref* p)
        {
            this->p = p;
        }

        Cocos2dRef::~Cocos2dRef()
        {
            release_ref();
        }

        void Cocos2dRef::release_ref()
        {
            if(p)
            {
                cocos2d::Ref* tp = p;
                p = NULL;
                MrubyScriptEnginePtr instance = MrubyScriptEngine::get_instance();
                if(instance)
                {
                    auto& table = instance->ref_object_table();
                    table.erase(tp);
                }
                
            }
        }

        cocos2d::Ref* Cocos2dRef::get_p()
        {
            return p;
        }


        void CocosWeakPtrRefItnl::set_p(cocos2d::Ref* p)
        {
            if(!p)
            {
                this->p.reset();
            }
            MrubyScriptEnginePtr instance = MrubyScriptEngine::get_instance();
            auto& table = instance->ref_object_table();
            auto finded = table.find(p);
            if(finded != table.end())
            {
                this->p = finded->second.lock();
            }
            else
            {
                this->p = std::make_shared<Cocos2dRef>(p);
                table[p] = this->p;
                if(p)
                {
                    p->_luaID = 1;
                }
            }
            
        }

        void CocosWeakPtrRefItnl::set_p(const CocosRefSP& p)
        {
            this->p = p;
        }

        cocos2d::Ref* CocosWeakPtrRefItnl::get_p() const
        {
            return p->get_p();
        }

        cocos2d::Ref* CocosWeakPtrRefItnl::get_p_nil_check() const
        {
            if(!p.get())
            {
                auto m = mruby_interface::MrubyState::get_current();
                auto mrb = m->get_mrb();
                mrb_raisef(mrb, E_RUNTIME_ERROR, "CocosWeakPtrRef is empty.");
            }
            cocos2d::Ref* tp = p->get_p();
            if(!tp)
            {
                auto m = mruby_interface::MrubyState::get_current();
                auto mrb = m->get_mrb();
                mrb_raisef(mrb, E_RUNTIME_ERROR, "CocosWeakPtrRef is deleted.");
            }
            return tp;
        }

        RBool CocosWeakPtrRefItnl::is_valid() const
        {
            if(!p.get())
            {
                auto m = mruby_interface::MrubyState::get_current();
                auto mrb = m->get_mrb();
                return rfalse;
            }
            cocos2d::Ref* tp = p->get_p();
            if(!tp)
            {
                auto m = mruby_interface::MrubyState::get_current();
                auto mrb = m->get_mrb();
                return rfalse;
            }
            return rtrue;
        }

        CocosRefSP& CocosWeakPtrRefItnl::ref_p()
        {
            return p;
        }


        struct CocosWeakPtrItnl
        {
            
        };
        
        CocosWeakPtr::CocosWeakPtr() : itnl(new CocosWeakPtrItnl())
        {
            
        }
        
        CocosWeakPtr::~CocosWeakPtr()
        {
            
        }
    }
}
