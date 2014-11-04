#ifndef ____COR_ALGORITHM_SOURCES_UTILITIES_TMPL_H_
#define ____COR_ALGORITHM_SOURCES_UTILITIES_TMPL_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace algorithm
    {
        
        template<class F, class AT> F each_all(const AT& a, F f)
        {
            auto i = a.begin();
            auto ied = a.end();
            for(; i != ied; )
            {
                auto ti = i;
                ti++;
                f(*i);
                i = ti;
            }
            return f;
        }



        template<class F, class AT> F each_all_index(const AT& a, F f)
        {
            auto i = a.begin();
            auto ied = a.end();
            RSize ct = 0;
            for(; i != ied; i++)
            {
                f(*i, ct);
                ct++;
            }
            return f;
        }

        template<class F, class AT> F each_ref_all_index(AT& a, F f)
        {
            auto i = a.begin();
            auto ied = a.end();
            RSize ct = 0;
            for(; i != ied; i++)
            {
                f(*i, ct);
                ct++;
            }
            return f;
        }

        template<class F, class AT> void sort_all(AT& a, F f)
        {
            std::sort(a.begin(), a.end(), f);
        }

        template<class T> RString join(const T& a, const RString& c = RString(""))
        {
            RStringStream s;
            auto i = a.begin();
            auto ied = a.end();
            for(; i != ied; )
            {
                s << *i;
                i++;
                if(i != ied)
                {
                    s << ',';
                }
            }
            return s.str();
        }

        template<class T, class... Rest> void string_catt_impl(RStringStream& s, T v, Rest... rest)
        {
            s << v;
            string_catt_impl(s, rest...);
        }

        template<class... Ts> RString string_cat(Ts... args)
        {
            RStringStream s;
            string_catt_impl(s, args...);
            return s.str();
        }

        template<class T, class F> void times(T num, F f)
        {
            T i;
            for(i = 0; i < num; i++)
            {
                f(i);
            }
        }

        template<class AT, class AY> void min_copy(const AT& s, AY& d)
        {
            auto sb = s.begin();
            auto se = s.end();
            auto db = d.begin();
            auto de = d.end();

            for(; sb != se && db != de; sb++, db++)
            {
                *db = static_cast<typename AT::value_type>(*sb);
            }
        }


        class UtilitiesTmpl
        {
        public:
        };
    }
}

#endif
