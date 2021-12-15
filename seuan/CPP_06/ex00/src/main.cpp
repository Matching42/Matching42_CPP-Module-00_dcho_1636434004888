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
        // Initializing
        ScalarConversion sc(av[1]);

        // Print result
        sc.toChar();
        sc.toInt();
        sc.toFloat();
        sc.toDouble();
    }
    else
    {
        std::cout << "invalid number of arguments" << std::endl;
        return 0;
    }
    return 0;
}
