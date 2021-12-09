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
	std::ifstream	srcFile(filename.c_str());

	std::string		nameReplace = filename + ".replace";
	std::ofstream	destFile(nameReplace.c_str(), std::ios::out);
	std::string		ligne;

	if (!srcFile)
		std::cout << "failed to open " << filename << std::endl;
	if (!destFile)
		std::cout << "failed to create " << nameReplace << std::endl;
	while (std::getline(srcFile, ligne))
	{
		int i = 0; 
		while (ligne[i])
		{
			if (ligne.compare(i, s1.size(), s1) == 0)
			{
				if (s1.compare(s2) == 0)
					break ;
				ligne.erase(i, s1.size());
				ligne.insert(i, s2);
			}
			i++;
		}
		destFile << ligne ;
		if (!srcFile.eof())
			destFile << std::endl ;
	}
	destFile.close();
	srcFile.close();
}