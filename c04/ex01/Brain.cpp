#include "Brain.hpp"

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

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain &Brain::operator =(const Brain &copy)
{
	(void)copy;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}