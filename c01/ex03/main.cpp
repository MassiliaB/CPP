#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club = Weapon("clavier");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("souris");
	bob.attack();

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("poubelle");
	bob.attack();
	jim.attack();
	return (0);
}