#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <iomanip>

class Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
		int			index;
	public :
		Contacts( void );
		~Contacts( void );
		int				add_contact( int i );
		std::string		getF( void );
		std::string		getL( void );
		std::string		getNick( void );
		std::string		getDs( void );
		std::string		getPhone( void );
		int				getIndex( void );
};

#endif