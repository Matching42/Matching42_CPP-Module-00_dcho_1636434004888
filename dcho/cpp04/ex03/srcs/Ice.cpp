#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
	{}

Ice::~Ice()
	{}

Ice::Ice(Ice& copy)
{
	*this = copy;
}

Ice& Ice::operator = (const Ice& ice)
{
	if (this == &ice)
		return (*this);
	return (*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
				<< target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice *new_ice = new Ice();
	new_ice->_type = this->_type;
	//new_Ice = (this);

	return (new_ice);
}

void Ice::setType(std::string input)
{
	_type = input;
}