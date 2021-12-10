 #ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&copy);
		~ScavTrap();
		void	guardGate();
		void	attack(std::string const & target);
 };

#endif
