 #ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
	public:
		WrongCat();
		WrongCat(const WrongCat&copy);
		WrongCat &operator =(const WrongCat &copy);
		~WrongCat();
		void	makeSound() const;
};

#endif
