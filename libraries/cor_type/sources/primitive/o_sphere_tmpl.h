#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_TMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/primitive/sphere_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec> class OSphereTmpl
        {
        public:

            typedef Matrix4x4Tmpl<T> Matrix;
            typedef SphereTmpl<T, Vec> Sphere;
            typedef std::vector<Vec> VectorArray;
            typedef Vector3Tmpl<T> Vec3;
            typedef OBoxTmpl<T, Vec> OBox;
            typedef BoxTmpl<T, Vec> Box;

            Matrix m;
            Sphere sphere;

            OSphereTmpl();
            OSphereTmpl(const Matrix& m, const Sphere& sphere);

            RBool is_cross(const OSphereTmpl& s) const;
            RBool is_cross(const OBox& s) const;
            RBool is_include(const Vec& p) const;
            T get_distance(const Vec& p) const;
            VectorArray get_draw_vertices() const;
            Box get_box() const;

        };

        typedef OSphereTmpl<RFloat, Vector2Tmpl<RFloat> > OSphere2F;
        typedef OSphereTmpl<RInt32, Vector2Tmpl<RInt32> > OSphere2I;
    }
}

#endif
