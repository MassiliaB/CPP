 #ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# define BLACK "\x1B[30m"
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN "\x1B[36m"
# define WHITE "\x1B[37m"
# define END "\033[0m"


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
		std::string		GetName(void) const;
		int				GetGrade(void) const;
		void			IncreaseGrade(void);
		void 			DecreaseGrade(void);	
};

std::ostream &operator<<( std::ostream & o, Bureaucrat &copy );

#endif
