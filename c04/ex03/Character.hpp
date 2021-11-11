 #ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria **_materia = new AMateria*[4];
	public:
		Character(std::string name);
		Character(const Character&copy);
		~Character();

		Character &operator =(const Character &copy);
 		std::string const & getName() const;
		AMateria* clone() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
 };

#endif
