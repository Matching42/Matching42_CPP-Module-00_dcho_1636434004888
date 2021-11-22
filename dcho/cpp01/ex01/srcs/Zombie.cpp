#include "Zombie.hpp"

Zombie::Zombie(){};
int Zombie::_index = 0;

Zombie::~Zombie()
{
	std::cout << _name << " Zombie Bye~😜!!" << std::endl;
}

void Zombie::zombie_init(std::string input)
{
	_name = input + " " + std::to_string(++_index);
}

void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}