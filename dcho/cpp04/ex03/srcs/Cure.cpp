#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
	{}

Cure::~Cure()
	{}

Cure::Cure(Cure& copy)
{
	_type = copy._type;
	//*this = copy;
}

Cure& Cure::operator = (const Cure& cure)
{
	if (this == &cure)
		return (*this);
	return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "
				<< target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure *new_cure = new Cure();
	new_cure->_type = this->_type;
	//new_cure = (this);

	return (new_cure);
}

void Cure::setType(std::string input)
{
	_type = input;
}