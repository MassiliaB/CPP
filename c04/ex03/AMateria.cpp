#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "Materia constructor called" << std::endl;
	return;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

AMateria &AMateria::operator =(const AMateria &copy)
{
	if ( this != &copy )
	{
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
