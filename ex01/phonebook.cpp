# include <iostream>
# include <iomanip>
# include "phonebook.hpp"

int	main(void)
{
	std::string	input;
	Phonebook	phonebook[8];
	int			i;
	int			k;

	std::cout << "Please enter one of the following commands : ADD, EXIT or SEARCH\n";
	i = 0;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i > 2)
				std::cout << "==> No more space in the phonebook. Please END the simulation or SEARCH for a contact <==\n";
			else
			{	
				phonebook[i].index = i;
				std::cout << "First name : ";
				std::getline(std::cin, phonebook[i].first_name);
 				std::cout << "Last name : ";
				std::getline(std::cin, phonebook[i].last_name);
				std::cout << "Nickname : ";
				std::getline(std::cin, phonebook[i].nickname);
				std::cout << "Phone number : ";
				std::getline(std::cin, phonebook[i].phone_number);
				std::cout << "Darkest secret : ";
				std::getline(std::cin, phonebook[i].darkest_secret);
				i++;
			}
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
				std::cout << "Phonebook is empty\n";
			std::cout << "Index     " << "|" << "First name" << "|" << "Last name " << "|" << "Nickname  " << "|\n";
			std::cout << "____________________________________________"<< std::endl;
			k = 0;
			while (k < i)
			{
				std::cout << std::setw(10) << phonebook[k].index << "|" ;

				if (phonebook[k].first_name.std::string::size() > 10)
				{
					phonebook[k].first_name[9] = '.';					
					phonebook[k].first_name.erase(10);
					std::cout << phonebook[k].first_name << "|" ;
				}
				else
					std::cout << std::setw(10) << phonebook[k].first_name << "|" ;

				if (phonebook[k].last_name.std::string::size() > 10)
				{
					phonebook[k].last_name[9] = '.';
					phonebook[k].last_name.erase(10);
					std::cout << phonebook[k].last_name << "|" ;
				}
				else
					std::cout << std::setw(10) << phonebook[k].last_name << "|" ;
			
				if (phonebook[k].nickname.std::string::size() > 10)
				{
					phonebook[k].nickname[9] = '.';
					phonebook[k].nickname.erase(10);
					std::cout << phonebook[k].nickname << "|" ;
				}
				else
					std::cout << std::setw(10) << phonebook[k].nickname << "|" << std::endl;
				k++;
			}
			std::cout << "Please enter the index of the desired contact :" << std::endl;
			std::cin >> k ;
			while (!std::cin)
			{
				std::cout << "Please enter an integer" << std::endl;
				std::cin >> k;
			}
			std::cout << "First name : " << phonebook[k].first_name << std::endl ;
			std::cout << "Last name : " << phonebook[k].last_name << std::endl ;
			std::cout << "Nickname : " << phonebook[k].nickname << std::endl ;
			std::cout << "Phone number : " << phonebook[k].phone_number << std::endl ;
			std::cout << "Darkest secret : " << phonebook[k].darkest_secret << std::endl ;
		}
		else if (input == "EXIT")
		{
			std::cout << "Deleting all contacts\n";
			break ;
		}
		input.clear();
	}
	return (0);
}