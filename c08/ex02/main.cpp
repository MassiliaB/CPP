#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "MY MUTENT STACK" << std::endl;
	std::cout << "Push 5 & 17" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "\x1B[31m" << "What's on top ? " << "\033[0m" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "\x1B[31m" << "Size of the stack: " << "\033[0m" << mstack.size() << std::endl;
	std::cout << "\x1B[31m" << "Pushing 3, 5, 737, 0" << "\033[0m" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<std::string> smstack;

	std::cout << "MY MUTENT STACK" << std::endl;
	std::cout << "Push 5 & 17" << std::endl;
	smstack.push("GAGA");
	smstack.push("LOLA");
	std::cout << "\x1B[31m" << "Whats on top ? " << "\033[0m" << smstack.top() << std::endl;
	smstack.pop();
	std::cout << "\x1B[31m" << "Size of the stack: " << "\033[0m" << smstack.size() << std::endl;
	std::cout << "\x1B[31m" << "Pushing GAGA, GIGA, SAGA, MOGA, DIGA" << "\033[0m" << std::endl;
	smstack.push("GIGA");
	smstack.push("SAGA");
	smstack.push("MOGA");
	smstack.push("DIGA");

	MutantStack<std::string>::iterator it1 = smstack.begin();
	MutantStack<std::string>::iterator ite1 = smstack.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	return 0;
}