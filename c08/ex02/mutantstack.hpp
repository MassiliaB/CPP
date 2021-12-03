 #ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:
		T							*_stack;
		typedef  MutantStack::<T>::iterator	it;
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
		~MutantStack(){ delete[] _stack; };
		MutantStack::it begin(){ return T.begin(); }
		MutantStack::it	 end(){ return T.end(); }
};

#endif
