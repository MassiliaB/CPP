#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Fixed
{
	private:
		int					_fixedp_nb;
		static const int	_raw = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int fixed_nb);
		Fixed(const float fixed_nb);
		Fixed &operator =(const Fixed &copy);
		~Fixed();
		int getRawBits( void ) const;
		int setRawBits( int const raw);
		float tofloat( void ) const;
		int toInt( void ) const;
 };

#endif