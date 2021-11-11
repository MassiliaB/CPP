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
	public:
		Cure();
		Cure(const Cure&copy);
		~Cure();
	
		Cure &operator =(const Cure &copy);

		AMateria* clone() const;
		void use(ICharacter& target);
 };

#endif
