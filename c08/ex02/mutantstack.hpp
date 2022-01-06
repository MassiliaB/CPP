 #ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <algorithm>
# include <stack>
# include <vector>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(){ }
		MutantStack(const MutantStack<T> &copy){ *this = copy; }
		MutantStack<T>& operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return *this;
		}
		~MutantStack(){ }

		typedef typename std::deque<T>::iterator iterator;
		iterator begin() { return this->c.begin();}
		iterator end() { return this->c.end();}
};

#endif
