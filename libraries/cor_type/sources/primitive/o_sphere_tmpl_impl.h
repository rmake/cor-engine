#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_TMPL_IMPL_H_

#include "o_sphere_tmpl.h"
#include "cor_system/sources/logger.h"
#include <math.h>

namespace cor
{
    namespace type
    {
        template<class T, class Vec> OSphereTmpl<T, Vec>::OSphereTmpl()
        {
        
        }

        template<class T, class Vec> OSphereTmpl<T, Vec>::OSphereTmpl(const Matrix& m, const typename OSphereTmpl<T, Vec>::Sphere& sphere)
        {
            this->m = m;
            this->sphere = sphere;
        }

        template<class T, class Vec> RBool OSphereTmpl<T, Vec>::is_cross(const OSphereTmpl<T, Vec>& s) const
        {
            if(this->sphere.r < 0.0 || s.sphere.r < 0.0)
            {
                return rfalse;
            }
            Sphere mc0, mc1;
            sphere.transform(m, mc0);
            s.sphere.transform(s.m, mc1);
            return mc0.is_collide(mc1);
        }

        template<class T, class Vec> RBool OSphereTmpl<T, Vec>::is_cross(const typename OSphereTmpl<T, Vec>::OBox& b) const
        {
            if(this->sphere.r < 0.0 || b.box.w.x < 0.0)
            {
                return rfalse;
            }

            RSize dim = b.box.p.size();
            auto mn = b.box.p;
            auto mx = b.box.get_max();
            auto im = b.m.affine_inverse();
            auto p = (im * m).transform(sphere.p);
            Vec v;
            v.x = sphere.r;
            auto rm = (im * m);
            rm.set_o_vec(Vec::zero());
            auto r = rm.transform(v).get_magnitude();
            RSize i, isz;
            isz = dim;
            RSize inner_include_axis_count = 0;
            RSize outer_include_axis_count = 0;
            for(i = 0; i < isz; i++)
            {
                if(mn[i] <= p[i] && p[i] <= mx[i])
                {
                    inner_include_axis_count++;
                }

                if(mn[i] - r <= p[i] && p[i] <= mx[i] + r)
                {
                    outer_include_axis_count++;
                }
                else
                {
                    return rfalse;
                }
            }

            if(inner_include_axis_count == dim)
            {
                return rtrue;
            }

            if(outer_include_axis_count == dim && inner_include_axis_count == dim - 1)
            {
                return rtrue;
            }

            Vec nearest;

            for(i = 0; i < isz; i++)
            {
                if(mn[i] <= p[i] && p[i] <= mx[i])
                {
                    nearest[i] = p[i];
                }
                else if(p[i] < mn[i])
                {
                    nearest[i] = mn[i];
                }
                else if(mx[i] < p[i])
                {
                    nearest[i] = mx[i];
                }
            }
            auto d = p - nearest;
            if(d.get_magnitude() <= r)
            {
                return rtrue;
            }
            return rfalse;
        }

        template<class T, class Vec> RBool OSphereTmpl<T, Vec>::is_include(const Vec& p) const
        {
            auto im = m.affine_inverse();
            auto tp = im.transform(p);
            return sphere.is_include_point(tp);
        }

        template<class T, class Vec> T OSphereTmpl<T, Vec>::get_distance(const Vec& p) const
        {
            auto im = m.affine_inverse();
            auto d = im.transform(p);
            auto n = d;
            n.normalize();
            auto l = d.get_magnitude();
            if(l < sphere.r)
            {
                return (T)0.0;
            }
            auto td = n * (l - sphere.r);
            auto zm = m;
            zm.set_o_vec(Vec::zero());
            auto da = zm.transform(td);
            return da.get_magnitude();
        }

        template<class T, class Vec> typename OSphereTmpl<T, Vec>::VectorArray OSphereTmpl<T, Vec>::get_draw_vertices() const
        {
            VectorArray va;
            RSize isz = 16;
            va.resize(isz);
            RSize i;
            for(i = 0; i < isz ; i++)
            {
                auto t = i * 2.0 * PI / isz;
                Vec v;
                v.x = (T)cos(t) * sphere.r + sphere.p.x;
                v.y = (T)sin(t) * sphere.r + sphere.p.y;
                va[i] = m.transform(v);
            }
            return va;
        }

        template<class T, class Vec> typename OSphereTmpl<T, Vec>::Box OSphereTmpl<T, Vec>::get_box() const
        {
            auto p = m.transform(sphere.p);
            Vec v;
            v.x = sphere.r;
            auto rm = m;
            rm.set_o_vec(Vec::zero());
            auto r = rm.transform(v).get_magnitude();
            Box b;
            b.set_first_point(p - Vec::one() * r);
            b.add_point(p + Vec::one() * r);
            return b;
        }
    }
}

#endif
