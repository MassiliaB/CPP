#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main( void )
{
		Bureaucrat Buros("B3", 2);
		std::cout << std::endl;
	{
		ShrubberyCreationForm First("Shi");

		std::cout << std::endl;
		std::cout << Buros << std::endl;
		std::cout << First << std::endl;
		Buros.signForm(First);
		Buros.executeForm(First);
		std::cout << First << std::endl;
		std::cout << std::endl;
	}
	{
		RobotomyRequestForm Sec("Rob");

		std::cout << std::endl;
		std::cout << Buros << std::endl;
		std::cout << Sec << std::endl;
		Buros.signForm(Sec);
		Buros.executeForm(Sec);
		std::cout << Sec << std::endl;

	}
	{
		PresidentialPardonForm Third("President");
		
		std::cout << std::endl;
		std::cout << Buros << std::endl;
		std::cout << Third << std::endl;
		Buros.signForm(Third);
		Buros.executeForm(Third);
		std::cout << Third << std::endl;
		std::cout << Buros << std::endl;
		std::cout << std::endl;
	}
	return (0);
}