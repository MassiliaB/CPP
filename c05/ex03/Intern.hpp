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
		class NoForm: public std::exception
		{
			private:
				std::string	_str;
			public:
				NoForm()	throw(): _str("Form not found !"){}
				virtual ~NoForm() throw(){}
				virtual const char* what() const throw(){ return _str.c_str(); }
		};
		Form					*makeForm(std::string form, std::string target);
};

#endif
