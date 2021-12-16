 #ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;
	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm(const RobotomyRequestForm&copy);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator =(const RobotomyRequestForm &copy);

		void	robotomize() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif
