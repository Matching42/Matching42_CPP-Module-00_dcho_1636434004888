#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
}

FragTrap::~FragTrap(void)
{
    ;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _Name << " request high fives!" << std::endl;
}