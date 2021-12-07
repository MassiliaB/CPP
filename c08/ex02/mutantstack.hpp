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
	private:
		T		*_stack;
		size_t	_size;
	public:
		MutantStack<T>(): _size(0){ };
		~MutantStack<T>(){ delete[] _stack; };

		typedef typename std::deque<T>::iterator iterator;
		iterator begin();
		iterator end();
};

#endif
