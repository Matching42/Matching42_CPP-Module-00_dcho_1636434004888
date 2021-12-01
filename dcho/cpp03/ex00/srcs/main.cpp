#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap b;
	ClapTrap c("dcho");
	ClapTrap a(c);

	c.takeDamage(20);
	c.attack("seshin");
	c.beRepaired(20);
}