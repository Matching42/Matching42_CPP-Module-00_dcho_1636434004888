#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define MAXHP 100

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string param);
		ClapTrap(const ClapTrap& copy);
		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap& operator = (const ClapTrap& claptrap);

	private:
		std::string	name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;

};

#endif