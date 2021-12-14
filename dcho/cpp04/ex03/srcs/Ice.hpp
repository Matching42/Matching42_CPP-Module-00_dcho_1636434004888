#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice& copy);
		Ice& operator = (const Ice& ice);
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
		virtual void setType(std::string input);
};

#endif
