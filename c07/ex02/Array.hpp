 #ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

template <class T>
class Array
{
	private:
		int _size;
		T *_array;
	public:
		Array(): _size(1), _array(NULL)
		{
			_array = new T[_size];
			return ;
		};
		Array(unsigned int n): _size(n)
		{
			_array = new T[n];
			//int *a = new int();
			//std::cout << a<< std::endl;
			return ;
		};
		Array(const Array&copy)
		{
			*this = copy;
			return ;
		};
		~Array() { delete[] _array;};

		Array &operator =(const Array &copy)
		{
			if (this != copy)
			{
				this->_size = copy.size();
				_array = new T[_size];
				for (int i = 0; i < _size; i++)
					_array[i] = copy[i];
			}
			return (*this);
		}
		T &operator[](int i)
		{
			return (_array[i]);
		}
		int	size()
		{
			return (_size);
		}
};

template <typename T>
std::ostream &operator<<( std::ostream & o, Array<T> &copy )
{
	for (int i = 0; i < copy.size(); ++i)
		o << "array[" << copy[i] << "]";
	return (o);
}
#endif
