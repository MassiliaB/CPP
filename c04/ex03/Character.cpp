#include "Character.hpp"

Character::Character(): _name("Best character")
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return;
}

Character::Character(const Character &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
			delete _materia[i];
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
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}


void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || !_materia[idx])
		return;
	_materia[idx]->use(target);
}

void Character::unequip(int idx)
{
	if (idx > 3 || !_materia[idx])
		return;
	delete _materia[idx];
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
			_materia[i] = m;
	}
}
