#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name2(name)
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	ClapTrap mrRobot(name);
	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*ScavTrap &ScavTrap::operator =(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return *this;
}
*/
