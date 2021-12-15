#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal( std::string name );
		Animal(const Animal&copy);
		virtual ~Animal();
		Animal	&operator =(const Animal &copy);
		std::string		getType() const;
		virtual void	makeSound() const;
		virtual Brain	*getBrain();
};

std::ostream & operator<<(std::ostream &o, Animal const &copy);

#endif
