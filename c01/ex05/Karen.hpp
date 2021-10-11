#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>

class Karen
{
	private:
		std::string _level;
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );

	public:
		Karen( void );
		~Karen( void );
		void complain( std::string level );
};

#endif