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
	std::cout << "Shrubbery destructor called" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &copy)
{
	if ( this != &copy )
		this->_signed = isSigned();
	return *this;
}

void	ShrubberyCreationForm::create_file(void) const
{
	std::string 	name = _target + "_shrubbery";
	try
	{
		std::ofstream	file(name.c_str(), std::ios::out);
		file.open(file);
		file << "THIS IS A TREE IN ASCII CHAR" << std::endl;
		file.close();
	}
	catch (std::string failed)
	{
		std::cout << failed << " " << name << std::endl;
	}
}
