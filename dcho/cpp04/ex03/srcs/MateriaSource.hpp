#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource& copy);
		MateriaSource& operator = (const MateriaSource& materiasource);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	private:
		int _index;
		AMateria *_amateria[4];
};


#endif
