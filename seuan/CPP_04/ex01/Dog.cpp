#include "Dog.hpp"

Dog::Dog() { _type = "Dog", _brain = new Brain, std::cout << getType() << " constructor called." << std::endl; }

Dog::~Dog() { delete _brain, _brain = NULL, std::cout << getType() << " destructor called." << std::endl; }

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