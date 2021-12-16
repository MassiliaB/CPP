#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void )
{
	Intern someRandomIntern;
	std::cout << GREEN << "Creating some rondom intern" << END << std::endl;

	Form* rrf;
	std::cout << GREEN << "Creating a form" << END << std::endl;

	Bureaucrat Buros("B3", 2);
	std::cout << GREEN << "Creating a grade " << Buros.getGrade() << " bureaucrate." << END << std::endl;

	Intern fakeIntern;
	std::cout << RED << "Creating a fake intern" << END << std::endl;
	Form *form;
	std::cout << RED << "Creating another form" << END << std::endl;
	try
	{
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Shubby");
		std::cout << std::endl;

		std::cout << YELLOW << "Before signature :" << END << std::endl;
		std::cout << *rrf << std::endl;
		Buros.signForm(*rrf);
		Buros.executeForm(*rrf);
		std::cout << YELLOW << "After signature :" << END << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << std::endl;


		form = fakeIntern.makeForm("oh sh**", "Faking");
		Buros.signForm(*form);
		delete form;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl			;
	
	}
	return (0);
}