#include "Fixed.hpp"

float   Fixed::toFloat( void ) const
{
    float nb;

    nb = _float_nb;
   // nb = (float)nb << _raw;
    return (nb);
}

int Fixed::toInt( void ) const
{
    int nb;

    nb = _int_nb;

    nb = nb << _raw;
    return (nb);
}

std::ostream &operator << (std::ostream &out, const Fixed &copy) 
{
    out << copy;
    return out;
}

int main( void ) 
{   
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}