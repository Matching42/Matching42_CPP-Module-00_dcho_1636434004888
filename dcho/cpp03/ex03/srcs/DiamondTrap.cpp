#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	name = "noName";
	ClapTrap::name += "_clap_name";
	hitPoint = F_HP;
	energyPoint = S_EP;
	attackDamage = F_AD;
	std::cout << "DiamondTrap " << name << " Constructor~💍" << std::endl;
	std::cout << "DiamondTrap State -> { hitPoint: " << hitPoint << " energyPoint: " << energyPoint << " attackDamage: " << attackDamage << " } " << std::endl;

}

DiamondTrap::DiamondTrap(std::string param)
	: ClapTrap(param + "_clap_name")
{
	name = param;
	hitPoint = F_HP;
	energyPoint = S_EP;
	attackDamage = F_AD;
	std::cout << "DiamondTrap " << name << "'s Constructor~💍" << std::endl;
	std::cout << "DiamondTrap State -> { hitPoint: " << hitPoint << " energyPoint: " << energyPoint << " attackDamage: " << attackDamage << " } " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << "'s Destructor~💍" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
	: ClapTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap " << name << "'s Copy Constructor~🙌" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& diamond)
{
	if (this == &diamond)
		return (*this);
	ClapTrap::operator=(diamond);
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "MyTrap Name is " << name << std::endl;
	std::cout << "ClapTrap Name is " << ClapTrap::name << std::endl;
}