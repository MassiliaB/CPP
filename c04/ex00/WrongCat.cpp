#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	if ( this != &copy )
		*this = copy;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

WrongCat &WrongCat::operator =(const WrongCat &copy)
{
	if ( this != &copy )
		this->_type = copy.getType();
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Who let the WrongCat out\n";
	std::cout << "Who Who Who Who" << std::endl;
	return;
}