 #ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T1>
T1	max(T1& a, T1& b)
{
	return ((a > b) ? a : b);
}

template <typename T2>
T2		min(T2& a, T2& b)
{
	return ((a < b) ? a : b);
}

#endif
