#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    _Name = name;
    _Hit_points = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
    std::cout << "ClapTrap constructor <" << get_Name() << "> called" << std::endl;
}

ClapTrap::ClapTrap(void)
{
    _Hit_points = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap desctructor <" << get_Name() << "> called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << get_Name() << " attacks " << target <<
    " causing " << get_Ad() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _Hit_points -= amount;
    std::cout << "ClapTrap " << get_Name() << " take " << amount << " damage. "
    << "Now, ClapTrap " << get_Name() << " Hit_points: " << get_Hp() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _Hit_points += amount;;
    std::cout << "ClapTrap " << get_Name() << " repaired " << amount << " Hit_points. "
    << "Now, ClapTrap " << get_Name() << " Hit_points: " << get_Hp() << std::endl;
}

void ClapTrap::set_Name(std::string name)
{
    _Name = name;
}

std::string ClapTrap::get_Name(void)
{
    return (_Name);
}

int ClapTrap::get_Hp(void)
{
    return (_Hit_points);
}

int ClapTrap::get_Ep(void)
{
    return (_Energy_points);
}

int ClapTrap::get_Ad(void)
{
    return (_Attack_damage);
}