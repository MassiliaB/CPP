#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <stdio.h>
# include <stdlib.h>
# include <cmath>

class Fixed
{
	private:
		int			_fixedp_nb;
		static const int	_fractionalbits = 8;
	public:
		Fixed( void );
		~Fixed();
		Fixed(const int nb);
		Fixed(const float nb_f);
		Fixed(const Fixed &copy);
		Fixed &operator =(const Fixed &copy);
		
        static Fixed &max(Fixed &a, Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);

		static const Fixed &max(const Fixed &a, const Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);

        //comparaison operators 
		bool operator >(const Fixed &copy);
		bool operator <(const Fixed &copy);
		bool operator >=(const Fixed &copy);
		bool operator <=(const Fixed &copy);
		bool operator ==(const Fixed &copy);
		bool operator !=(const Fixed &copy);
        //arithmetic operators
		Fixed operator *(const Fixed &copy);
		Fixed operator /(const Fixed &copy);
		Fixed operator -(const Fixed &copy);
		Fixed operator +(const Fixed &copy);
		Fixed &operator++(); // Overloading the prefix operator
		Fixed operator++(int nb); //Overloading the posfix operator
		Fixed &operator--(); // Overloading the prefix operator
		Fixed operator--(int nb); //Overloading the posfix operator

        float toFloat( void ) const;
		int toInt( void ) const;
        int getRawBits( void ) const;
		int setRawBits( int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif