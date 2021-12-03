#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = zombieHorde(3, "[Zombies from da hood]");

	std::cout << "My horde has been created" << std::endl;
	delete[] zombie;
	std::cout << "My horde has been deleted" << std::endl;
	return (0);
}