 #ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];
		int			_nb;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&copy);
		~MateriaSource();

		MateriaSource &operator =(const MateriaSource &copy);
		void		learnMateria(AMateria* copy);
		AMateria*	createMateria(std::string const & type); 
 };

#endif
