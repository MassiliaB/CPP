#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap ()
{
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap (name)
{
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\x1B[33m" << this->_name << " HIGH FIVE TO F*ck SOCIETY!" << "\033[0m" << std::endl;
}