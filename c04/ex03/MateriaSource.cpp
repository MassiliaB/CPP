#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nb(0)
{
	std::cout << "Materia default constructor called" << std::endl;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia destructor called" << std::endl;
	return;
}

MateriaSource &MateriaSource::operator =(const MateriaSource &copy)
{
	if ( this != &copy )
	{
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* copy)
{
	if (_nb > 4)
		return ;
	this->_materia[_nb] = copy;
	_nb++;
	return;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _materia[i]->getType())
			return (_materia[i]->clone());
	}
	return (0);
}
