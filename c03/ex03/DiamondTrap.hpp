 #ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class DiamondTrap
{
	private:
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap&copy);
		DiamondTrap &operator =(const DiamondTrap &copy);
		~DiamondTrap();
 };

#endif
