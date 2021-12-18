#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConversion sc(av[1]);

        try
        {
            sc.toChar();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            sc.toInt();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            sc.toFloat();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            sc.toDouble();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    else
    {
        std::cout << "invalid number of arguments" << std::endl;
        return 1;
    }
    return 0;
}
