#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor <" << get_Name() << "> called" << std::endl;
    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor <" << get_Name() << "> called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}