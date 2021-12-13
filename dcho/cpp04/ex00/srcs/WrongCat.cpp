#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "<WrongCat> Class Contructor!🐱" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "<WrongCat> Class Destructor~🐱" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat& wrongcat)
{
	if (this == &wrongcat)
		return (*this);
	type = wrongcat.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat!!!" << std::endl;
}