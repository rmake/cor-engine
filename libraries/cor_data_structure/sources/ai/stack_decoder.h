#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_H_

#include "stack_decoder_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct StackDecoderItnl;
    
        class StackDecoder
        {
            std::unique_ptr<StackDecoderItnl> itnl;
        
        public:
        
            StackDecoder();
            virtual ~StackDecoder();
        };
    }
}

#endif
