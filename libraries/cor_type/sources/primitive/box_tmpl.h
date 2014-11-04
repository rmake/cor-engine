#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_BOX_TMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_BOX_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/matrix4x4.h"
#include "cor_algorithm/sources/utilities_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T, class Vec> class BoxTmpl
        {
        public:
            Vec p;
            Vec w;

            BoxTmpl();
            BoxTmpl(const BoxTmpl& v);
            BoxTmpl(const Vec& p, const Vec& w);
            BoxTmpl(const T& px, const T& py, const T& wx, const T& wy);
            template<class Y, class YVec>BoxTmpl(const BoxTmpl<Y, YVec>& v)
            {
                algorithm::min_copy(v.p, p);
                algorithm::min_copy(v.w, w);
            }

            void set(const Vec& p, const Vec& w);
            void set(const T& px, const T& py, const T& wx, const T& wy);

            Vec get_max() const;
            void set_max(Vec mx);

            static BoxTmpl change_corner(const Vec& screen_size, const BoxTmpl& box);

            void clip(const BoxTmpl& box, BoxTmpl& cliped_box, Vec& offset);

            template<class YVec>void set_first_point(YVec v)
            {
                p = Vec(v);
                w = Vec::zero();
            }

            template<class YVec>void add_point(YVec v)
            {
                Vec cv = v;
                Vec mx = get_max().max_vec(cv);
                p = p.min_vec(cv);
                set_max(mx);
            }

            void set_rect(const BoxTmpl& r);
            void add_rect(const BoxTmpl& r);
            void set_rect(const Matrix4x4Tmpl<T>& m, const BoxTmpl& r);
            void add_rect(const Matrix4x4Tmpl<T>& m, const BoxTmpl& r);

            Vec get_center() const;
            RBool is_include(const Vec& o) const;

            RBool is_cross(const BoxTmpl& r) const;
            T get_distance(const Vec& p) const;

            T get_width_size();

        };

        typedef BoxTmpl<RFloat, Vector2Tmpl<RFloat> > Box2F;
        typedef BoxTmpl<RInt32, Vector2Tmpl<RInt32> > Box2I;
    }
}

#endif
