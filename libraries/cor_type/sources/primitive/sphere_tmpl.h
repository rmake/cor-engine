#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_TMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/matrix4x4.h"
#include "cor_algorithm/sources/utilities_tmpl.h"
#include "cor_type/sources/primitive/o_box_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec>class SphereTmpl
        {
        public:
            Vec p;
            T r;

            SphereTmpl();
            SphereTmpl(const SphereTmpl& v);
            SphereTmpl(const Vec& p, const T& r);
            template<class Y, class YVec>SphereTmpl(const SphereTmpl<Y, YVec>& v)
            {
                algorithm::min_copy(v.p, p);
                r = (T)v.r;
            }

            void set(const Vec& p, const T& r);
            void transform(const Matrix4x4Tmpl <T>& m, SphereTmpl& dst) const;
            RBool is_collide(const SphereTmpl& c) const;
            RBool is_include_point(const Vec& tp) const;
            T get_distance(const Vec& p) const;

        };

        typedef SphereTmpl<RFloat, Vector2Tmpl<RFloat> > Sphere2F;
        typedef SphereTmpl<RInt32, Vector2Tmpl<RInt32> > Sphere2I;
    }
}

#endif
