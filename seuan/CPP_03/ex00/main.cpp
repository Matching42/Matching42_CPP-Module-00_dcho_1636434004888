#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");

    std::cout << std::endl;
    
    a.attack("b");
    b.takeDamage(a.get_Ad());
    b.beRepaired(20);

    std::cout << std::endl;
    return 0;
}