 #ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		std::string	_name2;
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap&copy );
	//	FragTrap &operator =(const FragTrap &copy);
		~FragTrap();
		void	highFivesGuys( void );
 };

#endif
