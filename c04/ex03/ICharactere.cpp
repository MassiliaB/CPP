#include "ICharactere.hpp"

ICharactere::ICharactere()
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ICharactere::ICharactere(const ICharactere &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

ICharactere::~ICharactere()
{
	std::cout << "Destructor called" << std::endl;
	delete materia;
	return;
}

ICharactere &ICharactere::operator =(const ICharactere &copy)
{
	if ( this != &copy )
	{
		this->_value = copy.getValue();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream &operator<<( std::ostream & o, ICharactere const &copy )
{
	//o << i.getValue();
	return o;
}

void ICharactere::equip(AMateria* m)
{
	m[0]->;
	m[1]->;
	m[2]->;
	m[3]->;
}

void ICharactere::unequip(AMateria* m)
{
	m[0]->;
	m[1]->;
	m[2]->;
	m[3]->;
}

void use(int idx, ICharacter& target)
{
	target[idx]

}
