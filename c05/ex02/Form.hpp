#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include<fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	protected:
		std::string	const	_form;
		bool				_signed;
		int	const			_grade_tosign;
		int	const			_grade_toexec;
	public:
		Form();
		Form(std::string name, int tosign, int toexec);
		Form(const Form&copy);
		~Form();
		
		Form &operator =(const Form &copy);
		std::string				getName(void) const;
		int						isSigned(void) const;
		void					beSigned(Bureaucrat const &buros);
		virtual std::string		GradeTooHighException(void) const;
		virtual std::string		GradeTooLowException(void) const;
		virtual void			execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<( std::ostream & o, Form &copy );

#endif

