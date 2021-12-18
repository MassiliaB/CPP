 #ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <vector>

class Span
{
	private:
		unsigned int		_N;
		unsigned int		_nbElem;
 		std::vector<int>	_tab;
	public:
		Span(): _N(5), _nbElem(0) {}
		Span( unsigned int N ): _N(N), _nbElem(0) {}
		Span(const Span&copy);
		~Span() {}
		class Error: public std::exception
		{
			private:
				std::string	_str;
			public:
				Error()	throw(): _str("Grade too low !"){}
				virtual ~Error() throw(){}
				virtual const char* what() const throw(){ return _str.c_str(); }
		};
		Span	&operator =(const Span &copy);
		void	addNumber(unsigned int add);
		int		shortestSpan( void );
		int		longestSpan( void );
		int		_error( std::string str );
};

std::ostream &operator<<( std::ostream & o, Span &copy );

#endif