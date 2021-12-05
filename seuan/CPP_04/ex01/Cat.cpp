#include "Cat.hpp"

Cat::Cat() { _type = "Cat", _brain = new Brain, std::cout << getType() << " constructor called." << std::endl; }

Cat::~Cat()
{ 
    delete _brain;
    _brain = NULL;
    std::cout << getType() << " destructor called." << std::endl; 
}

Cat::Cat(const Cat &cat)
{ 
    std::cout << " copy constructor called." << std::endl;
    *this = cat; 
}

Cat& Cat::operator = (const Cat &cat)
{
    return (*this);
}