#include "Fixed.hpp"

Fixed::Fixed(void): _fixedp_nb(0)
{
//	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedp_nb = nb << _fractionalbits;
	return;
}

Fixed::Fixed(const float nb)
{
//	std::cout << "Float constructor called" << std::endl;
	_fixedp_nb = (int)roundf(nb * (float)(1 << _fractionalbits));
	return;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	if ( this != &copy)
		*this = copy;
	return;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator =(const Fixed &copy)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->_fixedp_nb = copy._fixedp_nb;
	return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &copy) 
{
	out << copy.toFloat();
	return out;
}

Fixed &Fixed::operator++()
{
	this->_fixedp_nb++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed copy = *this;
	this->_fixedp_nb++;
	return copy;
}

Fixed &Fixed::operator--()
{
	this->_fixedp_nb--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy = *this;
	this->_fixedp_nb--;
	return copy;
}

Fixed Fixed::operator+(const Fixed &copy)
{
	return this->toFloat() + copy.toFloat();
}

Fixed Fixed::operator*(const Fixed &copy)
{
	return this->toFloat() * copy.toFloat();
}

Fixed Fixed::operator-(const Fixed &copy)
{
	return this->toFloat() - copy.toFloat();
}

Fixed Fixed::operator/(const Fixed &copy)
{
	return this->toFloat() / copy.toFloat();
}

bool Fixed::operator>(const Fixed &copy)
{
	return this->toFloat() > copy.toFloat();
}

bool Fixed::operator<(const Fixed &copy)
{
	return this->toFloat() < copy.toFloat();
}

bool Fixed::operator>=(const Fixed &copy)
{
	return this->toFloat() >= copy.toFloat();
}

bool Fixed::operator<=(const Fixed &copy)
{
	return this->toFloat() <= copy.toFloat();
}

bool Fixed::operator==(const Fixed &copy)
{
	return this->toFloat() == copy.toFloat();
}

bool Fixed::operator!=(const Fixed &copy)
{
	return this->toFloat() != copy.toFloat();
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedp_nb = raw;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedp_nb;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
Fixed  &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed  &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

float   Fixed::toFloat( void ) const
{
	return (float)_fixedp_nb / (float)(1 << _fractionalbits);
}

int Fixed::toInt( void ) const
{
	return _fixedp_nb >> _fractionalbits;
}