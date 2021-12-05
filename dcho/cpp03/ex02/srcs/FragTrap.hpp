#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string param);
		~FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap& operator= (const FragTrap& fragtrap);
		void highFivesGuys(void);

	private:


};


#endif