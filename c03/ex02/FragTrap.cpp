#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap ()
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap (name)
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*FragTrap &FragTrap::operator =(const FragTrap &copy)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	return *this;
}
*/
