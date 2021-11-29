#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("a");
    std::cout << std::endl;
    std::cout << std::endl;
    a.whoAmI();
    std::cout << std::endl;
    
    DiamondTrap b;
    std::cout << std::endl;
    std::cout << std::endl;
    b.whoAmI();
    std::cout << std::endl;
    
    a.ScavTrap::attack("b");
    b.ScavTrap::takeDamage(30);
    a.ScavTrap::attack("b");
    b.ScavTrap::takeDamage(30);
    b.ScavTrap::guardGate();
    a.ScavTrap::attack("b");
    b.ScavTrap::takeDamage(30);
    std::cout << std::endl;
    b.ScavTrap::guardGate();
    b.ScavTrap::guardGate();
    std::cout << std::endl;
    return (0);
}