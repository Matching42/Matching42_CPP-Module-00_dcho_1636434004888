#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string param);
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator = (const ScavTrap& scavtrap);
		void takeDamage(unsigned int amount);
		void guardGate();

	private:
		unsigned int guardMode;

};

#endif