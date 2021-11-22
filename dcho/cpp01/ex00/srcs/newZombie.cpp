#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *res = new Zombie(name);
	return (res);
}