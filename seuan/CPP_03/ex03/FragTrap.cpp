#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hp = 100;
    _Ep = 100;
    _Ad = 30;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    _Hp = 100;
    _Ep = 100;
    _Ad = 30;
}

FragTrap::~FragTrap(void)
{
    ;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _Name << " request high fives!" << std::endl;
}