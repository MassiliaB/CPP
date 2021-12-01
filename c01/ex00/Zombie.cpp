#include "Zombie.hpp"

Zombie::Zombie( void ): _name("")
{
	std::cout << "Creating my homie zombie" << std::endl ;
	return ;
}

Zombie::Zombie( std::string name ): _name(name)
{
	std::cout << "Creating my homie " << this->_name << std::endl ;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "I'm sorry " << this->_name << " is dead bro.." << std::endl ;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << " BraiiiiiiinnnzzZ..." << std::endl ;
	return ;
}
