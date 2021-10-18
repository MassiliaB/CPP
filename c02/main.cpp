#include "Fixed.hpp"

int Fixed::setRawBits(int const raw)
{
(void) raw;
    return (0);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
//setRawBits(1);
    return (0);
}

int main()
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}