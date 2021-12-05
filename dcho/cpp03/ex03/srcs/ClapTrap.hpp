#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define MAXHP 100
# define C_HP 10
# define C_EP 10
# define C_AD 0

# define C_RED  "\033[31m"
# define GRN "\e[0;32m"

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string param);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator = (const ClapTrap& claptrap);
		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string	name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;

};

#endif