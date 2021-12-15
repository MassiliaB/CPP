#include "Form.hpp"

Form::Form(): _form("FIRST"), _signed(false), _ok_tosign(1), _ok_toexec(6)
{
	return;
}

Form::Form(std::string name, int tosign, int toexec): _form(name), _signed(false), _ok_tosign(tosign), _ok_toexec(toexec)
{
	if (this->_ok_toexec < 1 || this->_ok_tosign < 1)
		throw GradeTooHighException();
	else if (this->_ok_tosign > 150 || this->_ok_toexec > 150)
		throw GradeTooLowException();
	return;
}

Form::Form(const Form &copy): _ok_tosign(copy.getSign()), _ok_toexec(copy.getExec())
{
	*this = copy;
	return;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return;
}

Form &Form::operator =(const Form &copy)
{
	if ( this != &copy )
	{
		this->_signed = copy.isSigned();
	}
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


std::string Form::getName(void) const
{
	return this->_form;
}

int Form::isSigned(void) const
{
	return this->_signed;
}

void	Form::beSigned(Bureaucrat const &buros)
{
	if (buros.getGrade() <= this->_ok_tosign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

int		Form::getSign(void) const
{
	return this->_ok_tosign;
}

int		Form::getExec(void) const
{
	return this->_ok_toexec;
}