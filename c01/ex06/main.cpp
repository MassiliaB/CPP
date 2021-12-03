#include "Karen.hpp"

void	Karen::exec(int i)
{
	while (i < 4)
	{
		(this->*(_fct_p[i]))();
		std::cout << this->_what << std::endl ;	
		i++;
	}
}

void	Karen::setLevel( std::string whatLevel )
{
	std::string levels[4];

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	for ( ;_level < 4; _level++)
	{
		if (levels[_level] == whatLevel)
			break ;	
	}
}

void Karen::complain( )
{
	_fct_p[0] = &Karen::debug;
	_fct_p[1] = &Karen::info;
	_fct_p[2] = &Karen::warning;
	_fct_p[3] = &Karen::error;
	switch(_level)
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
		case 4:
			std::cout << "INCOMPREHENSIBLE blabla" << std::endl ;
			break;
	}
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Karen	karen;
		karen.setLevel(av[1]);
		karen.complain();
	}
	return (0);
}