#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        Brain &operator= (const Brain &brain);
};

#endif