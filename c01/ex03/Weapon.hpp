#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string	_weaponType;

	public:
		Weapon(std::string weaponType);
		~Weapon(void);
		const std::string getType();	
		void setType(const std::string weaponType);	
};

#endif