#include "uintptr.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t d_ptr = reinterpret_cast<uintptr_t>(ptr);
    return d_ptr;
}

Data* deserialize(uintptr_t raw)
{
    Data *d_ptr = reinterpret_cast<Data *>(raw);
    return d_ptr;
}