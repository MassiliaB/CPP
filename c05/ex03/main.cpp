#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void )
{
		std::cout << CYAN;
		Bureaucrat Buros("B3", 2);
		std::cout << std::endl;
		std::cout << END;
	{
		std::cout << GREEN;
		ShrubberyCreationForm First("Shi");

		std::cout << Buros << std::endl;
		std::cout << First << std::endl;
		Buros.signForm(First);
		Buros.executeForm(First);
		std::cout << First << std::endl;
	}
		std::cout << END;
		std::cout << std::endl;
	{
		std::cout << YELLOW;
		RobotomyRequestForm Sec("Rob");

		std::cout << Buros << std::endl;
		std::cout << Sec << std::endl;
		Buros.signForm(Sec);
		Buros.executeForm(Sec);
		std::cout << Sec << std::endl;
	}
		std::cout << END;
		std::cout << std::endl;
	{
		std::cout << CYAN;
		PresidentialPardonForm Third("President");
		
		std::cout << Buros << std::endl;
		std::cout << Third << std::endl;
		Buros.signForm(Third);
		Buros.executeForm(Third);
		std::cout << Third << std::endl;
		std::cout << Buros << std::endl;
	}
		std::cout << END;
		std::cout << std::endl;
	{
		std::cout << MAGENTA;
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
		std::cout << END;
	return (0);
}