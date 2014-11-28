
#include "mruby_ref_container.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyRefContainerItnl
        {
            MrubyRef value;
        };
        
        MrubyRefContainer::MrubyRefContainer() : itnl(new MrubyRefContainerItnl())
        {
            
        }

        MrubyRefContainer::MrubyRefContainer(const MrubyRef & value) : itnl(new MrubyRefContainerItnl())
        {
            itnl->value = value;
        }
        
        MrubyRefContainer::~MrubyRefContainer()
        {
            
        }

        void MrubyRefContainer::set_value(const MrubyRef & value)
        {
            itnl->value = value;
        }

        MrubyRef MrubyRefContainer::get_value()
        {
            return itnl->value;
        }

    }
}
