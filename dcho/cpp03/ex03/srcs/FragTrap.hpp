#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_HP 100
#define F_EP 100
#define F_AD 30

class FragTrap: virtual public ClapTrap
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