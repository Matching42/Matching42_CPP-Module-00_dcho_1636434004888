#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "<Cat> Class Contructor!🐱" << std::endl;
}

Cat::~Cat()
{
	std::cout << "<Cat> Class Destructor~🐱" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat& Cat::operator = (const Cat& cat)
{
	if (this == &cat)
		return (*this);
	type = cat.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat!!!" << std::endl;
}