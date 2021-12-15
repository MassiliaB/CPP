# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    {
        const Animal* base = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
    
        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
    
        dog->makeSound();
        cat->makeSound();
        base->makeSound();
        delete dog;
        delete cat;
        delete base;
    }
    {
        const WrongAnimal* wrong = new WrongAnimal();
        const WrongAnimal* wrongcat = new WrongCat();
        
        std::cout << wrong->getType() << " " << std::endl;
        std::cout << wrongcat->getType() << " " << std::endl;

        wrong->makeSound();
        wrongcat->makeSound();
        delete wrongcat;
        delete wrong;
    }
    return (0);
}