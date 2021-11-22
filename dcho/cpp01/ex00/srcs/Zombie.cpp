#include "Zombie.hpp"

Zombie::Zombie(std::string input): _name(input) {}

Zombie::~Zombie()
{
	std::cout << _name << " Zombie Bye~😜!!" << std::endl;
}

void Zombie::announce(void)
{

	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
