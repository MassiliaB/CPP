# include "Serialization.hpp"



void	init_struct(Data *convert)
{
	convert->num = 0;
	convert->numf = 0;
	convert->numd = 0;
	convert->scalar = false;
	convert->c = 0;
}

int main(int ac, char **av)
{
	Data *data = new Data;

	init_struct(data);
	return (0);
}