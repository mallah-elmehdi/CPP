#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int  main()
{
	std::cout << "***********************" << std::endl;
	{
		Animal animal1;
		std::cout << animal1.getType() << std::endl;
		animal1.makeSound();
	}
	Animal *animal2 = new Animal();
	std::cout << animal2->getType() << std::endl;
	animal2->makeSound();
	delete animal2;
	std::cout << "***********************" << std::endl;
	{
		Cat cat1;
		Dog dog1;
		std::cout << cat1.getType() << std::endl;
		std::cout << dog1.getType() << std::endl;
		cat1.makeSound();
		dog1.makeSound();
	}
	Cat *cat2 = new Cat();
	Dog *dog2 = new Dog();
	std::cout << cat2->getType() << std::endl;
	std::cout << dog2->getType() << std::endl;
	cat2->makeSound();
	dog2->makeSound();
	delete cat2;
	delete dog2;
	std::cout << "***********************" << std::endl;
	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << animal->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	wrong_cat->makeSound();
	delete cat;
	delete dog;
	delete animal;
	delete wrong_cat;
}