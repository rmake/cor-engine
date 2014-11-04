
#include "cocos_value.h"
#include "cor_algorithm/sources/utilities.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        MrubyRef CocosValue::convert_from_cocos_value()
        {
            auto ms = mruby_interface::MrubyState::get_current();
            mrb_state* mrb = ms->get_mrb();
            mrubybind::MrubyArenaStore mas(mrb);

            return MrubyRef(mrb, mrb_nil_value());
        }

        MrubyRef CocosValue::convert_from_cocos_value(const cocos2d::Value& v)
        {
            auto ms = mruby_interface::MrubyState::get_current();
            mrb_state* mrb = ms->get_mrb();
            mrubybind::MrubyArenaStore mas(mrb);

            if(v.getType() == cocos2d::Value::Type::STRING)
            {
                return MrubyRef(mrb, mrubybind::Type<std::string>::ret(mrb, v.asString()));
            }
            else if(v.getType() == cocos2d::Value::Type::INTEGER)
            {
                return MrubyRef(mrb, mrubybind::Type<int>::ret(mrb, v.asInt()));
            }
            else if(v.getType() == cocos2d::Value::Type::DOUBLE)
            {
                return MrubyRef(mrb, mrubybind::Type<double>::ret(mrb, v.asDouble()));
            }
            else if(v.getType() == cocos2d::Value::Type::FLOAT)
            {
                return MrubyRef(mrb, mrubybind::Type<float>::ret(mrb, v.asFloat()));
            }
            else if(v.getType() == cocos2d::Value::Type::BOOLEAN)
            {
                return MrubyRef(mrb, mrubybind::Type<bool>::ret(mrb, v.asBool()));
            }
            else if(v.getType() == cocos2d::Value::Type::VECTOR)
            {
                return CocosValue::convert_from_cocos_value_vec(v.asValueVector());
            }
            else if(v.getType() == cocos2d::Value::Type::MAP)
            {
                return CocosValue::convert_from_cocos_value_map(v.asValueMap());
            }

            return MrubyRef(mrb, mrb_nil_value());
        }

        MrubyRef CocosValue::convert_from_cocos_value_vec(const cocos2d::ValueVector& v)
        {
            auto ms = mruby_interface::MrubyState::get_current();
            mrb_state* mrb = ms->get_mrb();
            mrubybind::MrubyArenaStore mas(mrb);

            mrb_value ma;
            ma = mrb_ary_new(mrb);

            for(auto tv : v)
            {
                mrb_ary_push(mrb, ma, CocosValue::convert_from_cocos_value(tv).get_v());
            }

            return MrubyRef(mrb, ma);
        }

        MrubyRef CocosValue::convert_from_cocos_value_map(const cocos2d::ValueMap& v)
        {
            auto ms = mruby_interface::MrubyState::get_current();
            mrb_state* mrb = ms->get_mrb();
            mrubybind::MrubyArenaStore mas(mrb);

            mrb_value mh;
            mh = mrb_hash_new(mrb);

            for(auto p : v)
            {
                const auto& k = p.first;
                const auto& v = p.second;
                mrb_hash_set(mrb, mh,
                    mrubybind::Type<std::string>::ret(mrb, k),
                    CocosValue::convert_from_cocos_value(v).get_v());
            }

            return MrubyRef(mrb, mh);
        }

        cocos2d::Value CocosValue::convert_to_cocos_value(const MrubyRef& v)
        {
            auto ms = mruby_interface::MrubyState::get_current();
            mrb_state* mrb = ms->get_mrb();
            mrubybind::MrubyArenaStore mas(mrb);

            if(mrb_string_p(v.get_v()))
            {
                return cocos2d::Value(v.to_s());
            }
            else if(mrb_fixnum_p(v.get_v()))
            {
                return cocos2d::Value(v.to_i());
            }
            else if(mrb_float_p(v.get_v()))
            {
                return cocos2d::Value(v.to_float());
            }
            else if(mrb_test(mrb_check_array_type(mrb, v.get_v())))
            {
                mrb_value a = v.get_v();
                cocos2d::ValueVector va;
                mrb_int i, isz;
                isz = mrb_ary_len(mrb, a);
                for(i = 0; i < isz; i++)
                {
                    va.push_back(CocosValue::convert_to_cocos_value(MrubyRef(mrb, mrb_ary_ref(mrb, a, i))));
                }
                return cocos2d::Value(va);
            }
            else if(mrb_test(mrb_check_hash_type(mrb, v.get_v())))
            {
                mrb_value h = v.get_v();
                cocos2d::ValueMap vh;
                mrb_value a = mrb_hash_keys(mrb, h);
                mrb_int i, isz;
                isz = mrb_ary_len(mrb, a);
                for(i = 0; i < isz; i++)
                {
                    vh[MrubyRef(mrb, mrb_ary_ref(mrb, a, i)).to_s()] = 
                        CocosValue::convert_to_cocos_value(MrubyRef(mrb, mrb_hash_get(mrb, a, mrb_ary_ref(mrb, a, i))));
                }
                return cocos2d::Value(vh);
            }
            

            return cocos2d::Value(v.test());

        }

        cocos2d::ValueVector CocosValue::convert_to_cocos_value_vec(const MrubyRef& v)
        {
            return CocosValue::convert_to_cocos_value(v).asValueVector();
        }

        cocos2d::ValueMap CocosValue::convert_to_cocos_value_map(const MrubyRef& v)
        {
            return CocosValue::convert_to_cocos_value(v).asValueMap();
        }


        struct CocosValueItnl
        {
            
        };
        
        CocosValue::CocosValue() : itnl(new CocosValueItnl())
        {
            
        }
        
        CocosValue::~CocosValue()
        {
            
        }
    }
}
