#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("a");
    ScavTrap b("b");

    std::cout << std::endl;
    
    a.attack("b");
    b.takeDamage(20);
    a.attack("b");
    b.takeDamage(20);
    a.attack("b");
    b.takeDamage(20);
    b.guardGate();
    a.attack("b");
    b.takeDamage(20);

    std::cout << std::endl;
    b.guardGate();
    b.guardGate();
    b.beRepaired(50);
    
    std::cout << std::endl;
    return 0;
}