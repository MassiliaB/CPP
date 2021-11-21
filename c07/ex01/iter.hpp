 #ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>


template <typename T>
void	iter(T array[], int len, void (*fct_ptr)(T &i))
{
	for (int i(0); i < len; i++)
		fct_ptr(array[i]);
}

template <typename T>
void	printarr(T &i)
{
	std::cout << i << std::endl;
}

# endif