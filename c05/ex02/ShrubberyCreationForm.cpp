#include "ShrubberyCreationForm.hpp"

/************ CONSTRUCTOR ***************/

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrub form", 145, 137), _target("Shrub")
{
	std::cout << "Shrubbery default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("shrub form", 145, 137), _target(target)
{
	std::cout << "Shrubbery constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	std::cout << "Shrubbery copy constructor called" << std::endl;
	return;
}

/************ DESTRUCTOR ***************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

/************ METHODS ***************/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > _grade_toexec)
		throw executor.GradeTooLowException();
	else
		create_file();
}

void	ShrubberyCreationForm::create_file(void) const
{
	std::ofstream file;
	std::string t = _target + "_shrubbery";
	const char *target = t.c_str();
  	file.open(target);

	file << "THIS IS A TREE IN ASCII CHAR" << std::endl;
	file.close();
}
