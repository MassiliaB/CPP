#include "Intern.hpp"

/************ CONSTRUCTOR ***************/

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	return;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
	return;
}

/************ DESTRUCTOR ***************/

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	return;
}

/************ OPERATOR ***************/

Intern &Intern::operator =(const Intern &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)copy;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Intern const &copy )
{
(void)copy;
//	o << i.getValue();
	return o;
}

/************ METHODS ***************/

Form *Intern::makeForm(std::string form, std::string target)
{
	ShrubberyCreationForm shrub(target);
	PresidentialPardonForm pres(target);
	RobotomyRequestForm robot(target);

	Form *formula[3] = {&shrub, &robot, &pres};
	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int i;
	i = 0;
	for (; i < 3; i++)
		if (tab[i] == form)
			break ;
	if (i == 3)
		std::cout << "Form not known" << std::endl;
	else
		std::cout << "Intern creates " << form << std::endl;
	return (formula[i]);
}