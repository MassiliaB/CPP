#include "Zombie.hpp"

void	my_horde(int N, std::string name)
{
	Zombie *zombie;

 	zombie = zombieHorde(N, name);
	delete[] zombie;
}

Zombie* Zombie::newZombie( Zombie *zombie, std::string name )
{
	this->_name = name;
	return (zombie);
}

Zombie* zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombie = NULL;

	if (!(zombie = new Zombie[N]))
		return (NULL);
	i = 0;
	while (i < N)
	{
		zombie[i].newZombie(zombie, name);
		zombie[i].announce();
		i++;
	}
	return (zombie);
}