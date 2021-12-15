# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	int n = 2;
	Animal *array[n];
	array[0] = new Dog();
	array[1] = new Cat();

	array[0]->makeSound();
	array[1]->makeSound();

	array[0]->getBrain()->setIdeas("[Whouf this is my idea]", 2);
	array[1]->getBrain()->setIdeas("[Miaou this is my idea]", 2);

	std::cout << array[0]->getType() << " : ";
	array[0]->getBrain()->getIdeas(2);
	std::cout << array[1]->getType() << " : ";
	array[1]->getBrain()->getIdeas(2);
	for (int i(0); i < n ; i++)
		delete array[i];
	return (0);
}