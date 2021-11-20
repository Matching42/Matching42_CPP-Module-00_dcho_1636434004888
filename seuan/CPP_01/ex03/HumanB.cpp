#include "HumanB.hpp"

HumanB::HumanB( std::string str )
{
    name = str;
}

HumanB::~HumanB(void)
{
    ;
}

void HumanB::setWeapon( Weapon& wp )
{
    weapon = &wp;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}