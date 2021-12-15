 #ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain&copy);
		~Brain();
		Brain &operator =(const Brain &copy);
};

#endif
