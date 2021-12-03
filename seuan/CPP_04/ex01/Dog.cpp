#include "Dog.hpp"

Dog::Dog() { _type = "Dog", std::cout << getType() << " constructor called." << std::endl; }

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