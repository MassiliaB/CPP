#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	return;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
	return;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure &Cure::operator=(const Cure &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *new_cure = new Cure();
	return new_cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}