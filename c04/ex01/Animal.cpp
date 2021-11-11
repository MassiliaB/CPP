#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(): _type("THE ANIMAL")
{
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal(std::string name): _type(name)
{
	std::cout << "Animal named constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator =(const Animal &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Animal const &copy )
{
	o << copy.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Who let the " << this->_type << " out\n";
	std::cout << "Who Who Who Who" << std::endl;
	return;
}
