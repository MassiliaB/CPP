#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("Robotomy form", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator =(const RobotomyRequestForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	return *this;
}

void	RobotomyRequestForm::robotomize( void ) const
{
	srand(time(NULL));
	if ((rand() % 2) == 0)
		std::cout << "[-" << _target << "- HAS BEEN SUCCESFULLY ROBOTOMIZED]" << std::endl;
	else
		std::cout << "[CANNOT ROBOTOMIZE] " << "-" << _target << "-" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > _ok_toexec)
		throw GradeTooLowException();
	else
		robotomize();
}
