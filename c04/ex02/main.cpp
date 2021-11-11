# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	Animal *array = new Dog;
	Animal *array2 = new Cat;

	array->makeSound();
	array2->makeSound();

	delete array;
	delete array2;


	return (0);
}
