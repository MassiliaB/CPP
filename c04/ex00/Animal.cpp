#include "Animal.hpp"

Animal::Animal(): _type("THE ANIMAL")
{
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal(std::string name): _type(name)
{
	std::cout << "Animal " << _type << " constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return;
}

Animal &Animal::operator =(const Animal &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Animal const &copy )
{
	o << copy.getType();
	return o;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	return;
}
