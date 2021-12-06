#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int  main()
{
	//const Animal animal;
	//const Dog dog;
	//const Cat cat;
	//const WrongAnimal wrong_animal;
	//const WrongCat wrong_cat;
	//std::cout << animal.getType() << std::endl;
	//std::cout << dog.getType() << std::endl;
	//std::cout << cat.getType() << std::endl;
	//std::cout << wrong_animal.getType() << std::endl;
	//std::cout << wrong_cat.getType() << std::endl;
	//animal.makeSound();
	//cat.makeSound();
	//dog.makeSound();
	//wrong_animal.makeSound();
	//wrong_cat.makeSound();
	// --------------------------------
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongCat* good_wrong_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;
	std::cout << good_wrong_cat->getType() << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	wrong_cat->makeSound();
	good_wrong_cat->makeSound();
	std::cout << std::endl;
	
	delete cat;
	delete dog;
	delete animal;
	delete wrong_cat;
	delete good_wrong_cat;
}