#include "Zombie.hpp"

Zombie::Zombie(void): _name("")
{
	std::cout << "Creating my homie zombie" << std::endl ;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "I'm sorry " << this->_name << " is dead bro..\n" ;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzZ...\n";
	return ;
}