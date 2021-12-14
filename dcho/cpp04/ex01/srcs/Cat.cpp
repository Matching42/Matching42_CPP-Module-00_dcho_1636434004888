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

// shallow copy
// Cat& Cat::operator = (const Cat& cat)
// {
// 	if (this == &cat)
// 		return (*this);
// 	type = cat.type;
// 	if (brain)
// 	{
// 		delete brain;
// 		brain = NULL;
// 	}
// 	brain = new Brain();
// 	brain = cat.brain;
// 	return (*this);
// }

// Deep Copy
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
	for (int i = 0; i < MAXIDEA; i++)
		brain->setIdeas(i, cat.getBrain()->getIdeas(i));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat!!!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (brain);
}
