#include "mutantstack.hpp"

/************ CONSTRUCTOR ***************/

/*MutantStack::MutantStack(): _size(5), _top(-1)
{
	_stack = (T*)malloc(sizeof(T) * _size);
	return;
}

MutantStack::MutantStack( int size ): _size(size), _top(-1)
{
	_stack = (T*)malloc(sizeof(T) * _size);
	return;
}
*/
/************ DESTRUCTOR ***************/

/*MutantStack::~MutantStack()
{
	free(_stack);
	return;
}*/

/************ OPERATOR ***************/

/************ METHODS ***************/
/*
template<typename T>
int MutantStack<T>::isEmpty( void )
{
	if (_top == -1)
		return (1);
	return (0);
}

template<typename T>
int MutantStack<T>::isFull( void )
{
	if (_top == _size - 1)
		return (1);
	return (0);
}

template<typename T>
int MutantStack<T>::push( int n )
{
	if (isFull())
		return (0);
	++_top;
	_stack[_top] = n;
	_actualSize++;
	return (n);
}

template<typename T>
int MutantStack<T>::pop( void )
{
	int temp;

	if (isEmpty())
		return (0);
	temp = _stack[_top];
	--_top;
	_actualSize++;
	return (temp);
}

template<typename T>
int MutantStack<T>::top( void )
{
	return (_stack[_top]);
}

template<typename T>
int MutantStack<T>::size( void )
{
	return (_actualSize);
}


*/