#include "Fixed.hpp"
#include "stdio.h"

int Fixed::setRawBits(int const raw)
{
    return (_fixedp_nb << raw);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedp_nb);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._fixedp_nb < b._fixedp_nb)
        return (a);
    return (b);
}
Fixed  Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._fixedp_nb > b._fixedp_nb)
        return (a);
    return (b);
}

float   Fixed::toFloat( void ) const
{
    return ((float)_fixedp_nb / (float)(1 << _fractionalbits));
}

int Fixed::toInt( void ) const
{
    return (_fixedp_nb >> _fractionalbits);
}

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}