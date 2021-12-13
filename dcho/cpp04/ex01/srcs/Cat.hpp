#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator = (const Cat& cat);
		void makeSound() const;
		void getBrain() const;
		void setBrain(std::string set);
	private:
		Brain *brain;
};

#endif