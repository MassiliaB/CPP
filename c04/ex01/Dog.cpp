#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &copy)
{
	if ( this != &copy )
		*this = copy;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return;
}

Dog &Dog::operator =(const Dog &copy)
{
	if ( this != &copy ){
		this->_brain = copy._brain;
		this->_type = copy.getType();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Who let the Dog out\n";
	std::cout << "  [Who Who Who Who]" << std::endl;
	return;
}

Brain *Dog::getBrain( )
{
	return this->_brain;
}