#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string param);
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator = (const Animal& animal);
		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string type;

};

#endif