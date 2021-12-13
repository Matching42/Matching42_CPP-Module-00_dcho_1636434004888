#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string param);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator = (const WrongAnimal& wronganimal);
		std::string getType() const;
		void makeSound() const;

	protected:
		std::string type;

};

#endif