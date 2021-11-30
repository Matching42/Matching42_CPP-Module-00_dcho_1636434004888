#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
}

ScavTrap::~ScavTrap(void)
{
    ;
}

void ScavTrap::guardGate()
{
    if (_Ep >= 25)
    {
        _guard_mode = 1;
        _Ep -= 25;
        std::cout << "ScavTrap " << _Name << " have enterred in Gate keeper mode." << std::endl;
    }
    else
        std::cout << "ScavTrap " << _Name << " have not enough Energy." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (_guard_mode == 1)
        _guard_mode = 0;
    std::cout << "ScavTrap " << _Name << " attacks " << target <<
    " causing " << _Ad << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_guard_mode == 1)
    {
        std::cout << "ScavTrap " << _Name << " defended the attack." << std::endl;
        _guard_mode = 0;
    }
    else
    {
        _Hp -= amount;
        std::cout << "ScavTrap " << _Name << " take " << amount << " damage. "
        << "Now, ScavTrap " << _Name << " Hp: " << _Hp << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    _Hp += amount;
    std::cout << "ScavTrap " << _Name << " repaired " << amount << " Hp. "
    << "Now, ScavTrap " << _Name << " Hp: " << _Hp << std::endl;
}