#include "Form.hpp"

/************ CONSTRUCTOR ***************/

Form::Form(): _form("base"), _signed(false), _grade_tosign(150), _grade_toexec(150)
{
	std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form(std::string name, int tosign, int toexec): _form(name), _signed(false), _grade_tosign(tosign), _grade_toexec(toexec)
{
	if (_grade_toexec < 1 || _grade_tosign < 1)
		throw GradeTooHighException();
	else if (_grade_tosign > 150 || _grade_toexec > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form(const Form &copy): _form("base"), _signed(false), _grade_tosign(1), _grade_toexec(6)
{
	*this = copy;
	if (_grade_toexec < 1 || _grade_tosign < 1)
		throw GradeTooHighException();
	else if (_grade_tosign > 150 || _grade_toexec > 150)
		throw GradeTooLowException();
	std::cout << "Form copy constructor called" << std::endl;
	return;
}
/************ DESTRUCTOR ***************/

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

Form &Form::operator =(const Form &copy)
{
	if ( this != &copy )
		this->_signed = copy.isSigned();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Form &copy )
{
	if (copy.isSigned())
		o << copy.getName() << " formular is signed";
	else
		o << copy.getName() << " formular is not signed";
	return o;
}

/************ METHODS ***************/

std::string Form::getName(void) const
{
	return (this->_form);
}

int Form::isSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const &buros)
{
	if (buros.getGrade() <= _grade_tosign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::string Form::GradeTooHighException(void) const
{
	return ("Grade too high !");
}

std::string Form::GradeTooLowException(void) const
{
	return ("Grade too low !");
}
