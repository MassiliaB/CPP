# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("Presidential form", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator =(const PresidentialPardonForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > this-> _ok_toexec)
		throw GradeTooLowException();
	else
		pardoned();
}

void	PresidentialPardonForm::pardoned( void ) const
{
	std::cout << "-" << this->_target << "[- HAS BEEN PARDONED BY ZAFOD BEEBLEBROX]" << std::endl;
}