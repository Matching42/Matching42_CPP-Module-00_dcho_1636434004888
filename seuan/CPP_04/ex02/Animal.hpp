#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &ani);
        Animal &operator= (const Animal &ani);
        const std::string& getType() const;
        virtual void makeSound() const = 0;

    protected:
        std::string _type;
};

#endif
