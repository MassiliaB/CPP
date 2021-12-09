 #ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <algorithm>
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(){ }
		MutantStack(const MutantStack<T> &copy){ *this = src; }
		MutantStack<T>& operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return *this;
		}
		~MutantStack(){ }
		typedef typename std::stack<T>::iterator iterator;

		iterator begin() { return this->c.begin();}
		iterator end() { return this->c.end();}
};

#endif
