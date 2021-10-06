# include "Contacts.hpp"
# include "Phonebook.hpp"

int	add_c(Contacts *contact, int i)
{
	if (i > 2)
		std::cout << "==> No more space in the phonebook. Please END the simulation or SEARCH for a contact <==\n";
	else
	{
		contact[i].index = i;
		std::cout << "First name : ";
		std::getline(std::cin, contact[i].first_name);
		std::cout << "Last name : ";
		std::getline(std::cin, contact[i].last_name);
		std::cout << "Nickname : ";
		std::getline(std::cin, contact[i].nickname);
		std::cout << "Phone number : ";
		std::getline(std::cin, contact[i].phone_number);
		std::cout << "Darkest secret : ";
		std::getline(std::cin, contact[i].darkest_secret);
		i++;
	}
	return (i);
}

void	search_c(Contacts *contact, int i, std::string input)
{
	int	k;

	if (i == 0)
		std::cout << "Phonebook is empty\n";
	else
	{
		std::cout << "Index     " << "|" << "First name" << "|" << "Last name " << "|" << "Nickname  " << "|\n";
		std::cout << "____________________________________________"<< std::endl;
		k = 0;
		while (k < i)
		{
			std::cout << std::setw(10) << contact[k].index << "|" ;
			if (contact[k].first_name.std::string::size() > 10)
			{
				contact[k].first_name[9] = '.';					
				contact[k].first_name.erase(10);
				std::cout << contact[k].first_name << "|" ;
			}
			else
				std::cout << std::setw(10) << contact[k].first_name << "|" ;
			if (contact[k].last_name.std::string::size() > 10)
			{
				contact[k].last_name[9] = '.';
				contact[k].last_name.erase(10);
				std::cout << contact[k].last_name << "|" ;
			}
			else
				std::cout << std::setw(10) << contact[k].last_name << "|" ;
		
			if (contact[k].nickname.std::string::size() > 10)
			{
				contact[k].nickname[9] = '.';
				contact[k].nickname.erase(10);
				std::cout << contact[k].nickname << "|" << std::endl;
			}
			else
				std::cout << std::setw(10) << contact[k].nickname << "|" << std::endl;
			k++;
		}
		std::cout << "Please enter the index of the desired contact :" << std::endl;
		std::getline(std::cin, input);
		while (!is_digit(input))
		{
			std::cout << "Please enter an integer" << std::endl;
			std::getline(std::cin, input);
		}
		k = ft_atoi(input);
		std::cout << "First name : " << contact[k].first_name << std::endl ;
		std::cout << "Last name : " << contact[k].last_name << std::endl ;
		std::cout << "Nickname : " << contact[k].nickname << std::endl ;
		std::cout << "Phone number : " << contact[k].phone_number << std::endl ;
		std::cout << "Darkest secret : " << contact[k].darkest_secret << std::endl ;
	}
}