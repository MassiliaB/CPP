 #ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap&copy );
	//	DiamondTrap &operator =(const DiamondTrap &copy);
		~DiamondTrap();
		void whoAmI( void );	
		void createName( std::string name );	
		std::string		getDiamondName();
 };

#endif
