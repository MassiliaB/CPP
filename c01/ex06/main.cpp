#include "Karen.hpp"

void Karen::complain( std::string level )
{
	//voir switch !!
	if (level == "DEBUG")
	{
		&Karen::debug;
 		info();
 		warning();
		error();
	}
	if (level == "INFO")
	{
		info();
		warning();
		error();
	}
	if (level == "WARNING")
	{
		warning();
		error();
	}
	if (level == "ERROR")
	{
		error();
	}
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl ;
		return;
	}
	std::cout << this->_level << std::endl ;	
	return ;
}

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac == 2)
		karen.complain(av[0]);
	return (0);
}