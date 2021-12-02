# include "Contacts.hpp"
# include "Phonebook.hpp"

Contacts::Contacts( void )
{
	return ;
}

Contacts::~Contacts( void )
{
	return ;
}

std::string Contacts::getF( void )
{
	return (this->first_name);
}

std::string Contacts::getL( void )
{
	return (this->last_name);
}

std::string Contacts::getNick( void )
{
	return (this->nickname);
}

std::string Contacts::getDs( void )
{
	return (this->darkest_secret);
}

std::string Contacts::getPhone( void )
{
	return (this->phone_number);
}

int Contacts::getIndex( void )
{
	return (this->index);
}

int	Contacts::add_contact( int i )
{
	if (i > 7)
		std::cout << "==> No more space in the phonebook. Please END the simulation or SEARCH for a contact <==\n";
	else
	{
		index = i;
		std::cout << "First name : ";
		std::getline(std::cin, first_name);
	
		std::cout << "Last name : ";
		std::getline(std::cin, last_name);

		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
		while (1)
		{
			std::cout << "Phone number : ";
			std::getline(std::cin, phone_number);
			if (is_digit(phone_number))
				break ;
			std::cout << "Please enter a number !" << std::endl;
		}
		std::cout << "Darkest secret : ";
		std::getline(std::cin, darkest_secret);
		i++;
	}
	return (i);
}