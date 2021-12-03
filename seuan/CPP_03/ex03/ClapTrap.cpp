#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(C_HP), _Ep(C_EP), _Ad(C_AD)
{
    std::cout << "ClapTrap constructor <" << _Name << "> called" << std::endl;
}

ClapTrap::ClapTrap(void) : _Name("Default"), _Hp(C_HP), _Ep(C_EP), _Ad(C_AD)
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

ClapTrap& ClapTrap::operator = (const ClapTrap& cp)
{
    _Name = cp._Name;
    _Hp = cp._Hp;
    _Ep = cp._Ep;
    _Ad = cp._Ad;
    return (*this);
}