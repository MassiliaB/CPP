#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "Creating my HumanA " << _name << std::endl ;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructing my HumanA " << _name << std::endl ;
	return ;
}