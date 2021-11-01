#include "Fixed.hpp"
#include "stdio.h"

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