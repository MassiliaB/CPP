# include "easyfind.hpp"

int main(void)
{
	std::vector<int> tab(5,4);
	tab.pop_back();
	tab.push_back(6);
	std::vector<int>::iterator it;

	std::cout << "tab: ";
	for(int i(0); tab[i]; ++i)
		std::cout << "[" << tab[i] << "]";
	std::cout << "\n";
	try
	{
		std::cout << "trying to find " << 5 << std::endl;
		it = ::easyfind(tab, 5);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}