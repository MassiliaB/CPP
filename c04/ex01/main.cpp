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

	for (int i(0); i < n ; i++)
		delete array[i];
	return (0);
}