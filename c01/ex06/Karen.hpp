#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>
# include <map>

class Karen
{
	private:
		std::string _level;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen( void );
		~Karen( void );
		typedef	void (Karen::*ptr)();
		ptr		fct_p[4];
		void complain( std::string level );
		void exec(int i);
		enum numlev { zero, one, two, three, };
};

#endif