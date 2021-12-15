#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	return;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
	return;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice &Ice::operator=(Ice const &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *new_ice = new Ice();
	return new_ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}