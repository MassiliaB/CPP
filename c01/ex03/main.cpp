#include "HumanA.hpp"
#include "HumanB.hpp"

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with " << HumanA::_weapon.getType() << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with " << HumanB::_weapon->getType() << std::endl;
}

int	main(void)
{
	int a;

	a = 0;
	if (a == 1)
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	else
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}