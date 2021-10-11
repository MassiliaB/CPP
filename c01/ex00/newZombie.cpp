#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie	*zombie;

	zombie = NULL;
	this->_name = name;
	return (zombie);
}