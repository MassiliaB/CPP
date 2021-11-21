#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	Bureaucrat Buros("B3", 2);
	Form First("F1", 2, 150);
	{
		std::cout << "\x1B[31m";
		try
		{
			Bureaucrat MiniBuros("Non buros", 151);
			Form First("form1", 2, 150);
		}
		catch (std::string ret)
		{
			std::cerr << "Exception " << ret << std::endl;
		}
		std::cout << "\033[0m";
	}

	std::cout << std::endl;
	std::cout << Buros << std::endl;
	std::cout << First << std::endl;
	Buros.signForm(First);
	std::cout << First << std::endl;
	std::cout << std::endl;

	return (0);
}