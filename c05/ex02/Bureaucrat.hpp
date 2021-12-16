 #ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Form.hpp"

class Form;
class Bureaucrat
{
	protected:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&copy);
		virtual ~Bureaucrat(){}

		Bureaucrat &operator =(const Bureaucrat &copy);
	
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

		virtual std::string	getName(void) const;
		int					getGrade(void) const;
		void				increaseGrade(void);
		void 				decreaseGrade(void);	
		void 				signForm(Form &form );
		void 				executeForm( Form const & form );
};

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy );

#endif