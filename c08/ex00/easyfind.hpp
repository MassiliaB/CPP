 #ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <vector>
# include <stdio.h>
#include <algorithm>
#include <exception>
 
class Error: public std::exception
{
	private:
		std::string _str;
	public:
		Error() throw() :_str("Error: element not found"){}
		virtual const char* what() const throw(){ return _str.c_str(); }
		virtual ~Error() throw(){}
};

template < typename T>
typename T::iterator easyfind(T const &a, int i)
{
	typename T::iterator it;

  	it = find(a.begin(), a.end(), i);
	if (it != a.end())
		return (it);
	else
		throw (Error());
}

#endif
