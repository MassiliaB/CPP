#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "Creating my HumanB " << this->_name << std::endl ;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructing my HumanB " << this->_name << std::endl ;
	return ;
}
#include <stdio.h>
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}