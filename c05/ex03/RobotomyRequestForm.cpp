#include "RobotomyRequestForm.hpp"

/************ CONSTRUCTOR ***************/

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy form", 72, 45), _target("home")
{
	std::cout << "Robotomy default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("Robotomy form", 72, 45), _target(target)
{
	std::cout << "Robotomy constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	std::cout << "Robotomy copy constructor called" << std::endl;
	return;
}

/************ DESTRUCTOR ***************/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

RobotomyRequestForm &RobotomyRequestForm::operator =(const RobotomyRequestForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

/************ METHODS ***************/

void	RobotomyRequestForm::robotomize( void ) const
{
	int fifty;

	srand(time(NULL));
	fifty =	rand() % 2;
	if (fifty == 0)
		std::cout << "-" << _target << "- HAS BEEN SUCCESFULLY ROBOTOMIZED" << std::endl;
	else
		std::cout << "CANNOT ROBOTOMIZE " << "-" << _target << "-" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > _grade_toexec)
		throw executor.GradeTooLowException();
	else
		robotomize();
}
