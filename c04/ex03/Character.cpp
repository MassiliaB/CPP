#include "Character.hpp"

Character::Character(): _name("Best character")
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return;
}

Character::Character(const Character &copy)
{
	*this = copy;
	return;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i(0); i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
	return;
}

Character &Character::operator =(const Character &copy)
{
	if ( this != &copy )
	{
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++)
		{
			if (!copy._materia[i])
				this->_materia[i] = NULL;
			else
				this->_materia[i] = copy._materia[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0 || !this->_materia[idx])
	{
		std::cout << "* Can't use an unexistant [" << idx << "] materia *" << std::endl;
		return;
	}
	this->_materia[idx]->use(target);
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0 || !this->_materia[idx])
	{
		std::cout << "Can't unequip an unexistant materia" << std::endl;
		return;
	}
	_materia[idx] = 0;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	for (; i < 4 && this->_materia[i] ; i++)
		;
	if (this->_materia[i] == NULL)
		this->_materia[i] = m;
}
