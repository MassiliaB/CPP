#include "Fixed.hpp"
#include "stdio.h"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( 8 );
    Fixed d( 4 );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::min( b, c ) << std::endl;
    std::cout << Fixed::max( a, d ) << std::endl;
    return 0;
}