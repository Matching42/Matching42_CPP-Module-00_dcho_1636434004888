#include "Karen.hpp"

int main(int ac, char **av)
{

    if (ac == 2)
    {
        Karen girl = Karen();
        girl.complain(av[1]);
    }
    else
        return (0);
    return (0);
}