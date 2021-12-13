#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // not working if Aniaml is abstract base class 
    // Animal ani;

    // working if Aniaml is abstract base class 
    // Animal *ani;

    const Animal *j = new Dog();
    const Animal *i = new Cat();
    j->makeSound();
    i->makeSound();

    delete i;
    delete j;
    i = NULL;
    j = NULL;
    return 0;
}