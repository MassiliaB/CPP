#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	b.setRawBits(4);
	std::cout << b.getRawBits() << std::endl;
	c.setRawBits(8);
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
