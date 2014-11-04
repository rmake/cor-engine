#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_TMPL_IMPL_H_

#include "uniform_grid_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        
        template<class T, class VecI> UniformGridTmpl<T, VecI>::UniformGridTmpl()
        {
        
        }

        template<class T, class VecI> UniformGridTmpl<T, VecI>::UniformGridTmpl(const VecI& size)
        {
            this->resize(size);
        }

        template<class T, class VecI> UniformGridTmpl<T, VecI>::~UniformGridTmpl()
        {
            
        }


        template<class T, class VecI> void UniformGridTmpl<T, VecI>::resize(const VecI& size)
        {
            RSize sz = 1;
            RSize i, isz;
            auto old_size = this->size;
            isz = size.size();
            for(i = 0 ; i < isz ; i++)
            {
                sz *= size[i];
            }

            // todo: resize and old copy
            //Array old_array = a;

            a.clear();
            a.resize(sz);

            this->size = size;

        }

        template<class T, class VecI>RBool UniformGridTmpl<T, VecI>::valid(const VecI& position) const
        {
            return 0 <= position.x && position.x < size.x && 0 <= position.y && position.y < size.y;
        }

        template<class T, class VecI> VecI UniformGridTmpl<T, VecI>::get_size_table() const
        {
            RSize i, isz;
            VecI table;
            typename VecI::value_type ia = 1;
            isz = size.size();
            for(i = 0; i < isz; i++)
            {
                table[i] = ia;
                ia *= size[i];
            }
            return table;
        }

        template<class T, class VecI> VecI UniformGridTmpl<T, VecI>::get_size()
        {
            return size;
        }

        template<class T, class VecI> T& UniformGridTmpl<T, VecI>::ref(const VecI& position)
        {
            auto table = get_size_table();
            RSize i, isz;
            typename VecI::value_type index = 0;
            isz = size.size();
            for(i = 0; i < isz; i++)
            {
                index += position[isz - i - 1] * table[isz - i - 1];
            }
            return a[index];
        }

        template<class T, class VecI> void UniformGridTmpl<T, VecI>::set(const VecI& position, const T& v)
        {
            auto& cell = ref(position);
            cell = v;
        }

        template<class T, class VecI> const T& UniformGridTmpl<T, VecI>::get(const VecI& position) const
        {
            auto table = get_size_table();
            RSize i, isz;
            typename VecI::value_type index = 0;
            isz = size.size();
            for(i = 0; i < isz; i++)
            {
                index += position[isz - i - 1] * table[isz - i - 1];
            }
            return a[index];
        }

        template<class T, class VecI> typename UniformGridTmpl<T, VecI>::Array& UniformGridTmpl<T, VecI>::ref_a()
        {
            return a;
        }


    }
}

#endif
