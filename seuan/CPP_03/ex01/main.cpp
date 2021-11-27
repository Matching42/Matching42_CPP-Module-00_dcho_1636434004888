#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("a");
    ScavTrap b("b");

    std::cout << std::endl;
    
    a.attack("b");
    b.takeDamage(a.get_Ad());
    a.attack("b");
    b.takeDamage(a.get_Ad());
    a.attack("b");
    b.takeDamage(a.get_Ad());
    a.attack("b");
    b.takeDamage(a.get_Ad());

    std::cout << std::endl;
    
    b.guardGate();
    b.guardGate();
    
    std::cout << std::endl;
    return 0;
}