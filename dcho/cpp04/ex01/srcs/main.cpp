#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	// Correct example.
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	// system("leaks a.out");
	return (0);
}