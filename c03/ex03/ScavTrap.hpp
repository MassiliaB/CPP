 #ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&copy);
		~ScavTrap();
		void	guardGate();
		int		setEnergyPoints();
 };

#endif
