# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
/*	const Animal* j = new Dog();
	const Animal* i = new Cat();
*/
	 Animal *array[2];
	array[0] = new Dog;
	array[0]->makeSound();
	array[1] = new Cat;
	array[1]->makeSound();

/*	delete j;//should not create a leak
	delete i;*/

	delete array[1];
	delete array[0];
	return (0);
}