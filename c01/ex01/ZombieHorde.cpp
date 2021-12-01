#include "Zombie.hpp"

Zombie* Zombie::newZombie( Zombie *zombie, std::string name )
{
	this->_name = name;
	return (zombie);
}

Zombie* zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombie = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombie[i].newZombie(zombie, name);
		zombie[i].announce();
		i++;
	}
	return (zombie);
}