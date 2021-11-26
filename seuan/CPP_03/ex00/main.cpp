#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");

    a.attack("b");
    b.takeDamage(a.get_Ad());
    b.beRepaired(10);
    return 0;
}