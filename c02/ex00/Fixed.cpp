#include "Fixed.hpp"

const int Fixed::_fractionalbits = 8;

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
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed &Fixed::operator =(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &copy )
		this->_fixedp_nb = copy.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedp_nb = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedp_nb;
}