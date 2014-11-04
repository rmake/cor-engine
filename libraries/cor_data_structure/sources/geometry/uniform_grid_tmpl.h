#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/vector4_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        template<class T, class VecI>class UniformGridTmpl
        {
        public:
            typedef std::vector<T> Array;

        private:
            VecI size;
            Array a;

        public:

            UniformGridTmpl();
            UniformGridTmpl(const VecI& size);
            ~UniformGridTmpl();
            
            void resize(const VecI& size);
            RBool valid(const VecI& position) const;
            VecI get_size_table() const;
            VecI get_size();
            T& ref(const VecI& position);
            void set(const VecI& position, const T& v);
            const T& get(const VecI& position) const;
            Array& ref_a();
        };
    }
}

#endif
