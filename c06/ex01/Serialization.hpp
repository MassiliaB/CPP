# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <string.h>

struct Data
{
	unsigned int	_data;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
