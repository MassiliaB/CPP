 #ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	private:
		std::string	_name2;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&copy);
		//ScavTrap &operator =(const ScavTrap &copy);
		~ScavTrap();
		void	guardGate();
 };

#endif
