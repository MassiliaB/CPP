 #ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog&copy);
		Dog &operator =(const Dog &copy);
		~Dog();
 };

#endif
