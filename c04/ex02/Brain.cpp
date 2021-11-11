#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	return;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator =(const Brain &copy)
{
	if ( this != &copy )
	{
		for (int i = 0; i < 100; i++)
			copy._ideas[i] + "";
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
/*
std::ostream	&operator<<( std::ostream & o, Brain const &copy )
{
	o << copy.getIdeas();
	return o;
}
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
