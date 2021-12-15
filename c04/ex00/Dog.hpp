 #ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog&copy);
		~Dog();
		Dog &operator =(const Dog &copy);
		void	makeSound() const;
};

#endif
