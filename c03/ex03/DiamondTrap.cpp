#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): _name("Ms Robot")
{
	this->_hitpoints = FragTrap::getHitpoints();
	this->_attackdamage = FragTrap::getDamage();
	this->_energypoints = ScavTrap::setEnergyPoints();
	std::cout << "Default constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::getHitpoints();
	this->_attackdamage = FragTrap::getDamage();
	this->_energypoints = ScavTrap::setEnergyPoints();
	std::cout << "Diamond constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = copy;
	return;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "\x1B[34m" << "My Diamond name is " << getDiamondName() << "\033[0m" << std::endl;
	std::cout << "\x1B[35m" << "My ClapTrap name is " << getName() << "\033[0m" << std::endl;
	return;
}

std::string	DiamondTrap::getDiamondName(void)
{
	return this->_name;
}