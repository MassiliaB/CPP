#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nb(0)
{
	for (int i(0); i < 4; i++)
		this->_materia[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
	return;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i(0); i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
	return;
}

MateriaSource &MateriaSource::operator =(const MateriaSource &copy)
{
	if ( this != &copy )
	{
		for (int i = 0; i < 4; i++)
		{
			if (!copy._materia[i])
				this->_materia[i] = NULL;
			else
				this->_materia[i] = copy._materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* copy)
{
	if (this->_nb > 3)
	{
		std::cout << "Already 4 materia" << std::endl;
		if (copy)
			delete copy;
		return ;
	}
	std::cout << "Learning " << copy->getType() << " materia's" << std::endl;
	this->_materia[_nb] = copy;
	this->_nb++;
	return;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (type == this->_materia[i]->getType())
		{
			std::cout << "  -> Creating [" << type << "] materia" << std::endl;
			return (this->_materia[i]->clone());
		}
	}
	std::cout << "  -> Unknow [" << type << "] materia.." << std::endl;
	return (0);
}
