#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

IMateriaSource &IMateriaSource::operator =(const IMateriaSource &copy)
{
	if ( this != &copy )
	{
		this->_value = copy.getValue();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, IMateriaSource const &copy )
{
	//o << i.getValue();
	return o;
}


