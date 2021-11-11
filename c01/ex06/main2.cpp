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
	static std::map<std::string, Karen::numlev> levels;

	levels["DEBUG"] = zero;
	levels["INFO"] = one;
	levels["WARNING"] = two;
	levels["ERROR"] = three;
	fct_p[0] = &Karen::debug;
	fct_p[1] = &Karen::info;
	fct_p[2] = &Karen::warning;
	fct_p[3] = &Karen::error;
	switch(levels[level])
	{
		case 0:
			exec(0);
			break ;
		case 1:
			exec(1);
			break ;
		case 2:
			exec(2);
			break;
		case 3:
			exec(3);
			break ;
	}
	return ;
}

int	main(int ac, char **av)
{

	if (ac == 2)
	{
		Karen	karen;
		karen.complain(av[1]);
	}
	return (0);
}