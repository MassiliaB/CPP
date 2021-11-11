#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap (name)
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
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
	std::cout << _name << " have enterred in Gate keeper mode." << std::endl;
}