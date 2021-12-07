#include "Animal.hpp"

Animal::Animal() { _type = "Animal", std::cout << _type << " constructor called." << std::endl; }

Animal::~Animal() { std::cout << _type << " destructor called." << std::endl; }

Animal::Animal(const Animal &ani)
{ 
    std::cout << _type << " copy constructor called." << std::endl;
    *this = ani; 
}

Animal& Animal::operator = (const Animal &ani)
{
    return (*this);
}

const std::string& Animal::getType() const { return _type; }

// void Animal::makeSound() const { std::cout << _type << " makes sound." << std::endl; }