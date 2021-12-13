#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    
    std::cout << std::endl;
    
    const Animal* j = new Dog();
    
    std::cout << std::endl;
    
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    std::cout << std::endl;
    
    i->makeSound();
    j->makeSound();

    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete i;
    delete j;
    meta = NULL;
    i = NULL;
    j = NULL;

    system("leaks Animal");
    return 0;
}

