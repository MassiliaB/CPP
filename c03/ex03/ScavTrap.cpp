#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\x1B[33m" << this->_name << " have enterred in Gate keeper mode." << "\033[0m" << std::endl;
}

int	ScavTrap::setEnergyPoints()
{
	return this->_energypoints = 50;
}
