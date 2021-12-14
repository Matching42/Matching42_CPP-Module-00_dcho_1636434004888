#include "AMateria.hpp"

AMateria::AMateria()
	{}

AMateria::AMateria(std::string const & type)
	: _type(type)
	{}

AMateria::~AMateria()
	{}

AMateria::AMateria(AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator = (const AMateria& amateria)
{
	if (this == &amateria)
		return (*this);
	_type = amateria._type;
	return (*this);
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria "
				<< target.getName() << " *" << std::endl;
}