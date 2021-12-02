# include "Contacts.hpp"
# include "Phonebook.hpp"

Phonebook::Phonebook( void )
{
	return ;
}

Phonebook::~Phonebook( void )
{
	return ;
}

void	Phonebook::search_contact( Contacts *contact, int i, std::string input )
{
	int			k;
	std::string	temp;

	if (i == 0)
		std::cout << "Phonebook is empty\n";
	else
	{
		std::cout << "Index     " << "|" << "First name" << "|" << "Last name " << "|" << "Nickname  " << "|\n";
		std::cout << "____________________________________________"<< std::endl;
		k = 0;
		while (k < i)
		{
			std::cout << std::setw(10) << contact[k].getIndex() << "|" ;
			if (contact[k].getF().size() > 10)
			{
				temp = contact[k].getF();
				temp[9] = '.';
				temp.erase(10);
				std::cout << temp << "|" ;
			}
			else
				std::cout << std::setw(10) << contact[k].getF() << "|" ;
			if (contact[k].getL().size() > 10)
			{
				temp = contact[k].getL();
				temp[9] = '.';
				temp.erase(10);
				std::cout << temp << "|" ;
			}
			else
				std::cout << std::setw(10) << contact[k].getL() << "|" ;		
			if (contact[k].getNick().size() > 10)
			{
				temp = contact[k].getNick();
				temp[9] = '.';
				temp.erase(10);
				std::cout << temp << "|" << std::endl;
			}
			else
				std::cout << std::setw(10) << contact[k].getNick() << "|" << std::endl;
			k++;
		}
		std::cout << "Please enter the index of the desired contact :" << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		while (!is_digit(input) || (is_digit(input) && (ft_atoi(input) < 0 || ft_atoi(input) >= i)) )
		{
			std::cout << "No existing index " << input << std::endl;
			std::cout << std::endl << "Please enter the index of the desired contact :" << std::endl;
			std::cout << ">";
			std::getline(std::cin, input);
		}
		k = ft_atoi(input);
		std::cout << "First name : " << contact[k].getF() << std::endl ;
		std::cout << "Last name : " << contact[k].getL() << std::endl ;
		std::cout << "Nickname : " << contact[k].getNick() << std::endl ;
		std::cout << "Phone number : " << contact[k].getPhone() << std::endl ;
		std::cout << "Darkest secret : " << contact[k].getDs() << std::endl ;
	}
}

int Phonebook::get_contacts( std::string input, int i )
{
	if (input == "ADD")
		i = contact[i].add_contact(i);
	else if (input == "SEARCH")
		search_contact(contact, i, input);
	else if (input == "EXIT")
	{
		std::cout << "Deleting all contacts\n";
		return (-1);
	}
	return (i);
}