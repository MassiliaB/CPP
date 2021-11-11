#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "Default constructor called" << std::endl;
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
		this->_value = copy.getValue();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, AMateria const &copy )
{
	//o << i.getValue();
	return o;
}
