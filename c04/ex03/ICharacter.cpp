#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructor called" << std::endl;
	return;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICopy constructor called" << std::endl;
	*this = copy;
	return;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
	return;
}

/*AMateria *ICharacter::clone() const
{
	AMateria *new_ice = new ICharacter;
	return (new_ice);
}*/