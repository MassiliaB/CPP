# include "PresidentialPardonForm.hpp"

/************ CONSTRUCTOR ***************/

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential form", 25, 5), _target("white house")
{
	std::cout << "Presidential default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("Presidential form", 25, 5), _target(target)
{
	std::cout << "Presidential constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	std::cout << "Presidential copy constructor called" << std::endl;
	return;
}

/************ DESTRUCTOR ***************/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

PresidentialPardonForm &PresidentialPardonForm::operator =(const PresidentialPardonForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

/************ METHODS ***************/

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > _grade_toexec)
		throw executor.GradeTooLowException();
	else
		pardoned();
}

void	PresidentialPardonForm::pardoned( void ) const
{
	std::cout << "-" << _target << "- HAS BEEN PARDONED BY ZAFOD BEEBLEBROX" << std::endl;
}