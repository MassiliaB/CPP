 #ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal( std::string name );
		WrongAnimal(const WrongAnimal&copy);
		WrongAnimal &operator =(const WrongAnimal &copy);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
 };

#endif
