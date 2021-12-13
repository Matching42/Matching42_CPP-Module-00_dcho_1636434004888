#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// Correct example.
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << i->getType() << std::endl;
	i->makeSound();

	delete j;
	j = NULL;
	delete i;
	i = NULL;
	return (0);
}
