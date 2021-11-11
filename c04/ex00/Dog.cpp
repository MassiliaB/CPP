#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator =(const Dog &copy)
{
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/