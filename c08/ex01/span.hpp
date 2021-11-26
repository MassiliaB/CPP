 #ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <vector>
# define INT_MAX 2147483647
class Span
{
	private:
		unsigned int	_N;
		unsigned int	_nbElem;
 		std::vector<int> _tab;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span&copy);
		~Span();

		Span &operator =(const Span &copy);
		void addNumber(unsigned int add);
		int	shortestSpan( void );
		int	longestSpan( void );
		int	_error( std::string str );
};

std::ostream &operator<<( std::ostream & o, Span &copy );

#endif