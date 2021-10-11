#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie;


	zombie.randomChump("Zombie stack");

	Zombie *zombies = new Zombie;
	zombies->randomChump("Zombie heap");
	delete zombies;

	return (0);
}