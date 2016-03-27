#ifndef _CPP_MRUBY_LOADER_
#define _CPP_MRUBY_LOADER_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyLoaderItnl;

        class MrubyLoader
        {
            std::unique_ptr<MrubyLoaderItnl> itnl;
        public:

            MrubyLoader();
            virtual ~MrubyLoader();

            static void load_eval(std::string file_name);
        };

    }

}


#endif
