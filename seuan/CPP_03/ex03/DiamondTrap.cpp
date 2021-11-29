#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    _Hp = FragTrap::_Hp;
    _Ep = ScavTrap::_Ep;
    _Ad = FragTrap::_Ad;
    std::cout << _Name << " | " << ClapTrap::_Name << " | " << 
    _Hp << " | " << _Ep << " | " << _Ad << std::endl;
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    _Name = "Default";
    ClapTrap::_Name += "_clap_name";
    _Hp = FragTrap::_Hp;
    _Ep = ScavTrap::_Ep;
    _Ad = FragTrap::_Ad;
    std::cout << _Name << " | " << ClapTrap::_Name << " | " << 
    _Hp << " | " << _Ep << " | " << _Ad << std::endl;
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap desctructor <" << _Name << "> called" << std::endl;
    ;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "whoAmI" << std::endl;
    std::cout << "name is: " << _Name << std::endl;
    std::cout << "clapTrap name is: " << ClapTrap::_Name << std::endl;
}
