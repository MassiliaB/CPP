#include "span.hpp"

Span::Span(const Span &copy): _N(copy._N), _nbElem(copy._nbElem), _tab(copy._tab)
{
	*this = copy;
	return;
}

Span &Span::operator =(const Span &copy)
{
	if ( this != &copy )
	{
		this->_N = copy._N;
		this->_nbElem = copy._nbElem;
		this->_tab = copy._tab;
	}
	return *this;
}

int	Span::_error( std::string str )
{
	std::cout << str << std::endl;
	return 0;
}

void Span::addNumber( unsigned int add )
{
	if (this->_nbElem + 1 >= this->_N)
		throw Error();
	else
	{
		this->_tab.push_back(add);
		this->_nbElem++;
	}
}

int	Span::shortestSpan( void )
{
	std::vector<int>::iterator	it;
	int							shortest;

	if (this->_tab.empty() || this->_tab.size() == 1)
		throw Error();
	shortest = INT_MAX;
	for ( it = this->_tab.begin(); it != this->_tab.end(); it++ )
	{
		if (std::max(*it, *(it)) - std::min(*it, *(it)) < shortest)
			shortest = std::max (*it, *(it)) - std::min(*it, *(it));
	}
	return shortest;
}

int	Span::longestSpan( void )
{
	std::vector<int>::iterator	it;
	int							longest;

	if (this->_tab.empty() || this->_tab.size() == 1)
		throw Error();
	longest = 0;
	for( it = this->_tab.begin(); it != this->_tab.end(); it++ )
	{
		if (std::max(*it, *(it)) - std::min(*it, *(it)) > longest)
			longest = std::max (*it, *(it)) - std::min(*it, *(it));
	}
	return (longest);
}