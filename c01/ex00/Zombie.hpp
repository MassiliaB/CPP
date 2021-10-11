#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string _name;
		Zombie* newZombie( std::string name );

	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void randomChump( std::string name );
};

#endif