 #ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&copy);
		~Bureaucrat();
	
		Bureaucrat &operator =(const Bureaucrat &copy);
	
		std::string		GradeTooHighException(void) const;
		std::string		GradeTooLowException(void) const;
		std::string		GetName(void) const;
		int				GetGrade(void) const;
		void			IncreaseGrade(void);
		void 			DecreaseGrade(void);	
};

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy );

#endif
