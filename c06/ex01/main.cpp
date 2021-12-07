# include "Serialization.hpp"

void	Data::print( void )
{
	std::cout << "my data's nb " ;
	std::cout << this->_nb ;
	std::cout << "my data's float " ;
	std::cout << this->_fnb ;
	std::cout << ", my data's string " ;
	std::cout << this->_str ;
	std::cout << "." << std::endl;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>( ptr );
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>( raw );
}

int main(void)
{
	Data		data;
	uintptr_t	data_ptr;

	data._nb = 9;
	data._fnb = 13.4;
	data._str = "Serialize me";

	std::cout << "Before everithing: \n";
	data.print();

	data_ptr = serialize(&data);
	std::cout << "After serialization: " << data_ptr << std::endl;

	Data		*data2 = deserialize(data_ptr);
	std::cout << "After deserialization: \n";
	data2->print();

	return (0);
}