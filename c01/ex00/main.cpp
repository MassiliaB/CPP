#include "Zombie.hpp"

int	main(void)
{
	randomChump("Zombie stack");
	randomChump("Zombie stack stack");

	Zombie *zombie2 = new Zombie("Zombie heap");
	zombie2->announce();
	delete zombie2;
	return (0);
}