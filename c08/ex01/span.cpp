#include "span.hpp"

/************ CONSTRUCTOR ***************/

Span::Span(): _N(5), _nbElem(0)
{
	return;
}

Span::Span(unsigned int N): _N(N), _nbElem(0)
{
	return;
}

Span::Span(const Span &copy): _N(copy._N), _nbElem(copy._nbElem), _tab(copy._tab)
{
	*this = copy;
	return;
}

/************ DESTRUCTOR ***************/

Span::~Span()
{
	return;
}

/************ OPERATOR ***************/

Span &Span::operator =(const Span &copy)
{
	if ( this != &copy )
	{
		this->_N = copy._N;
		this->_nbElem = copy._nbElem;
		this->_tab = copy._tab;
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

/************ METHODS ***************/

int	Span::_error( std::string str )
{
	std::cout << str << std::endl;
	return (0);
}

void Span::addNumber( unsigned int add )
{
	if (this->_nbElem >= this->_N)
		throw (_error("Can't add more numbers\n"));
	else
		_tab.push_back(add);
	_nbElem++;
}

int	Span::shortestSpan( void )
{
	std::vector<int>::iterator	it;
	int						shortest;

	if (_tab.empty() || _tab.size() == 1)
		throw (_error("There is nothing to sort there\n"));
	shortest = INT_MAX;
	for ( it = _tab.begin(); it != _tab.end(); ++it )
	{
		if (std::max(*it, *(it + 1)) - std::min(*it, *(it + 1)) < shortest)
			shortest = std::max (*it, *(it + 1)) - std::min(*it, *(it + 1));
	}
	return (shortest);
}

int	Span::longestSpan( void )
{
	std::vector<int>::iterator	it;
	int						longest;

	if (_tab.empty() || _tab.size() == 1)
		throw (_error("There is nothing to sort there\n"));
	longest = 0;
	for( it = _tab.begin(); it != _tab.end(); ++it )
	{
		if (std::max(*it, *(it + 1)) - std::min(*it, *(it + 1)) > longest)
			longest = std::max (*it, *(it + 1)) - std::min(*it, *(it + 1));
	}
	return (longest);
}