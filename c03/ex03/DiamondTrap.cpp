#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap(), _name("Ms Robot")
{
	_hitpoints = FragTrap::getHitpoints();
	_attackdamage = FragTrap::getDamage();
	_energypoints = ScavTrap::getEnergy();
	std::cout << "Default constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FragTrap::getHitpoints();
	_attackdamage = FragTrap::getDamage();
	_energypoints = ScavTrap::getEnergy();
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

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My Diamond name is " << getDiamondName() << std::endl;
	std::cout << "My ClapTrap name is " << getName() << std::endl;
	return;
}

std::string	DiamondTrap::getDiamondName(void)
{
	return (this->_name);
}