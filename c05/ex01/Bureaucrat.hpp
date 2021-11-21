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
		~Bureaucrat();
	
		Bureaucrat &operator =(const Bureaucrat &copy);
	
		virtual std::string				GradeTooHighException(void) const;
		virtual std::string				GradeTooLowException(void) const;
		virtual std::string				getName(void) const;
		int				getGrade(void) const;
		void			increaseGrade(void);
		void 			decreaseGrade(void);	
		void 			signForm(Form &form );
};

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy );

#endif
