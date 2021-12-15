#include "Brain.hpp"

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

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain &Brain::operator =(const Brain &copy)
{
	if ( this != &copy )
	{
		for (int i(0); i < 100 ; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}

void	Brain::setIdeas( std::string idea, int n )
{
	this->_ideas[n] = idea;
}

void	Brain::getIdeas( int n )
{
	std::cout << _ideas[n] << std::endl;
}