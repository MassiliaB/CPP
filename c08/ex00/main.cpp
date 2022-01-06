# include "easyfind.hpp"

int main(void)
{
	std::vector<int>	tab(5,4);
	tab.push_back(6);

	std::cout << "my vector tab: ";
	for(int i(0); i < 6; ++i)
		std::cout << "[" << tab[i] << "]";
	std::cout << "\n";
	std::vector<int>::iterator it;
	std::cout << "Trying to find " << 6 << std::endl;
	it = ::easyfind(tab, 6);
	std::cout << "Iterator = "<< *it << std::endl;
	try
	{
		std::vector<int>::iterator it2;
		std::cout << "Trying to find " << 9 << std::endl;
		it2 = ::easyfind<std::vector<int> >(tab, 9);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}