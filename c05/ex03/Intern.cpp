#include "Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::Intern(const Intern &copy)
{
	if ( this != &copy )
		*this = copy;
	return;
}

Intern::~Intern()
{
	return;
}

Intern &Intern::operator =(const Intern &copy)
{
	(void)copy;
	return *this;
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	Form		*formula[3] = {
	new ShrubberyCreationForm(target), new RobotomyRequestForm(target),
	new PresidentialPardonForm(target)};

	std::string	tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i;
	i = 0;
	for (; i < 3; i++)
	{
		if (tab[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			Form		*n_form = formula[i];
			for (int j(0); j < 3; j++)
			{
				if (j != i)
					delete formula[j];
			}
			return n_form ;
		}
	}
	for (int j(0); j < 3; j++)
		delete formula[j];
	throw NoForm();
	return NULL;
}