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
		int get_contacts(std::string input, int i);
};

int		is_digit(std::string input);
int		ft_atoi(std::string input);
int		add_c(Contacts *contact, int i);
void	search_c(Contacts *contact, int i, std::string input);

#endif