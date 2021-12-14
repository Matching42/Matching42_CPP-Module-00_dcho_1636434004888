#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "<Dog> Class Contructor!🐶" << std::endl;
}

Dog::~Dog()
{
	std::cout << "<Dog> Class Destructor~🐶" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog& Dog::operator = (const Dog& dog)
{
	if (this == &dog)
		return (*this);
	type = dog.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog!!!" << std::endl;
}