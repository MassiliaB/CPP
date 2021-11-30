#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon( void );
		Weapon( std::string weaponType );
		~Weapon( void );

		const std::string	&getType();	
		void				setType( const std::string &type );	
};

#endif