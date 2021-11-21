#include "Bureaucrat.hpp"

int main( void )
{
	{
		try
		{
			Bureaucrat Buros ("Buros", 2);
			std::cout << Buros << std::endl;
			Bureaucrat MiniBuros("Non buros", 151);
			std::cout << MiniBuros << std::endl;
		}
		catch (std::string ret)
		{
			std::cerr << "Exception " << ret << std::endl;
		}
	}
	return (0);
}