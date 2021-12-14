#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&copy);
		~ClapTrap();
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		and_open(ClapTrap robot);
		int			getEnergy();
		int			getDamage();
		int			getHitpoints();
		std::string	getName();
};

#endif
