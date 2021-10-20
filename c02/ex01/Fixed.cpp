#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb): _int_nb(nb)
{
	_int_nb = toInt();
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float nb): _float_nb(nb)
{
	std::cout << "Float constructor called" << std::endl;
	_float_nb = toFloat();
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
	_float_nb = copy._float_nb;
	return (*this);
}