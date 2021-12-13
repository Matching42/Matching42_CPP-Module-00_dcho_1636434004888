#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "<Dog> Class Contructor!🐶" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "<Dog> Class Destructor~🐶" << std::endl;
	delete brain;
	brain = NULL;
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
	if (brain)
	{
		delete brain;
		brain = NULL;
	}
	brain = new Brain();
	brain = dog.brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog!!!" << std::endl;
}

const Brain *Dog::getBrain() const
{
	return (brain);
}
