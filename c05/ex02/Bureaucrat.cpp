#include "Bureaucrat.hpp"

/************ CONSTRUCTOR ***************/

Bureaucrat::Bureaucrat(): _name("Love bureaucratie"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

/************ DESTRUCTOR ***************/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

Bureaucrat &Bureaucrat::operator =(Bureaucrat const &copy)
{
	if ( this != &copy )
		this->_grade = copy.getGrade();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy )
{
	o << copy.getName() << " bureaucrat grade " << copy.getGrade();
	return o;
}

/************ METHODS ***************/

std::string Bureaucrat::GradeTooHighException(void) const
{
	return ("Grade too high !");
}

std::string Bureaucrat::GradeTooLowException(void) const
{
	return ("Grade too low !");
}

int Bureaucrat::getGrade(void) const
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		return (this->_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
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
	catch (std::string ret)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << ret << std::endl;
	}
}

void	Bureaucrat::executeForm( Form const &form )
{
	try 
	{
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch (std::string ret)
	{
		std::cout << _name << " cannot sign " << form.getName() << "because " << ret << std::endl;
	}
}