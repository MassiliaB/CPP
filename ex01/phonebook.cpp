# include "Contacts.hpp"
# include "Phonebook.hpp"

int Phonebook::get_contacts(std::string input, int i)
{
	if (input == "ADD")
		i = add_c(contact, i);
	else if (input == "SEARCH")
		search_c(contact, i, input);
	else if (input == "EXIT")
	{
		std::cout << "Deleting all contacts\n";
		return (-1);
	}
	return (i);
}

int	main(void)
{
	std::string	input;
	Phonebook	phonebook;
	int			i;

	std::cout << "Please enter one of the following commands : ADD, EXIT or SEARCH\n";
	i = 0;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		i = phonebook.get_contacts(input, i);
		if (i == -1)
			break ;
		input.clear();
	}
	return (0);
}