#include "Zombie.hpp"

Zombie::Zombie(){}
int Zombie::_index = 0;

Zombie::~Zombie()
{
	std::cout << _name << " Zombie Bye~😜!!" << std::endl;
}

void Zombie::setName(std::string input)
{
	std::stringstream ssStr;
	ssStr << ++_index;
	_name = input + "[" + ssStr.str() + "]";
}

void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
