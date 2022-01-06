# include "span.hpp"
# include <time.h>

int main(void)
{
	Span sp(1000);

  	srand( time( NULL ) );
	for (int i(0); i < 1000; i++)
		sp.addNumber(rand() % 1000);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try{
		sp.addNumber(56);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp2 = Span(5);
	sp2.addNumber(5);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}