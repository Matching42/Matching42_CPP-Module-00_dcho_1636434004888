#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog (const Dog &Dog);
        Dog &operator= (const Dog &Dog);
        const std::string& getType() const;
        void makeSound() const;
};

#endif