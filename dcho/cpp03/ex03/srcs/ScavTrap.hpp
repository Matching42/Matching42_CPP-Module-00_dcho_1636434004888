#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define S_HP 100
# define S_EP 50
# define S_AD 20
# define GM_ON 1
# define GM_OFF 0

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string param);
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator = (const ScavTrap& scavtrap);
		void takeDamage(unsigned int amount);
		void attack(std::string const& target);
		void guardGate();

	private:
		unsigned int guardMode;

};

#endif