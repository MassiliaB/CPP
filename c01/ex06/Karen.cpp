#include "Karen.hpp"

Karen::Karen ( void )
{
	std::cout << "Yes, i'm actually creating a Karen\n";
	return ;
}

Karen::~Karen ( void )
{
	std::cout << "Thanks god, i'm destructing the Karen\n";
	return ;
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ] ";
	this->_level = "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! ";
	return ;
}
void Karen::info( void )
{
	std::cout << "[ INFO ] ";
	this->_level = "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! ";
	return ;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ] ";
	this->_level = "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month ";
	return ;
}
void Karen::error( void )
{
	std::cout << "[ ERROR ] ";
	this->_level = "This is unacceptable, I want to speak to the manager now ";
	return ;
}