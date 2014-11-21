#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_TMPL_IMPL_H_

#include "o_box_tmpl.h"
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace type
    {
        
        template<class T, class Vec> OBoxTmpl<T, Vec>::OBoxTmpl()
        {

        }

        template<class T, class Vec> OBoxTmpl<T, Vec>::OBoxTmpl(const typename OBoxTmpl<T, Vec>::Matrix& m, const typename OBoxTmpl<T, Vec>::Box& box)
        {
            this->m = m;
            this->box = box;
        }


        template<class T, class Vec> RBool OBoxTmpl<T, Vec>::is_cross(const OBoxTmpl<T, Vec>& b) const
        {
            if(box.w.x < 0.0 || b.box.w.x < 0.0)
            {
                return rfalse;
            }
            Matrix m0_to_m1;
            Matrix m1_to_m0;
            Box trans_box;

            m0_to_m1 = b.m.affine_inverse() * m;
            trans_box.set_rect(m0_to_m1, box);
            if(!b.box.is_cross(trans_box))
            {
                return rfalse;
            }

            m1_to_m0 = m.affine_inverse() * b.m;
            trans_box.set_rect(m1_to_m0, b.box);
            if(!box.is_cross(trans_box))
            {
                return rfalse;
            }

            return rtrue;
        }

        template<class T, class Vec> RBool OBoxTmpl<T, Vec>::is_include(const Vec& p) const
        {
            if(box.w.x < 0.0)
            {
                return rfalse;
            }

            Matrix ma = Matrix::affine_inverse(m);
            auto tp = ma.transform(p);

            if(box.p.x <= tp.x &&
                tp.x < box.p.x + box.w.x &&
                box.p.y <= tp.y &&
                tp.y < box.p.y + box.w.y)
            {
                return rtrue;
            }

            return rfalse;
        }

        template<class T, class Vec> T OBoxTmpl<T, Vec>::get_distance(const Vec& p) const
        {
            RSize dim = box.p.size();
            auto mn = box.p;
            auto mx = box.get_max();
            auto im = m.affine_inverse();
            auto zm = m;
            zm.set_o_vec(Vec::zero());
            RSize i, isz;
            isz = dim;
            RSize inner_include_axis_count = 0;
            auto tp = im.transform(p);
            for(i = 0; i < isz; i++)
            {
                if(mn[i] <= tp[i] && tp[i] <= mx[i])
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
                if(mn[i] <= tp[i] && tp[i] <= mx[i])
                {
                    nearest[i] = tp[i];
                }
                else if(tp[i] < mn[i])
                {
                    nearest[i] = mn[i];
                }
                else if(mx[i] < tp[i])
                {
                    nearest[i] = mx[i];
                }
            }
            auto d = tp - nearest;
            d = zm.transform(d);
            return d.get_magnitude();
        }

        template<class T, class Vec> typename OBoxTmpl<T, Vec>::VectorArray OBoxTmpl<T, Vec>::get_vertices() const
        {
            VectorArray va;
            if(box.w.x < 0.0)
            {
                return va;
            }

            va.resize(4);

            {
                Vec3 tp = Vec3(box.p.x, box.p.y, 0.0f);
                va[0] = Vec(m.transform(tp));
            }

            {
                Vec3 tp = Vec3(box.p.x + box.w.x, box.p.y, 0.0f);
                va[1] = Vec(m.transform(tp));
            }

            {
                Vec3 tp = Vec3(box.p.x + box.w.x, box.p.y + box.w.y, 0.0f);
                va[2] = Vec(m.transform(tp));
            }

            {
                Vec3 tp = Vec3(box.p.x, box.p.y + box.w.y, 0.0f);
                va[3] = Vec(m.transform(tp));
            }


            return va;
        }

        template<class T, class Vec> RBool OBoxTmpl<T, Vec>::get_contact_info(const OBoxTmpl<T, Vec>& b, Vec& n, T& d, Vec& p0, Vec& p1) const
        {
            static const RSize max_dim = 3;
            auto sz = n.size();
            Vec3 n0[max_dim];
            Vec3 o0;
            Vec3 n1[max_dim];
            Vec3 o1;

            if(sz >= 1)
            {
                n0[0] = m.get_x_vec();
            }
            if(sz >= 2)
            {
                n0[1] = m.get_y_vec();
            }
            if(sz >= 3)
            {
                n0[2] = m.get_z_vec();
            }
            o0 = m.get_o_vec();

            if(sz >= 1)
            {
                n1[0] = b.m.get_x_vec();
            }
            if(sz >= 2)
            {
                n1[1] = b.m.get_y_vec();
            }
            if(sz >= 3)
            {
                n1[2] = b.m.get_z_vec();
            }
            o1 = b.m.get_o_vec();

            RBool result = rtrue;
            struct ContactPair
            {
                Vec3 n;
                Vec3 p0;
                Vec3 p1;
                T d;
            };

            ContactPair cps[2][max_dim * 2];

            for(RSize i = 0 ; i < 2 ; i++)
            {
                for(RSize j = 0; j < sz * 2; j++)
                {
                    cps[i][j].d = static_cast<T>(1.0);
                }
            }

            auto ltf = [&](Vec3& o0, Vec3& o1, const OBoxTmpl<T, Vec>& b0, const OBoxTmpl<T, Vec>& b1, Vec3* n0, Vec3* n1, T sign){
            
                RSize ct = 0;
                RSize idx;
                if(sign >= 0)
                {
                    idx = 0;
                }
                else
                {
                    idx = 1;
                }
                for(RSize i = 0; i < sz; i++)
                {
                    Vec3 tn0 = n0[i];
                    tn0.normalize();
                    T n0mg = n0[i].get_magnitude();
                    T n0dpo0 = tn0.dot(o0);
                    T td = -n0mg * (-n0dpo0 + b0.box.p[i]);

                    auto mnf = [&](){
                        Vec3 p = o1;
                        for(RSize j = 0; j < sz; j++)
                        {
                            if(tn0.dot(n1[j]) >= 0)
                            {
                                p += n1[j] * b1.box.p[j];
                            }
                            else
                            {
                                p += n1[j] * (b1.box.p[j] + b.box.w[j]);
                            }
                            
                        }

                        T da;
                        da = tn0.dot(p) - td;
                        if(da < T(0.0))
                        {
                            Vec3 ap;
                            auto& cpa = cps[idx][ct];

                            ap = p - da * tn0;
                            if(sign >= (T)0.0)
                            {
                                cpa.p0 = Vec(ap);
                                cpa.p1 = Vec(p);
                                cpa.n = Vec(tn0);
                            }
                            else
                            {
                                cpa.p1 = Vec(ap);
                                cpa.p0 = Vec(p);
                                cpa.n = -Vec(tn0);
                            }
                            cpa.d = da;
                        }
                        else
                        {
                            result = rfalse;
                        }

                        ct++;
                    };

                    mnf();

                    tn0 = -tn0;
                    td = n0mg * (-n0dpo0 + b0.box.p[i] + b0.box.w[i]);

                    mnf();
                }
            };

            ltf(o0, o1, *this, b, n0, n1, (T)1.0);
            ltf(o1, o0, b, *this, n1, n0, (T)-1.0);
            
            T mnd = (T)-FloatMax;

            for(RSize i = 0; i < 2; i++)
            {
                for(RSize j = 0; j < sz * 2; j++)
                {
                    if(cps[i][j].d > mnd && cps[i][j].d <= (T)0.0)
                    {
                        auto& cpa = cps[i][j];
                        n = cpa.n;
                        p0 = cpa.p0;
                        p1 = cpa.p1;
                        d = cpa.d;
                        mnd = d;
                    }
                }
            }

            return result;

        }

        template<class T, class Vec> typename OBoxTmpl<T, Vec>::Box OBoxTmpl<T, Vec>::get_aabb() const
        {
            RSize i, isz;
            RSize j;
            Box b;

            Vec vmn, vmx;
            isz = b.p.size();
            auto vo = m.get_o_vec();
            Vec3 dv[] = { m.get_x_vec(), m.get_y_vec(), m.get_z_vec() };
            for(i = 0; i < isz; i++)
            {
                
                T mn, mx;
                mn = vo[i];
                mx = vo[i];
                
                for(j = 0; j < isz; j++)
                {
                    auto t = dv[j][i];
                    if(t >= (T)0.0)
                    {
                        mn += t * box.p[j];
                        mx += t * (box.p[j] + box.w[j]);
                    }
                    else
                    {
                        mn += t * (box.p[j] + box.w[j]);
                        mx += t * box.p[j];
                    }
                }
                
                vmn[i] = mn;
                vmx[i] = mx;
            }

            b.p = vmn;
            b.set_max(vmx);
            
            return b;
        }


    }
}

#endif
