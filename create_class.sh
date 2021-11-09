#!/bin/sh


class_hpp=$(echo $1 | tr '[:lower:]' '[:upper:]')

if [ ! $1 ]
then
	echo "1st argument : the name of the class you want to create, don't forget to capitalize the first letter"
	echo "2nd argument : the name of the directory and subdirectory to put your file in (if not there)"
elif [ ! -e $1 ]
then
	echo "#include \"$1.hpp\"

$1::$1()
{
	std::cout << \"Default constructor called\" << std::endl;
	return;
}

$1::~$1()
{
	std::cout << \"Destructor called\" << std::endl;
	return;
}

$1::$1(const $1 &copy)
{
	std::cout << \"Copy constructor called\" << std::endl;
	*this = copy;
	return;
}
$1 &$1::operator =(const $1 &copy)
{
	std::cout << \"Assignation operator called\" << std::endl;
	return *this;
}
" > "$1.cpp"

	echo " #ifndef ${class_hpp}_HPP
# define ${class_hpp}_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class $1
{
	private:
	public:
		$1();
		$1(const $1&copy);
		$1 &operator =(const $1 &copy);
		~$1();
 };

#endif" > "$1.hpp"
	echo "$1.cpp and $1.hpp created"
fi


if [ $2 ]
then
	if [[ ! -d $2 ]]
	then
		echo "Directory $2 not found"
	else
		mv $1.cpp > $2
	fi
fi


