#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
#include <stdio.h>

class Zombie
{
	private:
		int 		_N;
		std::string _name;

	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		Zombie* newZombie(Zombie *zombie, std::string name );
};

void my_horde( int N, std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif