#include "Karen.hpp"

void Karen::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	fct_p[0] = &Karen::debug;
	fct_p[1] = &Karen::info;
	fct_p[2] = &Karen::warning;
	fct_p[3] = &Karen::error;
	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			(this->*(fct_p[i]))();
		i++;
	}
	if (i == 4)
		std::cout << "INCOMPREHENSIBLE blabla" << std::endl ;
	else
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