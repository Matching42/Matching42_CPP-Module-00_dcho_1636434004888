#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "<WrongAnimal> Class Contructor!☀️" << std::endl;
}

WrongAnimal::WrongAnimal(std::string param)
	: type(param)
{
	std::cout << "<WrongAnimal> Class Contructor!☀️" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal> Class Destructor~🌔" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& wronganimal)
{
	if (this == &wronganimal)
		return (*this);
	type = wronganimal.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal!!!" << std::endl;
}