#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_TYPE_CONVERTER_TMPL_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_TYPE_CONVERTER_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "CCVector.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        template<class T> void convert(const cocos2d::Vector<T>& src, std::vector<T>& dst)
        {
            RSize i, isz;
            dst.resize(src.size());
            isz = src.size();
            for(i = 0; i < isz; i++)
            {
                dst[i] = src[i];
            }
        }

        template<class T> void convert(const std::vector<T>& src, cocos2d::Vector<T>& dst)
        {
            RSize i, isz;
            dst.resize(src.size());
            isz = src.size();
            for(i = 0; i < isz; i++)
            {
                dst[i] = src[i];
            }
        }


        class TypeConverterTmpl
        {
        public:
        };
    }
}

#endif
