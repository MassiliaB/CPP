#include "Karen.hpp"

void Karen::complain( std::string level )
{
	if (level == "DEBUG")
	{
		debug();
	}
	if (level == "INFO")
	{
		info();
	}
	if (level == "WARNING")
	{
		warning();
	}
	if (level == "ERROR")
	{
		error();
	}
	std::cout << this->_level << std::endl ;
	return ;
}

int	main(void)
{
	Karen	karen;
		
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}