#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_WEAK_PTR_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_WEAK_PTR_H_

#include "cor_type/sources/basic_types.h"
#include "CCScriptSupport.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {

        class Cocos2dRef
        {
            cocos2d::Ref* p;

        public:

            Cocos2dRef(cocos2d::Ref* p);
            ~Cocos2dRef();

            cocos2d::Ref* get_p();
            void release_ref();
        };

        typedef std::shared_ptr<Cocos2dRef> CocosRefSP;
        typedef std::weak_ptr<Cocos2dRef> CocosRefWP;
        typedef std::map<cocos2d::Ref*, CocosRefWP> CocosRefTable;

        class CocosWeakPtrRefItnl
        {
            CocosRefSP p;

            void release_p();
        public:


            void set_p(cocos2d::Ref* p);
            void set_p(const CocosRefSP& p);
            cocos2d::Ref* get_p() const;
            cocos2d::Ref* get_p_nil_check() const;
            RBool is_valid() const;
            CocosRefSP& ref_p();
        };

        template<class T>class CocosWeakPtrTmpl
        {
        public:
            typedef T element_type;
            typedef T* TypePtr;

        private:

            CocosWeakPtrRefItnl itnl;

        public:

            CocosWeakPtrTmpl()
            {
                
            }

            template<class Y> CocosWeakPtrTmpl(Y* p)
            {
                this->itnl.set_p(static_cast<cocos2d::Ref*>(p));
            }

            template<class Y> CocosWeakPtrTmpl(const CocosWeakPtrTmpl<Y>& p)
            {
                this->itnl.set_p(static_cast<cocos2d::Ref*>(p.get()));
            }

            ~CocosWeakPtrTmpl()
            {

            }

            TypePtr get()
            {
                return static_cast<TypePtr>(itnl.get_p());
            }

            const TypePtr get() const
            {
                return static_cast<TypePtr>(itnl.get_p());
            }

            T * operator->() const
            {
                return static_cast<TypePtr>(itnl.get_p_nil_check());
            }

            RBool is_valid() const
            {
                return itnl.is_valid();
            }

            void reset()
            {
                this->itnl.set_p(NULL);
            }


        };

        struct CocosWeakPtrItnl;
    
        class CocosWeakPtr
        {
            std::unique_ptr<CocosWeakPtrItnl> itnl;
        
        public:
        
            CocosWeakPtr();
            virtual ~CocosWeakPtr();
        };
    }
}

#endif
