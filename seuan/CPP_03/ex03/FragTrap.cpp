#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hp = 100;
    _Ep = 100;
    _Ad = 30;
    // std::cout << "FragTrap constructor <" << _Name << "> called" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    _Hp = 100;
    _Ep = 100;
    _Ad = 30;
    // std::cout << "FragTrap constructor <" << _Name << "> called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    // std::cout << "FragTrap descructor <" << _Name << "> called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _Name << " request high fives!" << std::endl;
}