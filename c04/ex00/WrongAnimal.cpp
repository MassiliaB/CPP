#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(): _type("WRONG ANIMAL")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}


WrongAnimal::WrongAnimal(std::string name): _type(name)
{
	std::cout << "WrongAnimal named constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & o,  WrongAnimal const &copy )
{
	o << copy.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Who let the " << this->_type << " out\n";
	std::cout << "Who Who Who " << std::endl;
	return;
}
