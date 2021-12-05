#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string param);
		~DiamondTrap();
		DiamondTrap(DiamondTrap& copy);
		DiamondTrap& operator = (const DiamondTrap& diamond);
		void whoAmI();

	private:
		std::string name;
};

#endif