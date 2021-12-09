#include "Weapon.hpp"

Weapon::Weapon( void ): _type("BAT")
{
	std::cout << "Creating the weapon." << std::endl;
	return ;
}

Weapon::Weapon( std::string weaponType ): _type(weaponType)
{
	std::cout << "Creating the weapon " << this->_type << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructing the weapon " << this->_type << std::endl;
	return ;
}

const	std::string &Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType( const std::string &type )
{
	std::cout << "Setting the weapon to " << type << std::endl ;
	this->_type = type;
	return ;
}

