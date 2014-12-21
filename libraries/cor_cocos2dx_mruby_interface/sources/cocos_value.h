#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_VALUE_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_VALUE_H_

#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "base/CCValue.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct CocosValueItnl;
    
        class CocosValue
        {
            std::unique_ptr<CocosValueItnl> itnl;
        
        public:

            static MrubyRef convert_from_cocos_value();
            static MrubyRef convert_from_cocos_value(const cocos2d::Value& v);
            static MrubyRef convert_from_cocos_value_vec(const cocos2d::ValueVector& v);
            static MrubyRef convert_from_cocos_value_map(const cocos2d::ValueMap& v);

            static cocos2d::Value convert_to_cocos_value(const MrubyRef& v);
            static cocos2d::ValueVector convert_to_cocos_value_vec(const MrubyRef& v);
            static cocos2d::ValueMap convert_to_cocos_value_map(const MrubyRef& v);
        
            CocosValue();
            virtual ~CocosValue();
        };
    }
}

#endif
