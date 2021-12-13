#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    _Hp = F_HP;
    _Ep = S_EP;
    _Ad = F_AD;
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    _Name = "Default";
    ClapTrap::_Name += "_clap_name";
    _Hp = F_HP;
    _Ep = S_EP;
    _Ad = F_AD;
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap desctructor <" << _Name << "> called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "whoAmI" << std::endl;
    std::cout << "name is: " << _Name << std::endl;
    std::cout << "ClapTrap name is: " << ClapTrap::_Name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}