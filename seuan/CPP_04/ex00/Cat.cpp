#include "Cat.hpp"

Cat::Cat() : Animal() { _type = "Cat", std::cout << getType() << " constructor called." << std::endl; }

Cat::~Cat() { std::cout << getType() << " destructor called." << std::endl; }

Cat::Cat(const Cat &cat)
{
    std::cout << " copy constructor called." << std::endl;
    *this = cat; 
}

Cat& Cat::operator = (const Cat &cat)
{
    return (*this);
}