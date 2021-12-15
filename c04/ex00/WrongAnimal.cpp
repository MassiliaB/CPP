#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("THE WRONGANIMAL")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string name): _type(name)
{
	std::cout << "WrongAnimal " << _type << " constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const &copy )
{
	o << copy.getType();
	return o;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Who let the Wrong animal out\n";
	std::cout << "  [Wrong wrong wrong]" << std::endl;
	return;
}
