#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria& copy);
		AMateria& operator = (const AMateria& amateria);
		std::string const & getType() const; //Returns the materia type
		virtual void setType(std::string input) = 0;
		virtual AMateria* clone() const = 0; // 자기 자신을 복제하는 메소드
		virtual void use(ICharacter& target);
};

#endif
