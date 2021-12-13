#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// Correct example.
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete(meta);
	meta = NULL;
	delete(i);
	i = NULL;
	delete(j);
	j = NULL;

	std::cout << "-----------------------------------------------" << std::endl;
	// Wrong example.
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	meta2->makeSound();

	delete(meta2);
	meta2 = NULL;
	delete(wrongCat);
	wrongCat = NULL;


	system("leaks a.out");
	return (0);
}