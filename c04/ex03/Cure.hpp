 #ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "AMateria.hpp"

class Cure: public AMateria
{
	protected:
		std::string const _type;
		AMateria *_materia;
	public:
		Cure();
		Cure(const Cure&copy);
		~Cure();
		Cure &operator =(const Cure &copy);
		AMateria* clone() const;
 };

#endif
