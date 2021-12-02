#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contacts.hpp"

class Phonebook
{
	private:
		Contacts	contact[8];
	public:
		Phonebook( void );
		~Phonebook( void );
		int		get_contacts( std::string input, int i );
		void	search_contact( Contacts *contact, int i, std::string input );
};
int		is_digit(std::string input);
int		ft_atoi(std::string input);

#endif