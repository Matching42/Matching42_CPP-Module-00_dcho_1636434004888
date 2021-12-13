#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "<Animal> Class Contructor!☀️" << std::endl;
}

Animal::Animal(std::string param)
	: type(param)
{
	std::cout << "<Animal> Class Contructor!☀️" << std::endl;
}

Animal::~Animal()
{
	std::cout << "<Animal> Class Destructor~🌔" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal& Animal::operator = (const Animal& animal)
{
	if (this == &animal)
		return (*this);
	type = animal.type;
	return (*this);
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal!!!" << std::endl;
}