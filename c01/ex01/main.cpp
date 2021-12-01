#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		N;

	N = 3;
 	zombie = zombieHorde(N, "[Zombies from da hood]");
	
	delete[] zombie;
	
	return (0);
}