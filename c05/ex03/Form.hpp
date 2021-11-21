#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include<fstream>
# include "Bureaucrat.hpp"
# define BLACK "\x1B[30m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[37m"
# define END "\033[0m"

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

