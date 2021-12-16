#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("shrub form", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	return;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator =(const ShrubberyCreationForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		return ;
	if (executor.getGrade() > this->_ok_toexec)
		throw GradeTooLowException();
	else
		create_file();
}

void	ShrubberyCreationForm::create_file(void) const
{
	std::string name = _target + "_shrubbery";
	std::fstream file;
	
	file.open(name.c_str(), std::ios_base::out);
	if (!file.is_open())
		std::cout << "Failed to create " << name << std::endl;
	else
		file << "THIS IS A TREE IN ASCII CHAR" << std::endl;
	file.close();
	std::cout << "[File successfuly created !]" << std::endl;
}
