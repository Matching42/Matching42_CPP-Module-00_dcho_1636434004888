#include "FragTrap.hpp"

int main(void)
{
	FragTrap s1;
	FragTrap s2("dcho");
	FragTrap s3(s2);

	s2.attack("DOK2");
	s2.takeDamage(20);
	s2.takeDamage(80);
	s2.beRepaired(100);
	s2.highFivesGuys();
	return (0);
}