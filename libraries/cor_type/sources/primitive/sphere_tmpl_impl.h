#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_TMPL_IMPL_H_

#include "sphere_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec> SphereTmpl<T, Vec>::SphereTmpl()
        {
            this->p = Vec::zero();
            this->r = (T)-1.0;
        }

        template<class T, class Vec> SphereTmpl<T, Vec>::SphereTmpl(const SphereTmpl<T, Vec>& v)
        {
            this->p = v.p;
            this->r = v.r;
        }

        template<class T, class Vec> SphereTmpl<T, Vec>::SphereTmpl(const Vec& p, const T& r)
        {
            this->p = p;
            this->r = r;
        }

        template<class T, class Vec> void SphereTmpl<T, Vec>::set(const Vec& p, const T& r)
        {
            this->p = p;
            this->r = r;
        }

        template<class T, class Vec> void SphereTmpl<T, Vec>::transform(const Matrix4x4Tmpl<T>& m, SphereTmpl<T, Vec>& dst) const
        {
            Vec dp;
            m.transform(m, p, dp);
            dst.p = dp;
            dst.r = m.get_x_vec().get_magnitude() * r;
        }

        template<class T, class Vec> RBool SphereTmpl<T, Vec>::is_collide(const SphereTmpl<T, Vec>& c) const
        {
            Vec d;
            T sdist;
            T r2;
            d = p - c.p;
            sdist = d.get_square_magnitude();
            r2 = r + c.r;
            r2 = r2 * r2;
            if(sdist < r2)
            {
                return rtrue;
            }
            return rfalse;
        }

        template<class T, class Vec> RBool SphereTmpl<T, Vec>::is_include_point(const Vec& tp) const
        {
            Vec d;
            d = tp - p;
            if(d.get_square_magnitude() < r * r)
            {
                return rtrue;
            }
            return rfalse;
        }

        template<class T, class Vec> T SphereTmpl<T, Vec>::get_distance(const Vec& p) const
        {
            Vec d;
            d = p - this->p;
            T da = d.get_magnitude() - r;
            if(da >= (T)0.0)
            {
                return da;
            }
            return (T)0.0;
        }

    }
}

#endif
