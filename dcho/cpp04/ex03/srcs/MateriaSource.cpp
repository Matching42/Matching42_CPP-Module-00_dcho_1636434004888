#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_index = 0;
	for (int i = 0; i < 4; i++)
		_amateria[i] = NULL;
}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& materiasource)
{
	if (this == &materiasource)
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
		if (materiasource._amateria[i] != NULL)
			_amateria[i] = materiasource._amateria[i]->clone();
	}
	_index = materiasource._index;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* source)
{
	if (_index == 4)
	{
		std::cout << "* Material's Source are fulled *" << std::endl;
		return ;
	}
	_amateria[_index++] = source;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_amateria[i] != NULL && _amateria[i]->getType() == type)
			return (_amateria[i]->clone());
	}
	return (NULL);
}