#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_TYPE_CONVERTER_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_TYPE_CONVERTER_H_

#include "type_converter_tmpl.h"
#include "Mat4.h"
#include "cor_type/sources/math/matrix4x4.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct TypeConverterItnl;

        void convert(const cocos2d::Mat4& src, type::Matrix4x4F& dst);
        void convert(const type::Matrix4x4F& src, cocos2d::Mat4& dst);
    
        class TypeConverter
        {
            std::unique_ptr<TypeConverterItnl> itnl;
        
        public:
        
            TypeConverter();
            virtual ~TypeConverter();
        };
    }
}

#endif
