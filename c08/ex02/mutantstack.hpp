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
		MutantStack(): std::stack<T>(){ };
		MutantStack(const MutantStack &copy): std::stack<T>(copy){ };
		~MutantStack(){ };
		typedef typename std::deque<T>::iterator iterator;
		iterator begin() { return this->c.begin();}
		iterator end() { return this->c.end();}
};

#endif
