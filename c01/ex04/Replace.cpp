#include "Replace.hpp"

Replace::Replace(void)
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

void	Replace::replacing(std::string s1, std::string s2, const char *filename)
{
	unsigned long	j;
	std::fstream	output;

	j = 0;
	while (j < sizeof(s1))
	{
		s1[j] = s2[j];
		j++;
	}
	s1[j++] = '\0';
	while (j < sizeof(s2))
	{
		s1[j] = '\0';
		j++;
	}
	output.open(filename, std::ios_base::out);
	if (!output.is_open())
		std::cerr << "failed to open " << filename << std::endl;
	else
		output << s1 << std::endl;

}