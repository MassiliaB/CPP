#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Default constructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Ice::~Ice()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Ice &Ice::operator =(const Ice &copy)
{
	if ( this != &copy )
	{
		this->_value = copy.getValue();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Ice const &copy )
{
	//o << i.getValue();
	return o;
}

AMateria* Ice::clone()
{
	return (this->_materia);
}