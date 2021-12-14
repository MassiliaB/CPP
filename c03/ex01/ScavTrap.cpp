#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
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

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hitpoints < 0)
		this->_energypoints = 0;
	std::cout << this->_name << " attackiiing " << target << ", ";
	this->_attackdamage = rand() / (RAND_MAX / 10) + 1;
	this->_hitpoints--;
}
