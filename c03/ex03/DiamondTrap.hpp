 #ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ClapTrap.hpp"

class DiamondTrap
{
	private:
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap&copy);
	//	DiamondTrap &operator =(const DiamondTrap &copy);
		~DiamondTrap();
 };

#endif
