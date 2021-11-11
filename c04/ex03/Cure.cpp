#include "Cure.hpp"

Cure::Cure(): _type("cure")
{
	std::cout << "Cure constructor called" << std::endl;
	return;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure &Cure::operator =(const Cure &copy)
{
	if ( this != &copy )
	{
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *new_cure = new Cure;
	return (new_cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}