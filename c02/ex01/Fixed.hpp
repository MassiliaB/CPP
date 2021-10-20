#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <cmath>

class Fixed
{
	private:
		int					_int_nb;
		float				_float_nb;
		static const int	_raw = 8;
	public:
		Fixed( void );
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &copy);
		std::ostream &operator<<(const Fixed &copy);
		Fixed &operator =(const Fixed &copy);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif