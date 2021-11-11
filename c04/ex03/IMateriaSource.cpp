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
