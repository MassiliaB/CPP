#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &copy)
{
	if ( this != &copy )
		*this = copy;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	return;
}

Cat &Cat::operator =(const Cat &copy)
{
	if ( this != &copy ){
		this->_brain = copy._brain;
		this->_type = copy.getType();
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Who let the Cat out\n";
	std::cout << "Who Who Who Who" << std::endl;
	return;
}
