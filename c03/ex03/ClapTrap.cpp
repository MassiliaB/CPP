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
	std::cout << "Claptrap, EVIL CORP has been succesfully destructed" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*mClapTrap &ClapTrap::operator =(const ClapTrap &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}*/
