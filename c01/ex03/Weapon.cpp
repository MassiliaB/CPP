#include "Weapon.hpp"

Weapon::Weapon( std::string weaponType ): _weaponType(weaponType)
{
	std::cout << "Creating the weapon " << this->_weaponType << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructing the weapon " << this->_weaponType << std::endl;
	return ;
}

const	std::string Weapon::getType()
{
	return (this->_weaponType);
}

void	Weapon::setType(std::string clubType)
{
	this->_weaponType = clubType;
	return ;
}

