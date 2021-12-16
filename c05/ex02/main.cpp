#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	Bureaucrat Buros("B3", 2);
	std::cout << GREEN << "Creating a grade " << Buros.getGrade() << " bureaucrate." << END << std::endl;
	std::cout << Buros << std::endl << std::endl;
	{
		ShrubberyCreationForm First("Shi");
		std::cout << GREEN << "Creating a form " << First.getSign() << " to be signed and " << First.getExec()
		<< " to be exec."<< END << std::endl;

		std::cout << YELLOW << "Before signature :" << END << std::endl;
		std::cout << First << std::endl;
		Buros.signForm(First);
		Buros.executeForm(First);
		std::cout << YELLOW << "After signature :" << END << std::endl;
		std::cout << First << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		RobotomyRequestForm Sec("Robs");
		std::cout << GREEN << "Creating a form " << Sec.getSign() << " to be signed and " << Sec.getExec()
		<< " to be exec."<< END << std::endl;

		std::cout << YELLOW << "Before signature :" << END << std::endl;
		std::cout << Sec << std::endl;
		Buros.signForm(Sec);
		Buros.executeForm(Sec);
		std::cout << YELLOW << "After signature :" << END << std::endl;
		std::cout << Sec << std::endl;
	}
	{
		std::cout << std::endl;
		PresidentialPardonForm Third("President");
		std::cout << GREEN << "Creating a form " << Third.getSign() << " to be signed and " << Third.getExec()
		<< " to be exec."<< END << std::endl;

		std::cout << YELLOW << "Before signature :" << END << std::endl;
		std::cout << Third << std::endl;
		Buros.signForm(Third);
		Buros.executeForm(Third);
		std::cout << YELLOW << "After signature :" << END << std::endl;
		std::cout << Third << std::endl;
	}
/*****************Cas d'echec ******************/
	try
	{
		std::cout << std::endl;
		Bureaucrat Echec("C6", 26);
		std::cout << RED << "Trying to create a too low a grade bureaucrate." << END << std::endl;
		std::cout << Echec << std::endl;
		
		PresidentialPardonForm Four("President");
		std::cout << YELLOW << "Before signature :" << END << std::endl;
		std::cout << Four << std::endl;
		Echec.signForm(Four);
		Echec.executeForm(Four);
		std::cout << YELLOW << "After signature :" << END << std::endl;
		std::cout << Four << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << '\n';
	}
	
	return (0);
}