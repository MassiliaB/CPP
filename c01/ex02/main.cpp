#include <iostream>

int main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Hi im the adress of string:		" << &string << std::endl;
	std::cout << "Hi im the adress with stringPTR:	" << stringPTR << std::endl;
	std::cout << "Hi im the adress with stringREF:	" << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "StringPTR says:	" << *stringPTR << std::endl;
	std::cout << "StringREF says:	" << stringREF << std::endl;
	return (0);
}