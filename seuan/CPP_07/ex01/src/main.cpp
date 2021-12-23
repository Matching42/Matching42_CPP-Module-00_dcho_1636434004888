#include "iter.hpp"

int main( void )
{
    // std::array<int, 5> a = {1, 2, 3, 4, 5};
    int arr[5] = {1, 2, 3, 4, 5};

    iter(arr, 5, add_five);
    for (int i = 0; i < 5; i++)
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl; 
    return 0;
}