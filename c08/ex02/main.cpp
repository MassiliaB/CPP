#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

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
	return 0;
}