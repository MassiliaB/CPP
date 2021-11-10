#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}
/*DiamondTrap &DiamondTrap::operator =(const DiamondTrap &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
*/
