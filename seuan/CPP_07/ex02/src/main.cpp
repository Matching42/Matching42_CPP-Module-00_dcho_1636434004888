#include "Array.hpp"

int main( void )
{
    // constructor 
    // no parameter
    Array<int> empty;

    std::cout << std::endl;

    // unsigned int n as a parameter
    Array<int> arr(3);
    arr[0] = 1, arr[1] = 2, arr[2] = 3;
    for (int i = 0; i < 3; i++)
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl;

    
    system("leaks a.out");
    return 0;
}