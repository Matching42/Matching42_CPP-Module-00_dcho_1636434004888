#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(10), _Ep(10), _Ad(0)
{
    std::cout << "ClapTrap constructor <" << _Name << "> called" << std::endl;
}

ClapTrap::ClapTrap(void) : _Name("Default"), _Hp(10), _Ep(10), _Ad(0)
{
    std::cout << "ClapTrap constructor <" << _Name << "> called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap desctructor <" << _Name << "> called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _Name << " attacks " << target <<
    " causing " << _Ad << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _Hp -= amount;
    std::cout << "ClapTrap " << _Name << " take " << amount << " damage. "
    << "Now, ClapTrap " << _Name << " Hp: " << _Hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _Hp += amount;;
    std::cout << "ClapTrap " << _Name << " repaired " << amount << " Hp. "
    << "Now, ClapTrap " << _Name << " Hp: " << _Hp << std::endl;
}

// void ClapTrap::set_Name(std::string name)
// {
//     _Name = name;
// }

// std::string ClapTrap::get_Name(void)
// {
//     return (_Name);
// }

// int ClapTrap::get_Hp(void)
// {
//     return (_Hp);
// }

// int ClapTrap::get_Ep(void)
// {
//     return (_Ep);
// }

// int ClapTrap::get_Ad(void)
// {
//     return (_Ad);
// }

ClapTrap& ClapTrap::operator = (const ClapTrap& cp)
{
    _Name = cp._Name;
    _Hp = cp._Hp;
    _Ep = cp._Ep;
    _Ad = cp._Ad;
    return (*this);
}