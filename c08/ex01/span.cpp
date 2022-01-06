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

void Span::addNumber( unsigned int add )
{
	if (this->_nbElem + 1 > this->_N)
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
	std::vector<int>::iterator	ite;
	int							shortest;

	if (this->_tab.empty() || this->_tab.size() == 1)
		throw Error();
	shortest = INT_MAX;
	for (it = this->_tab.begin(), ite = this->_tab.begin() + 1; it != this->_tab.end(); it++ )
	{
		for (; ite != this->_tab.end(); ite++ )
		{
			if (std::max(*it, *ite) - std::min(*it, *ite) < shortest)
				shortest = std::max(*it, *ite) - std::min(*it, *ite);
		}
	}
	return shortest;
}

int	Span::longestSpan( void )
{
	std::vector<int>::iterator	it;
	int							longest;

	if (this->_tab.empty() || this->_tab.size() == 1)
		throw Error();
	longest = *std::max_element(this->_tab.begin(), this->_tab.end()) - *std::min_element(this->_tab.begin(), this->_tab.end());
	return longest;
}