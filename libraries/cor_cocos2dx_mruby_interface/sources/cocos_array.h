#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_ARRAY_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_ARRAY_H_

#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "base/CCVector.h"


namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct CocosArrayItnl;
    
        class CocosArray
        {
            std::unique_ptr<CocosArrayItnl> itnl;
        
        public:


            template<class T>static MrubyRef convert_cocos_vec_to_mruby(const cocos2d::Vector<T *>& a)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);

                mrb_value ma;
                ma = mrb_ary_new(mrb);

                typedef mrubybind::Type<CocosWeakPtrTmpl<T> > Type;


                typename cocos2d::Vector<T *>::const_iterator i, ied;
                i = a.begin();
                ied = a.end();
                for(; i != ied; i++)
                {
                    mrb_ary_push(mrb, ma, Type::ret(mrb, *i));
                }

                return MrubyRef(mrb, ma);
            }

            template<class T>static cocos2d::Vector<T *> convert_to_from_cocos_vec(MrubyRef mar)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);
                cocos2d::Vector<T *> a;

                typedef CocosWeakPtrTmpl<T> WP;
                typedef typename mrubybind::Type<CocosWeakPtrTmpl<T> > Type;

                int i;
                mrb_value ma = mar.get_v();
                int l = mrb_ary_len(mrb, ma);
                for(i = 0; i < l; i++)
                {
                    mrb_value v = mrb_ary_ref(mrb, ma, i);
                    if(!mrb_test(v))
                    {
                        throw std::runtime_error("cor::cocos2dx_mruby_interface::CocosArray::convert_to_from_cocos_vec. array has nil ptr.");
                    }
                    WP tv = Type::get(mrb, v);
                    a.pushBack(tv.get());
                }

                return a;
            }

            template<class T>static MrubyRef convert_std_vec_to_mruby(const std::vector<T *>& a)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);

                mrb_value ma;
                ma = mrb_ary_new(mrb);

                typedef mrubybind::Type<CocosWeakPtrTmpl<T> > Type;


                typename std::vector<T *>::const_iterator i, ied;
                i = a.begin();
                ied = a.end();
                for(; i != ied; i++)
                {
                    mrb_ary_push(mrb, ma, Type::ret(mrb, *i));
                }

                return MrubyRef(mrb, ma);
            }

            template<class T>static std::vector<T *> convert_to_from_std_vec(MrubyRef mar)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);
                std::vector<T *> a;

                typedef CocosWeakPtrTmpl<T> WP;
                typedef typename mrubybind::Type<CocosWeakPtrTmpl<T> > Type;

                int i;
                mrb_value ma = mar.get_v();
                int l = mrb_ary_len(mrb, ma);
                for(i = 0; i < l; i++)
                {
                    mrb_value v = mrb_ary_ref(mrb, ma, i);
                    WP tv = Type::get(mrb, v);
                    a.push_back(tv.get());
                }

                return a;
            }
        
            CocosArray();
            virtual ~CocosArray();
        };
    }
}

#endif
