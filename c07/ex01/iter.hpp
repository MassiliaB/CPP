 #ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

template <typename T>
void	iter(T const array[], int const len, void (*fct_ptr)(T const &i))
{
	for (int i(0); i < len; i++)
		fct_ptr(array[i]);
}

template <typename T>
void	printarr(T const &i)
{
	std::cout << "[" << i << "]";
}

# endif