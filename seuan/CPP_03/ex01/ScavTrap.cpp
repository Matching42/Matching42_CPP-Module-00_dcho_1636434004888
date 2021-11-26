#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor <" << get_Name() << "> called" << std::endl;
    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
    _guard_mode = 0;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
    _guard_mode = 0;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor <" << get_Name() << "> called" << std::endl;
}

void ScavTrap::guardGate()
{
    if (get_Ep() >= 25)
    {
        _guard_mode = 1;
        set_Ep((get_Ep() - 25));
        std::cout << "ScavTrap " << get_Name() << " have enterred in Gate keeper mode." << std::endl;
    }
    else
        std::cout << "ScavTrap " << get_Name() << " have not enough Energy." << std::endl;
}