 #ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <stdio.h>
# include <vector>
# include <algorithm>
# include <exception>

class Error: public std::exception
{
	private:
		std::string _str;
	public:
		Error() throw() :_str("Error: element not found"){}
		virtual const char* what() const throw(){ return _str.c_str(); }
		virtual ~Error() throw(){}
};

template <typename T>
typename T::iterator easyfind(T &cont, int i)
{
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), i);
	if (it != cont.end())
		return it;
	else
		throw Error();
}

#endif
