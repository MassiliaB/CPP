#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Love bureaucratie"), _grade(1)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator =(Bureaucrat const &copy)
{
	if ( this != &copy )
		this->_grade = copy.getGrade();
	return *this;
}

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy )
{
	o << copy.getName() << " bureaucrat grade " << copy.getGrade();
	return o;
}

int Bureaucrat::getGrade(void) const
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void Bureaucrat::increaseGrade(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decreaseGrade(void)
{
	if (this->_grade + 1 > 150)
		GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm( Form &form )
{
	try 
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}