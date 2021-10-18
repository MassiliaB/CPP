#include "Fixed.hpp"

Fixed::Fixed(): _fixedp_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &copy)
{
	_fixedp_nb = copy._fixedp_nb;
	std::cout << "Copy constructor called" << std::endl;
	return;
}
Fixed& Fixed::operator =(const Fixed &copy)
{
	if (this != &copy)
	{
		_fixedp_nb = copy._fixedp_nb;
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}