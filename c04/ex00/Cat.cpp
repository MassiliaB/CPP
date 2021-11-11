#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator =(const Cat &copy)
{
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	std::cout << "Cat assignation operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
