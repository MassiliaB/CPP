 #ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern&copy);
		~Intern();

		Intern &operator =(const Intern &copy);

		Form  *makeForm(std::string form, std::string target);
		ShrubberyCreationForm *shrubClass(void);
		PresidentialPardonForm *presClass(void);
		RobotomyRequestForm *robotClass(void);
};

#endif
