#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	public :
		Character();
		Character(std::string name);
		~Character();
		Character(Character& copy);
		Character& operator = (const Character& character);
		virtual void equip(AMateria* m);
		virtual std::string const & getName() const;
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private :
		int _index;
		std::string _name;
		AMateria *_amateria[4];
};

#endif
