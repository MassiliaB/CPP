#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal( std::string name );
		Animal(const Animal&copy);
		Animal &operator =(const Animal &copy);
		~Animal();
		void makeSound() const;
		std::string getType() const;
};

std::ostream & operator<<(std::ostream &o, Animal const &copy);

#endif
