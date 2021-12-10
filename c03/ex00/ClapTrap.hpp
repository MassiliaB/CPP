#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&copy);
		~ClapTrap();
		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			and_open(ClapTrap robot);
		unsigned int	getEnergy();
		unsigned int	getDamage();
		unsigned int	getHitpoints();
 };

#endif
