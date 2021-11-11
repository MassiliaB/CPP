 #ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class ICharacter ;

class AMateria
{
	protected:
		std::string const _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria&copy);
		~AMateria();
		
		AMateria &operator =(const AMateria &copy);
		
		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
 };

#endif