#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Creating my homie zombie" << std::endl ;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "I'm sorry " << Zombie::_name << " is dead bro..\n" ;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << " BraiiiiiiinnnzzZ...\n";
	return ;
}