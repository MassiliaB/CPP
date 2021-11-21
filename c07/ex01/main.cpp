# include "iter.hpp"

int main( void )
{
	int tab[6] = {1,2,3,5,8,7};
	::iter(tab, 6, printarr);

	char ar[4] = {'a','b','c','d'};
	::iter(ar, 4, printarr);
	return (0);
}