	#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>

class Karen
{
	private:
		std::string	_level;
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		typedef void (Karen::*ptr)();
		ptr			fct_p[4];

	public:
		Karen( void );
		~Karen( void );
		void complain( std::string level );
};

#endif