#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
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
	this->_store = copy;
	return;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *mat = this->_store;

	if (!&type)
		return (0);
	return (mat);
}