 #ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
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
		std::string		getName(void) const;
		int				isSigned(void) const;
		void			beSigned(Bureaucrat const &buros);
		std::string		GradeTooHighException(void) const;
		std::string		GradeTooLowException(void) const;
 };

std::ostream &operator<<( std::ostream & o, Form &copy );

#endif
