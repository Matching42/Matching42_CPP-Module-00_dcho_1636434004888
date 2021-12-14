#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "<FragTrap> " << name << " Constructor~🙌" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string param)
	: ClapTrap(param)
{
	std::cout << "<FragTrap> " << name << " Constructor~🙌" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "<FragTrap> " << name << "'s Destructor~🙇" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "<FragTrap> " << name << "'s Copy Constructor~🙌" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& fragtrap)
{
	if (this == &fragtrap)
		return (*this);
	ClapTrap::operator=(fragtrap);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << name << " is request highFives to Guys 🖐" << std::endl;
}



