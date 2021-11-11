#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain;
	return;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
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
		_brain = copy._brain;
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/