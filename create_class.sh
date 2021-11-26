#!/bin/sh


class_hpp=$(echo $1 | tr '[:lower:]' '[:upper:]')

if [ ! $1 ]
then
	echo "1st argument : the name of the class you want to create"
	echo "2nd argument : the target directory if not in the current"
elif [ ! -e $1 ]
then
	echo "#include \"$1.hpp\"

/************ CONSTRUCTOR ***************/

$1::$1()
{
	std::cout << \"$1 default constructor called\" << std::endl;
	return;
}

$1::$1(const $1 &copy)
{
	std::cout << \"$1 copy constructor called\" << std::endl;
	*this = copy;
	return;
}

/************ DESTRUCTOR ***************/

$1::~$1()
{
	std::cout << \"$1 destructor called\" << std::endl;
	return;
}

/************ OPERATOR ***************/

$1 &$1::operator =(const $1 &copy)
{
	if ( this != &copy )
	{
		this->_value = copy.getValue();
	}
	std::cout << \"Assignation operator called\" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, $1 const &copy )
{
	//o << i.getValue();
	return o;
}
/************ METHODS ***************/" > "$1.cpp"

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
		~$1();

		$1 &operator =(const $1 &copy);
};
std::ostream &operator<<( std::ostream & o, $1 &copy );

#endif" >  "$1.hpp"
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


