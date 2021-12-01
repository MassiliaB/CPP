#include "Replace.hpp"

Replace::Replace(void)
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

void	Replace::replacing(std::string filename, std::string s1, std::string s2)
{
	std::ofstream	file(filename);
	std::string		ligne;

	if (!file)
		std::cerr << "failed to open " << filename << std::endl;
	if (s1 == NULL || s2 == NULL)
		std::cerr << "Error: empty string." << std::endl;

	while (std::getline(file, ligne))
	{
		for (int i = 0; ligne[i]; i++)
		{
			while (ligne[i].compare() )
				i++;
			if (s1.compare(s2) == 0))
				break;
		}

	}
	file.close();
}