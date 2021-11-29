#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));


    std::cout << a << std::endl; // finished
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;


    
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl; // finished
    std::cout << Fixed::max(a, b) << std::endl; // finished

    // std::cout << (a > b) << std::endl;
    // std::cout << (a < b) << std::endl;
    // std::cout << (a <= b) << std::endl;
    // std::cout << (a >= b) << std::endl;
    // std::cout << (a == b) << std::endl;
    // std::cout << (a != b) << std::endl;

    return 0;
}
