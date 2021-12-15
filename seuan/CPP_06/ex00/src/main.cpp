/*
    [TEST CASE]
    ./convert 0
    char: Non displayable
    int: 0
    float: 0.0f
    double: 0.0

    ./convert nan
    char: impossible
    int: impossible
    float: nanf
    double: nan

    ./convert 42.0f
    char: '*'
    int: 42
    float: 42.0f
    double: 42.0
*/

#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        // 1. Char pointer to String
        ScalarConversion sc(av[1]);

        // 2. Check to that literal must belong to one of the following a scalar types: char, int, float or double.  

        // 3. Type Casting
        sc.toChar();
        // 4. Print result
    }
    else
    {
        std::cout << "invalid number of arguments" << std::endl;
        return 0;
    }
    return 0;
}
