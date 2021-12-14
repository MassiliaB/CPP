#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name),  _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "Claptrap constructor called" << std::endl;;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap : EVIL CORP has been succesfully destructed" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitpoints < 0)
		this->_energypoints = 0;
	std::cout << this->_name << " attack " << target << ", ";
	this->_attackdamage = rand() / (RAND_MAX / 20) + 1;
	this->_hitpoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_energypoints -= amount;
	std::cout  << "causing " << "\x1B[91m" << amount << "\033[0m" << " points of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout  << this->_name << " earning " << "\x1B[32m" << amount << "\033[0m" << " points!"  << std::endl;
}

int	ClapTrap::getEnergy(void)
{
	return this->_energypoints;
}

int	ClapTrap::getDamage(void)
{
	return this->_attackdamage;
}

int	ClapTrap::getHitpoints(void)
{
	return this->_hitpoints;
}
