#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string.h>

class Replace
{
	public:
		Replace(void);
		~Replace(void);

		void	replacing(std::string filename, std::string s1, std::string s2);
};

#endif