#include "uintptr.hpp"

int main()
{
    Data *data = new Data();
    data->_Val = 42;

    std::cout << "data: " << data << std::endl;
    std::cout << "data_value: " << data->_Val << std::endl;
    std::cout << std::endl;

    uintptr_t u_ptr = serialize(data);
    std::cout << "u_ptr: " << u_ptr << std::endl;
    std::cout << std::endl;
    
    Data *d_ptr = deserialize(u_ptr);
    std::cout << "d_ptr: " << d_ptr << std::endl;
    std::cout << "d_ptr_Val: " << d_ptr->_Val << std::endl;
    std::cout << std::endl;
    system("leaks a.out");
}