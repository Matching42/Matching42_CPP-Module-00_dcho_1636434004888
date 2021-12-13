#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator = (const Dog& dog);
		void makeSound() const;
		void getBrain() const;
		void setBrain(std::string set);
	private:
		Brain *brain;
};

#endif