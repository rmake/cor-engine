#ifndef ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_TMPL_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace data_structure
    {

        template<class T>class ArrayPoolBlockTmpl;
        template<class T>class ArrayPoolInfoTmpl;
        template<class T>class ArrayPoolTmpl;
        template<class T>class ArrayPoolRefTmpl;


        template<class T>class ArrayPoolItemTmpl
        {
            void add_delete_item();
        public:
            typedef ArrayPoolBlockTmpl<T> Block;
            typedef Block* BlockPtr;
            static const RSize align_size = 16;

            RSize active;
            RSize weak_count;
            BlockPtr block;
            RSize index;

            T data;

            ArrayPoolItemTmpl();
            ~ArrayPoolItemTmpl();

            RBool is_active();
            void set_active();
            void release();
            RSize get_weak_count();
            void add_weak_ref();
            void relase_weak_ref();

            static void* aligned_alloc(size_t size);
            static void algined_free(void* p);
            void* operator new(size_t size);
            void* operator new[](size_t size);
            void operator delete(void* p) throw();
            void operator delete[](void* p) throw();
            static void* operator new(size_t size, void* p);
            static void* operator new[](size_t size, void* p);
            void operator delete(void* m, void* p) throw();
            void operator delete[](void* m, void* p) throw();

        };

        template<class T>class ArrayPoolBlockTmpl
        {
            void release();
        public:
            typedef ArrayPoolInfoTmpl<T> Info;
            typedef std::shared_ptr<Info> InfoSP;
            typedef std::weak_ptr<Info> InfoWP;

            typedef ArrayPoolItemTmpl<T> Item;
            typedef Item* ItemPtr;

            InfoSP info;
            InfoWP info_ref;
            ItemPtr items;
            RSize index;
            RSize active_count;

            ArrayPoolBlockTmpl();
            ~ArrayPoolBlockTmpl();

            RSize get_active_count();
            void add_active_count();
            void release_active_count();

            RBool init(InfoSP info, RSize block_width, RSize start_index);

        };

        template<class T>class ArrayPoolInfoTmpl
        {
        public:
            typedef ArrayPoolTmpl<T> ArrayPool;
            typedef ArrayPoolBlockTmpl<T> Block;
            typedef std::shared_ptr<Block> BlockSP;
            typedef std::vector<T> Array;
            typedef std::vector<BlockSP> BlockArray;
            typedef std::shared_ptr<ArrayPoolInfoTmpl> InfoSP;
            typedef std::weak_ptr<ArrayPoolInfoTmpl> InfoWP;
            typedef ArrayPoolRefTmpl<T> Ref;
            typedef ArrayPoolItemTmpl<T> Item;
            typedef Item* ItemPtr;

        private:
            InfoWP self;
            RSize block_width;
            BlockArray blocks;
            RSizeArray deleted_items;
            RSize sz;

        public:

            ArrayPoolInfoTmpl();
            ArrayPoolInfoTmpl(RSize block_width);
            ~ArrayPoolInfoTmpl();

            void clear();

            void set_self(InfoSP self);

            void add_delete_item(RSize index);

            void inc_size();
            void dec_size();
            RSize size();
            RSize block_size();
            Ref select(RSize index);
            Ref create();

            void each(std::function<void(const T&)> f);
            void each_p(std::function<void(ItemPtr)> f);
            void each_ref(std::function<void(Ref&)> f);

            void from_a(const Array& a);
            Array to_a();
        };

        template<class T>class ArrayPoolRefTmpl
        {
        public:
            typedef ArrayPoolItemTmpl<T> Item;
            typedef Item* ItemPtr;

        private:
            ItemPtr p;

        public:

            ArrayPoolRefTmpl();
            ArrayPoolRefTmpl(ItemPtr p);
            ArrayPoolRefTmpl(const ArrayPoolRefTmpl& v);
            template<class Y>ArrayPoolRefTmpl(const ArrayPoolRefTmpl<Y>& v)
            {
                this->p = nullptr;
                set_p(static_cast<ItemPtr>(v.p));
            }
            ~ArrayPoolRefTmpl();

            ArrayPoolRefTmpl& operator=(const ArrayPoolRefTmpl& v);

            void set_p(ItemPtr p);
            ItemPtr get_p() const;
            void release();
            void reset();
            T* get() const;
            T* operator->() const;
            operator bool() const;
        };

        template<class T>class ArrayPoolIteratorTmpl
        {
        public:
            typedef ArrayPoolInfoTmpl<T> Info;
            typedef std::shared_ptr<Info> InfoSP;

        private:
            InfoSP info;
            RSize index;

            //bool operator!=(const ArrayPoolIteratorTmpl& right);
            //bool operator==(const ArrayPoolIteratorTmpl& right);
            //bool operator<(const ArrayPoolIteratorTmpl& right);
            //bool operator>(const ArrayPoolIteratorTmpl& right);
            //bool operator<=(const ArrayPoolIteratorTmpl& right);
            //bool operator>=(const ArrayPoolIteratorTmpl& right);
            //ArrayPoolIteratorTmpl& operator++();
            //ArrayPoolIteratorTmpl& operator--();
        };

        template<class T>class ArrayPoolTmpl
        {
        public:
            typedef ArrayPoolInfoTmpl<T> Info;
            typedef std::shared_ptr<Info> InfoSP;
            typedef std::vector<T> Array;
            typedef ArrayPoolRefTmpl<T> Ref;
            typedef ArrayPoolItemTmpl<T> Item;
            typedef Item* ItemPtr;

        private:
            InfoSP info;

            void operator =(const ArrayPoolTmpl&) {}
            ArrayPoolTmpl(const ArrayPoolTmpl&) {}
            ArrayPoolTmpl(const InfoSP&) {}
        public:

            ArrayPoolTmpl();
            ArrayPoolTmpl(RSize block_width);

            ~ArrayPoolTmpl();

            void clear();

            RSize size();
            RSize block_size();
            Ref select(RSize index);
            Ref create();

            void each(std::function<void(const T&)> f);
            void each_p(std::function<void(ItemPtr)> f);
            void each_ref(std::function<void(Ref&)> f);
            void from_a(const Array& a);
            Array to_a();

        };
    }
}

#endif
