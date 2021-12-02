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

	if (!destFile)
		std::cerr << "failed to create " << nameReplace << std::endl;
	if (s1 == "" || s2 == "")
		std::cerr << "Error: empty string." << std::endl;

	while (std::getline(srcFile, ligne))
	{
		int i = 0; 
		while (ligne[i])
		{
			if (ligne.compare(i, s1.size(), s1) == 0)
			{
				if (s1.compare(s2) == 0)
					break;
				else
				{
					
					for (int j = 0; s2[j]; j++)
					{
						ligne[i] = s2[j];
						i++;
					}
				}
			}
			i++;
		}
		destFile << ligne << std::endl ;
	}
	destFile.close();
	srcFile.close();
}