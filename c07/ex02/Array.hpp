 #ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

template <class T>
class Array
{
	private:
		unsigned int	_size;
		T			*_array;
	public:
		Array(): _size(0), _array(NULL) {}
		Array(unsigned int n): _size(n) { this->_array = new T[n]; }
		Array(const Array &copy): _size(0), _array(NULL)
		{
			if ( this != &copy )
				*this = copy;
		}
		~Array() { 
			if (this->_array)
				delete[] this->_array;
		}

		class ErrorException: public std::exception
		{
			private:
				std::string	_str;
			public:
				ErrorException()	throw(): _str("Error: trying to access element out of limits!"){}
				virtual ~ErrorException()	throw(){}
				virtual const char* what() const	throw(){ return _str.c_str(); }
		};
		Array &operator =(const Array &copy)
		{
			if ( this != &copy )
			{
				this->_size = copy.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = copy._array[i];
			}
			return *this;
		}
		T	&operator[](unsigned int i) const { 
			if ( i >= this->_size )
				throw ErrorException();
			return this->_array[i];
		};
		unsigned int	size() const { return this->_size; }
};


#endif
