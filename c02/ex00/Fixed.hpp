#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Fixed
{
	private:
		int					_fixedp_nb;
		static const int	_fractionalbits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator =(const Fixed &copy);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
 };

#endif