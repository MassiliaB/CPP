#include "Ice.hpp"

Ice::Ice(): _type("ice")
{
	std::cout << "Ice constructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice &Ice::operator =(const Ice &copy)
{
	if ( this != &copy )
	{
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *new_ice = new Ice;
	return (new_ice);
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}