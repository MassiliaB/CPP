#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	Bureaucrat Buros("B3", 2);
	std::cout << GREEN << "Creating a grade " << Buros.getGrade() << " bureaucrate." << END << std::endl;
	std::cout << Buros << std::endl;

	Form First("F1", 2, 150);
	std::cout << GREEN << "Creating a form " << First.getSign() << " to be signed and " << First.getExec() << " to be exec."<< END << std::endl;

	Buros.signForm(First);
	std::cout << First << std::endl;
	std::cout << std::endl;
	{
		std::cout << RED << "Trying to create a too low grade bureaucrate :(" << END << std::endl;
		try
		{
			Bureaucrat MiniBuros("Non buros", 151);
			Form First("form1", 2, 150);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}


	return (0);
}