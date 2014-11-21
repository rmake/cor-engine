#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_TMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_TMPL_H_

#include "cor_type/sources/basic_types.h"

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/primitive/box.h"
#include "cor_type/sources/math/matrix4x4.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec> class OBoxTmpl
        {
        public:
            typedef Vector3Tmpl<T> Vec3;
            typedef Matrix4x4Tmpl<T> Matrix;
            typedef BoxTmpl<T, Vec> Box;
            typedef std::vector<Vec> VectorArray;

            Matrix m;
            Box box;

            OBoxTmpl();
            OBoxTmpl(const Matrix& m, const Box& box);

            RBool is_cross(const OBoxTmpl& b) const;
            RBool is_include(const Vec& p) const;
            T get_distance(const Vec& p) const;
            VectorArray get_vertices() const;
            RBool get_contact_info(const OBoxTmpl& b, Vec& n, T& d, Vec& p0, Vec& p1) const;
            Box get_aabb() const;
        };

        typedef OBoxTmpl<RFloat, Vector2Tmpl<RFloat> > OBox2F;
        typedef OBoxTmpl<RInt32, Vector2Tmpl<RInt32> > OBox2I;
    }
}

#endif
