 #ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		std::string	_type;
		AMateria *_materia[4];
		int			_nb;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&copy);
		~MateriaSource();

		MateriaSource &operator =(const MateriaSource &copy);
		void learnMateria(AMateria* copy);
		AMateria* createMateria(std::string const & type); 
 };

#endif
