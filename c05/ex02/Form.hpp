#ifndef FORM_HPP
# define FORM_HPP

# define BLACK "\x1B[30m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[37m"
# define END "\033[0m"

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	protected:
		std::string	const	_form;
		bool				_signed;
		int	const			_ok_tosign;
		int	const			_ok_toexec;
	public:
		Form();
		Form(std::string name, int tosign, int toexec);
		Form(const Form&copy);
		virtual ~Form(){}
		
		Form &operator =(const Form &copy);
		std::string		getName(void) const;
		int				isSigned(void) const;
		int				getSign(void) const;
		int				getExec(void) const;
		void			beSigned(Bureaucrat const &buros);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		class GradeTooLowException: public std::exception
		{
			private:
				std::string	_str;
			public:
				GradeTooLowException()	throw(): _str("Grade too low !"){}
				virtual ~GradeTooLowException() throw(){}
				virtual const char* what() const throw(){ return _str.c_str(); }
		};
		class GradeTooHighException: public std::exception
		{
			private:
				std::string	_str;
			public:
				GradeTooHighException()	throw(): _str("Grade too high !"){}
				virtual ~GradeTooHighException() throw(){}
				virtual const char* what() const throw(){ return _str.c_str(); }
		};
};

std::ostream &operator<<( std::ostream & o, Form &copy );

#endif