#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << name << " Constructor~🙌" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	guardMode = 0;
}

ScavTrap::ScavTrap(std::string param): ClapTrap(param)
{
	std::cout << "ScavTrap " << name << "'s Constructor~🙌" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	guardMode = 0;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << "'s Destructor~🙇" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap " << name << "'s Copy Constructor~🙌" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& scavtrap)
{
	if (this == &scavtrap)
		return (*this);
	ClapTrap::operator=(scavtrap);
	return (*this);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (energyPoint >= 25 && guardMode)
	{
		energyPoint -= 25;
		if (energyPoint < 25)
		{
			std::cout << "ScavTrap " << name << " GuardMode OFF! " << ", Current EP: " << energyPoint << std::endl;
			guardMode = 0;
			energyPoint = 0;
			return ;
		}
		std::cout << "ScavTrap " << name << " GuardMode EXECUTE! " << ", Current EP: " << energyPoint << std::endl;
	}
	else
	{
		hitPoint = amount < hitPoint ? hitPoint - amount : 0;
		std::cout << "ScavTrap " << name << " takeDamage " << amount << " points!, Current HP: " << hitPoint << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (!guardMode && energyPoint >= 25)
	{
		std::cout << "ScavTrap " << name << " GuardMode ON! " << ", Current EP: " << energyPoint << std::endl;
		guardMode = 1;
	}
	else
	{
		std::cout << "ScavTrap " << name << "'ve not enough energyPoint!, Current EP: " << energyPoint << std::endl;
		guardMode = 0;
	}
}
