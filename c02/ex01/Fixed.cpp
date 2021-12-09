#include "Fixed.hpp"

const int Fixed::_fractionalbits = 8;

Fixed::Fixed(void): _fixedp_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedp_nb = nb << _fractionalbits;
	return;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedp_nb = (int)roundf(nb * (float)(1 << _fractionalbits));
	return;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if ( this != &copy )
		*this = copy;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator =(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedp_nb = copy._fixedp_nb;
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &copy) 
{
	out << copy.toFloat();
	return out;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixedp_nb / (float)(1 << _fractionalbits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixedp_nb >> _fractionalbits);
}
