#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <cmath>

class Fixed
{
	private:
		int					_fixedp_nb;
		static const int	_fractionalbits;
	public:
		Fixed( void );
		~Fixed();
		Fixed(const int nb);
		Fixed(const float nb_f);
		Fixed(const Fixed &copy);
		Fixed &operator =(const Fixed &copy);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif