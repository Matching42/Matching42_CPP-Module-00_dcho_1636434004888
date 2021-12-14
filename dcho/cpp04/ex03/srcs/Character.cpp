#include "Character.hpp"

Character::Character()
	: _name("default")
{
	_index = 0;
	for (int i = 0; i < 4; i++)
		_amateria[i] = NULL;
}

Character::Character(std::string name)
	: _name(name)
{
	_index = 0;
	for (int i = 0; i < 4; i++)
		_amateria[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_amateria[i])
		{
			delete (_amateria[i]);
			_amateria[i] = NULL;
		}
	}
}

Character::Character(Character& copy)
{
	*this = copy;
}

Character& Character::operator = (const Character& character)
{
	if (this == &character)
		return (*this);

	for (int i = 0; i < 4; i++)
	{
		//차있다면 삭제
		if (_amateria[i] != NULL)
		{
			delete (_amateria[i]);
			_amateria[i] = NULL;
		}
		//새로운 곳에 복사
		if (character._amateria[i] != NULL)
			_amateria[i] = character._amateria[i]->clone();
	}
	_index = character._index;
	_name = character.getName();
	return (*this);
}

void Character::equip(AMateria* m)
{
	if (_index == 4)
	{
		std::cout << "* Materials are fulled *" << std::endl;
		return ;
	}
	_amateria[_index++] = m;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::unequip(int idx)
{
	if (_index >= 4 || _index < 0)
	{
		std::cout << "* Invalid index *" << std::endl;
		return ;
	}
	_amateria[idx]->setType("");
}

void Character::use(int idx, ICharacter& target)
{
	if (_index >= 4 || _index < 0)
	{
		std::cout << "* Invalid index *" << std::endl;
		return ;
	}
	_amateria[idx]->use(target);
}
