 #ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat&copy);
		~Cat();
		Cat &operator =(const Cat &copy);
		void	makeSound() const;
 };

#endif
