#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
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

/*Brain &Brain::operator =(const Brain &copy)
{
	if ( this != &copy )
	{
		this->_ideas = copy.getIdeas();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Brain const &copy )
{
	o << copy.getIdeas();
	return o;
}
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
