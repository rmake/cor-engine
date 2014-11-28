#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_REF_CONTAINER_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_REF_CONTAINER_H_

#include "cor_type/sources/basic_types.h"
#include "mruby_state.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyRefContainerItnl;

        class MrubyRefContainer;
        typedef std::shared_ptr<MrubyRefContainer> MrubyRefContainerSP;
        typedef std::weak_ptr<MrubyRefContainer> MrubyRefContainerWP;
    
        class MrubyRefContainer
        {
            std::unique_ptr<MrubyRefContainerItnl> itnl;
        
        public:
        
            MrubyRefContainer();
            MrubyRefContainer(const MrubyRef & value);
            virtual ~MrubyRefContainer();

            void set_value(const MrubyRef & value);
            MrubyRef get_value();
        };
    }
}

#endif
