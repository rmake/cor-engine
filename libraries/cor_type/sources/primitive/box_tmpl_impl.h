#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_BOX_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_BOX_TMPL_IMPL_H_

#include "box_tmpl.h"
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec> BoxTmpl<T, Vec>::BoxTmpl()
        {
            this->p = Vec::zero();
            this->w = Vec::zero();
            this->w[0] = (T)-1.0;
        }

        template<class T, class Vec> BoxTmpl<T, Vec>::BoxTmpl(const BoxTmpl<T, Vec>& v)
        {
            this->p = v.p;
            this->w = v.w;
        }

        template<class T, class Vec> BoxTmpl<T, Vec>::BoxTmpl(const Vec& p, const Vec& w)
        {
            this->p = p;
            this->w = w;
        }

        template<class T, class Vec> BoxTmpl<T, Vec>::BoxTmpl(const T& px, const T& py, const T& wx, const T& wy)
        {
            set(px, py, wx, wy);
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::set(const Vec& p, const Vec& w)
        {
            this->p = p;
            this->w = w;
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::set(const T& px, const T& py, const T& wx, const T& wy)
        {
            this->p = Vec::zero();
            this->w = Vec::zero();
            this->p[0] = px;
            this->p[1] = py;
            this->w[0] = wx;
            this->w[1] = wy;
        }

        template<class T, class Vec> Vec BoxTmpl<T, Vec>::get_max() const
        {
            return p + w;
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::set_max(Vec mx)
        {
            w = mx - p;
        }

        template<class T, class Vec> BoxTmpl<T, Vec> BoxTmpl<T, Vec>::change_corner(const Vec& screen_size, const BoxTmpl<T, Vec>& box)
        {
            return BoxTmpl(box.p[0], screen_size[1] - box.p[1] - box.w[1], box.w[0], box.w[1]);
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::clip(const BoxTmpl<T, Vec>& box, BoxTmpl<T, Vec>& cliped_box, Vec& offset)
        {
            cliped_box = box;

            if(cliped_box.p[0] < p[0])
            {
                offset[0] = p[0] - cliped_box.p[0];
                cliped_box.p[0] = p[0];
                if(cliped_box.w[0] >= offset[0])
                {
                    cliped_box.w[0] -= offset[0];
                }
                else
                {
                    cliped_box.w[0] = (T)0.0;
                }
            }

            if(cliped_box.p[1] < p[1])
            {
                offset[1] = p[1] - cliped_box.p[1];
                cliped_box.p[1] = p[1];
                if(cliped_box.w[1] >= offset[1])
                {
                    cliped_box.w[1] -= offset[1];
                }
                else
                {
                    cliped_box.w[1] = (T)0.0;
                }
            }

            if(p[0] + w[0] < cliped_box.p[0] + cliped_box.w[0])
            {
                if(p[0] + w[0] < cliped_box.p[0])
                {
                    cliped_box.w[0] = 0;
                }
                else
                {
                    cliped_box.w[0] = p[0] + w[0] - cliped_box.p[0];
                }
            }

            if(p[1] + w[1] < cliped_box.p[1] + cliped_box.w[1])
            {
                if(p[1] + w[1] < cliped_box.p[1])
                {
                    cliped_box.w[1] = 0;
                }
                else
                {
                    cliped_box.w[1] = p[1] + w[1] - cliped_box.p[1];
                }
            }


        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::set_rect(const BoxTmpl<T, Vec>& r)
        {
            p = r.p;
            w = r.w;
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::add_rect(const BoxTmpl<T, Vec>& r)
        {
            Vec mx = get_max().max_vec(r.get_max());
            p = p.min_vec(r.p);
            set_max(mx);
        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::set_rect(const Matrix4x4Tmpl<T>& m, const BoxTmpl& r)
        {
            Vector3Tmpl<T> vs;
            Vector3Tmpl<T> vd;

            vs.set(r.p[0], r.p[1], (T)0.0);
            vd = m.transform(vs);
            set_first_point(Vec(vd));

            vs.set(r.p[0] + r.w[0], r.p[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

            vs.set(r.p[0] + r.w[0], r.p[1] + r.w[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

            vs.set(r.p[0], r.p[1] + r.w[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

        }

        template<class T, class Vec> void BoxTmpl<T, Vec>::add_rect(const Matrix4x4Tmpl<T>& m, const BoxTmpl<T, Vec>& r)
        {
            Vector3Tmpl<T> vs;
            Vector3Tmpl<T> vd;

            vs.set(r.p[0], r.p[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

            vs.set(r.p[0] + r.w[0], r.p[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

            vs.set(r.p[0] + r.w[0], r.p[1] + r.w[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

            vs.set(r.p[0], r.p[1] + r.w[1], (T)0.0);
            vd = m.transform(vs);
            add_point(Vec(vd));

        }

        template<class T, class Vec> Vec BoxTmpl<T, Vec>::get_center() const
        {
            return p + (w * (T)0.5);
        }

        template<class T, class Vec> RBool BoxTmpl<T, Vec>::is_include(const Vec& o) const
        {
            Vec mx = get_max();
            if(p.all_less_equal(o) && o.all_less_equal(mx))
            {
                return rtrue;
            }
            return rfalse;
        }

        template<class T, class Vec> RBool BoxTmpl<T, Vec>::is_cross(const BoxTmpl& r) const
        {
            Vec mx = get_max();
            Vec rmx = r.get_max();

            if(p.all_less_equal(rmx) &&
                r.p.all_less_equal(mx))
            {
                return rtrue;
            }
            return rfalse;
        }

        template<class T, class Vec> T BoxTmpl<T, Vec>::get_distance(const Vec& p) const
        {
            RSize dim = p.size();
            auto mn = this->p;
            auto mx = get_max();
            RSize i, isz;
            isz = dim;
            RSize inner_include_axis_count = 0;
            for(i = 0; i < isz; i++)
            {
                if(mn[i] <= p[i] && p[i] <= mx[i])
                {
                    inner_include_axis_count++;
                }
            }

            if(inner_include_axis_count == dim)
            {
                return static_cast<T>(0.0);
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
            return d.get_magnitude();
        }

        template<class T, class Vec> T BoxTmpl<T, Vec>::get_width_size()
        {
            return w.sum();
        }



    }
}

#endif
