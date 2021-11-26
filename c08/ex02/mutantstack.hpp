 #ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <algorithm>
# include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
	private:
		T	*_stack;
		typedef MutantStack<T>	iterator;
	public:
		MutantStack(){
			*_stack = new T(5);
			std::stack<T> Stack(_stack);
		};
		MutantStack( int size )
		{
			*_stack = new T(size);
			std::stack<T> Stack(_stack);
		};
		~MutantStack()
		{
			delete[] _stack;
		};
};
template <class T>
typename MutantStack::iterator begin()
{
	return *T; 
}

#endif

