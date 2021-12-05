#include "Dog.hpp"

Dog::Dog() : Animal() { _type = "Dog", std::cout << getType() << " constructor called." << std::endl; }

Dog::~Dog() { std::cout << getType() << " destructor called." << std::endl; }

Dog::Dog(const Dog &dog)
{ 
    std::cout << " copy constructor called." << std::endl;
    *this = dog;
}

Dog& Dog::operator = (const Dog &dog)
{
    return (*this);
}

const std::string& Dog::getType() const
{
    return (Animal::getType());
}

void Dog::makeSound() const
{
    Animal::makeSound();
}