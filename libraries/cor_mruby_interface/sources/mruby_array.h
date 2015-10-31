#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_H_

#include "mruby_array_tmpl.h"


namespace cor
{
    namespace mruby_interface
    {
        struct MrubyArrayItnl;
    
        class MrubyArray
        {
            std::unique_ptr<MrubyArrayItnl> itnl;
        
        public:
            template<class T>static MrubyRef convert_std_vec_to_mruby(const std::vector<T>& a)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);

                mrb_value ma;
                ma = mrb_ary_new(mrb);

                typedef mrubybind::Type<T > Type;

                typename std::vector<T>::const_iterator i, ied;
                i = a.begin();
                ied = a.end();
                for(; i != ied; i++)
                {
                    mrb_ary_push(mrb, ma, Type::ret(mrb, *i));
                }

                return MrubyRef(mrb, ma);
            }

            template<class T>static MrubyRef convert_std_vec_to_mruby(const std::vector<std::vector<T> >& a)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);

                mrb_value ma;
                ma = mrb_ary_new(mrb);

                typedef mrubybind::Type<T > Type;

                auto i = a.begin();
                auto ied = a.end();
                for(; i != ied; i++)
                {
                    auto ref = convert_std_vec_to_mruby(*i);
                    mrb_ary_push(mrb, ma, ref.get_v());
                }

                return MrubyRef(mrb, ma);
            }


            template<class T>static std::vector<T> convert_mruby_to_std_vec(MrubyRef mar)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);
                std::vector<T> a;

                typedef typename mrubybind::Type<T> Type;

                int i;
                mrb_value ma = mar.get_v();
                int l = mrb_ary_len(mrb, ma);
                for(i = 0; i < l; i++)
                {
                    mrb_value v = mrb_ary_ref(mrb, ma, i);
                    T tv = Type::get(mrb, v);
                    a.push_back(tv);
                }

                return a;
            }

            template<class T>static std::vector<std::vector<T> > convert_mruby_to_std_vec_2_dim(MrubyRef mar)
            {
                auto ms = mruby_interface::MrubyState::get_current();
                mrb_state* mrb = ms->get_mrb();
                mrubybind::MrubyArenaStore mas(mrb);
                std::vector<std::vector<T> > a;

                typedef typename mrubybind::Type<T> Type;

                int i;
                mrb_value ma = mar.get_v();
                int l = mrb_ary_len(mrb, ma);
                for(i = 0; i < l; i++)
                {
                    mrb_value v = mrb_ary_ref(mrb, ma, i);
                    auto tv = convert_mruby_to_std_vec<T>(MrubyRef(mrb, v));
                    a.push_back(tv);
                }

                return a;
            }
        
            MrubyArray();
            virtual ~MrubyArray();
        };


    }
}

#endif
