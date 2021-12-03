#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>
# include <map>

class Karen
{
	private:
		std::string		_what;
		int				_level;
		typedef	void	(Karen::*ptr)();
		ptr				_fct_p[4];
		void			debug( void );
		void 			info( void );
		void 			warning( void );
		void 			error( void );
	
	public:
		Karen( void );
		~Karen( void );
		void	setLevel( std::string whatLevel );
		void	complain( );
		void	exec(int i);
};

#endif