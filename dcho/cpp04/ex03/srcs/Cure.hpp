#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure& copy);
		Cure& operator = (const Cure& cure);
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
		virtual void setType(std::string input);
};

#endif
