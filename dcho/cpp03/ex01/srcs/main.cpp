#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap s1;
	ScavTrap s2("dcho");
	ScavTrap s3(s2);

	s2.attack("DOK2");
	s2.ScavTrap::takeDamage(20);
	s2.guardGate();
	s2.takeDamage(80);
	s2.ScavTrap::takeDamage(80);
	s2.ScavTrap::takeDamage(80);
	s2.beRepaired(100);
	return (0);
}