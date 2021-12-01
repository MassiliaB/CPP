#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie( void );
		Zombie( std::string	_name );
		~Zombie( void );

		Zombie*	newZombie( std::string name );
		void	announce( void );
		void	setName( std::string name );
};
void	randomChump( std::string name );

#endif