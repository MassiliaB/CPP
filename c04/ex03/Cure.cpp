#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Default constructor called" << std::endl;
	return;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cure::~Cure()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Cure &Cure::operator =(const Cure &copy)
{
	if ( this != &copy )
	{
		this->_value = copy.getValue();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Cure const &copy )
{
	//o << i.getValue();
	return o;
}

AMateria* Cure::clone()
{
	return (this->_materia);
}