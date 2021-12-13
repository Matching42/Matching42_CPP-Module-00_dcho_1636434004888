#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "<Cat> Class Contructor!🐱" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "<Cat> Class Destructor~🐱" << std::endl;
	delete brain;
	brain = NULL;
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
	if (brain)
	{
		delete brain;
		brain = NULL;
	}
	brain = new Brain();
	brain = cat.brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat!!!" << std::endl;
}

void Cat::getBrain() const
{
	std::cout << brain->ideas << std::endl;
}

void Cat::setBrain(std::string set)
{
	if (set.length() < 100)
	{
		for (size_t i = 0; i < set.length(); i++)
			brain->ideas[i] = set[i];
	}
}