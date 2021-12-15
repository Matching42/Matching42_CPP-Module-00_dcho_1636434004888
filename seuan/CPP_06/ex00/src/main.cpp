#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        // 1. Char pointer to String
        ScalarConversion sc(av[1]);

        // 2. Check to that literal must belong to one of the following a scalar types: char, int, float or double.  

        // 3. Type Casting
        
        // 4. Print result
    }
    else
    {
        std::cout << "invalid number of arguments" << std::endl;
        return 0;
    }
    return 0;
}
