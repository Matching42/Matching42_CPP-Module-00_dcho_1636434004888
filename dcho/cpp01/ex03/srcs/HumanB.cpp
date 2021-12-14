#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& wepon)
{
	_weapon = &wepon;
}
void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
