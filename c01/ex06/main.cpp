#include "Karen.hpp"

void	Karen::exec(int i)
{
	while (i < 4)
	{
		(this->*(fct_p[i]))();
		std::cout << this->_level << std::endl ;	
		i++;
	}
}

void Karen::complain( std::string level )
{
	static std::map<std::string, int>levels;
	int		tab[4] = {0, 1, 2, 3};

	fct_p[0] = &Karen::debug;
	fct_p[1] = &Karen::info;
	fct_p[2] = &Karen::warning;
	fct_p[3] = &Karen::error;

	switch(levels[level])
	{
		case :
			exec(0);
		case "INFO":
			exec(1);
		case "WARNING":
			exec(2);
		case "ERROR":
			exec(3);
	}
	return ;
}

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac == 2)
		karen.complain(av[0]);
	return (0);
}