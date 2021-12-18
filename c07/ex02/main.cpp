# include "Array.hpp"

int	main()
{
	Array<int> tab(8);
	std::cout << "Creating a tab of " << tab.size() << " elements" << std::endl;

	for (unsigned int i = 0; i < tab.size(); i++)
		tab[i] = i + 1;
	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << "[" << tab[i] << "]";
	std::cout << std::endl;
	
	Array<char> tab2(3);
	char arr[3] = {'a', 'b', 'c'};
	std::cout << "Creating a tab of " << tab2.size() << " elements" << std::endl;

	for (unsigned int i = 0; i < tab2.size(); i++)
		tab2[i] = arr[i];
	for (unsigned int i = 0; i < tab2.size(); i++)
		std::cout << "[" << tab2[i] << "]";
	std::cout << std::endl;

	try{
		std::cout << "Accessing element of my second array " << std::endl;
		for (unsigned int i = 0; i < tab2.size() + 2; i++)
			std::cout << "[" << tab2[i] << "]";
	}
	catch(std::exception &e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	return (0);
}