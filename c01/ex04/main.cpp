#include "Replace.hpp"

int	main(void)
{
	Replace	replace;
	const char *filename;

	filename = "file.replace";
	replace.replacing("coucou", "salut", filename);
	return (0);
}