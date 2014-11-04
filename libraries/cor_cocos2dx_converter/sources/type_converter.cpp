#include "type_converter_tmpl_impl.h"
#include "type_converter.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        void convert(const cocos2d::Mat4& src, type::Matrix4x4F& dst)
        {
            auto d = dst.begin();

            RSize i, isz;
            isz = 16;
            for(i = 0; i < isz; i++)
            {
                *d = src.m[i];
                d++;
            }

            dst = dst.transpose();

        }

        void convert(const type::Matrix4x4F& src, cocos2d::Mat4& dst)
        {
            auto ts = src.transpose();
            auto s = ts.begin();
            RSize i, isz;
            isz = 16;
            for(i = 0; i < isz; i++)
            {
                dst.m[i] = *s;
                s++;
            }
        }


        struct TypeConverterItnl
        {
            
        };
        
        TypeConverter::TypeConverter() : itnl(new TypeConverterItnl())
        {
            
        }
        
        TypeConverter::~TypeConverter()
        {
            
        }
    }
}
