#include "Bureaucrat.hpp"

int main( void )
{
	{
		Bureaucrat Buros ("Buros", 2);
		std::cout << GREEN << "Creating a High grade bureaucrat" << END << std::endl;
		std::cout << Buros << std::endl;
	}
	try
	{
		std::cout << RED << "Trying to create a too low grade bureaucrate :(" << END << std::endl;
		Bureaucrat MiniBuros("Non buros", 151);
		std::cout << MiniBuros << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}