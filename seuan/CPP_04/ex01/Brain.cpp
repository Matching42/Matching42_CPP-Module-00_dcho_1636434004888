#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain constructor called." << std::endl; }

Brain::~Brain() { std::cout << "Brain destructor called." << std::endl; }

Brain::Brain(const Brain &brain)
{ 
    std::cout << "Brain copy constructor called." << std::endl;
    *this = brain; 
}

Brain& Brain::operator = (const Brain &brain)
{
    return (*this);
}