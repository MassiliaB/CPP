 #ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm(const ShrubberyCreationForm&copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator =(const ShrubberyCreationForm &copy);
		void	create_file( void ) const;
		void	execute(Bureaucrat const &executor) const;
};

#endif
