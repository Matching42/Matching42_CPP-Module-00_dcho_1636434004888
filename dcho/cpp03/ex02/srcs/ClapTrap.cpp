#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	name("noName"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " Constructor 👋!!" << std::endl;
}

ClapTrap::ClapTrap(std::string param):
	name(param), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << "'s Constructor 👋!!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << "'s Destructor 🙇‍♂️!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << "ClapTrap " << name << "'s Copy Constructor 👋️!!" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& claptrap)
{
	if (this == &claptrap)
		return (*this);
	name = claptrap.name;
	hitPoint = claptrap.hitPoint;
	energyPoint = claptrap.energyPoint;
	attackDamage = claptrap.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < hitPoint)
		hitPoint -= amount;
	else
		hitPoint = 0;
	std::cout << "ClapTrap " << name << " takeDamage " << amount << " points!, Current HP: " << hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint + amount > MAXHP && amount > hitPoint)
		hitPoint = MAXHP;
	else
		hitPoint += amount;
	std::cout << "ClapTrap " << name << " beRepaired " << amount << " points!, Current HP: " << hitPoint << std::endl;
}