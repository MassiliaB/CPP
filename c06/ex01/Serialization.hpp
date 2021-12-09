#ifndef SERIALIZATION_H
#define SERIALIZATION_H

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

struct Data
{
	unsigned int		_nb;
	float				_fnb;
	std::string			_str;
	void		print( void );
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif