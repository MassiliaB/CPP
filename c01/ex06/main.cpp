#include "Karen.hpp"
#include <stdio.h>
enum levnum{ ev, zero, one, two, three };

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
	static std::map<std::string, levnum>levels;

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
		case zero:
			printf("yay\n");
			exec(0);
			break ;
		case one:
			printf("2yay\n");
			exec(1);
			break ;
		case two:
			exec(2);
			break;
		case three:
			exec(3);
			break ;
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