#include "AMateria.hpp"

AMateria::AMateria(): _type("")
{
	return;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	return;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	return;
}

AMateria &AMateria::operator=( AMateria const &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->_type << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
