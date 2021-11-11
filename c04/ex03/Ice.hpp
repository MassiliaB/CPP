 #ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "AMateria.hpp"

class Ice: public AMateria
{
	protected:
		std::string const _type;
		AMateria *_materia;
	public:
		Ice();
		Ice(const Ice&copy);
		~Ice();
		Ice &operator =(const Ice &copy);
		AMateria* clone() const;
 };

#endif
