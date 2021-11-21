 #ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	protected:
		std::string const _type;
	public:
		Ice();
		Ice(const Ice&copy);
		~Ice();

		Ice &operator =(const Ice &copy);

		AMateria* clone() const;
		void use(ICharacter& target);
 };

#endif
