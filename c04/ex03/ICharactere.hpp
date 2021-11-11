 #ifndef ICHARACTERE_HPP
# define ICHARACTERE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Ice.hpp"
# include "Cure.hpp"

class ICharactere: public Ice, public Cure
{
	private:
		std::string _name;
		Materia meteria[4];
	public:
		ICharacter(std::string name); 
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
