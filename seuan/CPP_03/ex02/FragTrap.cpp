#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor <" << get_Name() << "> called" << std::endl;
    set_Hp(100);
    set_Ep(100);
    set_Ad(30);
}

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    set_Hp(100);
    set_Ep(100);
    set_Ad(30);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap descructor <" << get_Name() << "> called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << get_Name() << " request high fives!" << std::endl;
}