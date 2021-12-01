#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon)
{
	std::cout << "Creating my HumanA " << this->_name << std::endl ;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << "Destructing my HumanA " << this->_name << std::endl ;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
