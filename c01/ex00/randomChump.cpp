#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie *zombie;

	zombie = newZombie(name);
	announce();
	return ;
}