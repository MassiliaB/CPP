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
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed &Fixed::operator =(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedp_nb = copy.getRawBits();
	return *this;
}

int Fixed::setRawBits(int const raw)
{
	return (_fixedp_nb << raw);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedp_nb);
}