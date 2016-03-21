#ifndef ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_TMPL_IMPL_H_

#include "array_pool_tmpl.h"
#include "cor_algorithm/sources/utilities_tmpl.h"
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace data_structure
    {

        template<class T> ArrayPoolItemTmpl<T>::ArrayPoolItemTmpl()
        {
            active = rfalse;
            weak_count = 0;
            block = nullptr;
            index = 0;

        }

        template<class T> ArrayPoolItemTmpl<T>::~ArrayPoolItemTmpl()
        {

        }

        template<class T> RBool ArrayPoolItemTmpl<T>::is_active()
        {
            return active;
        }

        template<class T> void ArrayPoolItemTmpl<T>::add_delete_item()
        {
            if(weak_count <= 0 && !active)
            {
                block->info->add_delete_item(index);
            }
        }

        template<class T> void ArrayPoolItemTmpl<T>::set_active()
        {
            active = rtrue;
            block->info->inc_size();
            block->add_active_count();
        }

        template<class T> void ArrayPoolItemTmpl<T>::release()
        {
            active = rfalse;
            this->data = T();

            block->release_active_count();
            block->info->dec_size();
            add_delete_item();
        }

        template<class T> RSize ArrayPoolItemTmpl<T>::get_weak_count()
        {
            return weak_count;
        }

        template<class T> void ArrayPoolItemTmpl<T>::add_weak_ref()
        {
            weak_count++;
            block->add_active_count();
        }

        template<class T> void ArrayPoolItemTmpl<T>::relase_weak_ref()
        {
            if(weak_count <= 0)
            {
                throw std::runtime_error("ArrayPoolItemTmpl. weak count already 0. but try decrement.");
            }
            weak_count--;
            add_delete_item();
            block->release_active_count();

        }

        template<class T> void* ArrayPoolItemTmpl<T>::aligned_alloc(size_t size)
        {
            void* p = new RByte[size + align_size];
            void* aligned = reinterpret_cast<void*>((reinterpret_cast<size_t>(p) + align_size) / align_size * align_size);
            *(reinterpret_cast<void**>(aligned) - 1) = p;
            return aligned;
        }

        template<class T> void ArrayPoolItemTmpl<T>::algined_free(void* p)
        {
            if (!p) 
            {
                return;
            }
            RByte* unaligned = reinterpret_cast<RByte*>(*(reinterpret_cast<void**>(p) - 1));
            delete[] unaligned;
        }

        template<class T> void* ArrayPoolItemTmpl<T>::operator new(size_t size)
        {
            return aligned_alloc(size);
        }

        template<class T> void* ArrayPoolItemTmpl<T>::operator new[](size_t size)
        {
            return aligned_alloc(size);
        }

        template<class T> void ArrayPoolItemTmpl<T>::operator delete(void* p) throw()
        {
            ArrayPoolItemTmpl<T>::algined_free(p);
        }

        template<class T> void ArrayPoolItemTmpl<T>::operator delete[](void* p) throw()
        {
            ArrayPoolItemTmpl<T>::algined_free(p);
        }

        template<class T> void* ArrayPoolItemTmpl<T>::operator new(size_t size, void* p)
        {
            return ::operator new(size, p);
        }
        template<class T> void* ArrayPoolItemTmpl<T>::operator new[](size_t size, void* p)
        {
            return ::operator new[](size, p);
        }
        template<class T> void ArrayPoolItemTmpl<T>::operator delete(void* m, void* p) throw()
        {
            ::operator delete(m, p);
        }
        template<class T> void ArrayPoolItemTmpl<T>::operator delete[](void* m, void* p) throw()
        {
            ::operator delete[](m, p);
        }



        template<class T> ArrayPoolBlockTmpl<T>::ArrayPoolBlockTmpl()
        {
            info = nullptr;
            items = nullptr;
            index = 0;
            active_count = 0;
        }

        template<class T> ArrayPoolBlockTmpl<T>::~ArrayPoolBlockTmpl()
        {
            release();
        }

        template<class T> void ArrayPoolBlockTmpl<T>::release()
        {
            if(items)
            {
                delete[] items;
                items = NULL;
            }
        }

        template<class T> RSize ArrayPoolBlockTmpl<T>::get_active_count()
        {
            return active_count;
        }

        template<class T> void ArrayPoolBlockTmpl<T>::add_active_count()
        {
            if(active_count <= 0)
            {
                info = info_ref.lock();
            }

            active_count++;
        }

        template<class T> void ArrayPoolBlockTmpl<T>::release_active_count()
        {
            if(active_count <= 0)
            {
                throw std::runtime_error("ArrayPoolBlockTmpl. weak count already 0. but try decrement.");
            }
            active_count--;
            if(active_count <= 0)
            {
                info.reset();
            }
        }

        template<class T> RBool ArrayPoolBlockTmpl<T>::init(InfoSP info, RSize block_width, RSize start_index)
        {
            release();

            this->info_ref = info;

            items = new Item[block_width];

            RSize i, isz;

            isz = block_width;
            for(i = isz; i > 0; i--)
            {
                auto ti = i - 1;
                auto index = start_index + ti;
                auto& item = items[ti];
                item.index = index;
                item.active = rfalse;
                item.block = this;
                item.weak_count = 0;
                info->add_delete_item(index);
            }

            return rtrue;
        }



        template<class T> ArrayPoolInfoTmpl<T>::ArrayPoolInfoTmpl()
        {
            block_width = 64;
            sz = 0;
        }

        template<class T> ArrayPoolInfoTmpl<T>::ArrayPoolInfoTmpl(RSize block_width)
        {
            this->block_width = block_width;
            this->sz = 0;
        }

        template<class T> ArrayPoolInfoTmpl<T>::~ArrayPoolInfoTmpl()
        {
            clear();
        }

        template<class T>void ArrayPoolInfoTmpl<T>::clear()
        {
            each_ref([&](Ref& r){
                r.release();
            });
        }

        template<class T> void ArrayPoolInfoTmpl<T>::set_self(typename ArrayPoolInfoTmpl<T>::InfoSP self)
        {
            this->self = self;
        }

        template<class T> void ArrayPoolInfoTmpl<T>::add_delete_item(RSize index)
        {
            this->deleted_items.push_back(index);
        }

        template<class T> void ArrayPoolInfoTmpl<T>::inc_size()
        {
            sz++;
        }

        template<class T> void ArrayPoolInfoTmpl<T>::dec_size()
        {
            sz--;
        }

        template<class T> RSize ArrayPoolInfoTmpl<T>::size()
        {
            return sz;
        }

        template<class T> RSize ArrayPoolInfoTmpl<T>::block_size()
        {
            return blocks.size();
        }

        template<class T> typename ArrayPoolInfoTmpl<T>::Ref ArrayPoolInfoTmpl<T>::select(RSize index)
        {
            auto ia = index / block_width;
            auto ib = index % block_width;

            return ArrayPoolInfoTmpl<T>::Ref(&blocks[ia]->items[ib]);
        }


        template<class T> typename ArrayPoolInfoTmpl<T>::Ref ArrayPoolInfoTmpl<T>::create()
        {
            if(deleted_items.size() > 0)
            {
                auto index = deleted_items.back();
                deleted_items.pop_back();
                auto r = select(index);
                auto p = r.get_p();
                p->set_active();
                return r;
            }
            else
            {
                auto block = std::make_shared<Block>();
                block->init(self.lock(), block_width, blocks.size() * block_width);
                blocks.push_back(block);
                return create();
            }
        }

        template<class T> void ArrayPoolInfoTmpl<T>::each(std::function<void(const T&)> f)
        {
            RSize i, isz;
            isz = block_width;
            for(auto b : blocks)
            {
                auto items = b->items;
                for(i = 0; i < isz; i++)
                {
                    auto& item = items[i];
                    if(item.active)
                    {
                        f(item.data);
                    }
                }
            }
        }

        template<class T> void ArrayPoolInfoTmpl<T>::each_p(std::function<void(ItemPtr)> f)
        {
            RSize i, isz;
            isz = block_width;
            for(auto b : blocks)
            {
                auto items = b->items;
                for(i = 0; i < isz; i++)
                {
                    auto& item = items[i];
                    if(item.active)
                    {
                        f(&item);
                    }
                }
            }
        }

        template<class T> void ArrayPoolInfoTmpl<T>::each_ref(std::function<void(Ref&)> f)
        {
            RSize i, isz;
            isz = block_width;
            for(auto b : blocks)
            {
                auto items = b->items;
                for(i = 0; i < isz; i++)
                {
                    auto& item = items[i];
                    if(item.active)
                    {
                        Ref r = Ref(&item);
                        f(r);
                    }
                }
            }
        }

        template<class T> void ArrayPoolInfoTmpl<T>::from_a(const typename ArrayPoolInfoTmpl<T>::Array& a)
        {
            for(auto v : a)
            {
                auto ref = create();
                *(ref->get()) = v;
            }
        }

        template<class T> typename ArrayPoolInfoTmpl<T>::Array ArrayPoolInfoTmpl<T>::to_a()
        {
            typename ArrayPoolInfoTmpl<T>::Array a;
            each([&](const T& v){
                a.push_back(v);
            });
            return a;
        }



        template<class T> ArrayPoolRefTmpl<T>::ArrayPoolRefTmpl()
        {
            this->p = nullptr;
        }

        template<class T> ArrayPoolRefTmpl<T>::ArrayPoolRefTmpl(typename ArrayPoolRefTmpl<T>::ItemPtr p)
        {
            this->p = nullptr;
            set_p(p);
        }

        template<class T> ArrayPoolRefTmpl<T>::ArrayPoolRefTmpl(const ArrayPoolRefTmpl& v)
        {
            this->p = nullptr;
            set_p(v.p);
        }

        template<class T> ArrayPoolRefTmpl<T>::~ArrayPoolRefTmpl()
        {
            reset();
        }

        template<class T>  ArrayPoolRefTmpl<T>&  ArrayPoolRefTmpl<T>::operator=(const ArrayPoolRefTmpl<T>& v)
        {
            set_p(v.p);
            return *this;
        }

        template<class T> void ArrayPoolRefTmpl<T>::set_p(typename ArrayPoolRefTmpl<T>::ItemPtr p)
        {
            reset();
            this->p = p;
            if(p)
            {
                p->add_weak_ref();
            }
        }

        template<class T> typename ArrayPoolRefTmpl<T>::ItemPtr ArrayPoolRefTmpl<T>::get_p() const
        {
            if(p)
            {
                return p;
            }
            return nullptr;
        }

        template<class T> void ArrayPoolRefTmpl<T>::release()
        {
            if(p)
            {
                if(p->active)
                {
                    p->release();
                }
                p->relase_weak_ref();
                p = nullptr;
            }
        }

        template<class T> void ArrayPoolRefTmpl<T>::reset()
        {
            if(p)
            {
                p->relase_weak_ref();
                p = nullptr;
            }
        }

        template<class T> T* ArrayPoolRefTmpl<T>::get() const
        {
            if(p && p->active)
            {
                return &p->data;
            }
            return nullptr;
        }

        template<class T> T* ArrayPoolRefTmpl<T>::operator->() const
        {
            T* tp = get();
            if(!tp)
            {
                throw std::runtime_error("ArrayPoolRefTmpl. null pointer exception.");
            }
            return tp;
        }

        template<class T> ArrayPoolRefTmpl<T>::operator bool() const
        {
            return get();
        }




        template<class T> ArrayPoolTmpl<T>::ArrayPoolTmpl()
        {
            info = std::make_shared<typename ArrayPoolTmpl<T>::Info>();
            info->set_self(info);
        }

        template<class T> ArrayPoolTmpl<T>::ArrayPoolTmpl(RSize block_width)
        {
            info = std::make_shared<typename ArrayPoolTmpl<T>::Info>(block_width);
            info->set_self(info);
        }

        template<class T> ArrayPoolTmpl<T>::~ArrayPoolTmpl()
        {
            info->clear();
        }

        template<class T> void ArrayPoolTmpl<T>::clear()
        {
            info->clear();
        }

        template<class T> RSize ArrayPoolTmpl<T>::size()
        {
            return info->size();
        }

        template<class T>RSize ArrayPoolTmpl<T>::block_size()
        {
            return info->block_size();
        }

        template<class T> typename ArrayPoolTmpl<T>::Ref ArrayPoolTmpl<T>::select(RSize index)
        {
            return info->select(index);
        }

        template<class T> typename ArrayPoolTmpl<T>::Ref ArrayPoolTmpl<T>::create()
        {
            return info->create();
        }

        template<class T> void ArrayPoolTmpl<T>::each(std::function<void(const T&)> f)
        {
            info->each(f);
        }

        template<class T> void ArrayPoolTmpl<T>::each_p(std::function<void(ItemPtr)> f)
        {
            info->each_p(f);
        }

        template<class T> void ArrayPoolTmpl<T>::each_ref(std::function<void(Ref&)> f)
        {
            info->each_ref(f);
        }

        template<class T> void ArrayPoolTmpl<T>::from_a(const typename ArrayPoolTmpl<T>::Array& a)
        {
            info->from_a(a);
        }

        template<class T> typename ArrayPoolTmpl<T>::Array ArrayPoolTmpl<T>::to_a()
        {
            return info->to_a();
        }







    }
}

#endif
