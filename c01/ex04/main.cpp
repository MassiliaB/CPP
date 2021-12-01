#include "Replace.hpp"

int	main( int ac, char **av )
{
	Replace	replace;

	if (ac != 3)
		return 0;
	replace.replacing(av[1], av[2], av[3] + ".replace");
	return 0;
}